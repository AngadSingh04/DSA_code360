select
    firstname,
    lastname,
    city,
    state
from person
left outer join address
on person.personid=address.personid;