/*
 * FUN_18019ce88 at 18019ce88
 * undefined FUN_18019ce88(void)
 * Address ranges: 18019ce88-18019d8f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019ce88(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  code *extraout_x11;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_a8;
  undefined1 auStack_80 [32];
  
  uVar20 = 0;
  uVar21 = (uint)param_2;
  uVar4 = uVar21 + *(int *)(param_1 + 0x3c) * param_3;
  uVar10 = (ulonglong)uVar4;
  if ((*(longlong *)(param_1 + 0xd0) == 0) ||
     (iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0xd0) + uVar10 * 0x28 + 0x18), iVar6 != 0)
     ) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x2c) == 0) {
      lVar7 = param_1 + ((ulonglong)(uVar4 >> 6) + 0x4e) * 8;
      uVar11 = 0;
      if ((*(byte *)(lVar7 + ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar10 & 7) & 1) == 0) {
        iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x1b0) + uVar10 * 0x28 + 0x18);
        uVar11 = extraout_x1_00;
        if (iVar6 != 0) goto LAB_18019d590;
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c);
      }
      if ((*(byte *)(lVar7 + ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar10 & 7) & 1) == 0) {
        lVar7 = *(longlong *)(param_1 + 0x1b0) + uVar10 * 0x28;
        local_a8 = *(uint *)(lVar7 + 0x20);
        iVar6 = *(int *)(lVar7 + 0x18);
        iVar2 = *(int *)(lVar7 + 0x1c);
        uVar13 = *(uint *)(lVar7 + 0x24);
      }
      else {
        iVar6 = 0;
        iVar2 = 0;
        local_a8 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar21 & 0x1f);
        uVar13 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar21 & 0x1f);
        if (local_a8 == 0) {
          local_a8 = 1;
        }
        if (uVar13 == 0) {
          uVar13 = 1;
        }
      }
      cVar3 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
      uVar12 = uVar21 + *(int *)(param_1 + 0x3c) * param_3;
      uVar8 = (ulonglong)uVar12;
      uVar15 = (ulonglong)(uVar12 >> 6);
      bVar5 = (*(byte *)(param_1 + (uVar15 + 0x4c) * 8 + ((ulonglong)(uVar12 >> 3) & 7)) >>
               (uVar8 & 7) & 1) != 0;
      if ((int)uVar11 == 0) {
        FUN_180197918(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c);
        bVar5 = (*(byte *)(param_1 + (uVar15 + 0x4e) * 8 + ((ulonglong)(uVar12 >> 3) & 7)) >>
                 (uVar8 & 7) & 1) == 0 && bVar5;
      }
      if (*(char *)(param_1 + 0x248) == '\0') {
        uVar14 = *(uint *)(&DAT_18022dca0 + uVar11 * 4);
      }
      else {
        uVar14 = 1;
      }
      uVar16 = 0xffe00010;
      if ((&DAT_18022da48)[uVar11] != '\0') {
        uVar16 = 0xffe00000;
      }
      uVar17 = 0x18;
      if (cVar3 == '\0') {
        uVar17 = 0;
      }
      if (bVar5 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(param_1 + 0x1e8);
      }
      lVar7 = *(longlong *)(param_1 + 0x1a0);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x198);
      }
      FUN_180197cd8((float)iVar6 * *(float *)(param_1 + 0x240),
                    (float)iVar2 * *(float *)(param_1 + 0x244),
                    (float)(int)local_a8 * *(float *)(param_1 + 0x240),
                    (float)(int)uVar13 * *(float *)(param_1 + 0x244),
                    *(undefined8 *)(param_1 + 0x110),uVar11,uVar11,param_2 & 0xffffffff,param_3,
                    param_2 & 0xffffffff,param_3,*(undefined8 *)(param_1 + 0x78),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar8 * 0x28),0,lVar7,
                    *(undefined8 *)(param_1 + 0x1a8),uVar20,0,0,cVar3,
                    *(uint *)(&DAT_18022da80 + uVar11 * 4) & 0xf |
                    (uVar17 | (uVar16 | bVar5) << 6 | uVar14 & 7) << 4,1);
      uVar11 = (ulonglong)(uVar12 >> 3) & 7;
      lVar7 = param_1 + uVar15 * 8;
      *(byte *)(lVar7 + 0x270 + uVar11) =
           *(byte *)(lVar7 + 0x270 + uVar11) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
      uVar11 = (ulonglong)(uVar12 >> 3) & 7;
      *(byte *)(lVar7 + 0x250 + uVar11) =
           *(byte *)(lVar7 + 0x250 + uVar11) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
      uVar11 = (ulonglong)(uVar12 >> 3) & 7;
      *(byte *)(lVar7 + 0xf0 + uVar11) = *(byte *)(lVar7 + 0xf0 + uVar11) | (byte)(1 << (uVar8 & 7))
      ;
      uVar11 = (ulonglong)(uVar12 >> 3) & 7;
      *(byte *)(lVar7 + 0x260 + uVar11) =
           *(byte *)(lVar7 + 0x260 + uVar11) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1b0) + uVar8 * 0x28 + 0x18);
      uVar20 = 1;
      uVar11 = extraout_x1_01;
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x198);
    if ((lVar7 != 0) && (lVar9 = *(longlong *)(param_1 + 0xb8), lVar9 != 0)) {
      uVar20 = 1;
      lVar1 = *(longlong *)(param_1 + 0xd0) + uVar10 * 0x28;
      fVar24 = (float)*(int *)(lVar1 + 0x1c);
      fVar25 = (float)*(int *)(lVar1 + 0x18);
      fVar22 = (float)*(int *)(lVar1 + 0x24);
      fVar23 = (float)*(int *)(lVar1 + 0x20);
      if (*(int *)(param_1 + 0x44) - 3U < 3) {
        FUN_180199710(param_1,lVar7,lVar9,uVar4,0,lVar1 + 0x18);
        lVar7 = *(longlong *)(param_1 + 0x80);
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x78);
        }
        lVar9 = *(longlong *)(param_1 + 0x1a0);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(param_1 + 0x198);
        }
        FUN_180197cd8(*(float *)(param_1 + 0x240) * fVar25,*(float *)(param_1 + 0x244) * fVar24,
                      *(float *)(param_1 + 0x240) * fVar23,*(float *)(param_1 + 0x244) * fVar22,
                      fVar25,fVar24,fVar23,fVar22,*(undefined8 *)(param_1 + 0x110),
                      *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),
                      param_2 & 0xffffffff,param_3,param_2 & 0xffffffff,param_3,0,0,0,lVar9,
                      *(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1e8),lVar7,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar10 * 0x28 + 8),0,0x17,1);
        lVar7 = param_1 + (ulonglong)(uVar4 >> 6) * 8;
        uVar11 = (ulonglong)(uVar4 >> 3) & 7;
        *(byte *)(lVar7 + 0x250 + uVar11) =
             *(byte *)(lVar7 + 0x250 + uVar11) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
        uVar11 = (ulonglong)(uVar4 >> 3) & 7;
        *(byte *)(lVar7 + 0x280 + uVar11) =
             *(byte *)(lVar7 + 0x280 + uVar11) | (byte)(1 << (uVar10 & 7));
        uVar11 = (ulonglong)(uVar4 >> 3) & 7;
        *(byte *)(lVar7 + 0xf0 + uVar11) =
             *(byte *)(lVar7 + 0xf0 + uVar11) | (byte)(1 << (uVar10 & 7));
        thunk_FUN_180223c20(*(longlong *)(param_1 + 0x90) + uVar10 * 0x28 + 0x18,0,0,
                            *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar21 & 0x1f),
                            *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar21 & 0x1f));
      }
      else {
        FUN_180199710(param_1,lVar7,lVar9,param_2 & 0xffffffff,param_3,lVar1 + 0x18);
        cVar3 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
        uVar13 = uVar21 + *(int *)(param_1 + 0x3c) * param_3;
        uVar15 = (ulonglong)uVar13;
        uVar11 = (ulonglong)(uVar13 >> 6);
        bVar5 = (*(byte *)(param_1 + (uVar11 + 0x4c) * 8 + ((ulonglong)(uVar13 >> 3) & 7)) >>
                 (uVar15 & 7) & 1) != 0;
        if (*(int *)(param_1 + 0x2c) == 0) {
          FUN_180197918(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
          bVar5 = (*(byte *)(param_1 + (uVar11 + 0x4e) * 8 + ((ulonglong)(uVar13 >> 3) & 7)) >>
                   (uVar15 & 7) & 1) == 0 && bVar5;
        }
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x2c);
        if (*(char *)(param_1 + 0x248) == '\0') {
          uVar12 = *(uint *)(&DAT_18022dca0 + uVar8 * 4);
        }
        else {
          uVar12 = 1;
        }
        uVar14 = 0xffe00010;
        if ((&DAT_18022da48)[uVar8] != '\0') {
          uVar14 = 0xffe00000;
        }
        uVar16 = 0x18;
        if (cVar3 == '\0') {
          uVar16 = 0;
        }
        if (bVar5 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(undefined8 *)(param_1 + 0x1e8);
        }
        lVar7 = *(longlong *)(param_1 + 0x1a0);
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x198);
        }
        FUN_180197cd8(*(float *)(param_1 + 0x240) * fVar25,*(float *)(param_1 + 0x244) * fVar24,
                      *(float *)(param_1 + 0x240) * fVar23,*(float *)(param_1 + 0x244) * fVar22,
                      fVar25,fVar24,fVar23,fVar22,*(undefined8 *)(param_1 + 0x110),uVar8,uVar8,
                      param_2 & 0xffffffff,param_3,param_2 & 0xffffffff,param_3,
                      *(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar15 * 0x28),0,lVar7,
                      *(undefined8 *)(param_1 + 0x1a8),uVar19,0,0,cVar3,
                      *(uint *)(&DAT_18022da80 + uVar8 * 4) & 0xf |
                      (uVar16 | (uVar14 | bVar5) << 6 | uVar12 & 7) << 4,1);
        lVar7 = param_1 + uVar11 * 8;
        uVar11 = (ulonglong)(uVar13 >> 3) & 7;
        *(byte *)(lVar7 + 0x270 + uVar11) =
             *(byte *)(lVar7 + 0x270 + uVar11) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
        uVar11 = (ulonglong)(uVar13 >> 3) & 7;
        *(byte *)(lVar7 + 0x250 + uVar11) =
             *(byte *)(lVar7 + 0x250 + uVar11) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
        uVar11 = (ulonglong)(uVar13 >> 3) & 7;
        *(byte *)(lVar7 + 0xf0 + uVar11) =
             *(byte *)(lVar7 + 0xf0 + uVar11) | (byte)(1 << (uVar15 & 7));
        uVar11 = (ulonglong)(uVar13 >> 3) & 7;
        *(byte *)(lVar7 + 0x260 + uVar11) =
             *(byte *)(lVar7 + 0x260 + uVar11) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
        thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1b0) + uVar15 * 0x28 + 0x18);
      }
    }
    thunk_FUN_180223bf8(*(longlong *)(param_1 + 0xd0) + uVar10 * 0x28 + 0x18);
    uVar11 = extraout_x1;
  }
LAB_18019d590:
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 != 0) {
      if (param_4 == 2) {
        if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
           ((*(byte *)(param_1 + ((ulonglong)(uVar4 >> 6) + 0x50) * 8 +
                      ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar10 & 7) & 1) == 0)) {
          iVar6 = *(int *)(param_1 + 0x178);
          if (iVar6 == 1) {
            uVar18 = 0xf;
          }
          else if (iVar6 == 2) {
            uVar18 = 0x10;
          }
          else if (iVar6 == 4) {
            uVar18 = 0x11;
          }
          else if (iVar6 == 8) {
            uVar18 = 0x12;
          }
          else if (iVar6 == 0x10) {
            uVar18 = 0x13;
          }
          else {
            uVar18 = 0xffffffff;
          }
          FUN_180197cd8(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                        (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_1 + 0x2c),param_2 & 0xffffffff,param_3,
                        param_2 & 0xffffffff,param_3,0,0,0,lVar7,*(undefined8 *)(param_1 + 0x88),0,
                        *(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 0x1f0) +
                          (ulonglong)(uVar21 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                        uVar18,1);
        }
      }
      else if (((param_4 == 1) && (*(longlong *)(param_1 + 0x140) != 0)) &&
              ((*(byte *)(param_1 + ((ulonglong)(uVar4 >> 6) + 0x4a) * 8 +
                         ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar10 & 7) & 1) == 0)) {
        iVar6 = *(int *)(param_1 + 0x178);
        if (iVar6 == 1) {
          uVar18 = 0xf;
        }
        else if (iVar6 == 2) {
          uVar18 = 0x10;
        }
        else if (iVar6 == 4) {
          uVar18 = 0x11;
        }
        else if (iVar6 == 8) {
          uVar18 = 0x12;
        }
        else if (iVar6 == 0x10) {
          uVar18 = 0x13;
        }
        else {
          uVar18 = 0xffffffff;
        }
        FUN_180197cd8(0,0,(float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),0,0,
                      (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                      *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0x2c),param_2 & 0xffffffff,param_3,
                      param_2 & 0xffffffff,param_3,0,0,0,lVar7,*(undefined8 *)(param_1 + 0x88),0,
                      *(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)
                       (*(longlong *)(param_1 + 0x148) +
                        (ulonglong)(uVar21 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                      uVar18,1);
        param_1 = param_1 + (((param_2 & 0xffffffff) >> 6) + 0x4a) * 8;
        uVar10 = (param_2 & 0xffffffff) >> 3 & 7;
        *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) | (byte)(1 << (param_2 & 7));
      }
    }
  }
  else if (((param_4 == 1) && (*(longlong *)(param_1 + 0x80) != 0)) &&
          (lVar7 = param_1 + ((ulonglong)(uVar4 >> 6) + 0x4a) * 8,
          (*(byte *)(lVar7 + ((ulonglong)(uVar4 >> 3) & 7)) >> (uVar10 & 7) & 1) == 0)) {
    FUN_180202728(*(undefined8 *)(param_1 + 0x50),uVar11,param_1);
    if (*(char *)(param_1 + 0x248) == '\0') {
      FUN_1801bad48(auStack_80,*(undefined4 *)(param_1 + 0x2c));
    }
    uVar19 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(uVar19,*(undefined8 *)(param_1 + 0x78),uVar4,*(undefined8 *)(param_1 + 0x80),
                    uVar4);
    uVar11 = (ulonglong)(uVar4 >> 3) & 7;
    *(byte *)(lVar7 + uVar11) = *(byte *)(lVar7 + uVar11) | (byte)(1 << (uVar10 & 7));
    thunk_FUN_18022370c(*(longlong *)(param_1 + 0x50) + 0x620);
  }
  return uVar20;
}

