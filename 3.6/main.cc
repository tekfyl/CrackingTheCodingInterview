Sorting can be performed with one more stack. The idea is to pull an item from the original stack and push it on the other stack. If pushing this item would violate the sort order of the new stack, we need to remove enough items from it so that it’s possible to push the new item. Since the items we removed are on the original stack, we’re back where we started. The algorithm is O(N^2) and appears below.


