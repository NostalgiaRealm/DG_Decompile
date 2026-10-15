/*
 * FUN_10060ae7 at 10060ae7
 * uint * __stdcall FUN_10060ae7(uint * param_1)
 * Address ranges: 10060ae7-10060b12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10060ae7(uint *param_1)

{
  short sVar1;
  
  sVar1 = (short)*param_1;
  while (sVar1 == -2) {
    param_1 = param_1 + (*param_1 >> 0x10) + 1;
    sVar1 = (short)*param_1;
  }
  return param_1;
}

