/*
 * FUN_10076b60 at 10076b60
 * undefined FUN_10076b60(void)
 * Address ranges: 10076b60-10076c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10076b60(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  uint uVar6;
  
  iVar3 = *(int *)(param_2 + 0xd78);
  if (iVar3 != -1) {
    iVar4 = *(int *)(param_1 + *(int *)(param_2 + 8) * 0x16c0 + 0x1c9c);
    iVar1 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_1009d03c)(iVar1);
    FUN_1005e298(iVar4,iVar3,2);
    (*(code *)PTR_FUN_1009d090)(iVar1);
    uVar6 = 0;
    do {
      FUN_10059ad8(*(undefined4 *)(param_1 + 0x172c0),*(undefined4 *)(param_2 + 0xd70 + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    uVar6 = 0;
    do {
      puVar2 = (undefined4 *)(param_2 + 0xd70 + uVar6 * 4);
      FUN_1005d260(param_1,*puVar2);
      uVar6 = uVar6 + 1;
      *puVar2 = 0;
    } while (uVar6 < 2);
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar5);
    *(undefined4 *)(param_2 + 0xd6c) = 0;
    *(int *)(param_2 + 0xd78) = -1;
  }
  return;
}

