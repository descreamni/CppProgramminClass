#include "Rect.h"
Rect::Rect(int width, int height)
{
    this->height = height;
    this->width = width;
}

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == s.height)
    {
        return true;
    }
    return false;
}
void RectManager::copy(Rect& dest, Rect&src)
{
    dest.width = src.width;
    dest.height = src.height;
}