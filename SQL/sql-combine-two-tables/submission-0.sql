-- Write your query below
SELECT
    P.first_name,
    P.last_name,
    A.city,
    A.state
FROM person AS P
LEFT JOIN address AS A
ON P.person_id = A.person_id