#ifndef STRING_H
#define STRING_H

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

    void append(const String &other);

  private:
    size_t size;
    char *str;
};

#endif // STRING_H
