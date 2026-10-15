/*
 * FUN_10128a80 at 10128a80
 * undefined FUN_10128a80(void)
 * Address ranges: 10128a80-10128ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10128a80(int param_1,int param_2)

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
    (*(code *)PTR_FUN_1016c074)(iVar1);
    FUN_10111aa8(iVar4,iVar3,2);
    (*(code *)PTR_FUN_1016c0c0)(iVar1);
    uVar6 = 0;
    do {
      FUN_1011f160(*(undefined4 *)(param_1 + 0x172c0),*(undefined4 *)(param_2 + 0xd70 + uVar6 * 4),0
                  );
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    uVar6 = 0;
    do {
      puVar2 = (undefined4 *)(param_2 + 0xd70 + uVar6 * 4);
      FUN_101194c0(param_1,*puVar2);
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

