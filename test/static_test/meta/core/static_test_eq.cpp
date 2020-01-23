// @H2_LICENSE_TEXT@

#include "h2/meta/core/Eq.hpp"

using namespace h2::meta;

static_assert(!EqV<int, float>(),
              "Different types are not equal.");
static_assert(!EqV<float, int>(),
              "Different types are not equal.");


using A = int;
using B = int;
using C = int;

// Reflexivity
static_assert(EqV<A, A>(),
              "A type is equal to itself.");

// Symmetry
static_assert(EqV<A, B>() && EqV<B, A>(),
              "Eq is symmetric.");

// Transitivity
static_assert(EqV<A, B>() && EqV<B, C>() && EqV<A, C>(),
              "Eq is transitive.");
