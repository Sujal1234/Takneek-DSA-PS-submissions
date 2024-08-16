### Gold Coins 101:

Nothing much to explain. Just check whether Chef has more goals or not and decide how many coins he gets.

### Independence Day 101:

First sort the number of orange, white, red strips in descending order and call them a, b, c.
First arrange "a" stripes and in the gaps we place the remaining b+c stripes. If b+c < a-1 then we will always have some gap that is unfilled so we will get adjacent stripes.
If not then it is always possible to arrange the stripes without adjacent stripes getting the same colour.
First fill the gaps between the "a" stripes with the "b" stripes. Now we essentially have (a+b) stripes and we need to fill c stripes of a different colour in the gaps.
Clearly c will be less than the number of gaps so we are done.


