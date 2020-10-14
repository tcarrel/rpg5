


#include<ginga.h>



class RPG5 : public Gg::Application
{
public:
    RPG5() = default;
    RPG5( int argc, char* argv[] )
        :
        Application( argc, argv )
    {}
    ~RPG5() = default;

};



Gg::Application* Gg::create_application( int argc, char* argv[] )
{
    return new RPG5( argc, argv );
}