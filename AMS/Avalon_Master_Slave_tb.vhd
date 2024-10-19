LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

use ieee.std_logic_textio.all;
use std.textio.all;

ENTITY Avalon_Master_Slave_tb IS
	GENERIC
	(
		Mem_Addr		:	integer	:=	16;
		Mem_Width	:	integer	:=	8
	);
END Avalon_Master_Slave_tb;
 
ARCHITECTURE behavior OF Avalon_Master_Slave_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Avalon_Master_Slave_Top
    PORT(
         CSI_CLOCK_CLK 						: IN  	std_logic;
         CSI_CLOCK_RESET_N 				: IN  	std_logic;
         AVS_AVALONSLAVE_READ 			: IN  	std_logic;
         AVS_AVALONSLAVE_WRITE 			: IN  	std_logic;
         AVS_AVALONSLAVE_ADDRESS 		: IN  	unsigned(1 downto 0);
         AVS_AVALONSLAVE_READDATA 		: OUT  	unsigned(15 downto 0);
         AVS_AVALONSLAVE_WRITEDATA 		: IN  	unsigned(15 downto 0);
         AVM_AVALONMASTER_ADDRESS 		: OUT  	unsigned(15 downto 0);
         AVM_AVALONMASTER_WAITREQUEST 	: IN  	std_logic;
         AVM_AVALONMASTER_READ 			: OUT  	std_logic;
         AVM_AVALONMASTER_WRITE 			: OUT  	std_logic;
         AVM_AVALONMASTER_READDATA 		: IN  	unsigned(15 downto 0);
         AVM_AVALONMASTER_WRITEDATA 	: OUT  	unsigned(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CSI_CLOCK_CLK 				: std_logic 				:= '0';
   signal CSI_CLOCK_RESET_N 			: std_logic 				:= '0';
   signal AVS_AVALONSLAVE_READ 		: std_logic 				:= '0';
   signal AVS_AVALONSLAVE_WRITE 		: std_logic 				:= '0';
   signal AVS_AVALONSLAVE_ADDRESS 	: unsigned(1  downto 0)	:= (others => '0');
   signal AVS_AVALONSLAVE_WRITEDATA : unsigned(15 downto 0) := (others => '0');
   signal AVM_AVALONMASTER_READDATA : unsigned(15 downto 0) := (others => '0');

 	--Outputs
   signal AVS_AVALONSLAVE_READDATA 		: unsigned(15 downto 0);
   signal AVM_AVALONMASTER_ADDRESS 		: unsigned(15 downto 0);
   signal AVM_AVALONMASTER_WAITREQUEST : std_logic;
   signal AVM_AVALONMASTER_READ 			: std_logic;
   signal AVM_AVALONMASTER_WRITE 		: std_logic;
   signal AVM_AVALONMASTER_WRITEDATA 	: unsigned(15 downto 0);

   -- Clock period definitions
   constant CSI_CLOCK_CLK_period 		: time := 10 ns;

-------------------------------------------------------------------------------------------------------------------------	
type ram_type is array (0 to 2**Mem_Addr-1) of std_logic_vector(Mem_Width-1 downto 0);

-- type ram_type is array (0 to ram_depth - 1) of std_logic_vector(ram_width - 1 downto 0);
-------------------------------------------------------------------------------------------------------------------------	
procedure hread(l: inout line; value: out std_logic_vector) is
  variable c : character;
  variable ok : boolean;
  variable i : integer := 0;
  variable hex_val : std_logic_vector(3 downto 0);
begin
  while i < value'high loop
    read(l, c);
   
    case c is
      when '0' => hex_val := "0000";
      when '1' => hex_val := "0001";
      when '2' => hex_val := "0010";
      when '3' => hex_val := "0011";
      when '4' => hex_val := "0100";
      when '5' => hex_val := "0101";
      when '6' => hex_val := "0110";
      when '7' => hex_val := "0111";
      when '8' => hex_val := "1000";
      when '9' => hex_val := "1001";
      when 'A' | 'a' => hex_val := "1010";
      when 'B' | 'b' => hex_val := "1011";
      when 'C' | 'c' => hex_val := "1100";
      when 'D' | 'd' => hex_val := "1101";
      when 'E' | 'e' => hex_val := "1110";
      when 'F' | 'f' => hex_val := "1111";
   
      when others =>
        hex_val := "XXXX";
        assert false report "Found non-hex character '" & c & "'";
    end case;
   
    value(value'high - i downto value'high - i - 3) := hex_val;
    i := i + 4;
  end loop;
end procedure;
-------------------------------------------------------------------------------------------------------------------------	
impure function init_ram_hex return ram_type is
  file text_file 			: text open read_mode is "C:\Users\User\Downloads\input images\in2.txt";
  variable text_line 	: line;
  variable ram_content 	: ram_type;
begin
  for i in 0 to 2**Mem_Addr-1 loop
    readline(text_file, text_line);
    hread(text_line, ram_content(i));
  end loop;
 
  return ram_content;
end function;
-------------------------------------------------------------------------------------------------------------------------
	signal ram_hex : ram_type := init_ram_hex;
------------------------------------------------------------------------------------------------------------------------- 

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Avalon_Master_Slave_Top PORT MAP (
          CSI_CLOCK_CLK 					=> CSI_CLOCK_CLK,
          CSI_CLOCK_RESET_N 				=> CSI_CLOCK_RESET_N,
          AVS_AVALONSLAVE_READ 			=> AVS_AVALONSLAVE_READ,
          AVS_AVALONSLAVE_WRITE 			=> AVS_AVALONSLAVE_WRITE,
          AVS_AVALONSLAVE_ADDRESS 		=> AVS_AVALONSLAVE_ADDRESS,
          AVS_AVALONSLAVE_READDATA 		=> AVS_AVALONSLAVE_READDATA,
          AVS_AVALONSLAVE_WRITEDATA 	=> AVS_AVALONSLAVE_WRITEDATA,
          AVM_AVALONMASTER_ADDRESS 		=> AVM_AVALONMASTER_ADDRESS,
          AVM_AVALONMASTER_WAITREQUEST => AVM_AVALONMASTER_WAITREQUEST,
          AVM_AVALONMASTER_READ 			=> AVM_AVALONMASTER_READ,
          AVM_AVALONMASTER_WRITE 		=> AVM_AVALONMASTER_WRITE,
          AVM_AVALONMASTER_READDATA 	=> AVM_AVALONMASTER_READDATA,
          AVM_AVALONMASTER_WRITEDATA 	=> AVM_AVALONMASTER_WRITEDATA
        );

   -- Clock process definitions
   CSI_CLOCK_CLK_process :process
   begin
		CSI_CLOCK_CLK <= '0';
		wait for CSI_CLOCK_CLK_period/2;
		CSI_CLOCK_CLK <= '1';
		wait for CSI_CLOCK_CLK_period/2;
   end process; 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CSI_CLOCK_CLK_period*10;

--	write in slave regisers 

	CSI_CLOCK_RESET_N					<=	'1';
	AVS_AVALONSLAVE_WRITE 			<= '1';
	AVS_AVALONSLAVE_READ				<=	'0';
	AVS_AVALONSLAVE_WRITEDATA 		<= to_unsigned(1, 16);
	AVS_AVALONSLAVE_ADDRESS 		<= to_unsigned(0,  2);
	AVM_AVALONMASTER_WAITREQUEST	<=	'0';
	wait for CSI_CLOCK_CLK_period*10;
	AVM_AVALONMASTER_WAITREQUEST	<=	'1';
	wait for CSI_CLOCK_CLK_period*10;
	AVM_AVALONMASTER_WAITREQUEST	<=	'0';
	
      wait;
   end process;
------------------------------------------------------------------------------------------------------
	process(CSI_CLOCK_CLK)
	begin
		
		if (AVM_AVALONMASTER_READ = '1') then
			AVM_AVALONMASTER_READDATA	<=	unsigned(ram_hex(to_integer(AVM_AVALONMASTER_ADDRESS)));
		end if;
		
	end process;
------------------------------------------------------------------------------------------------------
	write_Output_Vector: process(CSI_CLOCK_CLK)

		file 		output_text	: text open write_mode is "C:\Users\User\Downloads\input images\HDL_1.txt";
		variable LO1			: line;

		begin

			if rising_edge(CSI_CLOCK_CLK)then
				if (AVM_AVALONMASTER_WRITE = '1' and AVS_AVALONSLAVE_READDATA(1) = '0') then
					write(LO1, to_integer(AVM_AVALONMASTER_WRITEDATA));
					writeline(output_text , LO1);
				end if;

			end if;
			
		end process;
------------------------------------------------------------------------------------------------------
	
END;
