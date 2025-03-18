# Write your MySQL query statement below
select E.unique_id,name from Employees 
LEFT JOIN EmployeeUNI E on employees.id=E.id; 