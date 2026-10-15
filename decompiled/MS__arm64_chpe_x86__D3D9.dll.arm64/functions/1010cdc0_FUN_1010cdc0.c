/*
 * FUN_1010cdc0 at 1010cdc0
 * undefined FUN_1010cdc0(void)
 * Address ranges: 1010cdc0-1010cf5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010cdc0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  code *extraout_w11;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(1);
  }
  iVar5 = *(int *)(param_1 + 0x2c8);
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_1016c07c)(iVar5);
    *(int *)(param_1 + 0x2c8) = 0;
  }
  piVar1 = (int *)(param_1 + 0x2a4);
  if (*piVar1 != 0) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x2dc + uVar6 * 0x38);
      if (iVar5 != 0) {
        iVar4 = param_1 + uVar6 * 0x38;
        (*(code *)PTR_FUN_1016c108)(iVar5,1);
        *(undefined1 *)(iVar4 + 0x311) = 1;
        puVar2 = (undefined4 *)(iVar4 + 0x2dc);
        puVar3 = (undefined4 *)(iVar4 + 0x2ec);
        (*(code *)PTR_FUN_1016c10c)(*puVar3,*puVar2,0xffffffff,0);
        (*(code *)PTR_FUN_1016c048)(*puVar3);
        *puVar3 = 0;
        (*(code *)PTR_FUN_1016c06c)(iVar4 + 0x2f0);
        (*(code *)PTR_FUN_1016c048)(*puVar2);
        *puVar2 = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    (*(code *)PTR_FUN_1016c07c)(*piVar1);
    *piVar1 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x2b8);
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_1016c07c)(iVar5);
    *(int *)(param_1 + 0x2b8) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x29c);
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_1016c07c)(iVar5);
    *(int *)(param_1 + 0x29c) = 0;
  }
  return;
}

