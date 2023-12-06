/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright (c) 1999-2006 Andrija Antonijevic, Stefan Burstroem.
 * Copyright (c) 2014-2023 AmiSSL Open Source Team.
 * All Rights Reserved.
 *
 * This file has been modified for use with AmiSSL for AmigaOS-based systems.
 *
 * Copyright 1995-2023 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#if !defined(PROTO_AMISSL_H) && !defined(AMISSL_COMPILE)
# include <proto/amissl.h>
#endif

#ifndef OPENSSL_PROVERR_H
# define OPENSSL_PROVERR_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
#  pragma once
# endif

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>
# include <openssl/cryptoerr_legacy.h>



/*
 * PROV reason codes.
 */
# define PROV_R_ADDITIONAL_INPUT_TOO_LONG                 184
# define PROV_R_ALGORITHM_MISMATCH                        173
# define PROV_R_ALREADY_INSTANTIATED                      185
# define PROV_R_BAD_DECRYPT                               100
# define PROV_R_BAD_ENCODING                              141
# define PROV_R_BAD_LENGTH                                142
# define PROV_R_BAD_TLS_CLIENT_VERSION                    161
# define PROV_R_BN_ERROR                                  160
# define PROV_R_CIPHER_OPERATION_FAILED                   102
# define PROV_R_DERIVATION_FUNCTION_INIT_FAILED           205
# define PROV_R_DIGEST_NOT_ALLOWED                        174
# define PROV_R_EMS_NOT_ENABLED                           233
# define PROV_R_ENTROPY_SOURCE_STRENGTH_TOO_WEAK          186
# define PROV_R_ERROR_INSTANTIATING_DRBG                  188
# define PROV_R_ERROR_RETRIEVING_ENTROPY                  189
# define PROV_R_ERROR_RETRIEVING_NONCE                    190
# define PROV_R_FAILED_DURING_DERIVATION                  164
# define PROV_R_FAILED_TO_CREATE_LOCK                     180
# define PROV_R_FAILED_TO_DECRYPT                         162
# define PROV_R_FAILED_TO_GENERATE_KEY                    121
# define PROV_R_FAILED_TO_GET_PARAMETER                   103
# define PROV_R_FAILED_TO_SET_PARAMETER                   104
# define PROV_R_FAILED_TO_SIGN                            175
# define PROV_R_FIPS_MODULE_CONDITIONAL_ERROR             227
# define PROV_R_FIPS_MODULE_ENTERING_ERROR_STATE          224
# define PROV_R_FIPS_MODULE_IN_ERROR_STATE                225
# define PROV_R_GENERATE_ERROR                            191
# define PROV_R_ILLEGAL_OR_UNSUPPORTED_PADDING_MODE       165
# define PROV_R_INDICATOR_INTEGRITY_FAILURE               210
# define PROV_R_INSUFFICIENT_DRBG_STRENGTH                181
# define PROV_R_INVALID_AAD                               108
# define PROV_R_INVALID_AEAD                              231
# define PROV_R_INVALID_CONFIG_DATA                       211
# define PROV_R_INVALID_CONSTANT_LENGTH                   157
# define PROV_R_INVALID_CURVE                             176
# define PROV_R_INVALID_CUSTOM_LENGTH                     111
# define PROV_R_INVALID_DATA                              115
# define PROV_R_INVALID_DIGEST                            122
# define PROV_R_INVALID_DIGEST_LENGTH                     166
# define PROV_R_INVALID_DIGEST_SIZE                       218
# define PROV_R_INVALID_INPUT_LENGTH                      230
# define PROV_R_INVALID_ITERATION_COUNT                   123
# define PROV_R_INVALID_IV_LENGTH                         109
# define PROV_R_INVALID_KDF                               232
# define PROV_R_INVALID_KEY                               158
# define PROV_R_INVALID_KEY_LENGTH                        105
# define PROV_R_INVALID_MAC                               151
# define PROV_R_INVALID_MEMORY_SIZE                       235
# define PROV_R_INVALID_MGF1_MD                           167
# define PROV_R_INVALID_MODE                              125
# define PROV_R_INVALID_OUTPUT_LENGTH                     217
# define PROV_R_INVALID_PADDING_MODE                      168
# define PROV_R_INVALID_PUBINFO                           198
# define PROV_R_INVALID_SALT_LENGTH                       112
# define PROV_R_INVALID_SEED_LENGTH                       154
# define PROV_R_INVALID_SIGNATURE_SIZE                    179
# define PROV_R_INVALID_STATE                             212
# define PROV_R_INVALID_TAG                               110
# define PROV_R_INVALID_TAG_LENGTH                        118
# define PROV_R_INVALID_THREAD_POOL_SIZE                  234
# define PROV_R_INVALID_UKM_LENGTH                        200
# define PROV_R_INVALID_X931_DIGEST                       170
# define PROV_R_IN_ERROR_STATE                            192
# define PROV_R_KEY_SETUP_FAILED                          101
# define PROV_R_KEY_SIZE_TOO_SMALL                        171
# define PROV_R_LENGTH_TOO_LARGE                          202
# define PROV_R_MISMATCHING_DOMAIN_PARAMETERS             203
# define PROV_R_MISSING_CEK_ALG                           144
# define PROV_R_MISSING_CIPHER                            155
# define PROV_R_MISSING_CONFIG_DATA                       213
# define PROV_R_MISSING_CONSTANT                          156
# define PROV_R_MISSING_KEY                               128
# define PROV_R_MISSING_MAC                               150
# define PROV_R_MISSING_MESSAGE_DIGEST                    129
# define PROV_R_MISSING_OID                               209
# define PROV_R_MISSING_PASS                              130
# define PROV_R_MISSING_SALT                              131
# define PROV_R_MISSING_SECRET                            132
# define PROV_R_MISSING_SEED                              140
# define PROV_R_MISSING_SESSION_ID                        133
# define PROV_R_MISSING_TYPE                              134
# define PROV_R_MISSING_XCGHASH                           135
# define PROV_R_MODULE_INTEGRITY_FAILURE                  214
# define PROV_R_NOT_A_PRIVATE_KEY                         221
# define PROV_R_NOT_A_PUBLIC_KEY                          220
# define PROV_R_NOT_INSTANTIATED                          193
# define PROV_R_NOT_PARAMETERS                            226
# define PROV_R_NOT_SUPPORTED                             136
# define PROV_R_NOT_XOF_OR_INVALID_LENGTH                 113
# define PROV_R_NO_KEY_SET                                114
# define PROV_R_NO_PARAMETERS_SET                         177
# define PROV_R_OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE  178
# define PROV_R_OUTPUT_BUFFER_TOO_SMALL                   106
# define PROV_R_PARENT_CANNOT_GENERATE_RANDOM_NUMBERS     228
# define PROV_R_PARENT_CANNOT_SUPPLY_ENTROPY_SEED         187
# define PROV_R_PARENT_LOCKING_NOT_ENABLED                182
# define PROV_R_PARENT_STRENGTH_TOO_WEAK                  194
# define PROV_R_PATH_MUST_BE_ABSOLUTE                     219
# define PROV_R_PERSONALISATION_STRING_TOO_LONG           195
# define PROV_R_PSS_SALTLEN_TOO_SMALL                     172
# define PROV_R_REQUEST_TOO_LARGE_FOR_DRBG                196
# define PROV_R_REQUIRE_CTR_MODE_CIPHER                   206
# define PROV_R_RESEED_ERROR                              197
# define PROV_R_SEARCH_ONLY_SUPPORTED_FOR_DIRECTORIES     222
# define PROV_R_SEED_SOURCES_MUST_NOT_HAVE_A_PARENT       229
# define PROV_R_SELF_TEST_KAT_FAILURE                     215
# define PROV_R_SELF_TEST_POST_FAILURE                    216
# define PROV_R_TAG_NOT_NEEDED                            120
# define PROV_R_TAG_NOT_SET                               119
# define PROV_R_TOO_MANY_RECORDS                          126
# define PROV_R_UNABLE_TO_FIND_CIPHERS                    207
# define PROV_R_UNABLE_TO_GET_PARENT_STRENGTH             199
# define PROV_R_UNABLE_TO_GET_PASSPHRASE                  159
# define PROV_R_UNABLE_TO_INITIALISE_CIPHERS              208
# define PROV_R_UNABLE_TO_LOAD_SHA256                     147
# define PROV_R_UNABLE_TO_LOCK_PARENT                     201
# define PROV_R_UNABLE_TO_RESEED                          204
# define PROV_R_UNSUPPORTED_CEK_ALG                       145
# define PROV_R_UNSUPPORTED_KEY_SIZE                      153
# define PROV_R_UNSUPPORTED_MAC_TYPE                      137
# define PROV_R_UNSUPPORTED_NUMBER_OF_ROUNDS              152
# define PROV_R_URI_AUTHORITY_UNSUPPORTED                 223
# define PROV_R_VALUE_ERROR                               138
# define PROV_R_WRONG_FINAL_BLOCK_LENGTH                  107
# define PROV_R_WRONG_OUTPUT_BUFFER_SIZE                  139
# define PROV_R_XOF_DIGESTS_NOT_ALLOWED                   183
# define PROV_R_XTS_DATA_UNIT_IS_TOO_LARGE                148
# define PROV_R_XTS_DUPLICATED_KEYS                       149

#endif
