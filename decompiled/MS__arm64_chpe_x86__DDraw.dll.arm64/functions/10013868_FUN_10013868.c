/*
 * FUN_10013868 at 10013868
 * undefined FUN_10013868(void)
 * Address ranges: 10013868-10013d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013868(int param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5,
                 uint *param_6,int param_7,int param_8)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *extraout_w8;
  uint uVar19;
  int iVar20;
  uint uVar21;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
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
  iVar7 = *(int *)(param_1 + 0xa8);
  uVar15 = (ulonglong)param_4;
  if (*(char *)(iVar7 + 0xcfd8) == '\0') goto LAB_10013d08;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar15 & 0xffffffff,auStack_78);
  puVar1 = (uint *)(iVar7 + 0xcfd0);
  uVar15 = (ulonglong)local_68[0];
  uVar17 = *puVar1;
  uVar24 = 0;
  if (uVar17 == 0) {
LAB_1001395c:
    puVar2 = (uint *)(iVar7 + 0xcfcc);
    uVar19 = *puVar2;
    if (uVar17 == uVar19) {
      iVar20 = uVar19 << 5;
      if ((uVar19 & 0x7fffffff) >> 0x1b != 0) {
        iVar20 = -1;
      }
      iVar20 = FUN_100914b0(iVar20);
      if (iVar20 != 0) {
        uVar17 = 0;
        if (*puVar2 != 0) {
          do {
            puVar3 = (undefined8 *)(*(int *)(iVar7 + 0xcfc8) + uVar17 * 0x10);
            puVar4 = (undefined8 *)(iVar20 + uVar17 * 0x10);
            uVar17 = uVar17 + 1;
            uVar13 = *puVar3;
            puVar4[1] = puVar3[1];
            *puVar4 = uVar13;
          } while (uVar17 < *puVar2);
        }
        FUN_100914d0(*(undefined4 *)(iVar7 + 0xcfc8));
        *(int *)(iVar7 + 0xcfc8) = iVar20;
        *puVar2 = *puVar2 << 1;
      }
    }
    for (uVar17 = *puVar1; uVar24 < uVar17; uVar17 = uVar17 - 1) {
      puVar3 = (undefined8 *)(*(int *)(iVar7 + 0xcfc8) + uVar17 * 0x10);
      puVar3[1] = puVar3[-1];
      *puVar3 = puVar3[-2];
    }
    FUN_10010500(iVar7 + 0xcfc8,uVar24,uVar15,local_68);
    *puVar1 = *puVar1 + 1;
  }
  else {
    uVar19 = 0;
    uVar16 = uVar17;
    do {
      uVar24 = uVar16 + uVar19 >> 1;
      uVar22 = *(ulonglong *)(*(int *)(iVar7 + 0xcfc8) + uVar24 * 0x10);
      uVar26 = uVar24;
      if (uVar22 <= uVar15) {
        if (uVar15 <= uVar22) break;
        uVar19 = uVar24 + 1;
        uVar24 = uVar19;
        uVar26 = uVar16;
      }
      uVar16 = uVar26;
    } while (uVar16 != uVar19);
    if ((uVar24 == uVar17) || (*(ulonglong *)(*(int *)(iVar7 + 0xcfc8) + uVar24 * 0x10) != uVar15))
    goto LAB_1001395c;
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0xcfc8) + uVar24 * 0x10 + 0xc);
  if (iVar7 != 0) {
    if (param_6[3] <= *param_6) {
      return;
    }
    if (param_6[4] <= param_6[1]) {
      return;
    }
    if (param_6[5] <= param_6[2]) {
      return;
    }
    uVar24 = param_6[3] - *param_6;
    uVar19 = param_6[4] - param_6[1];
    uVar17 = 0;
    if (uVar19 == 0) {
      return;
    }
    do {
      uVar16 = 0x400;
      if (uVar19 - uVar17 < 0x401) {
        uVar16 = uVar19 - uVar17;
      }
      uVar26 = 0;
      if (uVar24 != 0) {
        do {
          uVar6 = 0x400;
          if (uVar24 - uVar26 < 0x401) {
            uVar6 = uVar24 - uVar26;
          }
          uVar5 = uVar6 + uVar26;
          uVar14 = (*pcVar12)();
          iVar20 = (*extraout_w11_00)(uVar14,iVar7,0,2,0,&local_a0);
          if (-1 < iVar20) {
            iVar20 = *(int *)(param_1 + 0x1c);
            bVar8 = *(byte *)(iVar20 + 0x100b3720);
            bVar9 = *(byte *)(iVar20 + 0x100b3740);
            if (*(uint *)(&DAT_100b35b0 + iVar20 * 4) < 8) {
              uVar23 = *(uint *)(&DAT_100b36b0 + iVar20 * 4);
            }
            else {
              uVar23 = *(uint *)(&DAT_100b35b0 + iVar20 * 4) >> 3;
            }
            if (bVar8 == 0) {
                    /* WARNING: Does not return */
              uVar13 = SoftwareBreakpoint(0xf004,0x10013bb8);
              (*(code *)uVar13)();
            }
            uVar10 = 0;
            uVar21 = (uint)bVar8;
            if (bVar8 != 0) {
              uVar10 = uVar26 / uVar21;
            }
            if (bVar9 == 0) {
                    /* WARNING: Does not return */
              uVar13 = SoftwareBreakpoint(0xf004,0x10013bc8);
              (*(code *)uVar13)();
            }
            uVar26 = 0;
            uVar18 = (uint)bVar9;
            if (bVar9 != 0) {
              uVar26 = uVar17 / uVar18;
            }
            uVar25 = 0;
            uVar11 = 0;
            if (uVar18 != 0) {
              uVar11 = (uVar16 + uVar17) / uVar18;
            }
            uVar18 = 0;
            if (uVar21 != 0) {
              uVar18 = uVar5 / uVar21;
            }
            if (uVar11 != uVar26) {
              do {
                FUN_100917a0(local_a0 + iStack_9c * uVar25,
                             param_7 + uVar23 * uVar10 + (uVar25 + uVar26) * param_8,
                             (uVar18 - uVar10) * uVar23);
                uVar25 = uVar25 + 1;
              } while (uVar25 < uVar11 - uVar26);
            }
            uVar14 = (*pcVar12)();
            (*extraout_w11_01)(uVar14,iVar7,0);
            local_90 = 0;
            local_88 = 0;
            uStack_7c = 1;
            uStack_84 = uVar6;
            local_80 = uVar16;
            uVar14 = (*pcVar12)();
            (*extraout_w11_02)(uVar14,param_4,param_5);
          }
          uVar26 = uVar5;
        } while (uVar5 < uVar24);
      }
      uVar17 = uVar16 + uVar17;
      if (uVar19 <= uVar17) {
        return;
      }
    } while( true );
  }
LAB_10013d08:
  uVar14 = (*pcVar12)();
  (*extraout_w11_03)(uVar14,*extraout_w8,param_5,param_6,param_7,param_8,0);
  return;
}

