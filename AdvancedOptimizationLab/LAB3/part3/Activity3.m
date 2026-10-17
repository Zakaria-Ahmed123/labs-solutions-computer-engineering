f1 = @(x) 9.82*x(1)*x(2) + 2 * x(1);

x0 = [1; 1];

% f1(x0)
nonlcon = @(x) deal([2500/(pi * x(1)* x(2)) - 500,2500/(pi * x(1)* x(2)) - (x(1)^2 + x(2)^2)],[]); 

A = [ -1, -5; 3, 1; -1,0; 1,0];
b = [0;0;-0.02;18]; 

Aeq = []; 
beq = []; 

lb = []; 
ub = []; 

options = optimset('Display', 'iter'); 
[ x_opt, fval] = fmincon(f1,x0,A,b,Aeq, beq,lb,ub,nonlcon ,options);

disp('Optimal solution:')
disp(x_opt)
disp('Optimal value:')
disp(fval)