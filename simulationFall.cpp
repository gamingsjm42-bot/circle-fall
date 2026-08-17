///@that function fall
#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
#define pi 3.14
#define g 9.81
#define reauAir 1.204
/// @brief that struct return circle
class Circle
{
    //radius
    float radius;
    //
    sf::CircleShape shape;
    //air?
    static float airViscosti,reau;
    /// @brief that retunr volume of radius
    float V(){return radius*(pow(pi,2));}
    /// @brief  constant of speed
    float k(){return 6*pi*airViscosti*radius;}
    /// @brief that mass of Circle
    float m(){return reau*V();}
    /// @brief that final speed of 
    float vf(){return (m()*g/k())*(1-(reauAir/reau));}
    /// @brief that t0 when v(t0)=0.63vf 
    float Teau(){return m()/k();}
    /// @brief 
    /// @param t 
    float v(float t){return vf()*(1-exp(-t/Teau()));}
    //s
    //
    public:
    Circle(float r,sf::Vector2f defaultPos=sf::Vector2f(0.f,0.f))
    {
        //set radius
        radius = r;
        //
        shape = sf::CircleShape(r);
        //
        shape.setPosition(defaultPos);
    }
    //
    void move(float t){shape.move(sf::Vector2f(0,-v(t)));}
    /// @brief 
    /// @param wnd 
    void draw(sf::RenderWindow& wnd){wnd.draw(shape);}
};
//
float Circle::airViscosti = 1.8*pow(10,-5),Circle::reau = 1.2;
//
sf::CircleShape Body(20);
//
int main()
{
    //set sfml
    sf::RenderWindow wnd(sf::VideoMode(sf::VideoMode::getDesktopMode()),"simulation",sf::State::Fullscreen);
    //set time vars
    sf::Clock time;sf::Time t;
    //Circle Var
    Circle circle(40.0f,sf::Vector2f(0,0));
    //set infinit while loop
    while (wnd.isOpen())
    {
        //update t
        t= time.getElapsedTime();
        //set event
        while (std::optional event =wnd.pollEvent())
        {
            //set close event
            if(event->is<sf::Event::Closed>())wnd.close();
        }
        wnd.setFramerateLimit(60);
        circle.draw(wnd);
        //display wnd
        wnd.display();
        wnd.clear(sf::Color::Red);
        //set move
        circle.move(t.asMilliseconds());
    }
    
}