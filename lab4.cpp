#include <iostream>
#include <stdlib.h>

int main()
{
    int len;
    setlocale(LC_ALL, "ru");

    std::cout << "Укажите длину строки в символах: ";
    std::cin >> len;

    char* buffer = (char*)malloc((len + 1) * sizeof(unsigned char));          // динамическое выделение памяти под символьную строку
    if (buffer == NULL) exit(1);                       // если выделение памяти не выполнилось, завершить программу

    for (int ix = 0; ix <= len; ix++) {
        buffer[ix] = rand() % 26 + 'a';
        if (ix == len)
        {
            buffer[ix] = '\0';
        }
    }
        
    //buffer[len] = '\0';                                 // нулевой элемент

    std::cout << "Случайная строка: " << buffer;
    free(buffer);                                     // освобождаем память

    return 0;
}