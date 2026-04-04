-- Write your query below
SELECT
    U.name,
    COALESCE(SUM(R.distance), 0) travelled_distance
FROM users AS U
LEFT JOIN rides AS R
ON U.id = R.user_id
GROUP BY U.name
ORDER BY travelled_distance DESC;
