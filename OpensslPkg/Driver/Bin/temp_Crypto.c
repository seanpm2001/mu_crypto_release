/** @file
  Implements the EDK II Crypto Protocol/PPI services using the library services
  from BaseCryptLib and TlsLib.

  Copyright (C) Microsoft Corporation. All rights reserved.
  Copyright (c) 2019 - 2020, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <Base.h>
#include <Library/DebugLib.h>
#include <Library/BaseCryptLib.h>
#include <Library/TlsLib.h>
#include <Protocol/Crypto.h>

// MU_CHANGE - Remove BaseCryptLibServiceNotEnabled and macros
//             These were added for upstreaming into EDK2 and are
//             not used by Mu. They may eventually land in EDK2, at
//             which point we will need to make a decision about
//             their inclusion here.

/**
  Returns the version of the EDK II Crypto Protocol.

  @return  The version of the EDK II Crypto Protocol.

**/
UINTN
EFIAPI
CryptoServiceGetCryptoVersion (
  VOID
  )
{
  return EDKII_CRYPTO_VERSION;
}

// MU_CHANGE [BEGIN]
// ****************************************************************************
// AUTOGENERATED BY OpensslPkg\Driver\Packaging\generate_cryptodriver.py
// AUTOGENED AS temp_Crypto.c
// DO NOT MODIFY
// GENERATED ON: 2024-02-06 16:30:53.382761

