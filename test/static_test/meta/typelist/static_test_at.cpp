// @H2_LICENSE_TEXT@

#include "h2/meta/Core.hpp"
#include "h2/meta/typelist/At.hpp"

using namespace h2::meta;

using TList = TL<int, float, bool>;

static_assert(EqV<tlist::At<TL<int>, 0>, int>(), "At index in bounds.");
static_assert(EqV<tlist::At<TList, 1>, float>(), "At index in bounds.");
static_assert(
    EqV<tlist::At<tlist::Empty, 5>, tlist::Nil>(), "At index out of bounds.");
static_assert(
    EqV<tlist::At<TList, 5>, tlist::Nil>(), "At index out of bounds.");
