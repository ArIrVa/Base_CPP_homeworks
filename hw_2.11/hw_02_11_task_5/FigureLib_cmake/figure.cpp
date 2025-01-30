#include "figure.h"

Figure::Figure() { setName("Фигура"); }

void Figure::setName(std::string n) { name = n; }

int Figure::getSidesCount() { return sides_count; }

std::string Figure::getName() { return name; }

std::string Figure::outSides() { return ""; }

std::string Figure::outAngles() { return ""; }