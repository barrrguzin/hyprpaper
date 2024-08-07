#pragma once
#include <string>
#include "../defines.hpp"

bool        vectorDeltaLessThan(const Vector2D& a, const Vector2D& b, const float& delta);
bool        vectorDeltaLessThan(const Vector2D& a, const Vector2D& b, const Vector2D& delta);
std::string execAndGet(const char*);