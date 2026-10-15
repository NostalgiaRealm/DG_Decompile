/*
 * FUN_1005f678 at 1005f678
 * undefined FUN_1005f678(void)
 * Address ranges: 1005f678-1005f727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005f678(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_10079f50(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_1005efb8(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_1005f728(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_1005f170(iVar1);
    FUN_10079ff0(iVar1,0x968);
  }
  return 0;
}

