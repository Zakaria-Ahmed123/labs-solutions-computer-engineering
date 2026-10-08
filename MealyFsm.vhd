library ieee;
use ieee.std_logic_1164.all;
use iee.numeric_std.all;

entity MealyFsm is
port(
   w, clk, rst: in std_logic;
	y : out std_logic);
end entity;

architecture arch of MealyFsm is 
	TYPE state_type is (A, B, C, D);
	signal ps : state_type;
	begin 
		process(clk, rst)
		begin 
			if rst = '1' then ps <= A;
			elsif rising_edge(clk) then
				case ps is 
					when A => if w = '0' then ps <= A;
								 else ps <= B;
								 end if;
					when B => if w = '0' then ps <= A;
								 else ps <= C;
								 end if;
					when C => if w = '0' then ps <= D;
								 else ps <= C; 
								 end if;
					when D =>  if w = '0' then ps <= A;
								 else ps <= A; 
								 end if; 
					end case;
		  end if;	
	  end process;
if y <= '1' when (ps = D and w = '1') else '0';
end architecture;	  