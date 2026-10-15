/*
 * FUN_1801e6020 at 1801e6020
 * undefined FUN_1801e6020(void)
 * Address ranges: 1801e6020-1801e606b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e6020(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1801042e0(param_1 + 8);
  if (iVar2 == 1) {
    lVar1 = 0x6844;
    if (*(longlong *)(param_1 + -0x100) != 0) {
      lVar1 = *(longlong *)(param_1 + -0x100) + 0xc;
    }
    FUN_1801042e0(lVar1);
  }
  return iVar2;
}

