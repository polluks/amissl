#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
#include <proto/amissl.h>
#endif
/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_DECODERERR_H
# define OPENSSL_DECODERERR_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
# endif

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>
# include <openssl/cryptoerr_legacy.h>



/*
 * OSSL_DECODER reason codes.
 */
# define OSSL_DECODER_R_COULD_NOT_DECODE_OBJECT           101
# define OSSL_DECODER_R_DECODER_NOT_FOUND                 102
# define OSSL_DECODER_R_MISSING_GET_PARAMS                100

#endif
