#ifndef PYTHONIC_BISECT_BISECT_HPP
#define PYTHONIC_BISECT_BISECT_HPP

#include "pythonic/utils/proxy.hpp"
#include <algorithm>

namespace pythonic {

    namespace bisect {
        template <class X, class A>
            size_t bisect(X const& x, A const& a, long lo=0, long hi=-1) {
                if(hi<0) hi = x.end() - x.begin();
                return std::upper_bound(x.begin()+lo, x.begin()+hi, a) - x.begin();
            }

        PROXY(pythonic::bisect, bisect);


    }

}

#endif

