SELECT distinct salary
as SecondHighestSalary
FROM Employee
ORDER BY salary DESC
LIMIT 1, 1  ;
