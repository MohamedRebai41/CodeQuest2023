# Problem A - Stolen necklace

The number of potential thieves is the number of persons where there is no logical argument to be made to prove they are innocent

The key observation in this problem is that there will be a transition from a present necklace to an absent one **exactly one time** because the necklace was stolen only once, and no one can lie other than the thief.

Knowing this we can conclude that the people we can suspect represent a **substring** of the input string.

So, we need to find where (in the string) the crime was commited. Since we can also encounter "?", we find the index of the **leftmost** 0 (in case of absence, we take n) and mark it as f0, and the index of the **rightmost** 1 (in case of absence, we take -1) and mark it as l1.


**Solution**
The number of indices between them (inclusive), because only one of them could be the thief . *f0 - l1 + 1*

* In fact, the thief cannot be to the left of l1, since the person of index l1 would then be lying which leads to a contradiction 
* Similarly, the thief cannot be to the right of f0, since the person of index f0 would then be lying which leads to a contradiction
* The people between l1 and f0 are '?' which means that the real transition happened somewhere in that substring (inclusive) which means that we can suspect any one of them
