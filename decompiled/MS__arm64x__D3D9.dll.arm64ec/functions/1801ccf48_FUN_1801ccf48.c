/*
 * FUN_1801ccf48 at 1801ccf48
 * undefined FUN_1801ccf48(void)
 * Address ranges: 1801ccf48-1801cd20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801ccf48(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *pcVar18;
  
  uVar14 = 0x8876086c;
  if ((param_2 < 0x10) && (uVar3 = param_2 + param_4, uVar3 < 0x11)) {
    if (param_4 != 0) {
      if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
        bVar10 = false;
        *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
      }
      else {
        bVar10 = true;
        iVar13 = thunk_FUN_1802236e4(DAT_180258900);
        if (iVar13 == 0) {
          FUN_1801085c8();
        }
      }
      uVar7 = param_4 >> 1;
      if (*(char *)(param_1 + -0x642c) == '\0') {
        lVar15 = FUN_1801dbc18(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x5c50));
        uVar14 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        lVar1 = param_1 + (ulonglong)param_2 * 4;
        puVar11 = (undefined8 *)(lVar1 + 0x1d8);
        puVar12 = param_3;
        for (uVar9 = uVar7; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar12;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        if ((param_4 & 1) != 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar12;
        }
        if (*(char *)(param_1 + -0x6817) == '\0') {
          puVar11 = (undefined8 *)(lVar1 + 0x5be8);
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *param_3;
            puVar11 = puVar11 + 1;
            param_3 = param_3 + 1;
          }
          if ((param_4 & 1) != 0) {
            *(undefined4 *)puVar11 = *(undefined4 *)param_3;
          }
          if (lVar15 != 0) {
            psVar2 = (short *)(lVar15 + 0x200);
            sVar4 = *psVar2;
            uVar17 = 0;
            while ((sVar4 != -1 && (uVar5 = psVar2[uVar17], uVar5 <= uVar3))) {
              uVar6 = psVar2[(int)uVar17 + 1];
              if (param_2 <= uVar6) {
                uVar7 = param_2;
                if (param_2 <= uVar5) {
                  uVar7 = (uint)uVar5;
                }
                uVar9 = (uint)uVar6;
                if (uVar3 <= uVar6) {
                  uVar9 = uVar3;
                }
                puVar11 = (undefined8 *)
                          (*(longlong *)(lVar15 + 0x10) + (ulonglong)uVar7 * 4 + 0x2b0);
                puVar12 = (undefined8 *)(param_1 + (ulonglong)uVar7 * 4 + 0x5be8);
                for (uVar8 = uVar9 - uVar7 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
                if ((uVar9 - uVar7 & 1) != 0) {
                  *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
                }
              }
              uVar17 = (ulonglong)((int)uVar17 + 2);
              sVar4 = psVar2[uVar17];
            }
          }
          uVar16 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar18 = extraout_x11;
        }
        else {
          uVar16 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          pcVar18 = extraout_x11_00;
        }
        (*pcVar18)(uVar16,param_2,uVar3);
        FUN_1802243a0(uVar14);
      }
      else {
        puVar11 = (undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8)
                   + (ulonglong)param_2 * 4 + 0x513c);
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *param_3;
          puVar11 = puVar11 + 1;
          param_3 = param_3 + 1;
        }
        if ((param_4 & 1) != 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)param_3;
        }
        FUN_180222c50(param_1 + (ulonglong)param_2 + 0x278,1,param_4);
      }
      if (bVar10) {
        thunk_FUN_18022370c(DAT_180258900);
      }
      else {
        *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}

