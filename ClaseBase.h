#include <string>
#include <iostream>

class Persona {

    private: 
        std::string id;
        std::string name;
    
    public:
        Persona();
        ~Persona();

        void SetId(std::string id);
        std::string GetId();
        void SetName(std::string name);
        std::string GetName();
        void Speak();
};

Persona::Persona(){
    this->id = "";
    this->name = "";
}

Persona::~Persona(){
}

void Persona::SetId(std::string id){
    this->id = id;
}

std::string Persona::GetId(){
    return this->id;
}

void Persona::SetName(std::string name){
    this->name = name;
}

std::string Persona::GetName(){
    return this->name;
}

void Persona::Speak(){
    std::cout << "Soy persona" << std::endl;
}
