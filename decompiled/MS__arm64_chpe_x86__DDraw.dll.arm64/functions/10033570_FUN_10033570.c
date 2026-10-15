/*
 * FUN_10033570 at 10033570
 * undefined FUN_10033570(void)
 * Address ranges: 10033570-10033753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033570(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar10;
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if (*(uint *)(param_1 + 0x9c) == 0) {
    return;
  }
  uVar10 = 0;
  while( true ) {
    piVar3 = (int *)(*(int *)(param_1 + 0x98) + uVar10 * 0x28);
    piVar5 = (int *)*piVar3;
    if (*piVar5 == param_2) break;
    uVar10 = uVar10 + 1;
    if (*(uint *)(param_1 + 0x9c) <= uVar10) {
      return;
    }
  }
  iVar8 = piVar3[1];
  iVar6 = *(int *)(param_1 + 0x10);
  (*(code *)PTR_FUN_100ba0a0)(iVar6 + 0x4a0);
  if ((iVar8 != 0) && (piVar5[0x358] == param_1 || piVar5[0x358] == 0)) {
    if (*(uint *)(iVar6 + 0x4c8) != 0) {
      uVar9 = 0;
      do {
        if (*(int *)(*(int *)(iVar6 + 0x4c4) + uVar9 * 4) == iVar8) {
          if (uVar9 != 0xffffffff) {
            (*pcVar7)();
            (*extraout_w11_00)(iVar8,piVar5);
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(iVar6 + 0x4c8));
    }
  }
  (*(code *)PTR_FUN_100ba0f0)(iVar6 + 0x4a0);
  iVar8 = FUN_1006f598(*(int *)(param_1 + 0x10),param_2,param_1);
  if (iVar8 == 0) {
    puVar1 = (uint *)(param_1 + 0x9c);
    uVar9 = *puVar1;
    if (uVar10 < uVar9) {
      uVar10 = uVar10 + 1;
      if (uVar10 < uVar9) {
        do {
          uVar2 = uVar10 + 1;
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0x98) + uVar10 * 0x28);
          puVar4[-4] = puVar4[1];
          puVar4[-5] = *puVar4;
          puVar4[-2] = puVar4[3];
          puVar4[-3] = puVar4[2];
          puVar4[-1] = puVar4[4];
          uVar9 = *puVar1;
          uVar10 = uVar2;
        } while (uVar2 < uVar9);
      }
      *puVar1 = uVar9 - 1;
    }
  }
  return;
}

