/*
 * FUN_1005e440 at 1005e440
 * undefined FUN_1005e440(void)
 * Address ranges: 1005e440-1005f2bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e440(int param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  code *pcVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong extraout_x1;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  code *extraout_w11_26;
  code *extraout_w11_27;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int7 local_78;
  undefined1 uStack_71;
  int *local_70;
  int local_6c;
  int *local_68;
  uint local_64;
  int local_60;
  int local_58 [6];
  
  iVar23 = param_1 + 0xf000;
  local_80 = param_1 + 0x4000;
  local_98 = param_4;
  FUN_1005df78(param_1,0,0,0);
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*param_4 == 0) && (*param_5 == 0)) {
    if (*(int *)(param_1 + 0xfa80) != 0) {
      iVar24 = *(int *)(param_1 + 0xfaa4);
      iVar21 = *(int *)(*(int *)(param_1 + 0xfa80) + 0x2c);
      iVar18 = *(int *)(param_1 + 0xfa94);
      uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar14 = (*extraout_w11)(uVar14);
      FUN_10056b68(param_1,uVar14,iVar18 + iVar24 * iVar21);
    }
    if (*(int *)(param_1 + 0xfa84) != 0) {
      iVar24 = *(int *)(param_1 + 0xfaa8);
      iVar21 = *(int *)(*(int *)(param_1 + 0xfa84) + 0x2c);
      iVar18 = *(int *)(param_1 + 0xfa98);
      uVar14 = (*pcVar10)();
      uVar14 = (*extraout_w11_00)(uVar14);
      FUN_10056b68(param_1,uVar14,iVar18 + iVar24 * iVar21);
    }
    if (*(int *)(param_1 + 0xfa88) != 0) {
      iVar24 = *(int *)(param_1 + 0xfaac);
      iVar21 = *(int *)(*(int *)(param_1 + 0xfa88) + 0x2c);
      iVar18 = *(int *)(param_1 + 0xfa9c);
      uVar14 = (*pcVar10)();
      uVar14 = (*extraout_w11_01)(uVar14);
      FUN_10056b68(param_1,uVar14,iVar18 + iVar24 * iVar21);
    }
    if (*(int *)(param_1 + 0xfa8c) != 0) {
      iVar24 = *(int *)(param_1 + 0xfab0);
      iVar21 = *(int *)(*(int *)(param_1 + 0xfa8c) + 0x2c);
      iVar18 = *(int *)(param_1 + 0xfaa0);
      uVar14 = (*pcVar10)();
      uVar14 = (*extraout_w11_02)(uVar14);
      FUN_10056b68(param_1,uVar14,iVar18 + iVar24 * iVar21);
    }
    if (*(int *)(param_1 + 0xfa90) != 0) {
      iVar18 = *(int *)(*(int *)(param_1 + 0xfa90) + 0x2c);
      iVar24 = *(int *)(param_1 + 0xfab4);
      iVar21 = *(int *)(param_1 + 0xfab8);
      uVar14 = (*pcVar10)();
      uVar14 = (*extraout_w11_03)(uVar14);
      FUN_10056e10(param_1,uVar14,iVar24 + iVar18 * iVar21);
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_04)(uVar14);
      if (cVar13 != '\0') {
        iVar18 = *(int *)(*(int *)(param_1 + 0xfa90) + 0x24);
        iVar24 = *(int *)(param_1 + 0xfab4);
        iVar21 = *(int *)(param_1 + 0xfab8);
        iVar4 = *(int *)(*(int *)(param_1 + 0xfa90) + 0x2c);
        uVar14 = (*pcVar10)();
        uVar14 = (*extraout_w11_05)(uVar14);
        FUN_10056e10(param_1,uVar14,iVar24 + (iVar18 + iVar21) * iVar4);
      }
    }
    *(undefined4 *)(param_1 + 0xfa88) = 0;
    *(undefined4 *)(param_1 + 0xfa8c) = 0;
    *(undefined4 *)(param_1 + 0xfa80) = 0;
    *(undefined4 *)(param_1 + 0xfa84) = 0;
    uVar14 = *(undefined4 *)(param_1 + 0xf7f8);
    *(undefined4 *)(param_1 + 0xf9ec) = uVar14;
    *(undefined4 *)(param_1 + 0xf9f0) = uVar14;
    *(undefined4 *)(param_1 + 0xf9e4) = uVar14;
    *(undefined4 *)(param_1 + 0xf9e8) = uVar14;
    *(undefined4 *)(param_1 + 0xfa90) = 0;
    *(undefined8 *)(param_1 + 0xf84c) = 0;
    *(undefined8 *)(param_1 + 0xf844) = 0;
    *(undefined4 *)(param_1 + 0xfa78) = uVar14;
    *(undefined8 *)(param_1 + 0x7578) = 0;
    *(undefined4 *)(param_1 + 0xf864) = 0;
    *(undefined1 *)(param_1 + 0xf6a1) = 1;
    *(undefined1 *)(param_1 + 0xfd95) = 0;
    *(undefined1 *)(param_1 + 0x7645) = 1;
    *(undefined4 *)(param_1 + 0xe3c) = 1;
    *(undefined8 *)(param_1 + 0xfa6c) = 0;
  }
  else {
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    uVar16 = 0;
    if (param_2 != 0) {
      do {
        iVar24 = 0;
        if (local_98[uVar16 * 3] != 0) {
          iVar24 = local_98[uVar16 * 3] + -0xc0;
        }
        piVar3 = local_58 + uVar16;
        uVar16 = uVar16 + 1;
        *piVar3 = iVar24;
      } while (uVar16 < param_2);
    }
    uVar16 = 0;
    iVar24 = 0;
    if (*param_5 != 0) {
      iVar24 = *param_5 + -0xc0;
    }
    iVar21 = param_1 + 0xc000;
    if (param_2 != 0) {
      local_8c = (int *)(param_1 + 0xf6b8);
      local_9c = iVar24;
      local_84 = param_1 + 0xc000;
      local_70 = (int *)(param_1 + 0xfa80);
      local_68 = local_8c;
      local_64 = param_2;
      local_60 = iVar23;
      do {
        iVar23 = param_1 + uVar16 * 4;
        piVar3 = local_70 + uVar16;
        if (*piVar3 != 0) {
          iVar24 = *(int *)(*piVar3 + 0x2c);
          iVar21 = *(int *)(iVar23 + 0xfaa4);
          iVar18 = *(int *)(iVar23 + 0xfa94);
          uVar14 = (*pcVar10)();
          uVar14 = (*extraout_w11_06)(uVar14);
          FUN_10056b68(param_1,uVar14,iVar18 + iVar24 * iVar21);
        }
        iVar24 = local_58[uVar16];
        if (iVar24 == 0) {
          *piVar3 = 0;
          *(undefined4 *)(iVar23 + 0xf844) = 0;
          *(undefined4 *)(iVar23 + 0xfa94) = 0;
          *(undefined4 *)(iVar23 + 0xfaa4) = 0;
          uVar15 = *(uint *)(local_84 + 0x37f0);
          iVar24 = *(int *)(*local_8c + 0x15dc);
          uVar14 = (*pcVar10)();
          (*extraout_w11_12)(uVar14,&local_88);
          local_88 = local_88 + (uVar15 & 0xffff) * *(int *)(iVar24 + 0x18);
          *(int *)(iVar23 + 0xf9e4) = local_88;
          *(int *)(iVar23 + 0xfa5c) = local_88;
          if (uVar16 == 0) {
            *(undefined8 *)(param_1 + 0xfa6c) = 0;
          }
          *(byte *)(param_1 + 0xfd95) =
               *(byte *)(param_1 + 0xfd95) & ((byte)(1 << (ulonglong)(uVar16 & 0x1f)) ^ 0xff);
        }
        else {
          local_a0 = (int *)(iVar24 + 0x2c);
          iVar21 = *local_a0;
          piVar1 = local_98 + uVar16 * 3 + 2;
          piVar2 = local_98 + uVar16 * 3 + 1;
          iVar18 = *piVar1;
          local_6c = *piVar2;
          *piVar3 = iVar24;
          local_6c = local_6c + iVar21 * iVar18;
          (*pcVar10)();
          uVar14 = (*extraout_w11_07)(iVar24,extraout_x1 & 0xffffffff);
          _local_78 = CONCAT44(stack0xffffff8c,uVar14);
          iVar21 = *(int *)(*local_8c + 0x15dc);
          uVar14 = (*pcVar10)();
          (*extraout_w11_08)(uVar14,&local_94);
          local_94 = local_94 + *(int *)(iVar21 + 0x18) * (uint)(ushort)local_78;
          *(int *)(iVar23 + 0xf9e4) = local_94;
          *(undefined4 *)(iVar23 + 0xf844) = *(undefined4 *)(iVar24 + 0x7c);
          *(int *)(iVar23 + 0xfa94) = *piVar2;
          *(int *)(iVar23 + 0xfaa4) = *piVar1;
          cVar13 = (char)*piVar2 + (char)*local_a0 * (char)*piVar1;
          (*pcVar10)();
          local_a0 = (int *)(*extraout_w11_09)(iVar24);
          uVar15 = *(uint *)(param_1 + 0xf8f8);
          if (uVar15 == 0) {
LAB_1005ea88:
            _local_78 = CONCAT17(1,(uint7)(byte)(cVar13 + 1) << 0x10);
            FUN_10060a28(param_1 + 0xf8f0,&local_a0,&local_78);
          }
          else {
            uVar19 = 0;
            uVar17 = uVar15;
            do {
              uVar20 = uVar17 + uVar19 >> 1;
              uVar22 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar20 * 0x18);
              uVar11 = uVar20;
              if (uVar22 <= (ulonglong)(longlong)(int)local_a0) {
                if ((ulonglong)(longlong)(int)local_a0 <= uVar22) break;
                uVar19 = uVar20 + 1;
                uVar20 = uVar19;
                uVar11 = uVar17;
              }
              uVar17 = uVar11;
            } while (uVar17 != uVar19);
            if (((uVar20 == uVar15) ||
                (plVar9 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar20 * 0x18),
                *plVar9 != (longlong)(int)local_a0)) || ((int)plVar9 + 0xc == 0)) goto LAB_1005ea88;
            iVar21 = 0;
            if (((*(char *)((int)plVar9 + 0xe) == '\0') ||
                (iVar21 = 1, *(char *)((int)plVar9 + 0xf) == '\0')) ||
               ((iVar21 = 2, (char)plVar9[2] == '\0' ||
                (iVar21 = 3, *(char *)((int)plVar9 + 0x11) == '\0')))) {
              *(char *)(iVar21 + (int)plVar9 + 0xc + 2) = cVar13 + '\x01';
            }
            *(undefined1 *)((int)plVar9 + 0x13) = 1;
          }
          if (uVar16 == 0) {
            (*pcVar10)();
            uVar15 = (*extraout_w11_10)(iVar24,local_6c);
            iVar23 = *(int *)(*local_68 + 0x15dc);
            uVar14 = (*pcVar10)();
            (*extraout_w11_11)(uVar14,&local_90);
            local_90 = local_90 + *(int *)(iVar23 + 0x18) * (uVar15 & 0xffff);
            *(int *)(param_1 + 0xfa5c) = local_90;
            iVar23 = *(int *)(param_1 + 0xf844);
            *(int *)(param_1 + 0xfa6c) = iVar23;
            if (iVar23 == 0x1c) {
              iVar23 = 0x1d;
            }
            *(int *)(param_1 + 0xfa70) = iVar23;
          }
          else {
            *(int *)(iVar23 + 0xfa5c) = *(int *)(iVar23 + 0xf9e4);
          }
          *(byte *)(param_1 + 0xfd95) =
               (byte)(1 << (ulonglong)(uVar16 & 0x1f)) | *(byte *)(param_1 + 0xfd95);
          *(undefined1 *)(param_1 + 0xfd9b) = 1;
        }
        uVar16 = uVar16 + 1;
        iVar24 = local_9c;
        iVar21 = local_84;
        iVar23 = local_60;
      } while (uVar16 < local_64);
    }
    if (*(int *)(param_1 + 0xfa80) == 0) {
      bVar12 = false;
    }
    else {
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_13)(uVar14);
      bVar12 = cVar13 != '\0';
    }
    if (*(int *)(iVar21 + 0x3a84) != 0) {
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_14)(uVar14);
      if (cVar13 != '\0') {
        bVar12 = bVar12 | 2;
      }
    }
    if (*(int *)(iVar21 + 0x3a88) != 0) {
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_15)(uVar14);
      if (cVar13 != '\0') {
        bVar12 = bVar12 | 4;
      }
    }
    if (*(int *)(iVar21 + 0x3a8c) != 0) {
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_16)(uVar14);
      if (cVar13 != '\0') {
        bVar12 = bVar12 | 8;
      }
    }
    bVar7 = *(byte *)(param_1 + 0x763c);
    *(byte *)(param_1 + 0x763c) = bVar12;
    bVar12 = bVar12 != bVar7 | *(byte *)(iVar23 + 0x66c);
    uVar16 = *(uint *)(param_1 + 0xe3c);
    *(byte *)(iVar23 + 0x66c) = bVar12;
    if (param_3 != uVar16) {
      if (uVar16 < 2) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(uint *)(param_1 + 0xe38);
      }
      if (param_3 < 2) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = *(uint *)(param_1 + 0xe38);
      }
      *(uint *)(param_1 + 0xe3c) = param_3;
      uVar19 = (1 << (ulonglong)(param_3 & 0x1f)) - 1;
      *(byte *)(iVar23 + 0x66c) = (uVar19 & uVar16) != (uVar19 & uVar15) | bVar12;
    }
    if (iVar24 == 0) {
      cVar13 = '\0';
    }
    else {
      (*pcVar10)();
      cVar13 = (*extraout_w11_17)(iVar24);
    }
    iVar18 = *(int *)(iVar21 + 0x3a90);
    cVar8 = *(char *)(param_1 + 0x7582);
    *(char *)(param_1 + 0x7582) = cVar13;
    *(byte *)(iVar23 + 0x66b) = cVar13 != cVar8 | *(byte *)(iVar23 + 0x66b);
    if (iVar18 != 0) {
      iVar4 = *(int *)(param_1 + 0xfab8);
      iVar18 = *(int *)(iVar18 + 0x2c);
      iVar5 = *(int *)(param_1 + 0xfab4);
      uVar14 = (*pcVar10)();
      uVar14 = (*extraout_w11_18)(uVar14);
      FUN_10056e10(param_1,uVar14,iVar5 + iVar18 * iVar4);
      uVar14 = (*pcVar10)();
      cVar13 = (*extraout_w11_19)(uVar14);
      if (cVar13 != '\0') {
        iVar18 = *(int *)(*(int *)(iVar21 + 0x3a90) + 0x24);
        iVar4 = *(int *)(param_1 + 0xfab8);
        iVar5 = *(int *)(*(int *)(iVar21 + 0x3a90) + 0x2c);
        iVar6 = *(int *)(param_1 + 0xfab4);
        uVar14 = (*pcVar10)();
        uVar14 = (*extraout_w11_20)(uVar14);
        FUN_10056e10(param_1,uVar14,iVar6 + (iVar18 + iVar4) * iVar5);
      }
    }
    if (iVar24 == 0) {
      *(undefined4 *)(iVar21 + 0x3864) = 0;
      *(undefined4 *)(iVar21 + 0x3a78) = *(undefined4 *)(iVar21 + 0x37f8);
      *(byte *)(iVar23 + 0x66b) = *(int *)(iVar21 + 0x3a90) != 0 | *(byte *)(iVar23 + 0x66b);
      iVar18 = 0;
    }
    else {
      piVar3 = (int *)(iVar24 + 0x2c);
      iVar18 = *piVar3;
      piVar1 = param_5 + 2;
      param_5 = param_5 + 1;
      iVar4 = *piVar1;
      iVar5 = *param_5;
      (*pcVar10)();
      uVar14 = (*extraout_w11_21)(iVar24);
      FUN_10056d10(param_1,uVar14,iVar5 + iVar18 * iVar4);
      (*pcVar10)();
      uVar22 = (*extraout_w11_22)(iVar24);
      if ((uVar22 & 0xff) != 0) {
        iVar18 = *(int *)(iVar24 + 0x24);
        iVar4 = *piVar1;
        iVar5 = *piVar3;
        iVar6 = *param_5;
        (*pcVar10)();
        uVar14 = (*extraout_w11_23)(iVar24);
        uVar22 = FUN_10056d10(param_1,uVar14,iVar6 + (iVar18 + iVar4) * iVar5);
      }
      if ((*(int *)(iVar21 + 0x3a90) == 0) ||
         (bVar12 = 0,
         *(int *)(&DAT_10162c20 + *(int *)(*(int *)(iVar21 + 0x3a90) + 0x1c) * 4) !=
         *(int *)(&DAT_10162c20 + *(int *)(iVar24 + 0x1c) * 4))) {
        bVar12 = 1;
      }
      *(byte *)(iVar23 + 0x66d) = *(byte *)(iVar23 + 0x66d) | bVar12;
      (*pcVar10)(uVar22,*param_5 + *piVar3 * *piVar1);
      uVar16 = (*extraout_w11_24)(iVar24);
      iVar18 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x15e0);
      uVar14 = (*pcVar10)();
      (*extraout_w11_25)(uVar14,&local_9c);
      *(uint *)(iVar21 + 0x3a78) = local_9c + *(int *)(iVar18 + 0x18) * (uVar16 & 0xffff);
      *(undefined4 *)(iVar21 + 0x3864) = *(undefined4 *)(iVar24 + 0x7c);
      *(int *)(param_1 + 0xfab4) = *param_5;
      *(int *)(param_1 + 0xfab8) = *piVar1;
      *(undefined1 *)(param_1 + 0xfd9b) = 1;
      *(byte *)(iVar23 + 0x66b) = *(int *)(iVar21 + 0x3a90) == 0 | *(byte *)(iVar23 + 0x66b);
      iVar18 = iVar24;
    }
    *(int *)(iVar21 + 0x3a90) = iVar18;
    iVar21 = local_58[0];
    if (local_58[0] == 0) {
      iVar21 = iVar24;
    }
    FUN_10078d10(param_1,iVar21);
    FUN_10078ef0(param_1,iVar21);
    (*pcVar10)();
    fVar25 = (float)(*extraout_w11_26)(iVar21);
    (*pcVar10)();
    fVar26 = (float)(*extraout_w11_27)(iVar21);
    if ((fVar25 != *(float *)(local_80 + 0x2900)) || (fVar26 != *(float *)(local_80 + 0x2904))) {
      *(float *)(local_80 + 0x2900) = 1.0 / fVar25;
      *(undefined4 *)(local_80 + 0x2908) = 0x3f800000;
      *(undefined4 *)(local_80 + 0x290c) = 0x3f800000;
      *(undefined1 *)(iVar23 + 0x6a3) = 1;
      *(float *)(param_1 + 0x6904) = 1.0 / fVar26;
    }
  }
  *(undefined1 *)(iVar23 + 0x66a) = 1;
  return;
}

