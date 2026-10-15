/*
 * FUN_10131570 at 10131570
 * undefined FUN_10131570(void)
 * Address ranges: 10131570-10131613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10131570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_1016c078)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_1016c110)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_101322b0(iVar1);
    uVar3 = FUN_101314b8(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_101322d0(uVar2);
  }
  return 0;
}

