
-- VHDL Instantiation Created from source file Avalon_Slave.vhd -- 23:54:01 01/09/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Avalon_Slave
	PORT(
		DONE : IN std_logic;
		CSI_CLOCK_CLK : IN std_logic;
		CSI_CLOCK_RESET_N : IN std_logic;
		AVS_AVALONSLAVE_READ : IN std_logic;
		AVS_AVALONSLAVE_WRITE : IN std_logic;
		AVS_AVALONSLAVE_ADDRESS : IN std_logic_vector(1 downto 0);
		AVS_AVALONSLAVE_WRITEDATA : IN std_logic_vector(15 downto 0);          
		GO : OUT std_logic;
		AVS_AVALONSLAVE_READDATA : OUT std_logic_vector(15 downto 0);
		INPUT_ADDRESS_OFFSET_OUT : OUT std_logic_vector(15 downto 0);
		OUTPUT_ADDRESS_OFFSET_OUT : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_Avalon_Slave: Avalon_Slave PORT MAP(
		GO => ,
		DONE => ,
		CSI_CLOCK_CLK => ,
		CSI_CLOCK_RESET_N => ,
		AVS_AVALONSLAVE_READ => ,
		AVS_AVALONSLAVE_WRITE => ,
		AVS_AVALONSLAVE_ADDRESS => ,
		AVS_AVALONSLAVE_READDATA => ,
		AVS_AVALONSLAVE_WRITEDATA => ,
		INPUT_ADDRESS_OFFSET_OUT => ,
		OUTPUT_ADDRESS_OFFSET_OUT => 
	);


