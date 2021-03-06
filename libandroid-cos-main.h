/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package signer/mobile */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif

extern char* ios_genKey();
extern char* ios_genKeyFromSeed(char* seedHash);
extern char* ios_privateKeyToAddr(char* base64PrivateKey);
extern char* ios_hexToAddr(char* sHex);
extern char* ios_transfer(char* sJson);
extern char* ios_transfer1(char* sJson);
extern char* ios_getMapper(char* sJson);
extern char* ios_mapAccount(char* mainNetPrivateKey, char* base64PrivateKey);
extern char* ios_getBalance(char* contractAddr, char* hexAddr);
extern char* ios_tokenInfo(char* contractAddr);
extern char* ios_deposit(char* key, char* mainNetPrivateKey, char* tokenAmount);
extern char* ios_withdrawal(char* key, char* base64PrivateKey, char* mainNetPrivateKey, char* tokenAmount);
extern char* ios_newContracts(char* sMainNetCoin, char* sLoomCoin);
extern char* ios_eth_getTokenBalance(char* url, char* contractAddr, char* addr);
extern char* ios_eth_getETHBalance(char* url, char* addr);
extern char* ios_eth_allowance(char* url, char* contractAddr, char* addr);
extern char* ios_eth_swapApprove(char* contractAddr, char* mainNetPrivateKey);
extern char* ios_eth_getContractTokenInfo(char* url, char* contract);
extern char* ios_gateway_init();
extern char* ios_ds_init();
extern char* ios_eth_transfer(char* url, char* json);
extern char* ios_eth_token_transfer(char* contractAddr, char* mainNetPrivateKey, char* to, char* amount);
extern char* ios_commitcalltx(char* contract, char* privateKey, void* input, int len);
extern char* ios_set_contract(char* contract);
extern char* ios_ds_addStake(char* mainPrivateKey, char* sender, char* amount);
extern char* ios_ds_stakeOf(char* account);
extern char* ios_ds_coin_transfer(char* base64PrivateKey, char* to, char* amount);
extern char* ios_ds_coin_balance(char* account);

#ifdef __cplusplus
}
#endif
