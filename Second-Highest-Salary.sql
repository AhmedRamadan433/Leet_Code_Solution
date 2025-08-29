# Write your MySQL query statement below
with test as ( select distinct salary from Employee  order by salary desc limit 2)

select 
case 
WHEN COUNT(distinct salary) > 1 THEN MIN(salary)
else null end as SecondHighestSalary 
from test
 ;