Approach 1:
pg 52
 Divide the array in three equal parts and allow the individual stack to grow in that limited space (note: “[“ means inclusive, while “(“ means exclusive of the end point).
» for stack 1, we will use [0, n/3)
» for stack 2, we will use [n/3, 2n/3)
» for stack 3, we will use [2n/3, n)
This solution is based on the assumption that we do not have any extra information about the usage of space by individual stacks and that we can’t either modify or use any extra space. With these constraints, we are left with no other choice but to divide equally.

Approach 2:
In this approach, any stack can grow as long as there is any free space in the array.
We sequentially allocate space to the stacks and we link new blocks to the previous block. This means any new element in a stack keeps a pointer to the previous top element of that particular stack.
In this implementation, we face a problem of unused space. For example, if a stack deletes some of its elements, the deleted elements may not necessarily appear at the end of the ar- ray. So, in that case, we would not be able to use those newly freed spaces.
To overcome this de ciency, we can maintain a free list and the whole array space would be given initially to the free list. For every insertion, we would delete an entry from the free list. In case of deletion, we would simply add the index of the free cell to the free list.
In this implementation we would be able to have  exibility in terms of variable space utiliza- tion but we would need to increase the space complexity.
