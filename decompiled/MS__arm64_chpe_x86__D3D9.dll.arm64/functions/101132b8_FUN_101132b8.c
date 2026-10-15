/*
 * FUN_101132b8 at 101132b8
 * undefined FUN_101132b8(void)
 * Address ranges: 101132b8-10113367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_101132b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_101321c0(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_10112bf8(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_10113368(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_10112db0(iVar1);
    FUN_10132260(iVar1,0x968);
  }
  return 0;
}

