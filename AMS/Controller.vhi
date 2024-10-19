
-- VHDL Instantiation Created from source file Controller.vhd -- 00:02:13 01/10/2023
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Controller
	PORT(
		Clock : IN std_logic;
		rst : IN std_logic;
		go : IN std_logic;
		din : IN std_logic_vector(7 downto 0);
		offset_in : IN std_logic_vector(15 downto 0);
		offset_out : IN std_logic_vector(15 downto 0);          
		readEn : OUT std_logic;
		done : OUT std_logic;
		writeEn : OUT std_logic;
		dout : OUT std_logic_vector(7 downto 0);
		dinAddr : OUT std_logic_vector(15 downto 0);
		doutAddr : OUT std_logic_vector(15 downto 0)
		);
	END COMPONENT;

	Inst_Controller: Controller PORT MAP(
		Clock => ,
		rst => ,
		go => ,
		readEn => ,
		done => ,
		writeEn => ,
		din => ,
		dout => ,
		dinAddr => ,
		doutAddr => ,
		offset_in => ,
		offset_out => 
	);


