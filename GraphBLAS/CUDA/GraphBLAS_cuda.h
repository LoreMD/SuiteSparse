//------------------------------------------------------------------------------
// GraphBLAS/CUDA/GraphBLAS_cuda.h
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2023, All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

//------------------------------------------------------------------------------

#ifndef GXB_COMPLEX_H
#define GXB_COMPLEX_H

    // C++ complex types for CUDA
    #include <cmath>
    #include <complex>
    typedef std::complex<float>  GxB_FC32_t ;
    typedef std::complex<double> GxB_FC64_t ;
    #define GxB_CMPLXF(r,i) GxB_FC32_t(r,i)
    #define GxB_CMPLX(r,i)  GxB_FC64_t(r,i)
    #define GB_HAS_CMPLX_MACROS 1

#endif

#define GB_LIBRARY
#include "GraphBLAS.h"
#undef I

