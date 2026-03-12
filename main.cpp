#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

void printArray(const std::vector<int>& numbers) {
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
void bubbleSort(std::vector<int>& numbers) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = 0; j < numbers.size() - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                std::swap(numbers[j], numbers[j+1]);
                printArray(numbers);
            }
        }
    }
}
void selectionSort(std::vector<int>& numbers) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(numbers[i], numbers[minIndex]);
        printArray(numbers);
    }
}
void insertionSort(std::vector<int>& numbers) {
    for (int i = 1; i < numbers.size(); i++) {
        int key = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = key;
        printArray(numbers);
    }
}
int main() {
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 100);
    std::vector<int> numbers;
    std::cout << "Enter the number of elements to sort: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        numbers.push_back(dist(rng));
    }
    bool running = true;
    while (running) {
        std::cout << "Choose an option:\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Exit\n";
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                bubbleSort(numbers);
                break;
            case 2:
                selectionSort(numbers);
                break;
            case 3:
                insertionSort(numbers);
                break;
            case 4:
                running = false;
                break;
        }
    }
    return 0;
}