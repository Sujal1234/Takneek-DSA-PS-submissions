Since we want to calculate the kth smallest number for any k, this gives us a hint that we need to calculate every single number in the array within 2n operations. <br />
Intuitively we can guess that a pair OR and AND operations would be sufficient for each element. <br />
We can use the relation a + b = (a & b) + (a | b). <br />
This relation is easy to very for a single bit. Now with this we can easily form a system of 3 equations for a_1 + a_2, a_2 + a_3 and a_3 + a_1. <br />
This gives us the first three elements and we can't use any fewer equations as we would get more variables than equations. <br />
Once we calculate any 1 element we can easily calculate the other elements with 2 operations each. Because we can get the value of a_1 + a_i for each i and subtract the value of a_1. <br />
After getting all the elements we simply sort the array in ascending order and take the kth element.
