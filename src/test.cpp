#include <ftxui/dom/elements.hpp> //
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 7;

    

    while (true)
    {
        auto can = Canvas(300,50);
        can.DrawPointEllipse(150, 25, 25, 25);
        can.DrawBlockCircle (155, 15, 4);
        can.DrawBlockCircle (145, 15, 4);
        can.DrawBlockCircleFilled (150, 25, 5);
        can.DrawBlockCircle (150, 35, frame);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Red,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.5s);
        if(frame > 0){
            frame--;
        }
        
    }

    return 0;
}