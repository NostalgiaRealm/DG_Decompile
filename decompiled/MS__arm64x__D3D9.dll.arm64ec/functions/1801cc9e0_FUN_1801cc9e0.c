/*
 * FUN_1801cc9e0 at 1801cc9e0
 * undefined FUN_1801cc9e0(void)
 * Address ranges: 1801cc9e0-1801ccca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801cc9e0(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar17;
  longlong lVar18;
  
  lVar14 = 0x8876086c;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 200);
  if ((param_2 < uVar4) && (uVar3 = param_2 + param_4, uVar3 <= uVar4)) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar9 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar9 = true;
        lVar14 = thunk_FUN_1802236e4(DAT_180258900);
        if ((int)lVar14 == 0) {
          lVar14 = FUN_1801085c8();
        }
      }
      if (*(char *)(param_1 + -0x642c) == '\0') {
        if (*(char *)(param_1 + -0x6817) == '\0') {
          lVar14 = FUN_1801dbc18(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
          lVar18 = lVar14;
        }
        else {
          lVar18 = 0;
        }
        lVar1 = param_1 + (ulonglong)(param_2 << 2) * 4;
        param_4 = param_4 & 0x3fffffff;
        uVar8 = param_4 << 1;
        puVar11 = (undefined8 *)(lVar1 + -0x1458);
        uVar4 = uVar8;
        puVar12 = param_3;
        uVar10 = param_4;
        while (uVar10 != 0) {
          *puVar11 = *puVar12;
          uVar4 = uVar4 - 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar10 = uVar4;
        }
        uVar13 = FUN_180224358(lVar14);
        FUN_1802243a0(0x3fc0);
        if (*(char *)(param_1 + -0x6817) == '\0') {
          puVar11 = (undefined8 *)(lVar1 + 0x4ce8);
          while (param_4 != 0) {
            *puVar11 = *param_3;
            uVar8 = uVar8 - 1;
            puVar11 = puVar11 + 1;
            param_3 = param_3 + 1;
            param_4 = uVar8;
          }
          if (lVar18 != 0) {
            psVar2 = (short *)(lVar18 + 0x18);
            sVar5 = *psVar2;
            uVar16 = 0;
            while ((sVar5 != -1 && (uVar6 = psVar2[uVar16], uVar6 <= uVar3))) {
              uVar7 = psVar2[(int)uVar16 + 1];
              if (param_2 <= uVar7) {
                uVar4 = param_2;
                if (param_2 <= uVar6) {
                  uVar4 = (uint)uVar6;
                }
                uVar8 = (uint)uVar7;
                if (uVar3 <= uVar7) {
                  uVar8 = uVar3;
                }
                uVar10 = uVar8 - uVar4 & 0x3fffffff;
                uVar8 = uVar10 << 1;
                puVar11 = (undefined8 *)
                          (*(longlong *)(lVar18 + 0x10) + (ulonglong)(uVar4 << 2) * 4 + 0x414);
                puVar12 = (undefined8 *)(param_1 + (ulonglong)(uVar4 << 2) * 4 + 0x4ce8);
                while (uVar10 != 0) {
                  *puVar12 = *puVar11;
                  uVar8 = uVar8 - 1;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                  uVar10 = uVar8;
                }
              }
              uVar16 = (ulonglong)((int)uVar16 + 2);
              sVar5 = psVar2[uVar16];
            }
          }
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar17 = extraout_x11;
        }
        else {
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar17 = extraout_x11_00;
        }
        (*pcVar17)(uVar15,param_2,uVar3);
        FUN_1802243a0(uVar13);
      }
      else {
        uVar4 = (param_4 & 0x3fffffff) << 1;
        puVar11 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)(param_2 << 2) * 4 + 0x5390);
        uVar3 = param_4 & 0x3fffffff;
        while (uVar3 != 0) {
          *puVar11 = *param_3;
          uVar4 = uVar4 - 1;
          puVar11 = puVar11 + 1;
          param_3 = param_3 + 1;
          uVar3 = uVar4;
        }
        FUN_180222c50(param_1 + (ulonglong)param_2 + -600,1,param_4);
      }
      if (bVar9) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    lVar14 = 0;
  }
  return lVar14;
}

