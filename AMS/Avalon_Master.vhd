library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Avalon_Master is

	Generic
	(
		AVM_AVALONMASTER_DATA_WIDTH 		:	integer	:=	16;
		AVM_AVALONMASTER_ADDRESS_WIDTH 	:	integer	:=	16
	);

	PORT
	(
		ReadEn								:	IN		STD_LOGIC;
		WriteEn								:	IN		STD_LOGIC;
		CSI_CLOCK_CLK						:	IN		STD_LOGIC;
		CSI_CLOCK_RESET_N					:	IN		STD_LOGIC;
		AVM_AVALONMASTER_READ			:	OUT	STD_LOGIC;
		AVM_AVALONMASTER_WRITE			:	OUT	STD_LOGIC;
		AVM_AVALONMASTER_WAITREQUEST	:	IN		STD_LOGIC;
		AVM_AVALONMASTER_ADDRESS		:	OUT	unsigned(AVM_AVALONMASTER_ADDRESS_WIDTH-1 DOWNTO 0);
		AVM_AVALONMASTER_READDATA		:	IN		unsigned(AVM_AVALONMASTER_DATA_WIDTH-1		DOWNTO 0);
		AVM_AVALONMASTER_WRITEDATA		:	OUT	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1		DOWNTO 0);

		dinAddr								:	IN		unsigned(15	DOWNTO 0);
		doutAddr								:	IN		unsigned(15	DOWNTO 0);
		din									:	OUT	unsigned(7	DOWNTO 0);
		dout									:	IN		unsigned(7	DOWNTO 0);
		waitrequest							:	OUT	STD_LOGIC
	);

end Avalon_Master;

architecture Behavioral of Avalon_Master is

	Signal dinAddr_Int	:	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1	DOWNTO 0)	:=	(others=>'0');
	Signal doutAddr_Int	:	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1	DOWNTO 0)	:=	(others=>'0');
	Signal din_Int			:	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1	DOWNTO 0)	:=	(others=>'0');
	Signal dout_Int		:	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1	DOWNTO 0)	:=	(others=>'0');

begin

	din										<=	AVM_AVALONMASTER_READDATA(15	DOWNTO 8);

	AVM_AVALONMASTER_WRITEDATA			<=	resize(dout, AVM_AVALONMASTER_DATA_WIDTH);

	dinAddr_Int(15		DOWNTO 0)		<=	dinAddr;
	doutAddr_Int(15	DOWNTO 0)		<=	doutAddr;

	waitrequest								<=	AVM_AVALONMASTER_WAITREQUEST;

	process(CSI_CLOCK_CLK)
	begin

		if rising_edge(CSI_CLOCK_CLK) then

			if (CSI_CLOCK_RESET_N = '0') then
				AVM_AVALONMASTER_READ	<=	'0';
				AVM_AVALONMASTER_WRITE	<=	'0';
			else
				AVM_AVALONMASTER_READ	<=	ReadEn;
				AVM_AVALONMASTER_WRITE	<=	WriteEn;
			end if;

			if (ReadEn = '1') then
				AVM_AVALONMASTER_ADDRESS	<=	dinAddr_Int;
			elsif (WriteEn = '1') then
				AVM_AVALONMASTER_ADDRESS	<=	doutAddr_Int;
			end if;

		end if;

	end process;

end Behavioral;

