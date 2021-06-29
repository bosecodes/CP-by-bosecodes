// Fractional knapsack problem 

/*
struct item {
    int value;
    int weight;
};
*/

bool comp(item a, item b) {
    double r1 = (double)a.value/double(a.weight);
    double r2 = (double)b.value/double(b.weight);
    return r1 > r2;
}
// function to return fractional weights 

double fractionalKnapsack(int W, int arr[], int n) {
    sort(arr, arr+n, comp);
    int currWeight = 0;
    double finalValue = 0.0;
    
    for(int i = 0; i < n; i++) {
        if(currWeight + arr[i].weight <= W) // as long as currWeight +arr[i].weight doesn't exceed capacity of knapsack
        {
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else {
            int remain = W - currWeight;
            finalValue += (arr[i].value / (double)arr[i].weight) * (double) remain;
            break;
        }
    }
    return finalValue;
}




