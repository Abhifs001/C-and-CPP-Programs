/*Best time to buy and sell stock- this is written in C 
For 7, 1, 5, 3, 6, 4 output should be 5 buy on day 2 (price = 1 ) and sell on day 6 profit = 5 (maximum)

Greedy approach-
we need two variables first is Buy_cost and second is Max_profit
initially Buy_cost = arr[0] buying on first day 
iterate over the array and check that if  Buy_cost > arr[i] then Buy_cost= arr[i] which means means finding lower buy_cost
then for the same iteration use second variable max_profit
check if price[i]- Buy_cost >max_profit then assign price-Buy_cost to max_profit

This approach has O(n) time complexity and O(1) space
Other approach is to think about finding the maximum difference between the array elements with smaller number occuring before the larger number but that will require O(n) extra space so we are avoiding it
there are other cases also which will be covered later



*/
#include<stdio.h>
#include<conio.h>
int maxProfit(int* prices, int pricesSize);
int main(){
    int arr[]= {7, 1, 5, 3, 6, 4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int answer= maxProfit(arr,size);
    printf("%d", answer);   
    return 0;
}


int maxProfit(int* prices, int pricesSize){
    int Buy_cost=prices[0], Max_profit= 0;
    for(int i =0;i<pricesSize;i++){
        if(Buy_cost>prices[i]){
            Buy_cost=prices[i];
        }
        else if(prices[i]-Buy_cost>Max_profit){
            Max_profit=prices[i]-Buy_cost;
          }
    }
return Max_profit;
}