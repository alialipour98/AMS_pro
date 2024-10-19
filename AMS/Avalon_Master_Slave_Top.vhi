
-- VHDL Instantiation Created from source file Avalon_Master_Slave_Top.vhd -- 00:17:16 01/10/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Avalon_Master_Slave_Top
	PORT(
		CSI_CLOCK_CLK : IN std_logic;
		CSI_CLOCK_RESET_N : IN std_logic;
		AVS_AVALONSLAVE_READ : IN std_logic;
		AVS_AVALONSLAVE_WRITE : IN std_logic;
		AVS_AVALONSLAVE_ADDRESS : IN std_logic_vector(1 downto 0);
		AVS_AVALONSLAVE_WRITEDATA : IN std_logic_vector(15 downto 0);
		AVM_AVALONMASTER_READDATA : IN std_logic_vector(15 downto 0);          
		AVS_AVALONSLAVE_READDATA : OUT std_logic_vector(15 downto 0);
		AVM_AVALONMASTER_ADDRESS : OUT std_logic_vector(15 downto 0);
		AVM_AVALONMASTER_WAITREQUEST : OUT std_logic;
		AVM_AVALONMASTER_READ : OUT std_logic;
		AVM_AVALONMASTER_WRITE : OUT std_logic;
		AVM_AVALONMASTER_WRITEDATA : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_Avalon_Master_Slave_Top: Avalon_Master_Slave_Top PORT MAP(
		CSI_CLOCK_CLK => ,
		CSI_CLOCK_RESET_N => ,
		AVS_AVALONSLAVE_READ => ,
		AVS_AVALONSLAVE_WRITE => ,
		AVS_AVALONSLAVE_ADDRESS => ,
		AVS_AVALONSLAVE_READDATA => ,
		AVS_AVALONSLAVE_WRITEDATA => ,
		AVM_AVALONMASTER_ADDRESS => ,
		AVM_AVALONMASTER_WAITREQUEST => ,
		AVM_AVALONMASTER_READ => ,
		AVM_AVALONMASTER_WRITE => ,
		AVM_AVALONMASTER_READDATA => ,
		AVM_AVALONMASTER_WRITEDATA => 
	);


