/*
 * FUN_1001b198 at 1001b198
 * undefined FUN_1001b198(void)
 * Address ranges: 1001b198-1001b683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001b198(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 local_80;
  int local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  iVar3 = DAT_1013ceec;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_80 = 0;
  puVar1 = (uint *)(param_1 + 0x54);
  bVar7 = false;
  uVar22 = *(int *)(param_1 + 0x58) - 0x46;
  if ((uVar22 < 0xb) && ((0x6abU >> (ulonglong)(uVar22 & 0x1f) & 1) != 0)) {
    bVar7 = true;
  }
  puVar2 = (uint *)(param_1 + 0x60);
  bVar6 = *(uint *)(param_1 + 0x18) == 5;
  iVar15 = 4;
  if (bVar6) {
    iVar15 = 5;
  }
  iVar17 = 1;
  if (bVar6) {
    iVar17 = 2;
  }
  if (bVar7) {
    iVar17 = iVar15;
  }
  if (*puVar2 == 3) goto LAB_1001b434;
  uVar22 = *puVar1;
  uVar21 = (uint)*(ushort *)(param_1 + 0x30);
  if ((*(int *)(DAT_1013ceec + 0x7e0) - 2U < 2) &&
     ((uVar22 & 0x202) == 0 && *(ushort *)(param_1 + 0x30) == 1)) {
    uVar18 = 6;
    uVar20 = 4;
  }
  else {
    uVar18 = 2;
    uVar20 = 0;
  }
  uVar19 = 0;
  switch(*puVar2) {
  case 0:
    goto LAB_1001b354;
  case 1:
    uVar20 = uVar18;
LAB_1001b354:
    uVar19 = uVar20;
    if (uVar20 >> 2 != 0) {
      uVar21 = FUN_10034cd0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
    }
    break;
  case 2:
    uVar19 = 1;
  }
  if ((uVar22 & 3) == 0) {
    uVar9 = (*pcVar4)();
    uVar9 = (*extraout_w11_00)(uVar9,*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x50),
                               *extraout_w8_00,uVar21,iVar17,uVar19);
  }
  else {
    FUN_1000ce50(param_2,&local_60);
    uVar22 = *(uint *)(param_1 + 0x4c);
    uVar12 = (ulonglong)uVar22;
    uVar20 = *(uint *)(param_1 + 0x50);
    uVar13 = (ulonglong)uVar20;
    if (*(char *)(iVar3 + 0x958) == '\0') {
      uVar14 = 1;
      uVar10 = uVar12;
      uVar11 = uVar13;
    }
    else {
      if (uStack_5c == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x1001b2f8);
        (*(code *)uVar5)();
      }
      uVar18 = 0;
      if (uStack_5c != 0) {
        uVar18 = (uVar22 * local_60) / uStack_5c;
      }
      if (uStack_54 == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x1001b30c);
        (*(code *)uVar5)();
      }
      uVar22 = 0;
      if (uStack_54 != 0) {
        uVar22 = (uVar20 * local_58) / uStack_54;
      }
      uVar20 = uVar22;
      if ((iVar17 == 2 || iVar17 == 5) && (uVar20 = uVar18, uVar22 < uVar18)) {
        uVar18 = uVar22;
        uVar20 = uVar22;
      }
      uVar22 = *(uint *)(iVar3 + 2000);
      if (uVar22 == 0) {
        uVar22 = 1;
      }
      uVar14 = (ulonglong)uVar22;
      local_80 = 1;
      uVar10 = (ulonglong)uVar18;
      uVar11 = (ulonglong)uVar20;
    }
    auVar23 = (*pcVar4)(*(undefined4 *)(param_1 + 0x40),uVar10,uVar11,uVar12,uVar13,uVar14);
    uVar9 = (*extraout_w11)(auVar23._0_8_ & 0xffffffff,auVar23._8_8_ & 0xffffffff,
                            uVar11 & 0xffffffff,uVar12 & 0xffffffff,uVar13 & 0xffffffff,
                            uVar14 & 0xffffffff,*extraout_w8,uVar21,iVar17);
  }
  *(undefined4 *)(param_1 + 0x44) = uVar9;
LAB_1001b434:
  if ((*(int *)(param_1 + 0x44) != 0) || (bVar7 = false, *puVar2 == 3)) {
    if (((*puVar1 & 0x200) == 0) && (*puVar2 == 0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    *(undefined1 *)(param_1 + 0x6c) = uVar16;
    if (((*puVar1 & 0x200) == 0) && (*puVar2 == 0)) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
    }
    uVar22 = 0;
    if (*(uint *)(param_1 + 100) == 0) {
      uVar21 = 0;
      uVar20 = 0;
    }
    else {
      uVar22 = 0;
      do {
        uVar21 = 0;
        if (*(ushort *)(param_1 + 0x30) != 0) {
          do {
            local_50 = 0;
            local_48 = *(uint *)(param_1 + 0x4c) >> (ulonglong)(uVar21 & 0x1f);
            uStack_44 = *(uint *)(param_1 + 0x50) >> (ulonglong)(uVar21 & 0x1f);
            local_60 = *(int *)(param_1 + 0x58);
            uStack_5c = *(uint *)(param_1 + 0x18);
            local_58 = *puVar1;
            uStack_54 = *puVar2;
            if (local_48 == 0) {
              local_48 = 1;
            }
            if (uStack_44 == 0) {
              uStack_44 = 1;
            }
            (*pcVar4)();
            cVar8 = (*extraout_w11_01)(param_1,uVar22,uVar21,&local_60,uVar16,local_80);
          } while ((cVar8 != '\0') && (uVar21 = uVar21 + 1, uVar21 < *(ushort *)(param_1 + 0x30)));
        }
        uVar22 = uVar22 + 1;
        uVar20 = *(uint *)(param_1 + 100);
      } while (uVar22 < uVar20);
    }
    bVar7 = uVar22 == uVar20;
    if (uVar22 != uVar20) {
      iVar3 = uVar22 + 1;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        while (uVar21 != 0) {
          uVar21 = uVar21 - 1;
          (*pcVar4)();
          (*extraout_w11_02)(param_1,iVar3,uVar21);
        }
        uVar21 = (uint)*(ushort *)(param_1 + 0x30);
      }
      uVar9 = (*pcVar4)();
      (*extraout_w11_03)(uVar9);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  return bVar7;
}

