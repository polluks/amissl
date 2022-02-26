/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 2020-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OSSL_CRYPTO_SM2ERR_H
# define OSSL_CRYPTO_SM2ERR_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
# endif

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>

# ifdef  __cplusplus
extern "C" {
# endif

# ifndef OPENSSL_NO_SM2

int ossl_err_load_SM2_strings(void);

/*
 * SM2 reason codes.
 */
#  define SM2_R_ASN1_ERROR                                 100
#  define SM2_R_BAD_SIGNATURE                              101
#  define SM2_R_BUFFER_TOO_SMALL                           107
#  define SM2_R_DIST_ID_TOO_LARGE                          110
#  define SM2_R_ID_NOT_SET                                 112
#  define SM2_R_ID_TOO_LARGE                               111
#  define SM2_R_INVALID_CURVE                              108
#  define SM2_R_INVALID_DIGEST                             102
#  define SM2_R_INVALID_DIGEST_TYPE                        103
#  define SM2_R_INVALID_ENCODING                           104
#  define SM2_R_INVALID_FIELD                              105
#  define SM2_R_INVALID_PRIVATE_KEY                        113
#  define SM2_R_NO_PARAMETERS_SET                          109
#  define SM2_R_USER_ID_TOO_LARGE                          106

# endif

# ifdef  __cplusplus
}
# endif
#endif
