A = 10; 
f1 = @(x) 3 * A + (x(1) ^ 2 - 30 * cos(2*pi*x(1))) + (x(2)^ 2 - 30 * cos(2*pi*x(2))) + (x(3)^ 2 - 30 * cos(2*pi*x(3)));
x0 = [-5, -5, -5];

options = optimset('Display', 'iter'); 
[x_opt, fval] = fminunc(f1, x0, options); 

disp('Optimal solution:'); 
disp(x_opt); 
disp('Optimal value:')
disp(fval); 