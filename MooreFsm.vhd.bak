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
			if rising_edge
