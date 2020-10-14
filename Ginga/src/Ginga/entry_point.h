#pragma once



#include "application.h"



#if defined( GG_PLATFORM_WIN10)

extern Gg::Application* Gg::create_application( int, char*[] );

int main( int argc, char* argv[] )
{
    auto app = Gg::create_application( argc, argv );
    app->run();
    delete app;
}

#endif