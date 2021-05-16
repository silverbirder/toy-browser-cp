#include <iostream>
#include <string>
using namespace std;

void printMyMessageToOut() {
  cout << "Print My Message!!";
}

void inputAndOutFunc() {
  char str[16];
  cout << "Please Input:";
  cin >> str;
  cout << "ようこそ" << str << "さん";
}

//int compileErrrorFunc() {
//  cout << "Compile?";
//  return;
//}

void loopfunc() {
 for(int i = 0 ; i < 10 ; i++) {
   cout << i;
 }
}

bool boolFunc() {
  bool a = true, b = false, c = 0;
  return(a && (b || !c));
}

struct S_TAG {
  int i;
};

union U_TAG {
  int i;
  double d;
};

enum E_TAG { A, B, C };

class Kitty {
  private:
    int point;
  public:
    Kitty(int p);
    ~Kitty();
    void setPoint(int p);
    int getPoint();
};

void Kitty::setPoint(int p) {
  point = p;
}

int Kitty::getPoint() {
  return Kitty::point;
}

Kitty::Kitty(int p) {
  point = p;
}

Kitty::~Kitty() {
	cout << "Kitty on your lap\n";
}

void createKitty() {
	Kitty obj(1);
}

int useKittyPoint() {
  Kitty obj(3);
  obj.setPoint(1);
  return obj.getPoint();
}

class Sitty {
public:
	char *str;
	Sitty(char *ch);
};

Sitty::Sitty(char *ch) {
	str = ch;
}

//void useSitty() {
//  Sitty obj("Sitty");
//  cout << obj.str;
//}

class Hoge {
public:
  string str;
  void print(string str);
};

void Hoge::print(string str) {
  cout << Hoge::str;
  cout << str;
}

string str = "Global Variable";

void useLocalOrGlovalValFunc() {
  string str = "Local Variable";
  cout << ::str;
  cout << str;
}

class PointClass {
  public:
  string str;
  PointClass(string str);
};

PointClass::PointClass(string str) {
  PointClass::str = str;
}

void usePointClass() {
  PointClass *pa, pb[2] = {PointClass("A\n"), PointClass("B\n")};
  pa = &pb[0];
  cout << pa->str;
  cout << (pa+1)->str;
};

void useRef() {
  int i = 100;
  int &ref = i;
  ref++;

  cout << i << ":" << ref << "\n";
  cout << &i << ":" << &ref << "\n";
};

class Ref {
  public:
    string str;
} r;

void useClassRef() {
  Ref &obj = r;
  r.str = "B";
  cout << obj.str;
}

Kitty passClassObjFunc(Kitty *obj) {
  cout << obj->getPoint();
  Kitty obj2(obj->getPoint());
  return obj2;
}

void useClassKittyArgs() {
  Kitty obj(1);
  Kitty obj2 = passClassObjFunc(&obj);
}

inline int getSalesPrice(int x) {
  return x + (int)(x * 0.05);
}

class InlineClass {
  public:
    int getSalesPrice(int x) {
      return x + (int)(x * 0.05);
    }
};

void useInlineFunc() {
  cout << getSalesPrice(100);
  InlineClass ic;
  cout << ic.getSalesPrice(100);
}

class ThisClass {
  public:
    string str;
    string getStr();
};

string ThisClass::getStr() {
  return this->str;
};

void useThisClass() {
  ThisClass tc;
  tc.str = "A";
  cout << tc.getStr();
}

int main(int argc, char **argv) {
  useThisClass();
  return 0;
}