/*
 * FUN_100817e8 at 100817e8
 * undefined FUN_100817e8(void)
 * Address ranges: 100817e8-100818eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100817e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1018)(param_1,param_2,&DAT_1009e808);
  if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_FUN_100a1070)(param_1,iVar1), iVar1 != 0)) {
    uVar2 = FUN_10081da0(iVar1);
    iVar1 = (*(code *)PTR_FUN_100a1018)(param_1,param_2,&DAT_1009e808);
    if (iVar1 != 0) {
      iVar3 = (*(code *)PTR_FUN_100a1070)(param_1,iVar1);
      if (((iVar3 != 0) && (iVar1 = (*(code *)PTR_FUN_100a104c)(param_1,iVar1), iVar1 != 0)) &&
         (iVar1 = (*(code *)PTR_FUN_100a1050)(iVar1), iVar1 != 0)) {
        FUN_10081ee0(uVar2,iVar1,iVar3);
        return uVar2;
      }
    }
    FUN_10081dc0(uVar2);
  }
  return 0;
}

