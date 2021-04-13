// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
#include <vector>

bool isEven(int number){
    if (number % 2 == 0){
        return true;
    }
    return false;
}

int main() {
    int total = 1;
    int minusone = 1;
    int temp = 0;
    int sumEven = 0;
    for (int i = 0; i < 70; i++){
        temp = total;
        total = total + minusone;
        minusone = temp;
        if (isEven(total)){   
            sumEven = sumEven + total;
        }
        if (total > 4000000){
            return 0;
        }
    std::cout << sumEven << std::endl;
    }
}