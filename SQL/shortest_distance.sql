with cte as (select
    abs(x-lead(x) over(order by x)) as diff
from point)
select
    MIN(diff) as shortest
from cte;