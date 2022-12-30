#pragma once
#include <SFML/Graphics.hpp>

class Ball
{
private:
    float x;
    float y;
    float r;
    float dx;
    float dy;
    sf::Color col;
public:
	Ball(float valuex, float valuey, float valuer, float valuedx, float valuedy, sf::Color valuecol)
	{
        float x = valuex;
        float y = valuey;
        float r = valuer;
        float dx = valuedx;
        float dy = valuedy;
        sf::Color col = valuecol;
	}

    float Getx() 
    {
        return x;
    }
    float Gety()
    {
        return y;
    }
    float Getr()
    {
        return r;
    }
    float Getdx()
    {
        return dx;
    }
    float Getdy()
    {
        return dy;
    }
    sf::Color Getcol() 
    {
        return col;
    }

    void BringBack() 
    {
        x += dx;
        y += dy;
        if ((x + r > 640) || (x - r < 0)) {
            dx = -dx;
        }
        if ((y + r > 480) || (y - r < 0)) {
            dy = -dy;
        }
    }
    float Changex(float valuedt) 
    {
        x -= dx * valuedt;
        return x;
    }
    float Changey(float valuedt)
    {
        y -= dy * valuedt;
        return y;
    }

    void FinallyChangedx(float values, float valuee, float valueVn, float valueVt) 
    {
        dx = valueVn * values - valueVt * valuee;
    }
    void FinallyChangedy(float valuee, float values, float valueVn, float valueVt)
    {
        dy = valueVn * valuee + valueVt * values;
    }

    void FinallyChangex(float valuedt)
    {
        x += dx * valuedt;
    }
    void FinallyChangey(float valuedt)
    {
        y += dy * valuedt;
    }
};