const EDKII_CRYPTO_PROTOCOL  mEdkiiCrypto = {
  /// Version
  CryptoServiceGetCryptoVersion,
  // HMACSHA256 functions
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256New
  HmacSha256New,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Free
  HmacSha256Free,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256SetKey
  HmacSha256SetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Duplicate
  HmacSha256Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Update
  HmacSha256Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256Final
  HmacSha256Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha256All
  HmacSha256All,
 #else
  NULL,
 #endif
  // HMACSHA384 functions
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384New
  HmacSha384New,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384Free
  HmacSha384Free,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384SetKey
  HmacSha384SetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384Duplicate
  HmacSha384Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384Update
  HmacSha384Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384Final
  HmacSha384Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHmacSha384All
  HmacSha384All,
 #else
  NULL,
 #endif
  // PKCS functions
 #if _PCD_VALUE_PcdCryptoServicePkcs5HashPassword
  Pkcs5HashPassword,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs1v2Encrypt
  Pkcs1v2Encrypt,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetSigners
  Pkcs7GetSigners,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7FreeSigners
  Pkcs7FreeSigners,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetCertificatesList
  Pkcs7GetCertificatesList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7Sign
  Pkcs7Sign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7Verify
  Pkcs7Verify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceVerifyEKUsInPkcs7Signature
  VerifyEKUsInPkcs7Signature,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServicePkcs7GetAttachedContent
  Pkcs7GetAttachedContent,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAuthenticodeVerify
  AuthenticodeVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceImageTimestampVerify
  ImageTimestampVerify,
 #else
  NULL,
 #endif
  // DH functions
 #if _PCD_VALUE_PcdCryptoServiceDhNew
  DhNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhFree
  DhFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhGenerateParameter
  DhGenerateParameter,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhSetParameter
  DhSetParameter,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhGenerateKey
  DhGenerateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceDhComputeKey
  DhComputeKey,
 #else
  NULL,
 #endif
  // RANDOM functions
 #if _PCD_VALUE_PcdCryptoServiceRandomSeed
  RandomSeed,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRandomBytes
  RandomBytes,
 #else
  NULL,
 #endif
  // RSA functions
 #if _PCD_VALUE_PcdCryptoServiceRsaNew
  RsaNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaFree
  RsaFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaSetKey
  RsaSetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetKey
  RsaGetKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGenerateKey
  RsaGenerateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaCheckKey
  RsaCheckKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPkcs1Sign
  RsaPkcs1Sign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPkcs1Verify
  RsaPkcs1Verify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPssSign
  RsaPssSign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaPssVerify
  RsaPssVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetPrivateKeyFromPem
  RsaGetPrivateKeyFromPem,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceRsaGetPublicKeyFromX509
  RsaGetPublicKeyFromX509,
 #else
  NULL,
 #endif
  // SHA1 functions
 #if _PCD_VALUE_PcdCryptoServiceSha1GetContextSize
  Sha1GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Init
  Sha1Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Duplicate
  Sha1Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Update
  Sha1Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1Final
  Sha1Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha1HashAll
  Sha1HashAll,
 #else
  NULL,
 #endif
  // SHA256 functions
 #if _PCD_VALUE_PcdCryptoServiceSha256GetContextSize
  Sha256GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Init
  Sha256Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Duplicate
  Sha256Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Update
  Sha256Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256Final
  Sha256Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha256HashAll
  Sha256HashAll,
 #else
  NULL,
 #endif
  // SHA384 functions
 #if _PCD_VALUE_PcdCryptoServiceSha384GetContextSize
  Sha384GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Init
  Sha384Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Duplicate
  Sha384Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Update
  Sha384Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384Final
  Sha384Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha384HashAll
  Sha384HashAll,
 #else
  NULL,
 #endif
  // SHA512 functions
 #if _PCD_VALUE_PcdCryptoServiceSha512GetContextSize
  Sha512GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Init
  Sha512Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Duplicate
  Sha512Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Update
  Sha512Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512Final
  Sha512Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSha512HashAll
  Sha512HashAll,
 #else
  NULL,
 #endif
  // PARALLELHASH256 functions
 #if _PCD_VALUE_PcdCryptoServiceParallelHash256HashAll
  ParallelHash256HashAll,
 #else
  NULL,
 #endif
  // AEADAESGCM functions
 #if _PCD_VALUE_PcdCryptoServiceAeadAesGcmEncrypt
  AeadAesGcmEncrypt,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAeadAesGcmDecrypt
  AeadAesGcmDecrypt,
 #else
  NULL,
 #endif
  // X509 functions
 #if _PCD_VALUE_PcdCryptoServiceX509GetSubjectName
  X509GetSubjectName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetCommonName
  X509GetCommonName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetOrganizationName
  X509GetOrganizationName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509VerifyCert
  X509VerifyCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificate
  X509ConstructCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificateStackV
  X509ConstructCertificateStackV,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509ConstructCertificateStack
  X509ConstructCertificateStack,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509Free
  X509Free,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509StackFree
  X509StackFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetTBSCert
  X509GetTBSCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetVersion
  X509GetVersion,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetSerialNumber
  X509GetSerialNumber,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetIssuerName
  X509GetIssuerName,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetSignatureAlgorithm
  X509GetSignatureAlgorithm,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetExtensionData
  X509GetExtensionData,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetValidity
  X509GetValidity,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509FormatDateTime
  X509FormatDateTime,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetKeyUsage
  X509GetKeyUsage,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetExtendedKeyUsage
  X509GetExtendedKeyUsage,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509VerifyCertChain
  X509VerifyCertChain,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetCertFromCertChain
  X509GetCertFromCertChain,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceX509GetExtendedBasicConstraints
  X509GetExtendedBasicConstraints,
 #else
  NULL,
 #endif
  // ASN1 functions
 #if _PCD_VALUE_PcdCryptoServiceAsn1GetTag
  Asn1GetTag,
 #else
  NULL,
 #endif
  // BIGNUM functions
 #if _PCD_VALUE_PcdCryptoServiceBigNumInit
  BigNumInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumFromBin
  BigNumFromBin,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumToBin
  BigNumToBin,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumFree
  BigNumFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumAdd
  BigNumAdd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumSub
  BigNumSub,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumMod
  BigNumMod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumExpMod
  BigNumExpMod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumInverseMod
  BigNumInverseMod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumDiv
  BigNumDiv,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumMulMod
  BigNumMulMod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumCmp
  BigNumCmp,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumBits
  BigNumBits,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumBytes
  BigNumBytes,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumIsWord
  BigNumIsWord,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumIsOdd
  BigNumIsOdd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumCopy
  BigNumCopy,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumRShift
  BigNumRShift,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumConstTime
  BigNumConstTime,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumSqrMod
  BigNumSqrMod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumNewContext
  BigNumNewContext,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumContextFree
  BigNumContextFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumSetUint
  BigNumSetUint,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceBigNumAddMod
  BigNumAddMod,
 #else
  NULL,
 #endif
  // TDES functions
  // AES functions
 #if _PCD_VALUE_PcdCryptoServiceAesGetContextSize
  AesGetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesInit
  AesInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesCbcEncrypt
  AesCbcEncrypt,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceAesCbcDecrypt
  AesCbcDecrypt,
 #else
  NULL,
 #endif
  // ARC4 functions
  // SM3 functions
 #if _PCD_VALUE_PcdCryptoServiceSm3GetContextSize
  Sm3GetContextSize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Init
  Sm3Init,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Duplicate
  Sm3Duplicate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Update
  Sm3Update,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3Final
  Sm3Final,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceSm3HashAll
  Sm3HashAll,
 #else
  NULL,
 #endif
  // HKDF functions
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha256ExtractAndExpand
  HkdfSha256ExtractAndExpand,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha256Extract
  HkdfSha256Extract,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha256Expand
  HkdfSha256Expand,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha384ExtractAndExpand
  HkdfSha384ExtractAndExpand,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha384Extract
  HkdfSha384Extract,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceHkdfSha384Expand
  HkdfSha384Expand,
 #else
  NULL,
 #endif
  // TLS functions
 #if _PCD_VALUE_PcdCryptoServiceTlsInitialize
  TlsInitialize,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtxFree
  TlsCtxFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtxNew
  TlsCtxNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsFree
  TlsFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsNew
  TlsNew,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsInHandshake
  TlsInHandshake,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsDoHandshake
  TlsDoHandshake,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsHandleAlert
  TlsHandleAlert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCloseNotify
  TlsCloseNotify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtrlTrafficOut
  TlsCtrlTrafficOut,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsCtrlTrafficIn
  TlsCtrlTrafficIn,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsRead
  TlsRead,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsWrite
  TlsWrite,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsShutdown
  TlsShutdown,
 #else
  NULL,
 #endif
  // TLSSET functions
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVersion
  TlsSetVersion,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetConnectionEnd
  TlsSetConnectionEnd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCipherList
  TlsSetCipherList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCompressionMethod
  TlsSetCompressionMethod,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVerify
  TlsSetVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetVerifyHost
  TlsSetVerifyHost,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetSessionId
  TlsSetSessionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCaCertificate
  TlsSetCaCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetHostPublicCert
  TlsSetHostPublicCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetHostPrivateKeyEx
  TlsSetHostPrivateKeyEx,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetHostPrivateKey
  TlsSetHostPrivateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetCertRevocationList
  TlsSetCertRevocationList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetSignatureAlgoList
  TlsSetSignatureAlgoList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsSetEcCurve
  TlsSetEcCurve,
 #else
  NULL,
 #endif
  // TLSGET functions
 #if _PCD_VALUE_PcdCryptoServiceTlsGetVersion
  TlsGetVersion,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetConnectionEnd
  TlsGetConnectionEnd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCurrentCipher
  TlsGetCurrentCipher,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCurrentCompressionId
  TlsGetCurrentCompressionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetVerify
  TlsGetVerify,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetSessionId
  TlsGetSessionId,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetClientRandom
  TlsGetClientRandom,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetServerRandom
  TlsGetServerRandom,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetKeyMaterial
  TlsGetKeyMaterial,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCaCertificate
  TlsGetCaCertificate,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetHostPublicCert
  TlsGetHostPublicCert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetHostPrivateKey
  TlsGetHostPrivateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetCertRevocationList
  TlsGetCertRevocationList,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceTlsGetExportKey
  TlsGetExportKey,
 #else
  NULL,
 #endif
  // EC functions
 #if _PCD_VALUE_PcdCryptoServiceEcGroupInit
  EcGroupInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGroupGetCurve
  EcGroupGetCurve,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGroupGetOrder
  EcGroupGetOrder,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGroupFree
  EcGroupFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointInit
  EcPointInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointDeInit
  EcPointDeInit,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointGetAffineCoordinates
  EcPointGetAffineCoordinates,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointSetAffineCoordinates
  EcPointSetAffineCoordinates,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointAdd
  EcPointAdd,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointMul
  EcPointMul,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointInvert
  EcPointInvert,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointIsOnCurve
  EcPointIsOnCurve,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointIsAtInfinity
  EcPointIsAtInfinity,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointEqual
  EcPointEqual,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcPointSetCompressedCoordinates
  EcPointSetCompressedCoordinates,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcNewByNid
  EcNewByNid,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcFree
  EcFree,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGenerateKey
  EcGenerateKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGetPubKey
  EcGetPubKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcDhComputeKey
  EcDhComputeKey,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGetPrivateKeyFromPem
  EcGetPrivateKeyFromPem,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcGetPublicKeyFromX509
  EcGetPublicKeyFromX509,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcDsaSign
  EcDsaSign,
 #else
  NULL,
 #endif
 #if _PCD_VALUE_PcdCryptoServiceEcDsaVerify
  EcDsaVerify,
 #else
  NULL,
 #endif
};
// AUTOGEN ENDS
// ****************************************************************************
// MU_CHANGE [END]
