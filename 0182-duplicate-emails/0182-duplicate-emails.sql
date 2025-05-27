# Write your MySQL query statement below
-- select email 
-- from Person 
-- group by email
-- having count(email) > 1

select distinct p.email from Person p, Person p1
where p.id != p1.id and p.email = p1.email