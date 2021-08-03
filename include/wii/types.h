#pragma once

#include <types.h>

namespace wii {

struct RGBA
{
    u8 r, g, b, a;
};

struct Vec2
{
	float x, y;
};

struct Vec3
{
    float x, y, z;
};

typedef f32 Mtx34[3][4];
typedef f32 Mtx44[4][4];

}
