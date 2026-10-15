/*
 * FUN_180200e40 at 180200e40
 * undefined FUN_180200e40(void)
 * Address ranges: 180200e40-1802010c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180200e40(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  code *extraout_x11;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (param_2 == 0) {
    return;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_2,&local_70);
  uVar11 = 0;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = ((ulonglong)
            (uStack_6c |
            (uStack_68 | (uStack_64 | (local_5c - 1U | (iStack_58 + -1) * 0x10) << 3) << 3) << 3) &
           0xffffff) << 8 | (ulonglong)local_70;
  if (uVar3 != 0) {
    uVar7 = 0;
    uVar6 = uVar3;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar11 = (ulonglong)uVar4;
      uVar10 = *(ulonglong *)(*param_1 + uVar11 * 0x48);
      if (uVar10 <= uVar12) {
        if (uVar12 <= uVar10) break;
        uVar7 = uVar4 + 1;
        uVar11 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar7);
    if (((uint)uVar11 != uVar3) && (*(ulonglong *)(*param_1 + uVar11 * 0x48) == uVar12))
    goto LAB_18020106c;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar10 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar8 = uVar10 * 0x48;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x48),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar3 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(*param_1 + uVar10 * 0x48);
          puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x48);
          uVar13 = *puVar1;
          uVar15 = puVar1[3];
          uVar14 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar13;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          uVar13 = puVar1[4];
          uVar15 = puVar1[7];
          uVar14 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar13;
          puVar2[7] = uVar15;
          puVar2[6] = uVar14;
          puVar2[8] = puVar1[8];
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar11 < (uint)uVar10) {
    uVar9 = (ulonglong)((uint)uVar10 - 1);
    puVar1 = (undefined8 *)(*param_1 + uVar10 * 0x48);
    puVar2 = (undefined8 *)(*param_1 + uVar9 * 0x48);
    uVar13 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar15;
    puVar1[2] = uVar14;
    uVar13 = puVar2[4];
    uVar15 = puVar2[7];
    uVar14 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar13;
    puVar1[7] = uVar15;
    puVar1[6] = uVar14;
    puVar1[8] = puVar2[8];
    uVar10 = uVar9;
  }
  *(ulonglong *)(*param_1 + uVar11 * 0x48) = uVar12;
  lVar8 = *param_1 + uVar11 * 0x48;
  *(ulonglong *)(lVar8 + 0x10) = CONCAT44(uStack_64,uStack_68);
  *(ulonglong *)(lVar8 + 8) = CONCAT44(uStack_6c,local_70);
  *(ulonglong *)(lVar8 + 0x20) = CONCAT44(uStack_54,iStack_58);
  *(ulonglong *)(lVar8 + 0x18) = CONCAT44(local_5c,uStack_60);
  *(undefined8 *)(lVar8 + 0x30) = uStack_48;
  *(undefined8 *)(lVar8 + 0x28) = local_50;
  *(undefined4 *)(lVar8 + 0x38) = local_40;
  lVar8 = FUN_1802229a8(0x3c0);
  if (lVar8 != 0) {
    FUN_180222c50(lVar8,0,0x3c0);
  }
  *(longlong *)(*param_1 + uVar11 * 0x48 + 0x40) = lVar8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18020106c:
  lVar8 = *(longlong *)(uVar11 * 0x48 + *param_1 + 0x40);
  if (lVar8 != 0) {
    uVar11 = 0;
    do {
      if (*(longlong *)(lVar8 + 0x20 + uVar11 * 0x30) == param_2) {
        *(undefined1 *)(uVar11 * 0x30 + lVar8 + 0x28) = 0;
        return;
      }
      uVar3 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar3;
    } while (uVar3 < 0x14);
  }
  return;
}

