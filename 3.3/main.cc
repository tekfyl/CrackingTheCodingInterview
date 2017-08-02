We know that push() should behave identically to a single stack, which means that we need push() to call push on the last stack. We have to be a bit careful here though: if the last stack is at capacity, we need to create a new stack

What should pop() do? It should behave similarly to push(), in that it should operate on the last stack. If the last stack is empty (after popping), then we should remove it from the list of stacks.

What about the follow up question? This is a bit trickier to implement, but essentially we should imagine a “rollover” system. If we pop an element from stack 1, we need to remove the bottom of stack 2 and push it onto stack 1. We then need to rollover from stack 3 to stack 2, stack 4 to stack 3, etc.
