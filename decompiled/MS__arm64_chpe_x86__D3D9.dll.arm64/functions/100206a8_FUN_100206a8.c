/*
 * FUN_100206a8 at 100206a8
 * undefined FUN_100206a8(void)
 * Address ranges: 100206a8-10020bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100206a8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
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
  int iVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 local_90;
  int local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  
  iVar4 = DAT_10170ad0;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_90 = 0;
  iVar22 = *(int *)(param_1 + 0x58);
  puVar1 = (uint *)(param_1 + 0x54);
  bVar7 = false;
  if (iVar22 < 0x51) {
    if ((iVar22 - 0x46U < 0xb) && ((0x6abU >> (ulonglong)(iVar22 - 0x46U & 0x1f) & 1) != 0)) {
LAB_10020730:
      bVar7 = true;
    }
  }
  else if ((iVar22 == 0x36314644 || iVar22 == 0x5a544e49) || iVar22 == 0x34324644)
  goto LAB_10020730;
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
  if (*puVar2 == 3) goto LAB_100209ac;
  uVar19 = *puVar1;
  uVar23 = (uint)*(ushort *)(param_1 + 0x30);
  if ((*(int *)(DAT_10170ad0 + 0x7e0) - 2U < 2) &&
     ((uVar19 & 0x202) == 0 && *(ushort *)(param_1 + 0x30) == 1)) {
    uVar18 = 6;
    uVar21 = 4;
  }
  else {
    uVar18 = 2;
    uVar21 = 0;
  }
  uVar20 = 0;
  switch(*puVar2) {
  case 0:
    goto LAB_100208cc;
  case 1:
    uVar21 = uVar18;
LAB_100208cc:
    uVar20 = uVar21;
    if (uVar21 >> 2 != 0) {
      uVar23 = FUN_1003eba0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
    }
    break;
  case 2:
    uVar20 = 1;
  }
  if ((uVar19 & 0x400) != 0) {
    uVar20 = uVar20 | 4;
  }
  if ((iVar22 == 0x36314644 || iVar22 == 0x34324644) || iVar22 == 0x5a544e49) {
    uVar20 = uVar20 | 8;
  }
  if ((uVar19 & 3) == 0) {
    uVar9 = (*pcVar3)();
    uVar9 = (*extraout_w11_00)(uVar9,*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x50),
                               *extraout_w8_00,uVar23,iVar17,uVar20);
  }
  else {
    FUN_1000e140(param_2,&local_68);
    uVar19 = *(uint *)(param_1 + 0x4c);
    uVar12 = (ulonglong)uVar19;
    uVar21 = *(uint *)(param_1 + 0x50);
    uVar13 = (ulonglong)uVar21;
    if (*(char *)(iVar4 + 0x958) == '\0') {
      uVar14 = 1;
      uVar10 = uVar12;
      uVar11 = uVar13;
    }
    else {
      if (uStack_64 == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x10020870);
        (*(code *)uVar5)();
      }
      uVar18 = 0;
      if (uStack_64 != 0) {
        uVar18 = (uVar19 * local_68) / uStack_64;
      }
      if (uStack_5c == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x10020884);
        (*(code *)uVar5)();
      }
      uVar19 = 0;
      if (uStack_5c != 0) {
        uVar19 = (uVar21 * local_60) / uStack_5c;
      }
      uVar21 = uVar19;
      if ((iVar17 == 2 || iVar17 == 5) && (uVar21 = uVar18, uVar19 < uVar18)) {
        uVar18 = uVar19;
        uVar21 = uVar19;
      }
      uVar19 = *(uint *)(iVar4 + 2000);
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      uVar14 = (ulonglong)uVar19;
      local_90 = 1;
      uVar10 = (ulonglong)uVar18;
      uVar11 = (ulonglong)uVar21;
    }
    auVar24 = (*pcVar3)(*(undefined4 *)(param_1 + 0x40),uVar10,uVar11,uVar12,uVar13,uVar14);
    uVar9 = (*extraout_w11)(auVar24._0_8_ & 0xffffffff,auVar24._8_8_ & 0xffffffff,
                            uVar11 & 0xffffffff,uVar12 & 0xffffffff,uVar13 & 0xffffffff,
                            uVar14 & 0xffffffff,*extraout_w8,uVar23,iVar17);
  }
  *(undefined4 *)(param_1 + 0x44) = uVar9;
LAB_100209ac:
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
    uVar19 = 0;
    if (*(uint *)(param_1 + 100) == 0) {
      uVar23 = 0;
      uVar21 = 0;
    }
    else {
      uVar19 = 0;
      do {
        uVar23 = 0;
        if (*(short *)(param_1 + 0x30) != 0) {
          do {
            local_58 = 0;
            local_50 = *(uint *)(param_1 + 0x4c) >> (ulonglong)(uVar23 & 0x1f);
            uStack_4c = *(uint *)(param_1 + 0x50) >> (ulonglong)(uVar23 & 0x1f);
            local_68 = *(int *)(param_1 + 0x58);
            uStack_64 = *(uint *)(param_1 + 0x18);
            local_60 = *puVar1;
            uStack_5c = *puVar2;
            if (local_50 == 0) {
              local_50 = 1;
            }
            if (uStack_4c == 0) {
              uStack_4c = 1;
            }
            (*pcVar3)();
            cVar8 = (*extraout_w11_01)(param_1,uVar19,uVar23,&local_68,uVar16,local_90);
          } while ((cVar8 != '\0') && (uVar23 = uVar23 + 1, uVar23 < *(ushort *)(param_1 + 0x30)));
        }
        uVar19 = uVar19 + 1;
        uVar21 = *(uint *)(param_1 + 100);
      } while (uVar19 < uVar21);
    }
    bVar7 = uVar19 == uVar21;
    if (uVar19 != uVar21) {
      iVar22 = uVar19 + 1;
      if (iVar22 != 0) {
        do {
          if (uVar23 != 0) {
            do {
              uVar23 = uVar23 - 1;
              (*pcVar3)();
              (*extraout_w11_02)(param_1,iVar22 + -1,uVar23);
            } while (uVar23 != 0);
          }
          uVar23 = (uint)*(ushort *)(param_1 + 0x30);
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      uVar9 = (*pcVar3)();
      (*extraout_w11_03)(uVar9);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  return bVar7;
}

