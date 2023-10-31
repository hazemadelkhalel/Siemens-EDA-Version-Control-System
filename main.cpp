#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int>& elements){
    int sum = 0;
    for(int i = 0; i < elements.size(); i++){
        sum += elements[i];
    }
    return sum;
}

double getAverage(vector<int>& elements){
    if(elements.empty()){
        return 0;
    }
    int sum = getSum(elements);
    return 1.0 * sum / (double)elements.size();
}
int getMin(vector<int>& elements){
    if(elements.empty()){
        return 0;
    }
    int minElement = elements[0];
    for(int i = 0; i < elements.size(); i++){
        minElement = min(minElement, elements[i]);
    }
    return minElement;
}
int main(){
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Sum: " << getSum(array) << '\n';
    cout << "Average: " << getAverage(array) << '\n';
    cout << "Minimum Element: " << getMin(array) << '\n';
    return 0;
}