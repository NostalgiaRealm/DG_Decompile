/*
 * FUN_100909d0 at 100909d0
 * undefined FUN_100909d0(void)
 * Address ranges: 100909d0-10090a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100909d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100ba0a4)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_100ba140)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_100914b0(iVar1);
    uVar3 = FUN_10090918(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_100914d0(uVar2);
  }
  return 0;
}

