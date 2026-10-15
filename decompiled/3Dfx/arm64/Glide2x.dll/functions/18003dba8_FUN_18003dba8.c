/*
 * FUN_18003dba8 at 18003dba8
 * uint __cdecl FUN_18003dba8(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 18003dba8-18003dbdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003dba8(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (((param_2 & 0xf0) == 0x80) &&
     (uVar1 = *(uint *)(param_1 + ((ulonglong)param_2 & 0xf) * 4 + 0x98) >> 0x12 & 3, uVar1 != 0)) {
    do {
      uVar1 = uVar1 - 1;
      param_3 = param_3 & 0xfffffc00 | param_3 & 3 | (param_3 & 0xff) << 2;
    } while ((char)uVar1 != '\0');
  }
  return param_3;
}

