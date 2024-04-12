/*
There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person at position k (0-indexed) to finish buying tickets.


Input: tickets = [2,3,2], k = 2
Output: 6
Explanation: 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.
*/
//  k represent the index whose time  we need to calculate assume each ticket buying took exactly 1 sec



//  **********************we do this into the function we can write like this



#include <stdio.h>

int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int res = 0;

    // Iterate over the tickets array
    for (int i = 0; i < ticketsSize; i++) {
        // If the ticket price is less than or equal to the price at index k,
        // add the ticket price to the result
        if (tickets[i] <= tickets[k]) {
            res += tickets[i];
        }
        // If the ticket price is greater than the price at index k,
        // add the price at index k to the result
        else {
            res += tickets[k];
        }
    }

    // Return the total time required to buy the tickets
    return res;
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the index: ");
    scanf("%d", &k);
    int result = timeRequiredToBuy(arr, n, k);
    printf("%d", result);
    return 0;
}



// *************Basic code which I wrote first without function ****************


// #include <stdio.h>
// #include <stdlib.h>


// int main(){
//     int n,k,res=0;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\nEnter the index: ");
//     getchar();
//     scanf("%d",&k);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<=arr[k])
//         {
//             res+=arr[i];
//         }
//         else
//         {
//             res+=arr[k];

//         }
        
//     }
//     printf("%d",res);
    
    
// }