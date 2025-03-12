with cte as (select 
    id,
    email,
    lag(email) over(order by email) as previous_email
from person)

select
    Email
from cte
where email = previous_email