/*
 * FUN_100a9bb9 at 100a9bb9
 * undefined4 __fastcall FUN_100a9bb9(int * param_1)
 * Address ranges: 100a9bb9-100a9bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100a9bb9(int *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(*param_1 + 0xd2);
  if (iVar1 == 2) {
    return 1;
  }
  if (iVar1 == 3) {
    uStack_4 = 2;
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    uStack_4 = 3;
  }
  return uStack_4;
}

