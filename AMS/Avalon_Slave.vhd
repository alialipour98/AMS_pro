library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Avalon_Slave is

	Generic
	(
		AVS_AVALONSLAVE_DATA_WIDTH			:	integer	:= 16;
		AVS_AVALONSLAVE_ADDRESS_WIDTH		:	integer	:= 2
	);

	PORT
	(
		GO										:	OUT	STD_LOGIC;
		DONE									:	IN		STD_LOGIC;

		CSI_CLOCK_CLK						:	IN		STD_LOGIC;
		CSI_CLOCK_RESET_N					:	IN		STD_LOGIC;
		AVS_AVALONSLAVE_READ				:	IN		STD_LOGIC;
		AVS_AVALONSLAVE_WRITE			:	IN		STD_LOGIC;
		
		AVS_AVALONSLAVE_ADDRESS			:	IN		unsigned(AVS_AVALONSLAVE_ADDRESS_WIDTH-1	DOWNTO 0);
		AVS_AVALONSLAVE_READDATA		:	OUT	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1		DOWNTO 0);
		AVS_AVALONSLAVE_WRITEDATA		:	IN		unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1		DOWNTO 0);
		
		INPUT_ADDRESS_OFFSET_OUT		:	OUT	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 		DOWNTO 0);
		OUTPUT_ADDRESS_OFFSET_OUT		:	OUT	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 		DOWNTO 0)
	);

end Avalon_Slave;

architecture Behavioral of Avalon_Slave is

	Signal CONTROL_REGISTER				:	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 DOWNTO 0)	:=	(others=>'0');
	Signal INPUT_ADDRESS_OFFSET		:	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 DOWNTO 0)	:=	(others=>'0');
	Signal OUTPUT_ADDRESS_OFFSET		:	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 DOWNTO 0)	:=	(others=>'0');
	Signal readData						:	unsigned(AVS_AVALONSLAVE_DATA_WIDTH-1 DOWNTO 0)	:=	(others=>'0');

begin

	GO									<=	CONTROL_REGISTER(0);

	AVS_AVALONSLAVE_READDATA	<=	readData;

	INPUT_ADDRESS_OFFSET_OUT	<=	INPUT_ADDRESS_OFFSET;

	OUTPUT_ADDRESS_OFFSET_OUT	<=	OUTPUT_ADDRESS_OFFSET;
-------------------------------------------------------------------------------------------------			
	Process(CSI_CLOCK_CLK)
	begin
	
		if rising_edge(CSI_CLOCK_CLK) then
-------------------------------------------------------------------------------------------------			
			CONTROL_REGISTER(1)			<=	DONE;
			if(CSI_CLOCK_RESET_N = '0') then
				CONTROL_REGISTER			<=	(others=>'0');
				INPUT_ADDRESS_OFFSET		<=	(others=>'0');
				OUTPUT_ADDRESS_OFFSET	<=	(others=>'0');
			end if;
-------------------------------------------------------------------------------------------------			
			if (AVS_AVALONSLAVE_WRITE = '1') then
				case to_integer(AVS_AVALONSLAVE_ADDRESS) is
					when 0	=>
						CONTROL_REGISTER			<=	AVS_AVALONSLAVE_WRITEDATA;
					when 1	=>
						INPUT_ADDRESS_OFFSET		<=	AVS_AVALONSLAVE_WRITEDATA;
					when 2	=>
						OUTPUT_ADDRESS_OFFSET	<=	AVS_AVALONSLAVE_WRITEDATA;
					when others														=>
						CONTROL_REGISTER				<=	CONTROL_REGISTER;
						INPUT_ADDRESS_OFFSET			<=	INPUT_ADDRESS_OFFSET ;
						OUTPUT_ADDRESS_OFFSET		<=	OUTPUT_ADDRESS_OFFSET;
				end case;
			end if;
-------------------------------------------------------------------------------------------------
			if (AVS_AVALONSLAVE_READ = '1') then
				case to_integer(AVS_AVALONSLAVE_ADDRESS) is
					when 0	=>
						readData	<=	CONTROL_REGISTER;
					when 1	=>
						readData	<=	INPUT_ADDRESS_OFFSET;
					when 2	=>
						readData	<=	OUTPUT_ADDRESS_OFFSET;
					when others														=>
						CONTROL_REGISTER				<=	CONTROL_REGISTER;
						INPUT_ADDRESS_OFFSET			<=	INPUT_ADDRESS_OFFSET ;
						OUTPUT_ADDRESS_OFFSET		<=	OUTPUT_ADDRESS_OFFSET;
				end case;
			end if;
-------------------------------------------------------------------------------------------------
		end if;
	
	end process;

end Behavioral;

