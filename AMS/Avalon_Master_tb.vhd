LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Avalon_Master_tb IS
END Avalon_Master_tb;
 
ARCHITECTURE behavior OF Avalon_Master_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Avalon_Master
    PORT(
         ReadEn 								: IN  	std_logic;
         WriteEn 								: IN  	std_logic;
         CSI_CLOCK_CLK 						: IN  	std_logic;
         CSI_CLOCK_RESET_N 				: IN  	std_logic;
         AVM_AVALONMASTER_READ 			: OUT  	std_logic;
         AVM_AVALONMASTER_WRITE 			: OUT  	std_logic;
         AVM_AVALONMASTER_WAITREQUEST 	: OUT  	std_logic;
         AVM_AVALONMASTER_ADDRESS 		: OUT  	unsigned(15 downto 0);
         AVM_AVALONMASTER_READDATA 		: IN  	unsigned(15 downto 0);
         AVM_AVALONMASTER_WRITEDATA 	: OUT  	unsigned(15 downto 0);
         dinAddr 								: IN  	unsigned(15 downto 0);
         doutAddr 							: IN  	unsigned(15 downto 0);
         din 									: OUT  	unsigned(7 downto 0);
         dout 									: IN  	unsigned(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ReadEn 							: std_logic := '0';
   signal WriteEn 						: std_logic := '0';
   signal CSI_CLOCK_CLK 				: std_logic := '0';
   signal CSI_CLOCK_RESET_N 			: std_logic := '0';
   signal AVM_AVALONMASTER_READDATA : unsigned(15 downto 0) := (others => '0');
   signal dinAddr 						: unsigned(15 downto 0) := (others => '0');
   signal doutAddr 						: unsigned(15 downto 0) := (others => '0');
   signal dout 							: unsigned(7 downto 0) := (others => '0');

 	--Outputs
   signal AVM_AVALONMASTER_READ 			: std_logic;
   signal AVM_AVALONMASTER_WRITE 		: std_logic;
   signal AVM_AVALONMASTER_WAITREQUEST : std_logic;
   signal AVM_AVALONMASTER_ADDRESS 		: unsigned(15 downto 0);
   signal AVM_AVALONMASTER_WRITEDATA 	: unsigned(15 downto 0);
   signal din : unsigned(7 downto 0);

   -- Clock period definitions
   constant CSI_CLOCK_CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Avalon_Master PORT MAP (
          ReadEn 								=> ReadEn,
          WriteEn 							=> WriteEn,
          CSI_CLOCK_CLK 					=> CSI_CLOCK_CLK,
          CSI_CLOCK_RESET_N 				=> CSI_CLOCK_RESET_N,
          AVM_AVALONMASTER_READ 			=> AVM_AVALONMASTER_READ,
          AVM_AVALONMASTER_WRITE 		=> AVM_AVALONMASTER_WRITE,
          AVM_AVALONMASTER_WAITREQUEST => AVM_AVALONMASTER_WAITREQUEST,
          AVM_AVALONMASTER_ADDRESS 		=> AVM_AVALONMASTER_ADDRESS,
          AVM_AVALONMASTER_READDATA 	=> AVM_AVALONMASTER_READDATA,
          AVM_AVALONMASTER_WRITEDATA 	=> AVM_AVALONMASTER_WRITEDATA,
          dinAddr 							=> dinAddr,
          doutAddr 							=> doutAddr,
          din 									=> din,
          dout 								=> dout
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

      -- insert stimulus here 

      wait;
   end process;

END;
