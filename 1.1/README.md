### Gold Coins 101:

Nothing much to explain. Just check whether Chef has more goals or not and decide how many coins he gets.

### Independence Day 101:

First sort the number of orange, white, red strips in descending order and call them a, b, c.
First arrange "a" stripes and in the gaps we place the remaining b+c stripes. If b+c < a-1 then we will always have some gap that is unfilled so we will get adjacent stripes.
If not then it is always possible to arrange the stripes without adjacent stripes getting the same colour.
First fill the gaps between the "a" stripes with the "b" stripes. Now we essentially have (a+b) stripes and we need to fill c stripes of a different colour in the gaps.
Clearly c will be less than the number of gaps so we are done.

### Truth Teller and Liars 101:
**Claim**: If among the X people that we choose, less than or equal to half the people are truth tellers then we won't be able to decide the path with certainty.
**Proof**:

Suppose X is even and the correct path is say, left. All the truth tellers will say left. Now there is a chance that the remaining people answer in such a way that exactly X/2 people say right and exactly X/2 say left. Now we have no way to decide which is correct.

Suppose X is odd and the correct path is left. All the truth tellers will say left. Now there is a chance that the remaining people answer in such a way that floor(X/2) people say left and ceil(X/2) people say right.
It is also possible that floor(x/2) people say right and ceil(X/2) people say left.
So we again have no way to decide which is correct.

Now with this claim we can prove that for N <= M we can never find an appropriate X. Because for any choice of X it is possible that among the people we choose, less than half are truth tellers.

Now for N > M, we can choose X = 2M+1. There can be at most M non-truth tellers among these people. So we are guaranteed to have more truth tellers than non-truth tellers. This in turn means it is guaranteed that the majority of people will answer the correct path.

### Non-Primes 101:
If there are >=2 even numbers in our array then we can simply add any 2 of them and get a non prime number. 
Similarly if there are >=2 odd numbers in the array then we can add any 2 of them and get a non prime number as long as not all of them are 1.
The only remaining cases are when there are <= 1 even numbers and at least 1 odd number. 

If all the odd numbers in the array are 1, then we just need to check whether the even number + 1 is prime.
If not, then the only case that remains is when we have 1 odd and 1 even number. We just add them and check whether the sum is prime.
