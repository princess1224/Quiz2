#include <iostream>
using namespace std;
void countNumbers(int arr[], int &positive, int &negative, int &zero) {
    positive = 0;
    negative = 0;
    zero = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
}
int sumPositive(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }

    return sum;
}
int sumNegative(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0)
            sum += arr[i];
    }

    return sum;
}
float calculateAverage(int arr[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    return sum / 5.0;
}
void displayResults(int positive, int negative, int zero,
                    int posSum, int negSum, float average) {

    cout << "Number of positive values: " << positive;
    cout << "Number of negative values: " << negative;
    cout << "Number of zeros: " << zero;
    cout << "Sum of positive numbers: " << posSum;
    cout << "Sum of negative numbers: " << negSum;
    cout << "Average of all numbers: " << average << endl;
}

int main() {
    int numbers[5];
    int positive, negative, zero;

    cout << "Enter 5 integer numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    countNumbers(numbers, positive, negative, zero);

    int posSum = sumPositive(numbers);
    int negSum = sumNegative(numbers);
    float average = calculateAverage(numbers);

    displayResults(positive, negative, zero,
                   posSum, negSum, average);

    return 0;
}
