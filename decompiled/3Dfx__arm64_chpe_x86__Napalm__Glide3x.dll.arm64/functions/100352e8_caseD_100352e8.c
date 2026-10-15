/*
 * switchD_10035238::caseD_100352e8 at 100352e8
 * undefined caseD_100352e8(void)
 * Address ranges: 100352e8-1003553f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void switchD_10035238::caseD_100352e8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  FUN_100356a8(param_1);
  FUN_10077098(*(undefined4 *)(param_1 + 0x21c),param_1 + 0x214);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x238);
  uVar10 = 0;
  if (*(uint *)(param_1 + 0x23c) != 0) {
    do {
      iVar8 = *piVar1;
      if (*(int *)(*(int *)(iVar8 + uVar10 * 4) + 4) != 0) {
        uVar9 = 0;
        do {
          if (*(int *)(**(int **)(iVar8 + uVar10 * 4) + uVar9 * 4) != 0) {
            uVar7 = (*pcVar6)();
            (*extraout_w11)(uVar7,1);
          }
          iVar8 = *piVar1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(*(int *)(iVar8 + uVar10 * 4) + 4));
      }
      puVar2 = *(undefined4 **)(iVar8 + uVar10 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_10083420(*puVar2);
        FUN_100833b0(puVar2,0xc);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x23c));
  }
  FUN_10083420(*piVar1);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  iVar8 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x20c);
  iVar4 = *(int *)(iVar8 + 0x3684);
  iVar5 = *(int *)(iVar8 + 0x3680);
  iVar8 = iVar5 + 0x4a0;
  (*(code *)PTR_FUN_100a803c)(iVar8);
  piVar1 = (int *)(iVar5 + iVar4 * 0x1510 + 0x7c4);
  if (iVar3 == *piVar1) {
    *piVar1 = 0;
  }
  (*pcVar6)();
  (*extraout_w11_00)(iVar3);
  (*(code *)PTR_FUN_100a8090)(iVar8);
  iVar8 = *(int *)(param_1 + 0x1e8);
  auVar11 = FUN_1006fe88(*(undefined4 *)(iVar8 + 0x3680),*(undefined4 *)(iVar8 + 0x3684),
                         *(undefined4 *)(param_1 + 0x208));
  FUN_1006fac8(auVar11._0_8_,auVar11._8_8_,2,param_1 + 0x1f8,param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  *(int *)(param_1 + 0x20c) = 0;
  return;
}

