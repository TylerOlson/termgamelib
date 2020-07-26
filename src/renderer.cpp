#include "renderer.h"
#include <iostream>

Renderer::Renderer(int w, int h) {
    width = w;
    height = h;
    renderArray = new char*[width];
    for (int i = 0; i < width; i++) {
        renderArray[i] = new char[height];
    }
    clearRenderer();

}

void Renderer::clearRenderer() {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            renderArray[i][j] = '-';
        }
    }
}

void Renderer::printRenderer() {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            std::cout << renderArray[i][j];
        }
        std::cout << std::endl;
    }
}

void Renderer::renderObject(GameObject object){
    renderArray[object.getX()][object.getY()] = object.getRenderChar();
}

int Renderer::getWidth(){
    return width;
}

int Renderer::getHeight() {
    return height;
}