/*
 * FUN_1801ff3a8 at 1801ff3a8
 * undefined FUN_1801ff3a8(void)
 * Address ranges: 1801ff3a8-1801ff69f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ff3a8(longlong param_1,ulonglong param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  int *local_50 [2];
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar12 = 0;
  uVar3 = *(uint *)(param_1 + 0xc04);
  uVar14 = (ulonglong)
           (param_3[1] & 1U | (param_3[2] & 0xfU | (uint)*(ushort *)(param_3 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_3[0xb] & 0xfU | (param_3[10] & 0xfU | (param_3[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_3[7] & 0xfU | (param_3[6] & 0xfU | (param_3[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_3[8] & 0xf) << 0x10 | (ulonglong)(uint)param_3[0xc] & 0xf)
           << 0x20 | (ulonglong)(param_3[3] != 0) << 6 | (ulonglong)(*param_3 != 0);
  local_50[0] = param_3;
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar8 = uVar3;
    do {
      uVar4 = uVar8 + uVar9 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48);
      if (uVar10 <= uVar14) {
        if (uVar14 <= uVar10) break;
        uVar9 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if (((uint)uVar12 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48) == uVar14))
    goto LAB_1801ff634;
  }
  if (uVar3 == *(uint *)(param_1 + 0xc00)) {
    uVar10 = CONCAT44(0,*(uint *)(param_1 + 0xc00) << 1);
    lVar13 = uVar10 * 0x48;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar10;
    if (SUB168(auVar17 * ZEXT816(0x48),8) != 0) {
      lVar13 = -1;
    }
    lVar13 = FUN_1802229a8(lVar13);
    if (lVar13 != 0) {
      uVar10 = 0;
      if (*(int *)(param_1 + 0xc00) != 0) {
        do {
          uVar3 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar10 * 0x48);
          puVar2 = (undefined8 *)(lVar13 + uVar10 * 0x48);
          uVar7 = *puVar1;
          uVar16 = puVar1[3];
          uVar15 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar7;
          puVar2[3] = uVar16;
          puVar2[2] = uVar15;
          uVar7 = puVar1[4];
          uVar16 = puVar1[7];
          uVar15 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar7;
          puVar2[7] = uVar16;
          puVar2[6] = uVar15;
          puVar2[8] = puVar1[8];
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0xc00));
      }
      FUN_1802229d8(*(longlong *)(param_1 + 0xbf8));
      *(longlong *)(param_1 + 0xbf8) = lVar13;
      *(int *)(param_1 + 0xc00) = *(int *)(param_1 + 0xc00) << 1;
    }
  }
  piVar6 = local_50[0];
  uVar10 = (ulonglong)*(uint *)(param_1 + 0xc04);
  while ((uint)uVar12 < (uint)uVar10) {
    uVar11 = (ulonglong)((uint)uVar10 - 1);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar10 * 0x48);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xbf8) + uVar11 * 0x48);
    uVar7 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    uVar7 = puVar2[4];
    uVar16 = puVar2[7];
    uVar15 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar7;
    puVar1[7] = uVar16;
    puVar1[6] = uVar15;
    puVar1[8] = puVar2[8];
    uVar10 = uVar11;
  }
  local_50[0] = (int *)0x0;
  *(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48) = uVar14;
  uVar7 = *(undefined8 *)piVar6;
  uVar16 = *(undefined8 *)(piVar6 + 6);
  uVar15 = *(undefined8 *)(piVar6 + 4);
  lVar13 = *(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48;
  *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(piVar6 + 2);
  *(undefined8 *)(lVar13 + 8) = uVar7;
  *(undefined8 *)(lVar13 + 0x20) = uVar16;
  *(undefined8 *)(lVar13 + 0x18) = uVar15;
  uVar7 = *(undefined8 *)(piVar6 + 8);
  *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(piVar6 + 10);
  *(undefined8 *)(lVar13 + 0x28) = uVar7;
  *(int *)(lVar13 + 0x38) = piVar6[0xc];
  auVar17 = (*(code *)puVar5)(0x180224000);
  (*extraout_x11)(auVar17._0_8_,auVar17._8_8_,local_50);
  *(int **)(*(longlong *)(param_1 + 0xbf8) + uVar12 * 0x48 + 0x40) = local_50[0];
  *(int *)(param_1 + 0xc04) = *(int *)(param_1 + 0xc04) + 1;
LAB_1801ff634:
  lVar13 = *(longlong *)(uVar12 * 0x48 + *(longlong *)(param_1 + 0xbf8) + 0x40);
  if ((lVar13 != *(longlong *)(param_1 + 0x6e8)) || (param_4 != *(int *)(param_1 + 0x6f0))) {
    uVar7 = (*(code *)puVar5)(0x180224000);
    (*extraout_x11_00)(uVar7,lVar13,param_4);
    *(longlong *)(param_1 + 0x6e8) = lVar13;
    *(int *)(param_1 + 0x6f0) = param_4;
  }
  return;
}

