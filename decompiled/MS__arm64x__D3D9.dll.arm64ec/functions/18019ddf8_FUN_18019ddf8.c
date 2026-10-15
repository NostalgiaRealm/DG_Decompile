/*
 * FUN_18019ddf8 at 18019ddf8
 * undefined FUN_18019ddf8(void)
 * Address ranges: 18019ddf8-18019e4a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019ddf8(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  uint local_78 [6];
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_1801999b8(param_1,param_2,param_3);
  }
  else {
    local_78[0] = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    uVar16 = (ulonglong)local_78[0];
    if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x1b0) + uVar16 * 0x28 + 0x18),
       iVar6 == 0)) {
      lVar10 = *(longlong *)(param_1 + 0x1b0) + uVar16 * 0x28;
      iVar6 = *(int *)(lVar10 + 0x18);
      iVar2 = *(int *)(lVar10 + 0x1c);
      iVar1 = *(int *)(lVar10 + 0x20);
      iVar3 = *(int *)(lVar10 + 0x24);
      cVar4 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 8) + 0x84);
      uVar5 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
      uVar16 = (ulonglong)uVar5;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_180197918(*(longlong *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
      }
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x2c);
      if (*(char *)(param_1 + 0x248) == '\0') {
        uVar12 = *(uint *)(&DAT_18022dca0 + uVar8 * 4);
      }
      else {
        uVar12 = 1;
      }
      uVar15 = 0xf8000400;
      if ((&DAT_18022da48)[uVar8] != '\0') {
        uVar15 = 0xf8000000;
      }
      uVar9 = 0x18;
      if (cVar4 == '\0') {
        uVar9 = 0;
      }
      lVar10 = *(longlong *)(param_1 + 0x1a0);
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(param_1 + 0x198);
      }
      FUN_180197cd8(*(float *)(param_1 + 0x240) * (float)iVar6,
                    *(float *)(param_1 + 0x244) * (float)iVar2,
                    *(float *)(param_1 + 0x240) * (float)iVar1,
                    *(float *)(param_1 + 0x244) * (float)iVar3,(float)iVar6,(float)iVar2,
                    (float)iVar1,(float)iVar3,*(undefined8 *)(param_1 + 0x110),uVar8,uVar8,param_2,
                    param_3,param_2,param_3,*(undefined8 *)(param_1 + 0x78),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar16 * 0x28),0,lVar10,
                    *(undefined8 *)(param_1 + 0x1a8),0,0,0,cVar4,
                    *(uint *)(&DAT_18022da80 + uVar8 * 4) & 0xf | (uVar15 | uVar9 | uVar12 & 7) << 4
                    ,1);
      uVar8 = (ulonglong)(uVar5 >> 3) & 7;
      lVar10 = param_1 + (ulonglong)(uVar5 >> 6) * 8;
      *(byte *)(lVar10 + 0x270 + uVar8) =
           *(byte *)(lVar10 + 0x270 + uVar8) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      uVar8 = (ulonglong)(uVar5 >> 3) & 7;
      *(byte *)(lVar10 + 0x250 + uVar8) =
           *(byte *)(lVar10 + 0x250 + uVar8) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      uVar8 = (ulonglong)(uVar5 >> 3) & 7;
      *(byte *)(lVar10 + 0xf0 + uVar8) =
           *(byte *)(lVar10 + 0xf0 + uVar8) | (byte)(1 << (uVar16 & 7));
      uVar8 = (ulonglong)(uVar5 >> 3) & 7;
      *(byte *)(lVar10 + 0x260 + uVar8) =
           *(byte *)(lVar10 + 0x260 + uVar8) & ((byte)(1 << (uVar16 & 7)) ^ 0xff);
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x1b0) + uVar16 * 0x28 + 0x18);
    }
    uVar5 = local_78[0];
    uVar16 = (ulonglong)local_78[0];
    iVar6 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x90) + uVar16 * 0x28 + 0x18);
    if (iVar6 == 0) {
      if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
        FUN_180202728(*(undefined8 *)(param_1 + 0x50),extraout_x1,param_1);
        lVar10 = *(longlong *)(param_1 + 0x1f0) + uVar16 * 0x28;
        thunk_FUN_180223c70(lVar10 + 0x18,lVar10 + 0x18,
                            *(longlong *)(param_1 + 0x90) + uVar16 * 0x28 + 0x18);
        if (*(int *)(param_1 + 0x44) - 3U < 3) {
          iVar6 = *(int *)(param_1 + 0x178);
          if (iVar6 == 1) {
            uVar14 = 0xf;
          }
          else if (iVar6 == 2) {
            uVar14 = 0x10;
          }
          else if (iVar6 == 4) {
            uVar14 = 0x11;
          }
          else if (iVar6 == 8) {
            uVar14 = 0x12;
          }
          else if (iVar6 == 0x10) {
            uVar14 = 0x13;
          }
          else {
            uVar14 = 0xffffffff;
          }
          lVar10 = *(longlong *)(param_1 + 0x80);
          if (lVar10 == 0) {
            lVar10 = *(longlong *)(param_1 + 0x78);
          }
          FUN_180197cd8(0,0,(float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                        (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                        *(undefined4 *)(param_1 + 0x2c),param_2,param_3,param_2,param_3,0,0,0,lVar10
                        ,*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x1d8),
                        *(undefined8 *)
                         (*(longlong *)(param_1 + 0x1f0) +
                          (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x28 + 8),0,
                        uVar14,1);
          uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
          (*extraout_x11_00)(uVar7,*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1d8)
                            );
        }
        else {
          if (*(longlong *)(param_1 + 0x80) != 0) {
            uVar7 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(*(undefined8 *)(param_1 + 8));
            (*extraout_x11)(uVar7,*(undefined8 *)(param_1 + 0x78),uVar16);
          }
          lVar10 = param_1 + ((ulonglong)(uVar5 >> 6) + 0x4a) * 8;
          uVar8 = (ulonglong)(uVar5 >> 3) & 7;
          *(byte *)(lVar10 + uVar8) = *(byte *)(lVar10 + uVar8) | (byte)(1 << (uVar16 & 7));
          uVar12 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
          if (*(int *)(param_1 + 0x2c) == 0) {
            FUN_180197918(*(undefined8 *)(param_1 + 0x110),2,*(undefined8 *)(param_1 + 0x10));
          }
          uVar9 = *(uint *)(param_1 + 0x2c);
          uVar15 = 0x16;
          if (uVar9 != 0) {
            if (*(char *)(param_1 + 0x248) == '\0') {
              uVar15 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar9 * 4);
            }
            else {
              uVar15 = 6;
            }
            uVar15 = uVar15 & 0xf |
                     (*(uint *)(&DAT_18022dca0 + (ulonglong)uVar9 * 4) & 7 | 0xf8000020) << 4;
          }
          lVar10 = *(longlong *)(param_1 + 0x140);
          if (lVar10 == 0) {
            lVar10 = FUN_18019c518(param_1,0);
          }
          fVar17 = (float)(uint)(1 << (ulonglong)(param_2 & 0x1f));
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + (ulonglong)uVar12 * 0x28);
          }
          lVar11 = *(longlong *)(param_1 + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(param_1 + 0x78);
          }
          FUN_180197cd8(0,0,(float)*(uint *)(param_1 + 0x24) / fVar17,
                        (float)*(uint *)(param_1 + 0x28) / fVar17,0,0,
                        (float)*(uint *)(param_1 + 0x170) / fVar17,
                        (float)*(uint *)(param_1 + 0x174) / fVar17,*(undefined8 *)(param_1 + 0x110),
                        *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),param_2,
                        param_3,param_2,param_3,*(undefined8 *)(param_1 + 0x198),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)uVar12 * 0x28),
                        uVar7,lVar11,lVar10,0,0,0,0,uVar15,1);
        }
        FUN_180199710(param_1,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x198),
                      param_2,param_3,*(longlong *)(param_1 + 0x1f0) + uVar16 * 0x28 + 0x18);
        thunk_FUN_18022370c(*(longlong *)(param_1 + 0x50) + 0x620);
      }
      thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x90) + uVar16 * 0x28 + 0x18);
      uVar8 = (ulonglong)(uVar5 >> 6);
    }
    else {
      uVar8 = (ulonglong)(uVar5 >> 6);
      if ((*(byte *)(param_1 + (uVar8 + 0x4c) * 8 + ((ulonglong)(uVar5 >> 3) & 7)) >> (uVar16 & 7) &
          1) == 0) {
        uVar12 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
        uVar15 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        thunk_FUN_180223c20(local_78,0,0,uVar15,uVar12);
        if (*(longlong *)(param_1 + 0x198) != 0) {
          FUN_180199710(param_1,*(undefined8 *)(param_1 + 0x1d8),*(longlong *)(param_1 + 0x198),
                        param_2,param_3,local_78);
        }
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_180199710(param_1,*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x198),
                        param_2,param_3,*(longlong *)(param_1 + 0x1f0) + uVar16 * 0x28 + 0x18);
        }
      }
    }
    uVar13 = (ulonglong)(uVar5 >> 3) & 7;
    lVar10 = param_1 + uVar8 * 8 + 0x260;
    *(byte *)(lVar10 + uVar13) = *(byte *)(lVar10 + uVar13) | (byte)(1 << (uVar16 & 7));
  }
  return;
}

