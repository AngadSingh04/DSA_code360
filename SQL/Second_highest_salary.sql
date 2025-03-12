with cte as (select
    id,
    salary,
    rank() over(order by salary) as salary_rank
from employee)
select
    salary
from cte
where salary_rank = 2;