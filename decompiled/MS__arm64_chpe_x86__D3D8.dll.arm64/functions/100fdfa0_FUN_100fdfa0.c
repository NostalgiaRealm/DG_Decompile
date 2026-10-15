/*
 * FUN_100fdfa0 at 100fdfa0
 * undefined FUN_100fdfa0(void)
 * Address ranges: 100fdfa0-100fe043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100fdfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_10134074)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_10134110)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_100fece0(iVar1);
    uVar3 = FUN_100fdee8(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_100fed00(uVar2);
  }
  return 0;
}

