/*
 * FUN_1801cbf60 at 1801cbf60
 * undefined FUN_1801cbf60(void)
 * Address ranges: 1801cbf60-1801cc23f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cbf60(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  
  uVar17 = (ulonglong)param_4;
  uVar13 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x78)) && (param_2 + param_4 <= *(uint *)(param_1 + 0x78))) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar9 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar9 = true;
        iVar12 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar12 == 0) {
          FUN_1801085c8();
        }
      }
      if (param_2 < 0x10) {
        if (0x10 < param_2 + param_4) {
          uVar17 = (ulonglong)(0x10 - param_2);
        }
      }
      else {
        uVar17 = 0;
      }
      uVar19 = uVar17 >> 1;
      uVar18 = (uint)uVar19;
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar14 = FUN_1801dbb48(param_1 + 0x80,*(undefined8 *)(param_1 + 0x5c58));
        uVar13 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        lVar1 = param_1 + (ulonglong)param_2 * 4;
        puVar10 = (undefined8 *)(lVar1 + 0x158);
        puVar11 = param_3;
        uVar8 = uVar18;
        while (uVar8 != 0) {
          uVar8 = (int)uVar19 - 1;
          uVar19 = (ulonglong)uVar8;
          *puVar10 = *puVar11;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        if ((uVar17 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
        }
        puVar10 = (undefined8 *)(lVar1 + 0x4af8);
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar10 = *param_3;
          puVar10 = puVar10 + 1;
          param_3 = param_3 + 1;
        }
        if ((uVar17 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)param_3;
        }
        uVar18 = param_2 + (int)uVar17;
        if (lVar14 != 0) {
          psVar2 = (short *)(lVar14 + 0x840);
          sVar4 = *psVar2;
          uVar17 = 0;
          while ((sVar4 != -1 && (uVar5 = psVar2[uVar17], uVar5 <= uVar18))) {
            uVar6 = psVar2[(int)uVar17 + 1];
            if (param_2 <= uVar6) {
              uVar8 = param_2;
              if (param_2 <= uVar5) {
                uVar8 = (uint)uVar5;
              }
              uVar3 = (uint)uVar6;
              if (uVar18 <= uVar6) {
                uVar3 = uVar18;
              }
              puVar10 = (undefined8 *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)uVar8 * 4 + 0x49e8)
              ;
              puVar11 = (undefined8 *)(param_1 + (ulonglong)(uVar8 << 2) * 4 + 0x4af8);
              for (uVar7 = uVar3 - uVar8 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              if ((uVar3 - uVar8 & 1) != 0) {
                *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
              }
            }
            uVar17 = (ulonglong)((int)uVar17 + 2);
            sVar4 = psVar2[uVar17];
          }
        }
        if (*(char *)(param_1 + -0x6817) == '\0') {
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar16 = extraout_x11;
        }
        else {
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar16 = extraout_x11_00;
        }
        (*pcVar16)(uVar15,param_2);
        FUN_1802243a0(uVar13);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)param_2 * 4 + 0x4ffc);
        while (uVar18 != 0) {
          uVar18 = (int)uVar19 - 1;
          uVar19 = (ulonglong)uVar18;
          *puVar10 = *param_3;
          puVar10 = puVar10 + 1;
          param_3 = param_3 + 1;
        }
        if ((uVar17 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)param_3;
        }
        if ((int)uVar17 != 0) {
          FUN_180222c50(param_1 + (ulonglong)param_2 + 600,1,uVar17);
        }
      }
      if (bVar9) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    uVar13 = 0;
  }
  return uVar13;
}

