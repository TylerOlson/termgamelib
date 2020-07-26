#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    private:
        int x, y;
        char renderChar;
        
    public:
        GameObject(int x1, int y1);
        int getX();
        int getY();
        char getRenderChar();
};

#endif