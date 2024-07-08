#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

// функция, записывающая элементы диапазона в строку
template <typename It>
string PrintRangeToString(It range_begin, It range_end) {
    // удобный тип ostringstream -> https://ru.cppreference.com/w/cpp/io/basic_ostringstream
    ostringstream out;
    bool is_first = true;
    for (auto it = range_begin; it != range_end; ++it) {
        if (!is_first) {
            out << ' ';
        }
        is_first = false;
        out << *it;
    }
    out << endl;
    // получаем доступ к строке с помощью метода str для ostringstream
    return out.str();
}

template <typename It>
void PrintRange(It range_begin, It range_end) {
    std::cout << PrintRangeToString(range_begin, range_end);
}

int main() {

    return 0;
}