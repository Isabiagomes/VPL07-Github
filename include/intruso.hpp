#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Intruso{
    private:
        vector<string> senha;
    public:
        void set_senha_vazada(string vazou);
        string crack_senha();
};
