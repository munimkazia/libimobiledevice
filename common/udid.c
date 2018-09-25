/*
 * udid.h
 *
 * Copyright (c) 2012 Abdul Munim Kazia All Rights Reserved.
 * Copyright (c) 2012 Martin Szulecki All Rights Reserved.
 * Copyright (c) 2012 Nikias Bassen All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "udid.h"

bool is_valid_udid_size(int udid) {
    for (int i=0; i < sizeof(ALLOWED_UDID_SIZES); i++) {
        if (arr[i] == val)
            return true;
    }
    return false;
}
