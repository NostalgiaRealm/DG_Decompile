/*
 * FUN_10083170 at 10083170
 * undefined FUN_10083170(void)
 * Address ranges: 10083170-10083213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10083170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a8040)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_100a80d8)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_10083400(iVar1);
    uVar3 = FUN_100830b8(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_10083420(uVar2);
  }
  return 0;
}

