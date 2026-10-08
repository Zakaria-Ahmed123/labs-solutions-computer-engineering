library ieee;
use ieee.std_logic_1164.all; 
use ieee.numeric_std.all; 

entity MooreFsm is 
port(
	w, clk, rst: in std_logic; 
	y: out std_logic 
); 
end; 

architecture arch of MooreFsm is 
	type state_type is (A, B, C, D); 
	signal ps: state_type; 
begin 
	process(clk,rst) 
	begin 
		if rst = '1' then ps <= A; 
		else 
			if rising_edge(clk) then 
				case ps is 
					when A => if w = '0' then ps <= B;
										else then ps <= A; 
										end if; 

					when B => if w = '0' then ps <= B;
										else then ps <= C; 
										end if; 

					when C => if w = '0' then ps <= B;
										else then ps <= C; 
										end if; 

					when D => if w = '0' then ps <= B;
										else then ps <= A; 
										end if; 
				end case;
			end if; 	
		end if; 
	end process; 

	process(ps)
	begin 
		case ps is 
			when D => y <= '1';
			when others => y <= '0';
		end case; 
	end process; 