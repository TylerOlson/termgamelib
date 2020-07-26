#ifndef RENDERER_H
#define RENDERER_H
#include "gameobject.h"

class Renderer {
    private:
        int width, height;
        char** renderArray;

    public:
        Renderer(int w, int h);

        void clearRenderer();
        void printRenderer();

        void renderObject(GameObject object);

        int getWidth();
        int getHeight();
};

#endif