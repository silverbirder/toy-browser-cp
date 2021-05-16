#ifndef HTML_PARSER_H
#define HTML_PARSER_H

#include <array>
#include <functional>
#include <iostream>

#include "../dom.h"
#include "parser.h"

namespace html_parser {

class HtmlParser : public BaseParser {
 private:
  std::unique_ptr<dom::ElementNode> parseElementNode();
  void parseComment();
  std::vector<std::unique_ptr<dom::TextNode>> parseTextNodes();
  Attrs parseAttributes();
  std::array<std::string, 2> parseAttribute();
  std::string parseWord();
  std::string parseAttrValue();

 public:
  HtmlParser(int pos, std::string input) : BaseParser(pos, std::move(input)){};
  std::vector<std::unique_ptr<dom::Node>> parseNodes();
};

std::unique_ptr<dom::Node> parseHtml(const std::string &source);
}
#endif
