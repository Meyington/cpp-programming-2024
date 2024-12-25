#ifndef MY_STRING_H
#define MY_STRING_H

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

struct String
{
  public:
    String(const char *str = "");
    String(size_t n, char c);
    ~String();

    String(const String &other);
    String &operator=(const String &other);
    String operator[](int i);

    void append(const String &other);

    friend std::ostream &operator<<(std::ostream &stream, const String &text);

  private:
    size_t size;
    char *str;
    int startInd;
    bool flag;
};

#endif // MY_STRING_H
