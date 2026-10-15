/*
 * FUN_1800c21d8 at 1800c21d8
 * undefined FUN_1800c21d8(void)
 * Address ranges: 1800c21d8-1800c221b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c21d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1800015a0(param_1 + 8);
  if (iVar1 == 1) {
    FUN_1800015a0(*(longlong *)(param_1 + 0x18) + 0x6844);
  }
  return iVar1;
}

