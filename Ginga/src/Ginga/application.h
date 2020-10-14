#pragma once



namespace Gg
{
    class Application
    {

    public:
        Application() = default;
        Application( int argc, char* argv[] );
        virtual ~Application() = default;

        int run();
    };

    //To be defined by the client.
    Application* create_application( int argc, char* argv[] );
}
