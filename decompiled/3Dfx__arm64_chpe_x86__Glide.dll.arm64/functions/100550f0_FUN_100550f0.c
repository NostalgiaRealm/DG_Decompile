/*
 * FUN_100550f0 at 100550f0
 * undefined FUN_100550f0(void)
 * Address ranges: 100550f0-10055193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100550f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_1009d040)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_1009d0d8)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_1007a4c0(iVar1);
    uVar3 = FUN_10055038(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_1007a4e0(uVar2);
  }
  return 0;
}

