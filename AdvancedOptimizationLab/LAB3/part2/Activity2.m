f1 = [3; 5;-2]; 
x0 = [0; 0; 0];

% f1(x0)

A = [ 1, 1, -2; 3, -5, 1];
b = [5;18]; 

Aeq = [-3, -2 , -1]; 
beq = 4; 

lb = [0; 0; 0]; 
ub = []; 

options = optimset('Display', 'iter'); 
[ x_opt, fval] = linprog(f1,A,b,Aeq, beq,lb,ub,options); 

disp('Optimal solution:')
disp(x_opt)
disp('Optimal value:')
disp(fval) 