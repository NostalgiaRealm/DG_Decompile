/*
 * FUN_18019b1e8 at 18019b1e8
 * undefined FUN_18019b1e8(void)
 * Address ranges: 18019b1e8-18019b557;18019b568-18019b683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019b1e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,uint *param_6,longlong param_7,int param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  code *pcVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong extraout_x8;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 local_80 [2];
  undefined1 auStack_70 [16];
  int local_60 [8];
  
  puVar11 = __hybrid_os_arm64x_dispatch_icall;
  lVar25 = *(longlong *)(param_1 + 0x110);
  if (*(char *)(lVar25 + 0x1d0b0) == '\0') goto LAB_18019b62c;
  uVar14 = param_4;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar14,auStack_70);
  uVar23 = 0;
  uVar4 = *(uint *)(lVar25 + 0x1d0a4);
  if (uVar4 == 0) {
LAB_18019b2c8:
    if (uVar4 == *(uint *)(lVar25 + 0x1d0a0)) {
      uVar21 = CONCAT44(0,*(uint *)(lVar25 + 0x1d0a0) << 1);
      lVar18 = uVar21 * 0x18;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21;
      if (SUB168(auVar10 * ZEXT816(0x18),8) != 0) {
        lVar18 = -1;
      }
      lVar18 = FUN_1802229a8(lVar18);
      if (lVar18 != 0) {
        uVar21 = 0;
        if (*(int *)(lVar25 + 0x1d0a0) != 0) {
          do {
            uVar4 = (int)uVar21 + 1;
            puVar2 = (undefined8 *)(*(longlong *)(lVar25 + 0x1d098) + uVar21 * 0x18);
            puVar3 = (undefined8 *)(lVar18 + uVar21 * 0x18);
            uVar14 = *puVar2;
            puVar3[1] = puVar2[1];
            *puVar3 = uVar14;
            puVar3[2] = puVar2[2];
            uVar21 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(lVar25 + 0x1d0a0));
        }
        FUN_1802229d8(*(undefined8 *)(lVar25 + 0x1d098));
        *(longlong *)(lVar25 + 0x1d098) = lVar18;
        *(int *)(lVar25 + 0x1d0a0) = *(int *)(lVar25 + 0x1d0a0) << 1;
      }
    }
    uVar21 = (ulonglong)*(uint *)(lVar25 + 0x1d0a4);
    while ((uint)uVar23 < (uint)uVar21) {
      uVar15 = (ulonglong)((uint)uVar21 - 1);
      puVar2 = (undefined8 *)(*(longlong *)(lVar25 + 0x1d098) + uVar21 * 0x18);
      puVar3 = (undefined8 *)(*(longlong *)(lVar25 + 0x1d098) + uVar15 * 0x18);
      uVar14 = *puVar3;
      puVar2[1] = puVar3[1];
      *puVar2 = uVar14;
      puVar2[2] = puVar3[2];
      uVar21 = uVar15;
    }
    FUN_180197f50(lVar25 + 0x1d098,uVar23,(longlong)local_60[0],local_60);
    *(int *)(lVar25 + 0x1d0a4) = *(int *)(lVar25 + 0x1d0a4) + 1;
  }
  else {
    uVar16 = 0;
    uVar22 = uVar4;
    do {
      uVar7 = uVar22 + uVar16 >> 1;
      uVar23 = (ulonglong)uVar7;
      uVar21 = *(ulonglong *)(*(longlong *)(lVar25 + 0x1d098) + uVar23 * 0x18);
      if (uVar21 <= (ulonglong)(longlong)local_60[0]) {
        if ((ulonglong)(longlong)local_60[0] <= uVar21) break;
        uVar16 = uVar7 + 1;
        uVar23 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar22;
      }
      uVar22 = uVar7;
    } while (uVar22 != uVar16);
    if (((uint)uVar23 == uVar4) ||
       (*(longlong *)(*(longlong *)(lVar25 + 0x1d098) + uVar23 * 0x18) != (longlong)local_60[0]))
    goto LAB_18019b2c8;
  }
  lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x1d098) + uVar23 * 0x18 + 0x10);
  if (lVar25 != 0) {
    if (param_6[3] <= *param_6) {
      return;
    }
    if (param_6[4] <= param_6[1]) {
      return;
    }
    if (param_6[5] <= param_6[2]) {
      return;
    }
    uVar4 = param_6[3] - *param_6;
    uVar16 = param_6[4] - param_6[1];
    uVar22 = 0;
    if (uVar16 == 0) {
      return;
    }
    do {
      uVar7 = 0x400;
      if (uVar16 - uVar22 < 0x401) {
        uVar7 = uVar16 - uVar22;
      }
      uVar7 = uVar7 + uVar22;
      uVar24 = 0;
      if (uVar4 != 0) {
        do {
          uVar1 = 0x400;
          if (uVar4 - uVar24 < 0x401) {
            uVar1 = uVar4 - uVar24;
          }
          uVar1 = uVar1 + uVar24;
          uVar14 = (*(code *)puVar11)();
          iVar13 = (*extraout_x11_00)(uVar14,lVar25,0,2,0,local_80);
          if (-1 < iVar13) {
            uVar19 = *(uint *)(param_1 + 0x2c);
            bVar5 = (&DAT_18022dc08)[uVar19];
            bVar6 = (&DAT_18022dc38)[uVar19];
            if (*(uint *)(&DAT_18022e050 + (ulonglong)uVar19 * 4) < 8) {
              uVar19 = *(uint *)(&DAT_18022db60 + (ulonglong)uVar19 * 4);
            }
            else {
              uVar19 = *(uint *)(&DAT_18022e050 + (ulonglong)uVar19 * 4) >> 3;
            }
            if (bVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0xf004,0x18019b4ec);
              (*pcVar12)();
            }
            uVar8 = 0;
            uVar17 = (uint)bVar5;
            if (bVar5 != 0) {
              uVar8 = uVar24 / uVar17;
            }
            if (bVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(0xf004,0x18019b4fc);
              (*pcVar12)();
            }
            uVar24 = 0;
            uVar20 = (uint)bVar6;
            if (bVar6 != 0) {
              uVar24 = uVar22 / uVar20;
            }
            uVar9 = 0;
            if (uVar17 != 0) {
              uVar9 = uVar1 / uVar17;
            }
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar7 / uVar20;
            }
            if (uVar17 != uVar24) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(local_80[0],
                                  param_7 + (ulonglong)(uVar8 * uVar19) +
                                  (ulonglong)(uVar24 * param_8),(uVar9 - uVar8) * uVar19);
            }
            uVar14 = (*(code *)puVar11)(0x180224000);
            (*extraout_x11_01)(uVar14,lVar25,0);
            uVar14 = (*(code *)puVar11)(0x180225000);
            (*extraout_x11_02)(uVar14,param_4,param_5);
          }
          uVar24 = uVar1;
        } while (uVar1 < uVar4);
      }
      uVar22 = uVar7;
      if (uVar16 <= uVar7) {
        return;
      }
    } while( true );
  }
LAB_18019b62c:
  uVar14 = (*(code *)puVar11)();
  (*extraout_x11_03)(uVar14,*(undefined8 *)(extraout_x8 + 0x78),param_5,param_6,param_7,param_8,0);
  return;
}

