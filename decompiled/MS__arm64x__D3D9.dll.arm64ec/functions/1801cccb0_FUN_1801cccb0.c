/*
 * FUN_1801cccb0 at 1801cccb0
 * undefined FUN_1801cccb0(void)
 * Address ranges: 1801cccb0-1801ccf3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cccb0(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

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
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar19;
  
  uVar13 = 0x8876086c;
  if ((param_2 < 0x10) && (uVar3 = param_2 + param_4, uVar3 < 0x11)) {
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
      uVar7 = param_4 & 0x3fffffff;
      uVar8 = uVar7 << 1;
      uVar18 = (ulonglong)uVar8;
      uVar16 = (ulonglong)(param_2 << 2);
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar14 = FUN_1801dbc18(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
        lVar1 = param_1 + (uVar16 & 0xffffffff) * 4;
        uVar17 = (uint)uVar18;
        puVar10 = (undefined8 *)(lVar1 + 0x218);
        puVar11 = param_3;
        while (uVar17 != 0) {
          uVar17 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar17;
          *puVar10 = *puVar11;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar13 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        if (*(char *)(param_1 + -0x6817) == '\0') {
          puVar10 = (undefined8 *)(lVar1 + 0x5ae8);
          while (uVar7 != 0) {
            *puVar10 = *param_3;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
            param_3 = param_3 + 1;
            uVar7 = uVar8;
          }
          if (lVar14 != 0) {
            psVar2 = (short *)(lVar14 + 0x1dc);
            sVar4 = *psVar2;
            uVar18 = 0;
            while ((sVar4 != -1 && (uVar5 = psVar2[uVar18], uVar5 <= uVar3))) {
              uVar6 = psVar2[(int)uVar18 + 1];
              if (param_2 <= uVar6) {
                uVar7 = param_2;
                if (param_2 <= uVar5) {
                  uVar7 = (uint)uVar5;
                }
                uVar8 = (uint)uVar6;
                if (uVar3 <= uVar6) {
                  uVar8 = uVar3;
                }
                uVar17 = uVar8 - uVar7 & 0x3fffffff;
                uVar8 = uVar17 << 1;
                puVar10 = (undefined8 *)
                          (*(longlong *)(lVar14 + 0x10) + (ulonglong)(uVar7 << 2) * 4 + 0x1a0);
                puVar11 = (undefined8 *)(param_1 + (ulonglong)(uVar7 << 2) * 4 + 0x5ae8);
                while (uVar17 != 0) {
                  *puVar11 = *puVar10;
                  uVar8 = uVar8 - 1;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                  uVar17 = uVar8;
                }
              }
              uVar18 = (ulonglong)((int)uVar18 + 2);
              sVar4 = psVar2[uVar18];
            }
          }
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar19 = extraout_x11;
        }
        else {
          uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar19 = extraout_x11_00;
        }
        (*pcVar19)(uVar15,param_2,uVar3);
        FUN_1802243a0(uVar13);
      }
      else {
        puVar10 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + uVar16 * 4 + 0x517c);
        while (uVar7 != 0) {
          uVar7 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar7;
          *puVar10 = *param_3;
          puVar10 = puVar10 + 1;
          param_3 = param_3 + 1;
        }
        FUN_180222c50(param_1 + (ulonglong)param_2 + 0x288,1,param_4);
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

