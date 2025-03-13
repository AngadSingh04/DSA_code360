select
    x,
    y,
    z,
    case 
        when (x+y > z) and (y+z > x) and (z+x > y) THEN 'Yes'
        ELSE 'No'
    END as triangle
from triangle
