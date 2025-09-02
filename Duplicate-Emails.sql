# Write your MySQL query statement below
with  ans as ( select email,count(email) as cnt from Person
group by email 
having cnt >1)

select  email as Email from ans  ;