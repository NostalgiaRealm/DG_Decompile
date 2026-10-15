/*
 * FUN_1801cbca8 at 1801cbca8
 * undefined FUN_1801cbca8(void)
 * Address ranges: 1801cbca8-1801cbf57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cbca8(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar18;
  
  uVar12 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x74)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x74))) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar8 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar8 = true;
        iVar11 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar11 == 0) {
          FUN_1801085c8();
        }
      }
      if (param_2 < 0x10) {
        if (0x10 < param_2 + param_4) {
          param_4 = 0x10 - param_2;
        }
      }
      else {
        param_4 = 0;
      }
      uVar6 = param_4 & 0x3fffffff;
      uVar7 = uVar6 << 1;
      uVar17 = (ulonglong)uVar7;
      uVar15 = (ulonglong)(param_2 << 2);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar13 = FUN_1801dbb48(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        lVar1 = param_1 + (uVar15 & 0xffffffff) * 4;
        uVar16 = (uint)uVar17;
        puVar9 = (undefined8 *)(lVar1 + 0x198);
        puVar10 = param_3;
        while (uVar16 != 0) {
          uVar16 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar16;
          *puVar9 = *puVar10;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar12 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        puVar9 = (undefined8 *)(lVar1 + 0x49f8);
        while (uVar6 != 0) {
          *puVar9 = *param_3;
          uVar7 = uVar7 - 1;
          puVar9 = puVar9 + 1;
          param_3 = param_3 + 1;
          uVar6 = uVar7;
        }
        param_4 = param_2 + param_4;
        if (lVar13 != 0) {
          psVar2 = (short *)(lVar13 + 0x81c);
          sVar3 = *psVar2;
          uVar17 = 0;
          while ((sVar3 != -1 && (uVar4 = psVar2[uVar17], uVar4 <= param_4))) {
            uVar5 = psVar2[(int)uVar17 + 1];
            if (param_2 <= uVar5) {
              uVar6 = param_2;
              if (param_2 <= uVar4) {
                uVar6 = (uint)uVar4;
              }
              uVar7 = (uint)uVar5;
              if (param_4 <= uVar5) {
                uVar7 = param_4;
              }
              uVar16 = uVar7 - uVar6 & 0x3fffffff;
              uVar7 = uVar16 << 1;
              puVar9 = (undefined8 *)
                       (*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar6 << 2) * 4 + 0x48d8);
              puVar10 = (undefined8 *)(param_1 + (ulonglong)(uVar6 << 2) * 4 + 0x49f8);
              while (uVar16 != 0) {
                *puVar10 = *puVar9;
                uVar7 = uVar7 - 1;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
                uVar16 = uVar7;
              }
            }
            uVar17 = (ulonglong)((int)uVar17 + 2);
            sVar3 = psVar2[uVar17];
          }
        }
        if (*(char *)(param_1 + -0x6817) == '\0') {
          uVar14 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar18 = extraout_x11;
        }
        else {
          uVar14 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar18 = extraout_x11_00;
        }
        (*pcVar18)(uVar14,param_2);
        FUN_1802243a0(uVar12);
      }
      else {
        puVar9 = (undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                  + uVar15 * 4 + 0x503c);
        while (uVar6 != 0) {
          uVar6 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar6;
          *puVar9 = *param_3;
          puVar9 = puVar9 + 1;
          param_3 = param_3 + 1;
        }
        if (param_4 != 0) {
          FUN_180222c50(param_1 + (ulonglong)param_2 + 0x268,1,param_4);
        }
      }
      if (bVar8) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    uVar12 = 0;
  }
  return uVar12;
}

