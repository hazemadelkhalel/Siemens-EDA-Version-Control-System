#include <iosteam>
#include <vector>

using namespace std;

int getSum(vector<int>& elements){
    int sum = 0;
    for(int i = 0; i < elements.size(); i++){
        sum += elements[i];
    }
    return sum;
}

int main(){

    return 0;
}