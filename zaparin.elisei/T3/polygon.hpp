#ifndef POLYGON_HPP
#define POLYGON_HPP

#include <vector>
#include <iostream>
#include <functional>
#include "point.hpp"

namespace zaparin
{
  struct Polygon
  {
    std::vector< Point > points;
  };

  std::ostream& operator<<(std::ostream& out, const Polygon& plg);
  std::istream& operator>>(std::istream& in, Polygon& plg);

  bool operator==(const Polygon& plg1, const Polygon& plg2);

  struct TriangleArea
  {
    double area;
    Point p1;
    const Point& operator()(const Point& p2, const Point& p3);
  };

  double getArea(const Polygon& plg);

  struct PolygonsArea
  {
    double area;
    void operator()(const Polygon& plg);
  };

  bool isEven(const Polygon& plg);
  bool isOdd(const Polygon& plg);

  struct isNov
  {
    size_t nov;
    bool operator()(const Polygon& plg);
  };

  struct MaxArea
  {
    double area = 0;
    void operator()(const Polygon& plg);
  };

  struct MaxVertexes
  {
    size_t vertexes = 0;
    void operator()(const Polygon& plg);
  };
}

#endif