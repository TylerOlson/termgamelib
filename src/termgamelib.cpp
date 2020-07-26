#include "gameobject.h"
#include "renderer.h"
#include <iostream>

int main() {
    Renderer mainRender(10, 10);

    GameObject test(9, 6);

    mainRender.printRenderer();
    mainRender.renderObject(test);
    mainRender.printRenderer();

    return 0;
}