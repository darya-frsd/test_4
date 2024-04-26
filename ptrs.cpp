#include <iostream>
#include <stdexcept> 

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = arr;

    try {
        if (ptr < arr || ptr + 3 >= arr + 10) {
            throw std::out_of_range("Out of range error!");
        } else {
            // Это будет четвертый элемент массива, если начинать нумерацию с 1 (т.е [3])
            // В случае если нужен четвертый элемент массива [4], нужно использовать int num = *(ptr + 4);
            int num = *(ptr + 3);
            std::cout << "Forth number: " << num << std::endl;
        }
    } catch(const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    } catch(...) {
        std::cerr << "Error!" << std::endl;
    }

    return 0;
}
