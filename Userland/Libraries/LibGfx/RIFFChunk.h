/*
 * Copyright (c) 2022, Tom Needham <06needhamt@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Format.h>
#include <AK/ByteBuffer.h>

namespace Gfx {

// http://www.tactilemedia.com/info/MCI_Control_Info.html
struct RIFFChunk {
    u32 ckid;
    u32 size;
    AK::ByteBuffer ckdata;
};
}