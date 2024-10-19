library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Avalon_Master_Slave_Top is
	Generic
	(
		AVS_AVALONSLAVE_DATA_WIDTH			:	integer	:= 16;
		AVS_AVALONSLAVE_ADDRESS_WIDTH		:	integer	:= 2;
		
		AVM_AVALONMASTER_DATA_WIDTH 		:	integer	:= 16;
		AVM_AVALONMASTER_ADDRESS_WIDTH	: 	integer	:=	16

	);
	PORT
	(
--		Slave Interface	PORTs
		CSI_CLOCK_CLK						:	IN		STD_LOGIC;
		CSI_CLOCK_RESET_N					:	IN		STD_LOGIC;
		AVS_AVALONSLAVE_READ				:	IN		STD_LOGIC;
		AVS_AVALONSLAVE_WRITE			:	IN		STD_LOGIC;
		
		AVS_AVALONSLAVE_ADDRESS			:	IN		unsigned(AVS_AVALONSLAVE_ADDRESS_WIDTH-1	DOWNTO 0);
		AVS_AVALONSLAVE_READDATA		:	OUT 	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1		DOWNTO 0);
		AVS_AVALONSLAVE_WRITEDATA		:	IN 	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1		DOWNTO 0);
--		Master Interface	PORTs
		AVM_AVALONMASTER_ADDRESS		:	OUT	unsigned(AVM_AVALONMASTER_ADDRESS_WIDTH-1 DOWNTO 0);
		AVM_AVALONMASTER_WAITREQUEST	:	IN		STD_LOGIC;
		AVM_AVALONMASTER_READ			:	OUT	STD_LOGIC;
		AVM_AVALONMASTER_WRITE			:	OUT	STD_LOGIC;
		AVM_AVALONMASTER_READDATA		:	IN		unsigned(AVM_AVALONMASTER_DATA_WIDTH-1		DOWNTO 0);
		AVM_AVALONMASTER_WRITEDATA		:	OUT	unsigned(AVM_AVALONMASTER_DATA_WIDTH-1		DOWNTO 0)
	);

end Avalon_Master_Slave_Top;

architecture Behavioral of Avalon_Master_Slave_Top is

	Signal Go_Wire							:	STD_LOGIC					:=	'0';
	Signal Done_Wire						:	STD_LOGIC					:=	'0';
	Signal ReadEn_Wire					:	STD_LOGIC					:=	'0';
	Signal WriteEn_Wire					:	STD_LOGIC					:=	'0';
	Signal waitrequest_wire				:	STD_LOGIC					:=	'0';

	Signal din_Wire						:	unsigned(7	DOWNTO 0)	:=	(others=>'0');
	Signal dout_Wire						:	unsigned(7	DOWNTO 0)	:=	(others=>'0');

	Signal offset_in_Wire				:	unsigned(15	DOWNTO 0)	:=	(others=>'0');
	Signal offset_out_Wire				:	unsigned(15	DOWNTO 0)	:=	(others=>'0');

	Signal dinAddr_Wire					:	unsigned(15	DOWNTO 0)	:=	(others=>'0');
	Signal doutAddr_Wire					:	unsigned(15 DOWNTO 0)	:=	(others=>'0');

begin

	Avalon_Master_Interface	: entity work.Avalon_Master PORT MAP(
		ReadEn 								=> ReadEn_Wire,
		WriteEn 								=> WriteEn_Wire,
		CSI_CLOCK_CLK 						=> CSI_CLOCK_CLK,
		CSI_CLOCK_RESET_N 				=> CSI_CLOCK_RESET_N,
		AVM_AVALONMASTER_READ 			=> AVM_AVALONMASTER_READ,
		AVM_AVALONMASTER_WRITE 			=> AVM_AVALONMASTER_WRITE,
		AVM_AVALONMASTER_WAITREQUEST 	=> AVM_AVALONMASTER_WAITREQUEST,
		AVM_AVALONMASTER_ADDRESS 		=> AVM_AVALONMASTER_ADDRESS,
		AVM_AVALONMASTER_READDATA 		=> AVM_AVALONMASTER_READDATA,
		AVM_AVALONMASTER_WRITEDATA 	=> AVM_AVALONMASTER_WRITEDATA,
		dinAddr 								=> dinAddr_Wire,
		doutAddr 							=> doutAddr_Wire,
		din 									=> din_Wire,
		dout 									=> dout_Wire,
		waitrequest							=>	waitrequest_wire

	);

	Avalon_Slave_Interface	: entity work.Avalon_Slave PORT MAP(
		GO 									=> Go_Wire,
		DONE 									=> Done_Wire,
		CSI_CLOCK_CLK 						=> CSI_CLOCK_CLK,
		CSI_CLOCK_RESET_N 				=> CSI_CLOCK_RESET_N,
		AVS_AVALONSLAVE_READ 			=> AVS_AVALONSLAVE_READ,
		AVS_AVALONSLAVE_WRITE 			=> AVS_AVALONSLAVE_WRITE,
		AVS_AVALONSLAVE_ADDRESS 		=> AVS_AVALONSLAVE_ADDRESS,
		AVS_AVALONSLAVE_READDATA 		=> AVS_AVALONSLAVE_READDATA,
		AVS_AVALONSLAVE_WRITEDATA 		=> AVS_AVALONSLAVE_WRITEDATA,
		INPUT_ADDRESS_OFFSET_OUT 		=> offset_in_Wire,
		OUTPUT_ADDRESS_OFFSET_OUT 		=> offset_out_Wire
	);

	Edge_Detection				: entity work.Controller PORT MAP(
		Clock 								=> CSI_CLOCK_CLK,
		rst 									=> CSI_CLOCK_RESET_N,
		go 									=> Go_Wire,
		readEn 								=> ReadEn_Wire,
		done 									=> Done_Wire,
		writeEn 								=> WriteEn_Wire,
		din 									=> din_Wire,
		dout 									=> dout_Wire,
		dinAddr 								=> dinAddr_Wire,
		doutAddr 							=> doutAddr_Wire,
		offset_in 							=> offset_in_Wire,
		offset_out 							=> offset_out_Wire,
		waitrequest							=>	waitrequest_wire
	);

end Behavioral;

