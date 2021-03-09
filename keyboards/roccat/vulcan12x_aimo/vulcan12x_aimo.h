#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_all( \
    k02,      k01, k09, k12, k11, k19, k21, k29, k2A, k31, k39, k41, k42,      k49, k51, k59, \
    k03, k04, k0A, k13, k14, k1B, k1A, k22, k33, k32, k3B, k3C, k44, k3A,      k4A, k52, k5A,    k62, k6A, k72, k7A, \
    k05, k0B, k0C, k15, k1C, k24, k2C, k2D, k34, k3D, k45, k4C, k4D, k54,      k4B, k53, k5B,    k63, k6B, k73, k7B, \
    k06, k0D, k16, k1D, k26, k25, k2E, k35, k36, k3E, k46, k4E, k55, k5C,                        k64, k6C, k74, \
    k07, k0E, k17, k1E, k1F, k27, k2F, k38, k37, k3F, k47, k4F,      k5F,           k5D,         k65, k6D, k75, k7D, \
    k08, k10, k18,                k30,                k58, k68, k70, k78,      k5E, k66, k6E,    k76,      k7E \
) \
{ \
    { k01, k09, k11, k19, k21, k29, k31, k39, k41, k49, k51, k59, XXX, XXX, XXX, XXX }, \
    { k02, k0A, k12, k1A, k22, k2A, k32, k3A, k42, k4A, k52, k5A, k62, k6A, k72, k7A }, \
    { k03, k0B, k13, k1B, XXX, XXX, k33, k3B, XXX, k4B, k53, k5B, k63, k6B, k73, k7B }, \
    { k04, k0C, k14, k1C, k24, k2C, k34, k3C, k44, k4C, k54, k5C, k64, k6C, k74, XXX }, \
    { k05, k0D, k15, k1D, k25, k2D, k35, k3D, k45, k4D, k55, k5D, k65, k6D, k75, k7D }, \
    { k06, k0E, k16, k1E, k26, k2E, k36, k3E, k46, k4E, XXX, k5E, k66, k6E, k76, k7E }, \
    { k07, XXX, k17, k1F, k27, k2F, k37, k3F, k47, k4F, XXX, k5F, XXX, XXX, XXX, XXX }, \
    { k08, k10, k18, XXX, XXX, k30, k38, XXX, XXX, XXX, k58, XXX, k68, k70, k78, XXX } \
}

#define LAYOUT_fullsize_ansi( \
    k02,      k01, k09, k12, k11, k19, k21, k29, k2A, k31, k39, k41, k42,      k49, k51, k59, \
    k03, k04, k0A, k13, k14, k1B, k1A, k22, k33, k32, k3B, k3C, k44, k3A,      k4A, k52, k5A,    k62, k6A, k72, k7A, \
    k05, k0B, k0C, k15, k1C, k24, k2C, k2D, k34, k3D, k45, k4C, k4D, k54,      k4B, k53, k5B,    k63, k6B, k73, k7B, \
    k06, k0D, k16, k1D, k26, k25, k2E, k35, k36, k3E, k46, k4E,      k5C,                        k64, k6C, k74, \
    k07,      k17, k1E, k1F, k27, k2F, k38, k37, k3F, k47, k4F,      k5F,           k5D,         k65, k6D, k75, k7D, \
    k08, k10, k18,                k30,                k58, k68, k70, k78,      k5E, k66, k6E,    k76,      k7E \
) \
{ \
    { k01, k09, k11, k19, k21, k29, k31, k39, k41, k49, k51, k59, XXX, XXX, XXX, XXX }, \
    { k02, k0A, k12, k1A, k22, k2A, k32, k3A, k42, k4A, k52, k5A, k62, k6A, k72, k7A }, \
    { k03, k0B, k13, k1B, XXX, XXX, k33, k3B, XXX, k4B, k53, k5B, k63, k6B, k73, k7B }, \
    { k04, k0C, k14, k1C, k24, k2C, k34, k3C, k44, k4C, k54, k5C, k64, k6C, k74, XXX }, \
    { k05, k0D, k15, k1D, k25, k2D, k35, k3D, k45, k4D, XXX, k5D, k65, k6D, k75, k7D }, \
    { k06, XXX, k16, k1E, k26, k2E, k36, k3E, k46, k4E, XXX, k5E, k66, k6E, k76, k7E }, \
    { k07, XXX, k17, k1F, k27, k2F, k37, k3F, k47, k4F, XXX, k5F, XXX, XXX, XXX, XXX }, \
    { k08, k10, k18, XXX, XXX, k30, k38, XXX, XXX, XXX, k58, XXX, k68, k70, k78, XXX } \
}
