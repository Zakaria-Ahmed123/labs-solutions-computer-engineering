f1 = [2;3];

x0 = [1; 1];


A = [ -1, 0; 1, 0; 0,1; -1,-1; -2,1;2,3];
b = [-4;20;64;-12;0;80]; 

Aeq = []; 
beq = []; 

lb = []; 
ub = []; 

options = optimset('Display', 'iter'); 
[ x_opt, fval] = linprog(f1,A,b,Aeq,beq,lb,ub,options);

disp('Optimal solution:')
disp(x_opt)
disp('Optimal value:')
disp(fval)