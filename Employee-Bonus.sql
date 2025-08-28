# Write your MySQL query statement below
select Employee.name as name ,b.bonus from Employee 
left join Bonus b
on Employee.empid =b.empid 

where b.bonus <1000 or b.bonus IS  NULL;