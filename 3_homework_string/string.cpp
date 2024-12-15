#include "string.h"

String::String(const char *str)
{
    size = strlen(str);
    this->str = new char[size + 1];
    for (size_t i = 0; i <= size; ++i)
        this->str[i] = str[i];
}

String::String(size_t n, char c) : size(n), str(0)
{
    this->str = new char[size + 1];
    for (int i = 0; i < size; this->str[i] = c, ++i)
        ;
    str[size] = '\0';
}

String::~String()
{
    delete[] str;
}

String::String(const String &other) : size(other.size)
{
    str = new char[size + 1];
    strcpy(str, other.str);
}

String &String::operator=(const String &other)
{
    if (this != &other)
    {
        delete[] this->str;
        this->size = other.size;
        this->str = new char[this->size + 1];
        strcpy(this->str, other.str);
    }

    return *this;
}

void String::append(const String &other)
{
    size += other.size;
    char *new_str = new char[size + 1];
    strcpy(new_str, str);
    strcat(new_str, other.str);
    delete[] str;
    str = new_str;
}
