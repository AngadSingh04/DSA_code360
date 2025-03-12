select
    title,
    rating
from imdb
inner join genre
on genre.movie_id=imdb.movie_id
where genre.genre like 'C%' and title like '%2014%' and budget > 40000000;