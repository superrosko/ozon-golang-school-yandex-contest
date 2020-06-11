SELECT g.id,
       g.name
FROM goods AS g
         LEFT JOIN tags_goods tg on g.id = tg.goods_id
GROUP BY g.id, g.name
HAVING COUNT(tg.tag_id) = (SELECT COUNT(id) FROM tags);