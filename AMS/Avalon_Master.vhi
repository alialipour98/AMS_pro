
-- VHDL Instantiation Created from source file Avalon_Master.vhd -- 20:41:11 01/09/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Avalon_Master
	PORT(
		ReadEn : IN std_logic;
		WriteEn : IN std_logic;
		CSI_CLOCK_CLK : IN std_logic;
		CSI_CLOCK_RESET_N : IN std_logic;
		AVM_AVALONMASTER_READDATA : IN std_logic_vector(31 downto 0);
		dinAddr : IN std_logic_vector(15 downto 0);
		doutAddr : IN std_logic_vector(15 downto 0);
		dout : IN std_logic_vector(7 downto 0);          
		AVM_AVALONMASTER_READ : OUT std_logic;
		AVM_AVALONMASTER_WRITE : OUT std_logic;
		AVM_AVALONMASTER_WAITREQUEST : OUT std_logic;
		AVM_AVALONMASTER_ADDRESS : OUT std_logic_vector(31 downto 0);
		AVM_AVALONMASTER_WRITEDATA : OUT std_logic_vector(31 downto 0);
		din : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_Avalon_Master: Avalon_Master PORT MAP(
		ReadEn => ,
		WriteEn => ,
		CSI_CLOCK_CLK => ,
		CSI_CLOCK_RESET_N => ,
		AVM_AVALONMASTER_READ => ,
		AVM_AVALONMASTER_WRITE => ,
		AVM_AVALONMASTER_WAITREQUEST => ,
		AVM_AVALONMASTER_ADDRESS => ,
		AVM_AVALONMASTER_READDATA => ,
		AVM_AVALONMASTER_WRITEDATA => ,
		dinAddr => ,
		doutAddr => ,
		din => ,
		dout => 
	);


