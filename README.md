# UTF-8 codepoints for Codepage 437

I needed the codepage 437 characters for a different project, but I like to use UTF-8 everywhere (http://utf8everywhere.org/).

There is a single header file for C++ with an array of all the different UTF-8 codepoints for the characters in codepage 437.

Because a single character from the codepage can take up more then a single `char`, a std::string_view is used. (This also makes it incompatible with plain C.)
