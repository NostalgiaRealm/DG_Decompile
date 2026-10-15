/*
 * FUN_1007dad0 at 1007dad0
 * undefined FUN_1007dad0(void)
 * Address ranges: 1007dad0-1007db73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007dad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a0040)(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_100a00d8)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_1007dd60(iVar1);
    uVar3 = FUN_1007da18(param_1,param_2,param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      return uVar2;
    }
    FUN_1007dd80(uVar2);
  }
  return 0;
}

