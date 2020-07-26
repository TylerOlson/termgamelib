#include "gameobject.h"

GameObject::GameObject(int x1, int y1) {
    x = x1;
    y = y1;
    renderChar = '*';
}

int GameObject::getX(){
    return x;
}

int GameObject::getY() {
    return y;
}

char GameObject::getRenderChar() {
    return renderChar;
}