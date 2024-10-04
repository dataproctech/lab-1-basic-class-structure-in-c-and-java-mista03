#include <iostream>
#include <string>
#include <vector>
#include <random>

class Parrot{
    private:
        std::vector<std::string> phrases;
        int i;
        
    public:
        Parrot(std::string phrase){
            phrases.push_back(phrase);
            i = 0;
        }
    
        void rememberPhrase(std::string phrase){
            phrases.push_back(phrase);
        }
        
        void changePhrase(int pos, std::string phrase){
            if(pos >= 0 && pos < phrases.size()){
                phrases[pos] = phrase;
            }
        }
        
        void say(){
            std::cout << ++i << " " << phrases[rand() % phrases.size()] << "\n";
        }
};

int main()
{
    std::srand(time(NULL));
    
    Parrot parrot1("czesc");
    parrot1.say();
    parrot1.say();
    parrot1.changePhrase(0, "hello");
    parrot1.say();
    parrot1.rememberPhrase("pryvit");
    parrot1.say();
    parrot1.say();

    return 0;
}
