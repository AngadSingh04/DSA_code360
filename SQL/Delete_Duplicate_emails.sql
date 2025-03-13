delete
from person 
where id not in (
    select MIN(id)
    from person
    group by email
);

select * from person;