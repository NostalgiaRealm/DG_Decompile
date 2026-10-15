/*
 * FUN_1001c140 at 1001c140
 * undefined FUN_1001c140(void)
 * Address ranges: 1001c140-1001c317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c140(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar10;
  int *piVar11;
  
  *param_1 = &PTR_FUN_1009c780;
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar5 = param_1[3];
  puVar1 = (uint *)(iVar5 + 8);
  uVar6 = *puVar1;
  if (uVar6 != 0) {
    iVar7 = param_1[1];
    uVar10 = 0;
    piVar2 = (int *)(iVar7 + param_1[2] * 0x1510 + 0x7f0);
    piVar3 = (int *)(iVar7 + param_1[2] * 0x1510 + 0x7f8);
    if (uVar6 == 0) {
      piVar9 = (int *)&DAT_00000008;
      piVar11 = (int *)0xc;
      goto LAB_1001c20c;
    }
    do {
      iVar4 = *(int *)(iVar5 + 4) + uVar10 * 0x18;
      piVar9 = (int *)(iVar4 + 0x10);
      piVar11 = (int *)(iVar4 + 0x14);
LAB_1001c20c:
      iVar4 = *piVar9;
      if (iVar4 != 0) {
        (*(code *)PTR_FUN_100a1014)(iVar7 + 0x4a0);
        if (iVar4 == *piVar2) {
          *piVar2 = 0;
        }
        (*pcVar8)();
        (*extraout_w11)(iVar4);
        (*(code *)PTR_FUN_100a1044)(iVar7 + 0x4a0);
      }
      iVar4 = *piVar11;
      if (iVar4 != 0) {
        (*(code *)PTR_FUN_100a1014)(iVar7 + 0x4a0);
        if (iVar4 == *piVar3) {
          *piVar3 = 0;
        }
        (*pcVar8)();
        (*extraout_w11_00)(iVar4);
        (*(code *)PTR_FUN_100a1044)(iVar7 + 0x4a0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *puVar1);
  }
  FUN_10081dc0(param_1[0x18]);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *param_1 = &PTR_FUN_1009c778;
  param_1[4] = &PTR_FUN_1009c934;
  return;
}

