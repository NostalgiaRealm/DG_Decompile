/*
 * FUN_1007c9b8 at 1007c9b8
 * undefined FUN_1007c9b8(void)
 * Address ranges: 1007c9b8-1007ca67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007c9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_100913c0(0x968);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_1007c2f8(iVar1,param_1,param_2,param_3,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_1007ca68(iVar1);
    if ((uVar2 & 1) != 0) {
      return iVar1;
    }
    FUN_1007c4b0(iVar1);
    FUN_10091460(iVar1,0x968);
  }
  return 0;
}

