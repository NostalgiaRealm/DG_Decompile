/*
 * FUN_1010a4c8 at 1010a4c8
 * undefined FUN_1010a4c8(void)
 * Address ranges: 1010a4c8-1010a79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010a4c8(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  code *extraout_w11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_1 = param_1 + param_2 * 0x1510;
  piVar1 = (int *)(param_1 + 0x820);
  puVar2 = (uint *)(param_1 + 0x828);
  uVar13 = 0;
  uVar9 = *puVar2;
  uVar14 = 0x40;
  if (param_3[3] == 0) {
    uVar14 = 0;
  }
  uVar14 = (ulonglong)
           (param_3[1] & 1U | (param_3[2] & 0xfU | (uint)*(ushort *)(param_3 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_3[0xb] & 0xfU | (param_3[10] & 0xfU | (param_3[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_3[7] & 0xfU | (param_3[6] & 0xfU | (param_3[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_3[8] & 0xf) << 0x10 | (ulonglong)(uint)param_3[0xc] & 0xf)
           << 0x20 | uVar14 | (ulonglong)(*param_3 != 0);
  if (uVar9 != 0) {
    uVar10 = 0;
    uVar8 = uVar9;
    do {
      uVar13 = uVar8 + uVar10 >> 1;
      uVar12 = *(ulonglong *)(*piVar1 + uVar13 * 0x40);
      uVar6 = uVar13;
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar10 = uVar13 + 1;
        uVar13 = uVar10;
        uVar6 = uVar8;
      }
      uVar8 = uVar6;
    } while (uVar8 != uVar10);
    if ((uVar13 != uVar9) && (*(ulonglong *)(*piVar1 + uVar13 * 0x40) == uVar14)) goto LAB_1010a710;
  }
  puVar3 = (uint *)(param_1 + 0x824);
  uVar10 = *puVar3;
  if (uVar9 == uVar10) {
    iVar11 = uVar10 << 7;
    if ((uVar10 & 0x7fffffff) >> 0x19 != 0) {
      iVar11 = -1;
    }
    iVar11 = FUN_101322b0(iVar11);
    if (iVar11 != 0) {
      uVar9 = 0;
      if (*puVar3 != 0) {
        do {
          puVar4 = (undefined8 *)(*piVar1 + uVar9 * 0x40);
          puVar5 = (undefined8 *)(iVar11 + uVar9 * 0x40);
          uVar9 = uVar9 + 1;
          uVar17 = *puVar4;
          uVar16 = puVar4[3];
          uVar15 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar17;
          puVar5[3] = uVar16;
          puVar5[2] = uVar15;
          uVar17 = puVar4[4];
          uVar16 = puVar4[7];
          uVar15 = puVar4[6];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar17;
          puVar5[7] = uVar16;
          puVar5[6] = uVar15;
        } while (uVar9 < *puVar3);
      }
      FUN_101322d0(*piVar1);
      *piVar1 = iVar11;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar9 = *puVar2; uVar13 < uVar9; uVar9 = uVar9 - 1) {
    puVar4 = (undefined8 *)(*piVar1 + uVar9 * 0x40);
    puVar4[1] = puVar4[-7];
    *puVar4 = puVar4[-8];
    puVar4[3] = puVar4[-5];
    puVar4[2] = puVar4[-6];
    puVar4[5] = puVar4[-3];
    puVar4[4] = puVar4[-4];
    puVar4[7] = puVar4[-1];
    puVar4[6] = puVar4[-2];
  }
  FUN_1010b3a8(piVar1,uVar13,uVar14,param_3);
  *puVar2 = *puVar2 + 1;
LAB_1010a710:
  iVar11 = *(int *)(*piVar1 + uVar13 * 0x40 + 0x3c);
  if ((iVar11 != *(int *)(param_1 + 0x534)) || (param_4 != *(int *)(param_1 + 0x538))) {
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7,iVar11,param_4);
    *(int *)(param_1 + 0x534) = iVar11;
    *(int *)(param_1 + 0x538) = param_4;
  }
  return;
}

