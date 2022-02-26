/*
 * Copyright 2016-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OSSL_CRYPTO_STORE_H
# define OSSL_CRYPTO_STORE_H
# if defined(__GNUC__) && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 3))
# pragma once
# endif

# include <openssl/bio.h>
# include <openssl/store.h>
# include <openssl/ui.h>

void ossl_store_cleanup_int(void);
int ossl_store_loader_get_number(const OSSL_STORE_LOADER *loader);

#endif
