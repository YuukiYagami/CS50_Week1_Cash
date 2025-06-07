# CS50_Week1_Cash

Calculating Cash Change from Harvard CS50
_________________________________________

Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!)
The following C program implements and prints the minimum coins needed to make the given amount of change, in cents. 

Coin changes taken in consideration:
1c = Penny, 5c = Nickle, 10c = Dime, 25c = Quarter 

Manual Tested
________________
1. If you input -1, program prompt you again.
2. If you input 0, program output 0.
3. If you input 1, program output 1 (i.e., one penny).
4. If you input 4, program output 4 (i.e., four pennies).
5. If you input 5, program output 1 (i.e., one nickel).
6. If you input 24, program output 6 (i.e., two dimes and four pennies).
7. If you input 25, program output 1 (i.e., one quarter).
8. If you input 26, program output 2 (i.e., one quarter and one penny).
9. If you input 99, program output 9 (i.e., three quarters, two dimes, and four pennies).
