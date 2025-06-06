#pragma once
class Rect;
class RectManager
{
    public :
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};
class Rect
{
    int height;
    int width;
    public:
    Rect(int width, int height);
    friend bool RectManager::equals(Rect r, Rect s);
    friend void RectManager::copy(Rect& dest, Rect&src);
};

