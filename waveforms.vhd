library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity waveforms is 
port(
	clk, clk_slow, rst : in std_logic; 
	q :out unsigned(3 downto 0);
	y :out unsigned(2 downto 0));
end;

architecture arch of waveforms is 
	signal temp: unsigned(2 downto 0);
	signal state: unsigned(12 downto 0);  
begin 
	process(clk)
	begin
		if rising_edge(clk) then
			if state = 49999 then state <= (others => '0'); 
			else state <= state + 1; 
			end if;  
		end if; 
	end process; 

	clk_slow <= state(12); 

	process(clk_slow, rst)
	begin
		if rst = '1' then q <= "0000"; 
		else 
			if (rising_edge(clk_slow))
				q <= q + 1; 
			end if; 
		end if;  
	end process; 

	end process; 
	process(clk, q)
	begin 
		if rising_edge(clk_slow) then 
			case q is 
				when "0000" => temp <= "110"; 
				when "0001" => temp <= "100"; 
				when "0010" => temp <= "000"; 
				when "0011" => temp <= "001"; 
				when "0100" => temp <= "110"; 
				when "0101" => temp <= "110"; 
				when "0110" => temp <= "101"; 
				when "0111" => temp <= "010"; 
				when "1000" => temp <= "100"; 
				when "1001" => temp <= "100"; 
				when "1010" => temp <= "111"; 
				when "1011" => temp <= "101"; 
				when "1100" => temp <= "001"; 
				when "1101" => temp <= "010"; 
				when "1110" => temp <= "011"; 
				when "1111" => temp <= "001"; 
			end case; 
		end if; 
	end process; 
y <= temp; 
end architecture; 
