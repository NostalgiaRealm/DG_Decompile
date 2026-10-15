/*
 * FUN_100cc488 at 100cc488
 * undefined4 __fastcall FUN_100cc488(int * param_1)
 * Address ranges: 100cc488-100cc4ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100cc488(int *param_1)

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

