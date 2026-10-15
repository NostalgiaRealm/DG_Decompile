/*
 * FUN_1800a1ecc at 1800a1ecc
 * undefined __fastcall FUN_1800a1ecc(longlong param_1, ulonglong param_2, RECT * param_3)
 * Address ranges: 1800a1ecc-1800a1ef6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a1ecc(longlong param_1,ulonglong param_2,RECT *param_3)

{
  LPRECT lprcDst;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lprcDst = (LPRECT)((param_2 & 0xffffffff) * 0x20 + *(longlong *)(param_1 + 0x1c8) + 0x10);
    UnionRect(lprcDst,lprcDst,param_3);
  }
  return;
}

