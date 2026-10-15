/*
 * FUN_10093d88 at 10093d88
 * undefined FUN_10093d88(void)
 * Address ranges: 10093d88-10094463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10093d88(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5,
            ulonglong param_6)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong extraout_x15;
  undefined8 uVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined4 unaff_w29;
  undefined1 auVar22 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = unaff_w29;
  auVar22 = FUN_100013c0();
  lVar9 = (ZEXT48(&stack0x00000000) - 0x50) + extraout_x15 * -0x10;
  piVar8 = (int *)lVar9;
  uVar21 = auVar22._0_8_ & 0xffffffff;
  FUN_100937e0(auVar22._0_8_,piVar8 + 0x240,param_3 & 0xffffffff,auVar22._8_8_);
  piVar8[0x14] = param_4;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  piVar8[0x18] = (int)(piVar8 + 0x240);
  piVar8[0x19] = 0;
  piVar8[0x37] = 0;
  piVar8[0x38] = 0;
  *(undefined8 *)(piVar8 + 0x32) = *(undefined8 *)(piVar8 + 0x16);
  *(undefined8 *)(piVar8 + 0x30) = *(undefined8 *)(piVar8 + 0x14);
  *(undefined8 *)(piVar8 + 0x34) = *(undefined8 *)(piVar8 + 0x18);
  FUN_101325d0(piVar8 + 0x39,0,0x45c);
  FUN_101325d0(piVar8 + 0x150,0,0x3c0);
  piVar8[0x1c] = 0;
  piVar8[0x1d] = 0;
  piVar8[0x1e] = 0;
  piVar8[0x38] = 0;
  piVar8[0x39] = 0;
  piVar8[0x36] = 0;
  piVar8[0x37] = 0;
  piVar8[0x3c] = 0;
  piVar8[0x3d] = 0;
  piVar8[0x3a] = 0;
  piVar8[0x3b] = 0;
  piVar8[0x40] = 0;
  piVar8[0x41] = 0;
  piVar8[0x3e] = 0;
  piVar8[0x3f] = 0;
  piVar8[0x42] = 0;
  piVar8[0x43] = 0;
  piVar8[0x42] = (int)piVar8 + 0x126;
  *(undefined2 *)(piVar8 + 0x43) = 0x40;
  piVar8[0x14] = 0x43425844;
  piVar8[0x15] = 0;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  *(longlong *)(piVar8 + 0x174) = auVar22._8_8_;
  piVar8[0x18] = 0;
  piVar8[0x19] = 1;
  piVar8[0x1a] = 0;
  piVar8[0x1b] = 3;
  piVar8[0x36] = param_5;
  *(undefined1 *)(piVar8 + 0x49) = 0;
  uVar14 = FUN_10122c50(param_6 & 0xffffffff,piVar8 + 0x14,0x2c);
  piVar20 = (int *)param_6;
  piVar1 = piVar20 + 1;
  uVar19 = 0;
  bVar7 = false;
  *(int *)(*piVar20 + 0x20) = *piVar1 - *piVar20;
  *(undefined1 *)((int)piVar8 + 0x5ee) = 0;
  if (((uint)*(undefined8 *)(piVar8 + 0x174) >> 9 & 1) != 0) {
    uVar13 = 0xffffffff;
    uVar16 = 0;
    uVar17 = 0xffffffff;
    do {
      pcVar3 = (char *)(uVar16 + piVar8[0x34]);
      cVar4 = *pcVar3;
      uVar18 = uVar17;
      if (cVar4 == '\0') {
        if (pcVar3[0x10] != '\0') {
          uVar13 = uVar16;
        }
      }
      else {
        uVar18 = uVar16;
        if (cVar4 != '0') {
          uVar18 = uVar17;
        }
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar18;
    } while (uVar16 < 0x10);
    if (uVar13 != 0xffffffff && uVar18 != 0xffffffff) {
      bVar7 = true;
      *(undefined1 *)((int)piVar8 + 0x5ee) = 1;
      piVar8[0x176] = uVar18;
      goto LAB_10093f0c;
    }
  }
  uVar18 = piVar8[0x176];
LAB_10093f0c:
  *(undefined1 *)(piVar8 + 0x17b) = 0;
  if (bVar7) {
    pbVar2 = (byte *)(uVar18 + piVar8[0x34] + 0x10);
    *(byte *)(piVar8 + 0x17b) = *pbVar2;
    *pbVar2 = *pbVar2 | 7;
  }
  uVar15 = FUN_1009f138(uVar14,param_6 & 0xffffffff,piVar8 + 0x30);
  if ((uVar15 & 1) != 0) {
    *(int *)(*piVar20 + 0x24) = *piVar1 - *piVar20;
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      *(char *)(piVar8[0x176] + piVar8[0x34] + 0x10) = (char)piVar8[0x17b];
    }
    *(undefined1 *)(piVar8 + 0x17) = 1;
    piVar8[0xc] = 0x4e47534f;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = 8;
    piVar8[0x16] = 0x210;
    iVar10 = FUN_101322b0(0x210);
    piVar8[0x14] = iVar10;
    piVar8[0x15] = iVar10;
    FUN_10122c50(piVar8 + 0x14,piVar8 + 0xc,0x10);
    iVar10 = piVar8[0x34];
    iVar12 = piVar8[0x30];
    uVar16 = 0;
    uVar17 = 0;
    piVar8[0x22] = 0;
    piVar8[0x23] = 0;
    piVar8[0x20] = 0;
    piVar8[0x21] = 0;
    piVar8[0x26] = 0;
    piVar8[0x27] = 0;
    piVar8[0x24] = 0;
    piVar8[0x25] = 0;
    piVar8[0x2a] = 0;
    piVar8[0x2b] = 0;
    piVar8[0x28] = 0;
    piVar8[0x29] = 0;
    piVar8[0x2e] = 0;
    piVar8[0x2f] = 0;
    piVar8[0x2c] = 0;
    piVar8[0x2d] = 0;
    do {
      bVar5 = ((byte *)(uVar17 + iVar10))[0x10];
      if (((bVar5 != 0) && (bVar6 = *(byte *)(uVar17 + iVar10), bVar6 != 0xff)) &&
         (*(uint *)(iVar12 + 8) != 0)) {
        uVar13 = 0;
        do {
          if (*(byte *)(iVar12 + 0x19 + (uint)*(byte *)(iVar12 + 0x214 + uVar13) * 8) == bVar6) {
            piVar8[0xe] = 0;
            piVar8[0xf] = 3;
            piVar8[0xd] = bVar6 & 0xf;
            piVar8[0x10] = uVar16 & 0xff;
            *(undefined1 *)(piVar8 + 0x11) = 0xf;
            *(undefined2 *)((int)piVar8 + 0x46) = 0;
            *(byte *)((int)piVar8 + 0x45) = ~(bVar5 & 0xf);
            uVar11 = FUN_100a33c8((uint)bVar6);
            iVar10 = FUN_10122d90(piVar8 + 0x20,uVar11);
            piVar8[0xc] = iVar10;
            uVar16 = uVar16 + 1;
            FUN_10122c50(piVar8 + 0x14,piVar8 + 0xc,0x18);
            iVar10 = piVar8[0x34];
            iVar12 = piVar8[0x30];
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(iVar12 + 8));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      piVar8[0xd] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 3;
      piVar8[0x10] = uVar16 & 0xff;
      piVar8[0x11] = 0xf80f;
      iVar10 = FUN_10122d90(piVar8 + 0x20,&DAT_101623b0);
      piVar8[0xc] = iVar10;
      uVar16 = uVar16 + 1;
      FUN_10122c50(piVar8 + 0x14,piVar8 + 0xc,0x18);
    }
    FUN_101230e0(piVar8 + 0x14,uVar16,piVar8 + 0x20);
    iVar10 = piVar8[0x14];
    FUN_10122c50(param_6 & 0xffffffff,iVar10,piVar8[0x15] - iVar10);
    FUN_101322d0(iVar10);
    iVar10 = *piVar20;
    iVar12 = *piVar1;
    *(undefined1 *)(piVar8 + 0xf) = 1;
    *(int *)(iVar10 + 0x28) = iVar12 - iVar10;
    piVar8[0xe] = 0x200;
    iVar10 = FUN_101322b0(0x200);
    piVar8[0xc] = iVar10;
    piVar8[0xd] = iVar10;
    uVar11 = FUN_10122ff8(piVar8 + 0xc,piVar8[0x36]);
    uVar14 = FUN_101232a8(piVar8[0x36],piVar8 + 0xc,0);
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      pbVar2 = (byte *)(piVar8[0x176] + piVar8[0x34] + 0x10);
      *(byte *)(piVar8 + 0x17b) = *pbVar2;
      *pbVar2 = *pbVar2 | 7;
    }
    FUN_100a2380(uVar14,piVar8 + 0xc,piVar8 + 0x30);
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      *(char *)(piVar8[0x176] + piVar8[0x34] + 0x10) = (char)piVar8[0x17b];
    }
    iVar12 = piVar8[0x34];
    iVar10 = 0;
    uVar16 = 0;
    do {
      cVar4 = ((char *)(uVar16 + iVar12))[0x10];
      if ((cVar4 != '\0') && (*(char *)(uVar16 + iVar12) != -1)) {
        FUN_101235c8(piVar8 + 0xc,iVar10,cVar4);
        iVar12 = piVar8[0x34];
        iVar10 = iVar10 + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x10);
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      FUN_101235c8(piVar8 + 0xc,iVar10,7);
    }
    *(undefined1 *)(piVar8 + 0x17) = 1;
    piVar8[0x16] = 0x80;
    iVar12 = FUN_101322b0(0x80);
    iVar10 = piVar8[0x34];
    uVar16 = 0;
    piVar8[0x14] = iVar12;
    piVar8[0x15] = iVar12;
    uVar17 = 0;
    do {
      if ((((char *)(uVar17 + iVar10))[0x10] != '\0') && (*(char *)(uVar17 + iVar10) != -1)) {
        FUN_1009ec30(uVar21,piVar8 + 0x30,piVar8 + 0x14,uVar17,0xf,uVar16 | 0x410200);
        iVar10 = piVar8[0x34];
        uVar16 = uVar16 + 1;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    if (*(char *)((int)piVar8 + 0x5ee) != '\0') {
      *(undefined1 *)(piVar8[0x176] + iVar10 + 0x10) = 7;
      uVar13 = FUN_10121590(piVar8 + 0x36,4,1);
      uVar17 = piVar8[0x176];
      if (*(byte *)((int)piVar8 + uVar17 + 0x18a) - 2 < 2) {
        uVar17 = uVar17 | 0x410100;
      }
      else {
        FUN_1009ec30(uVar21,piVar8 + 0x30,piVar8 + 0x14,uVar17,7,uVar13);
        uVar17 = uVar13;
      }
      piVar8[2] = 0x10;
      piVar8[3] = uVar13;
      piVar8[1] = (int)(piVar8 + 0x14);
      piVar8[8] = 0xa4;
      piVar8[9] = 0;
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xa4;
      piVar8[7] = uVar17;
      piVar8[4] = 8;
      piVar8[5] = uVar17;
      FUN_10122a88(lVar9,0x28);
      piVar8[4] = 8;
      piVar8[5] = uVar13;
      piVar8[2] = 0x44;
      piVar8[3] = uVar13;
      piVar8[1] = (int)(piVar8 + 0x14);
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xff;
      piVar8[7] = 0;
      FUN_10122a88(lVar9,0x20);
      piVar8[8] = 0xff;
      piVar8[9] = 0;
      piVar8[4] = 7;
      piVar8[5] = uVar17;
      piVar8[2] = 0x38;
      piVar8[3] = uVar16 | 0x310200;
      piVar8[1] = (int)(piVar8 + 0x14);
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xa4;
      piVar8[7] = uVar13;
      FUN_10122a88(lVar9,0x28);
      FUN_10121648(piVar8 + 0x36,uVar13);
    }
    piVar8[2] = 0x3e;
    piVar8[3] = 0;
    piVar8[1] = (int)(piVar8 + 0x14);
    *piVar8 = (int)(piVar8 + 0x36);
    FUN_10122a88(lVar9,0x10);
    if (*(byte *)((int)piVar8 + 0x10d) != 0) {
      piVar8[3] = (uint)*(byte *)((int)piVar8 + 0x10d);
      piVar8[2] = 0x2000068;
      piVar8[1] = 2;
      *piVar8 = (int)(piVar8 + 0xc);
      FUN_10122cd8(lVar9,0x10);
    }
    FUN_10123060(piVar8 + 0xc,piVar8 + 0x14,uVar11);
    iVar10 = piVar8[0xc];
    FUN_10122c50(param_6 & 0xffffffff,iVar10,piVar8[0xd] - iVar10);
    FUN_101322d0(piVar8[0x14]);
    FUN_101322d0(iVar10);
    FUN_10122e00(param_6 & 0xffffffff);
    uVar19 = 1;
  }
  return uVar19;
}

