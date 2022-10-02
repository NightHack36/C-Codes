Here we have to get those two numbers such that their xor is maximum.
Therefore, its obvious that we will start iterating from the most significant bit of the numbers such that we get that maximum value.

So firstly, we have initialized our ans (maximum) to 0, ans have taken a mask which have values like  10000, 11000, 11100, 11110, 11111. Basically we are taking out numbers such that binary representation of number (from nums) only includes set bits(if any) from 31 till ith bit. For ex : 10000 & 10101 = 10000, 11000 & 10101 = 10000, 11100 & 10101 = 10100

The reason for this we want to check bit by bit what is the maximum value we can get, hence mask is just changing the numbers such that we have representation untill ith.
(Do it on paper, you'll understand) :)

Now the target, Logically we want our target as maximum as possible, for that i want my target's ith bit 1 and that's what i have done **(target = ans | (1 << i))** setting the ith bit of our ans.

Now here's some XOR magic. 
We have all the elements on out set. We want to find those two elements. *let's say a and b :* <br/>
So, 

```
a ^ b = target;
b = target ^ a (xoring a both sides)

```

Hence, so if i found an element "a" which while xoring with target will give me b (other number) (checking its count in the code). Then i can create my target.

and then i assigned it to the ans.

That's it.