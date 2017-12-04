#include<iostream>
#include<vector>
#include<string>
#include"TrueStack.h"

using namespace std;

class StringStack : public TrueStack {
  public:
    vector <string> vec;
        string pop() {return vec.pop();}
        void push(string s) {vec.bush_back(s);};
        bool isEmtpy() {if(vec.size() == 0) { return true;} else {return false;}};
}
