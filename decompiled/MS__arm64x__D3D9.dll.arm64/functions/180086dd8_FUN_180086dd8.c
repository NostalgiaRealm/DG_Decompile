/*
 * FUN_180086dd8 at 180086dd8
 * undefined FUN_180086dd8(void)
 * Address ranges: 180086dd8-18008782b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180086dd8(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_88 [4];
  undefined4 local_84;
  
  uVar17 = 0;
  uVar18 = (uint)param_2;
  uVar5 = uVar18 + *(int *)(param_1 + 0x3c) * param_3;
  uVar20 = (ulonglong)uVar5;
  if ((*(longlong *)(param_1 + 0xd0) == 0) ||
     (iVar7 = (*__imp_USER32_dll_IsRectEmpty)(*(longlong *)(param_1 + 0xd0) + uVar20 * 0x28 + 0x18),
     iVar7 != 0)) {
    uVar21 = (ulonglong)*(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x2c) == 0) {
      lVar9 = param_1 + ((ulonglong)(uVar5 >> 6) + 0x4e) * 8;
      uVar21 = 0;
      if ((*(byte *)(lVar9 + ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0) {
        iVar7 = (*__imp_USER32_dll_IsRectEmpty)
                          (*(longlong *)(param_1 + 0x1b0) + uVar20 * 0x28 + 0x18);
        uVar21 = extraout_x1_00;
        if (iVar7 != 0) goto LAB_1800874cc;
        uVar21 = (ulonglong)*(uint *)(param_1 + 0x2c);
      }
      if ((*(byte *)(lVar9 + ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0) {
        lVar9 = *(longlong *)(param_1 + 0x1b0) + uVar20 * 0x28;
        uVar23 = *(uint *)(lVar9 + 0x20);
        uVar14 = *(uint *)(lVar9 + 0x24);
        iVar7 = *(int *)(lVar9 + 0x18);
        iVar19 = *(int *)(lVar9 + 0x1c);
      }
      else {
        iVar7 = 0;
        iVar19 = 0;
        uVar23 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar18 & 0x1f);
        uVar14 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar18 & 0x1f);
        if (uVar23 == 0) {
          uVar23 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
      }
      cVar4 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
      uVar2 = uVar18 + *(int *)(param_1 + 0x3c) * param_3;
      uVar10 = (ulonglong)uVar2;
      uVar22 = (ulonglong)(uVar2 >> 6);
      bVar6 = (*(byte *)(param_1 + (uVar22 + 0x4c) * 8 + ((ulonglong)(uVar2 >> 3) & 7)) >>
               (uVar10 & 7) & 1) != 0;
      if ((int)uVar21 == 0) {
        FUN_180082250(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
        uVar21 = (ulonglong)*(uint *)(param_1 + 0x2c);
        bVar6 = (*(byte *)(param_1 + (uVar22 + 0x4e) * 8 + ((ulonglong)(uVar2 >> 3) & 7)) >>
                 (uVar10 & 7) & 1) == 0 && bVar6;
      }
      if (*(char *)(param_1 + 0x248) == '\0') {
        uVar12 = *(uint *)(&DAT_180231770 + uVar21 * 4);
      }
      else {
        uVar12 = 1;
      }
      uVar3 = 0xffe00010;
      if ((&DAT_180231518)[uVar21] != '\0') {
        uVar3 = 0xffe00000;
      }
      uVar13 = 0x18;
      if (cVar4 == '\0') {
        uVar13 = 0;
      }
      if (bVar6 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x1e8);
      }
      lVar9 = *(longlong *)(param_1 + 0x1a0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x198);
      }
      FUN_1800825d8((float)iVar7 * *(float *)(param_1 + 0x240),
                    (float)iVar19 * *(float *)(param_1 + 0x244),
                    (float)(int)uVar23 * *(float *)(param_1 + 0x240),
                    (float)(int)uVar14 * *(float *)(param_1 + 0x244),
                    *(undefined8 *)(param_1 + 0x110),uVar21,uVar21,param_2 & 0xffffffff,param_3,
                    param_2 & 0xffffffff,param_3,*(undefined8 *)(param_1 + 0x78),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar10 * 0x28),0,lVar9,
                    *(undefined8 *)(param_1 + 0x1a8),uVar17,0,0,cVar4,
                    *(uint *)(&DAT_180231550 + uVar21 * 4) & 0xf |
                    (uVar13 | (uVar3 | bVar6) << 6 | uVar12 & 7) << 4,1);
      uVar21 = (ulonglong)(uVar2 >> 3) & 7;
      lVar9 = param_1 + uVar22 * 8;
      *(byte *)(lVar9 + 0x270 + uVar21) =
           *(byte *)(lVar9 + 0x270 + uVar21) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      uVar21 = (ulonglong)(uVar2 >> 3) & 7;
      *(byte *)(lVar9 + 0x250 + uVar21) =
           *(byte *)(lVar9 + 0x250 + uVar21) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      uVar21 = (ulonglong)(uVar2 >> 3) & 7;
      *(byte *)(lVar9 + 0xf0 + uVar21) =
           *(byte *)(lVar9 + 0xf0 + uVar21) | (byte)(1 << (uVar10 & 7));
      uVar21 = (ulonglong)(uVar2 >> 3) & 7;
      *(byte *)(lVar9 + 0x260 + uVar21) =
           *(byte *)(lVar9 + 0x260 + uVar21) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
      (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1b0) + uVar10 * 0x28 + 0x18);
      uVar17 = 1;
      uVar21 = extraout_x1_01;
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x198);
    if ((lVar9 != 0) && (lVar11 = *(longlong *)(param_1 + 0xb8), lVar11 != 0)) {
      uVar17 = 1;
      lVar1 = *(longlong *)(param_1 + 0xd0) + uVar20 * 0x28;
      fVar26 = (float)*(int *)(lVar1 + 0x1c);
      fVar27 = (float)*(int *)(lVar1 + 0x18);
      fVar24 = (float)*(int *)(lVar1 + 0x24);
      fVar25 = (float)*(int *)(lVar1 + 0x20);
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        FUN_180083b10(param_1,lVar9,lVar11,uVar5,0,lVar1 + 0x18);
        lVar9 = *(longlong *)(param_1 + 0x80);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(param_1 + 0x78);
        }
        lVar11 = *(longlong *)(param_1 + 0x1a0);
        if (lVar11 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x198);
        }
        FUN_1800825d8(*(float *)(param_1 + 0x240) * fVar27,*(float *)(param_1 + 0x244) * fVar26,
                      *(float *)(param_1 + 0x240) * fVar25,*(float *)(param_1 + 0x244) * fVar24,
                      fVar27,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x110),
                      *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),
                      param_2 & 0xffffffff,param_3,param_2 & 0xffffffff,param_3,0,0,0,lVar11,
                      *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1e8),lVar9,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar20 * 0x28 + 8),0,0x17,1);
        lVar9 = param_1 + (ulonglong)(uVar5 >> 6) * 8;
        uVar21 = (ulonglong)(uVar5 >> 3) & 7;
        *(byte *)(lVar9 + 0x250 + uVar21) =
             *(byte *)(lVar9 + 0x250 + uVar21) & ((byte)(1 << (uVar20 & 7)) ^ 0xff);
        uVar21 = (ulonglong)(uVar5 >> 3) & 7;
        *(byte *)(lVar9 + 0x280 + uVar21) =
             *(byte *)(lVar9 + 0x280 + uVar21) | (byte)(1 << (uVar20 & 7));
        uVar21 = (ulonglong)(uVar5 >> 3) & 7;
        *(byte *)(lVar9 + 0xf0 + uVar21) =
             *(byte *)(lVar9 + 0xf0 + uVar21) | (byte)(1 << (uVar20 & 7));
        (*__imp_USER32_dll_SetRect)
                  (*(longlong *)(param_1 + 0x90) + uVar20 * 0x28 + 0x18,0,0,
                   *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar18 & 0x1f),
                   *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar18 & 0x1f));
      }
      else {
        FUN_180083b10(param_1,lVar9,lVar11,param_2 & 0xffffffff,param_3,lVar1 + 0x18);
        cVar4 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
        uVar23 = uVar18 + *(int *)(param_1 + 0x3c) * param_3;
        uVar22 = (ulonglong)uVar23;
        uVar21 = (ulonglong)(uVar23 >> 6);
        bVar6 = (*(byte *)(param_1 + (uVar21 + 0x4c) * 8 + ((ulonglong)(uVar23 >> 3) & 7)) >>
                 (uVar22 & 7) & 1) != 0;
        if (*(int *)(param_1 + 0x2c) == 0) {
          FUN_180082250(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
          bVar6 = (*(byte *)(param_1 + (uVar21 + 0x4e) * 8 + ((ulonglong)(uVar23 >> 3) & 7)) >>
                   (uVar22 & 7) & 1) == 0 && bVar6;
        }
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x2c);
        if (*(char *)(param_1 + 0x248) == '\0') {
          uVar14 = *(uint *)(&DAT_180231770 + uVar10 * 4);
        }
        else {
          uVar14 = 1;
        }
        uVar2 = 0xffe00010;
        if ((&DAT_180231518)[uVar10] != '\0') {
          uVar2 = 0xffe00000;
        }
        uVar12 = 0x18;
        if (cVar4 == '\0') {
          uVar12 = 0;
        }
        if (bVar6 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x1e8);
        }
        lVar9 = *(longlong *)(param_1 + 0x1a0);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(param_1 + 0x198);
        }
        FUN_1800825d8(*(float *)(param_1 + 0x240) * fVar27,*(float *)(param_1 + 0x244) * fVar26,
                      *(float *)(param_1 + 0x240) * fVar25,*(float *)(param_1 + 0x244) * fVar24,
                      fVar27,fVar26,fVar25,fVar24,*(undefined8 *)(param_1 + 0x110),uVar10,uVar10,
                      param_2 & 0xffffffff,param_3,param_2 & 0xffffffff,param_3,
                      *(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar22 * 0x28),0,lVar9,
                      *(undefined8 *)(param_1 + 0x1a8),uVar16,0,0,cVar4,
                      *(uint *)(&DAT_180231550 + uVar10 * 4) & 0xf |
                      (uVar12 | (uVar2 | bVar6) << 6 | uVar14 & 7) << 4,1);
        lVar9 = param_1 + uVar21 * 8;
        uVar21 = (ulonglong)(uVar23 >> 3) & 7;
        *(byte *)(lVar9 + 0x270 + uVar21) =
             *(byte *)(lVar9 + 0x270 + uVar21) & ((byte)(1 << (uVar22 & 7)) ^ 0xff);
        uVar21 = (ulonglong)(uVar23 >> 3) & 7;
        *(byte *)(lVar9 + 0x250 + uVar21) =
             *(byte *)(lVar9 + 0x250 + uVar21) & ((byte)(1 << (uVar22 & 7)) ^ 0xff);
        uVar21 = (ulonglong)(uVar23 >> 3) & 7;
        *(byte *)(lVar9 + 0xf0 + uVar21) =
             *(byte *)(lVar9 + 0xf0 + uVar21) | (byte)(1 << (uVar22 & 7));
        uVar21 = (ulonglong)(uVar23 >> 3) & 7;
        *(byte *)(lVar9 + 0x260 + uVar21) =
             *(byte *)(lVar9 + 0x260 + uVar21) & ((byte)(1 << (uVar22 & 7)) ^ 0xff);
        (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0x1b0) + uVar22 * 0x28 + 0x18);
      }
    }
    (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0xd0) + uVar20 * 0x28 + 0x18);
    uVar21 = extraout_x1;
  }
LAB_1800874cc:
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    lVar9 = *(longlong *)(param_1 + 0x80);
    if (lVar9 != 0) {
      if (param_4 == 2) {
        if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
           ((*(byte *)(param_1 + ((ulonglong)(uVar5 >> 6) + 0x50) * 8 +
                      ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0)) {
          iVar7 = *(int *)(param_1 + 0x178);
          if (iVar7 == 1) {
            uVar15 = 0xf;
          }
          else if (iVar7 == 2) {
            uVar15 = 0x10;
          }
          else if (iVar7 == 4) {
            uVar15 = 0x11;
          }
          else if (iVar7 == 8) {
            uVar15 = 0x12;
          }
          else if (iVar7 == 0x10) {
            uVar15 = 0x13;
          }
          else {
            uVar15 = 0xffffffff;
          }
          FUN_1800825d8(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                        (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_1 + 0x2c),param_2 & 0xffffffff,param_3,
                        param_2 & 0xffffffff,param_3,0,0,0,lVar9,*(undefined8 *)(param_1 + 0x88),0,
                        *(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 0x1f0) +
                          (ulonglong)(uVar18 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                        uVar15,1);
        }
      }
      else if (((param_4 == 1) && (*(longlong *)(param_1 + 0x140) != 0)) &&
              ((*(byte *)(param_1 + ((ulonglong)(uVar5 >> 6) + 0x4a) * 8 +
                         ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0)) {
        iVar7 = *(int *)(param_1 + 0x178);
        if (iVar7 == 1) {
          uVar15 = 0xf;
        }
        else if (iVar7 == 2) {
          uVar15 = 0x10;
        }
        else if (iVar7 == 4) {
          uVar15 = 0x11;
        }
        else if (iVar7 == 8) {
          uVar15 = 0x12;
        }
        else if (iVar7 == 0x10) {
          uVar15 = 0x13;
        }
        else {
          uVar15 = 0xffffffff;
        }
        FUN_1800825d8(0,0,(float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),0,0,
                      (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                      *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0x2c),param_2 & 0xffffffff,param_3,
                      param_2 & 0xffffffff,param_3,0,0,0,lVar9,*(undefined8 *)(param_1 + 0x88),0,
                      *(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)
                       (*(longlong *)(param_1 + 0x148) +
                        (ulonglong)(uVar18 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                      uVar15,1);
        param_1 = param_1 + (((param_2 & 0xffffffff) >> 6) + 0x4a) * 8;
        uVar20 = (param_2 & 0xffffffff) >> 3 & 7;
        *(byte *)(param_1 + uVar20) = *(byte *)(param_1 + uVar20) | (byte)(1 << (param_2 & 7));
      }
    }
  }
  else if (((param_4 == 1) && (*(longlong *)(param_1 + 0x80) != 0)) &&
          (lVar9 = param_1 + ((ulonglong)(uVar5 >> 6) + 0x4a) * 8,
          (*(byte *)(lVar9 + ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar20 & 7) & 1) == 0)) {
    FUN_1800e5470(*(undefined8 *)(param_1 + 0x50),uVar21,param_1);
    if (*(char *)(param_1 + 0x248) == '\0') {
      func_0x0001801bad48(auStack_88,*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      lVar11 = 0x44;
      if (*(int *)(param_1 + 0x2c) == 0x15) {
        lVar11 = 0x54;
      }
      local_84 = *(undefined4 *)(lVar11 + *(longlong *)(param_1 + 8));
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
    (**(code **)(*plVar8 + 0x1c8))
              (plVar8,*(undefined8 *)(param_1 + 0x78),uVar5,*(undefined8 *)(param_1 + 0x80),uVar5,
               local_84);
    uVar21 = (ulonglong)(uVar5 >> 3) & 7;
    *(byte *)(lVar9 + uVar21) = *(byte *)(lVar9 + uVar21) | (byte)(1 << (uVar20 & 7));
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0x50) + 0x620);
  }
  return uVar17;
}

