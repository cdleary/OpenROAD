// Copyright 2023 Google LLC
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#pragma once

namespace utl {

struct Color
{
  constexpr Color() : r(0), g(0), b(0), a(255) {}
  constexpr Color(int r, int g, int b, int a = 255) : r(r), g(g), b(b), a(a)
  {
  }
  constexpr Color(const Color& color, int a)
      : r(color.r), g(color.g), b(color.b), a(a)
  {
  }

  int r;
  int g;
  int b;
  int a;

  bool operator==(const Color& other) const
  {
    return (r == other.r) && (g == other.g) && (b == other.b)
           && (a == other.a);
  }
};

}  // namespace utl
