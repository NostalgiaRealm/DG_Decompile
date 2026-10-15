/*
 * FUN_100ab520 at 100ab520
 * undefined FUN_100ab520(void)
 * Address ranges: 100ab520-100ab77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab520(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar10;
  uint uVar11;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = param_1 + 6;
  if ((*piVar1 != 0) && (uVar10 = 0, param_3 != 0)) {
    do {
      uVar11 = 0;
      if (param_2 != 0) {
        do {
          iVar7 = uVar11 + param_2 * uVar10;
          iVar4 = *(int *)(*piVar1 + iVar7 * 0x1c);
          if (iVar4 != 0) {
            FUN_101097e0(*param_1,param_1[1],iVar4);
          }
          iVar4 = *(int *)(*piVar1 + iVar7 * 0x1c + 4);
          if (iVar4 != 0) {
            iVar5 = *param_1;
            iVar6 = param_1[1];
            iVar2 = iVar5 + 0x4a0;
            (*(code *)PTR_FUN_1016c074)(iVar2);
            piVar3 = (int *)(iVar5 + iVar6 * 0x1510 + 0x80c);
            if (iVar4 == *piVar3) {
              *piVar3 = 0;
            }
            (*pcVar8)();
            (*extraout_w11)(iVar4);
            (*(code *)PTR_FUN_1016c0c0)(iVar2);
          }
          iVar4 = *(int *)(*piVar1 + iVar7 * 0x1c + 8);
          if (iVar4 != 0) {
            FUN_101097e0(*param_1,param_1[1],iVar4);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < param_2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
  }
  FUN_101322d0(*piVar1);
  *piVar1 = 0;
  iVar4 = param_1[7];
  if (iVar4 != 0) {
    FUN_10109890(*param_1,param_1[1],iVar4);
    param_1[7] = 0;
  }
  iVar4 = param_1[5];
  if (iVar4 != 0) {
    FUN_10109890(*param_1,param_1[1],iVar4);
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    uVar9 = (*pcVar8)();
    (*extraout_w11_00)(uVar9);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    uVar9 = (*pcVar8)();
    (*extraout_w11_01)(uVar9);
    param_1[4] = 0;
  }
  return;
}

