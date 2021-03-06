/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_KDFERR_H
# define HEADER_KDFERR_H

# ifdef  __cplusplus
extern "C" {
# endif
int ERR_load_KDF_strings(void);
# ifdef  __cplusplus
}
# endif

/*
 * KDF function codes.
 */
# define KDF_F_PKEY_HKDF_CTRL_STR                         103
# define KDF_F_PKEY_HKDF_DERIVE                           102
# define KDF_F_PKEY_TLS1_PRF_CTRL_STR                     100
# define KDF_F_PKEY_TLS1_PRF_DERIVE                       101

/*
 * KDF reason codes.
 */
# define KDF_R_INVALID_DIGEST                             100
# define KDF_R_MISSING_KEY                                104
# define KDF_R_MISSING_MESSAGE_DIGEST                     105
# define KDF_R_MISSING_PARAMETER                          101
# define KDF_R_MISSING_SECRET                             107
# define KDF_R_MISSING_SEED                               106
# define KDF_R_UNKNOWN_PARAMETER_TYPE                     103
# define KDF_R_VALUE_MISSING                              102

#endif
