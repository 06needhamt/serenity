/*
 * Copyright (c) 2022, Tom Needham <06needhamt@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <AK/Array.h>
#include <AK/Debug.h>
#include <AK/Endian.h>
#include <AK/Vector.h>
#include <LibGfx/WebPLoader.h>
#include <string.h>

namespace Gfx {

struct WebPHeader {
    char const RIFF[4];
    u32 file_size;
    char const WEBP[4];
}

static_assert(AssertSize<WebPHeader, 12>());

}