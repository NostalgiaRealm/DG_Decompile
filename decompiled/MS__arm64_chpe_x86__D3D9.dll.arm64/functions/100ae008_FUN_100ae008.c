/*
 * FUN_100ae008 at 100ae008
 * undefined FUN_100ae008(void)
 * Address ranges: 100ae008-100ae517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ae008(int param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5,
                 uint *param_6,int param_7,int param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *extraout_w8;
  uint uVar20;
  int iVar21;
  uint uVar22;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int local_a0;
  int iStack_9c;
  undefined8 local_90;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  int local_68 [10];
  
  pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar21 = *(int *)(param_1 + 0xa8);
  uVar16 = (ulonglong)param_4;
  piVar1 = (int *)(iVar21 + 0x1cfc8);
  if (*(char *)(iVar21 + 0x1cfd8) == '\0') goto LAB_100ae4ac;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar16 & 0xffffffff,auStack_78);
  puVar2 = (uint *)(iVar21 + 0x1cfd0);
  uVar16 = (ulonglong)local_68[0];
  uVar18 = *puVar2;
  uVar25 = 0;
  if (uVar18 == 0) {
LAB_100ae0fc:
    puVar3 = (uint *)(iVar21 + 0x1cfcc);
    uVar20 = *puVar3;
    if (uVar18 == uVar20) {
      iVar21 = uVar20 << 5;
      if ((uVar20 & 0x7fffffff) >> 0x1b != 0) {
        iVar21 = -1;
      }
      iVar21 = FUN_101322b0(iVar21);
      if (iVar21 != 0) {
        uVar18 = 0;
        if (*puVar3 != 0) {
          do {
            puVar4 = (undefined8 *)(*piVar1 + uVar18 * 0x10);
            puVar5 = (undefined8 *)(iVar21 + uVar18 * 0x10);
            uVar18 = uVar18 + 1;
            uVar13 = *puVar4;
            puVar5[1] = puVar4[1];
            *puVar5 = uVar13;
          } while (uVar18 < *puVar3);
        }
        FUN_101322d0(*piVar1);
        *piVar1 = iVar21;
        *puVar3 = *puVar3 << 1;
      }
    }
    for (uVar18 = *puVar2; uVar25 < uVar18; uVar18 = uVar18 - 1) {
      puVar4 = (undefined8 *)(*piVar1 + uVar18 * 0x10);
      puVar4[1] = puVar4[-1];
      *puVar4 = puVar4[-2];
    }
    FUN_100aaa40(piVar1,uVar25,uVar16,local_68);
    *puVar2 = *puVar2 + 1;
  }
  else {
    uVar20 = 0;
    uVar17 = uVar18;
    do {
      uVar25 = uVar17 + uVar20 >> 1;
      uVar23 = *(ulonglong *)(*piVar1 + uVar25 * 0x10);
      uVar26 = uVar25;
      if (uVar23 <= uVar16) {
        if (uVar16 <= uVar23) break;
        uVar20 = uVar25 + 1;
        uVar25 = uVar20;
        uVar26 = uVar17;
      }
      uVar17 = uVar26;
    } while (uVar17 != uVar20);
    if ((uVar25 == uVar18) || (*(ulonglong *)(*piVar1 + uVar25 * 0x10) != uVar16))
    goto LAB_100ae0fc;
  }
  iVar21 = *(int *)(*piVar1 + uVar25 * 0x10 + 0xc);
  if (iVar21 != 0) {
    if (param_6[3] <= *param_6) {
      return;
    }
    if (param_6[4] <= param_6[1]) {
      return;
    }
    if (param_6[5] <= param_6[2]) {
      return;
    }
    uVar25 = param_6[3] - *param_6;
    uVar20 = param_6[4] - param_6[1];
    uVar18 = 0;
    if (uVar20 == 0) {
      return;
    }
    do {
      uVar17 = 0x400;
      if (uVar20 - uVar18 < 0x401) {
        uVar17 = uVar20 - uVar18;
      }
      uVar26 = 0;
      if (uVar25 != 0) {
        do {
          uVar7 = 0x400;
          if (uVar25 - uVar26 < 0x401) {
            uVar7 = uVar25 - uVar26;
          }
          uVar6 = uVar7 + uVar26;
          uVar14 = (*pcVar12)();
          iVar15 = (*extraout_w11_00)(uVar14,iVar21,0,2,0,&local_a0);
          if (-1 < iVar15) {
            iVar15 = *(int *)(param_1 + 0x1c);
            bVar8 = *(byte *)(iVar15 + 0x101627d8);
            bVar9 = *(byte *)(iVar15 + 0x10162808);
            if (*(uint *)(&DAT_10162c20 + iVar15 * 4) < 8) {
              uVar24 = *(uint *)(&DAT_10162730 + iVar15 * 4);
            }
            else {
              uVar24 = *(uint *)(&DAT_10162c20 + iVar15 * 4) >> 3;
            }
            if (bVar8 == 0) {
                    /* WARNING: Does not return */
              uVar13 = SoftwareBreakpoint(0xf004,0x100ae35c);
              (*(code *)uVar13)();
            }
            uVar10 = 0;
            uVar22 = (uint)bVar8;
            if (bVar8 != 0) {
              uVar10 = uVar26 / uVar22;
            }
            if (bVar9 == 0) {
                    /* WARNING: Does not return */
              uVar13 = SoftwareBreakpoint(0xf004,0x100ae36c);
              (*(code *)uVar13)();
            }
            uVar26 = 0;
            uVar19 = (uint)bVar9;
            if (bVar9 != 0) {
              uVar26 = uVar18 / uVar19;
            }
            uVar27 = 0;
            uVar11 = 0;
            if (uVar19 != 0) {
              uVar11 = (uVar17 + uVar18) / uVar19;
            }
            uVar19 = 0;
            if (uVar22 != 0) {
              uVar19 = uVar6 / uVar22;
            }
            if (uVar11 != uVar26) {
              do {
                FUN_101325a0(local_a0 + iStack_9c * uVar27,
                             param_7 + uVar24 * uVar10 + (uVar27 + uVar26) * param_8,
                             (uVar19 - uVar10) * uVar24);
                uVar27 = uVar27 + 1;
              } while (uVar27 < uVar11 - uVar26);
            }
            uVar14 = (*pcVar12)();
            (*extraout_w11_01)(uVar14,iVar21,0);
            local_90 = 0;
            local_88 = 0;
            uStack_7c = 1;
            uStack_84 = uVar7;
            local_80 = uVar17;
            uVar14 = (*pcVar12)();
            (*extraout_w11_02)(uVar14,param_4,param_5);
          }
          uVar26 = uVar6;
        } while (uVar6 < uVar25);
      }
      uVar18 = uVar17 + uVar18;
      if (uVar20 <= uVar18) {
        return;
      }
    } while( true );
  }
LAB_100ae4ac:
  uVar14 = (*pcVar12)();
  (*extraout_w11_03)(uVar14,*extraout_w8,param_5,param_6,param_7,param_8,0);
  return;
}

