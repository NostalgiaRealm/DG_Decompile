/*
 * FUN_1011d018 at 1011d018
 * undefined FUN_1011d018(void)
 * Address ranges: 1011d018-1011d28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011d018(int param_1,int param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar8;
  int *piVar9;
  code *extraout_w11;
  undefined8 *extraout_w15;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar10 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar11 = 0;
      goto LAB_1011d080;
    }
    do {
      iVar11 = *(int *)(param_1 + 0x50) + uVar10 * 0x10 + 8;
LAB_1011d080:
      uVar6 = (*pcVar5)();
      uVar8 = (*extraout_w11)(uVar6);
      piVar3 = *(int **)(iVar11 + 4);
      iVar13 = -1;
      iVar11 = piVar3[3];
      if (iVar11 != -1) {
        iVar12 = param_2;
        do {
          puVar1 = (undefined8 *)(*piVar3 + iVar11 * 0x20);
          iVar4 = *(int *)(puVar1 + 3);
          if (iVar4 == 0 || (iVar4 == 0 || iVar12 == 0)) break;
          if (uVar8 < (ulonglong)puVar1[2]) {
            iVar4 = *(int *)((int)puVar1 + 0x1c);
            iVar13 = iVar11;
          }
          else {
            if ((iVar4 == param_3) && (param_4[1] == 0)) {
              piVar9 = param_4 + 1;
              piVar7 = (int *)FUN_1011e128(param_1 + 0x3c,puVar1 + 1);
              if (piVar7 != (int *)0x0) {
                *param_4 = (piVar7[1] - (int)*extraout_w15) + (int)*puVar1;
                *piVar9 = *piVar7;
                *(undefined8 *)(param_4 + 2) = *puVar1;
                *(undefined8 *)(param_4 + 4) = *extraout_w15;
              }
            }
            else {
              FUN_1011ce50(param_1,iVar4,*puVar1,puVar1[1]);
            }
            *(int *)(puVar1 + 3) = 0;
            iVar4 = *(int *)((int)puVar1 + 0x1c);
            if ((iVar4 == -1) || (*(int *)(*piVar3 + iVar4 * 0x20 + 0x18) == 0)) {
              if (iVar13 != -1) {
                piVar3[4] = iVar13;
              }
            }
            else {
              piVar9 = piVar3 + 3;
              if (iVar13 != -1) {
                piVar9 = (int *)(*piVar3 + iVar13 * 0x20 + 0x1c);
              }
              *piVar9 = iVar4;
              *(int *)((int)puVar1 + 0x1c) = *(int *)(*piVar3 + piVar3[4] * 0x20 + 0x1c);
              *(int *)(*piVar3 + piVar3[4] * 0x20 + 0x1c) = iVar11;
            }
          }
          iVar11 = iVar4;
          iVar12 = iVar12 + -1;
        } while (iVar11 != -1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x54));
  }
  return;
}

