#ifndef PARSER_H
#define PARSER_H

#include <functional>
#include <iostream>

class BaseParser {
 private:
  int pos_;
  std::string input_;

 protected:
  char nextChar();
  char lastChar();
  bool startsWith(const std::string& str);
  bool endOfInput();
  char consumeChar();
  void consumeWhitespace();
  std::string consumeWhile(std::function<bool(char)> condition);

 public:
  BaseParser(int pos, std::string input)
      : pos_(pos), input_(std::move(input)){};
};

#endif