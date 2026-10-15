/*
 * FUN_1801c1a60 at 1801c1a60
 * undefined FUN_1801c1a60(void)
 * Address ranges: 1801c1a60-1801c1aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c1a60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1801042e0(param_1 + 8);
  if (iVar2 == 1) {
    lVar1 = 0x6844;
    if (*(longlong *)(param_1 + -0x80) != 0) {
      lVar1 = *(longlong *)(param_1 + -0x80) + 0xc;
    }
    FUN_1801042e0(lVar1);
  }
  return iVar2;
}

