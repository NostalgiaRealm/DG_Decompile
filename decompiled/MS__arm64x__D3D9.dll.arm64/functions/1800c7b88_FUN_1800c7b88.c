/*
 * FUN_1800c7b88 at 1800c7b88
 * undefined FUN_1800c7b88(void)
 * Address ranges: 1800c7b88-1800c7bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c7b88(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1800015a0(param_1 + 8);
  if (iVar2 == 1) {
    lVar1 = 0x6844;
    if (*(longlong *)(param_1 + -0x50) != 0) {
      lVar1 = *(longlong *)(param_1 + -0x50) + 0xc;
    }
    FUN_1800015a0(lVar1);
  }
  return iVar2;
}

