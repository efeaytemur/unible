#include <stdio.h>

float calculateInventoryValue(float prices[], int quantities[], int size) {
    /**
    * calculateInventoryValue - Calculates total value of items in inventory.
    *
    * @param prices: An array of float values representing unit prices of products
    * @param quantities: An array of int values representing quantities of products
    * @param size: Number of products in the arrays
    *
    * @return The total inventory value as a float
    */
    
    float total = 0.0;

    for (int i = 0; i < size; i++)
    {
        for (int  j = 0; j < size; j++)
        {
            total += (prices[i] * quantities[i]);
        }
    }
    

    // TODO: Loop through each product and accumulate total value

    return total;
}

int main() {
    float prices[] = {5.50, 3.75, 10.00, 2.25};
    int quantities[] = {200, 150, 80, 300};
    int size = 4;

    // TODO: Call the function and print the result
    
    printf("%f",calculateInventoryValue(prices,quantities,size));

    return 0;
}
