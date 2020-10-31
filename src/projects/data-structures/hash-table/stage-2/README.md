# Stage 2: Hash Table

In `stage2` we handle collisions. Collisions happen when a new key is mapped to the same location as another one.

For example:
```
hash('ana') =>5
hash('cal') =>5
```

How do we handle this? 

1: open addressing / linear probing
- keep everything in table. if 1st location is full, iterate over the hash_table and find an open spot. You can use the hasn_fn again or linear probing.

2: external chaining
- when a collision occurs at a particular location, at it to the chain.
- each location, essentiall becomes the head of a linked list.
