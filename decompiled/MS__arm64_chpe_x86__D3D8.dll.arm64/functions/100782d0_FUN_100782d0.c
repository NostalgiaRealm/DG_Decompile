/*
 * FUN_100782d0 at 100782d0
 * undefined FUN_100782d0(void)
 * Address ranges: 100782d0-1007899f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100782d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5,
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
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong extraout_x15;
  undefined8 uVar19;
  int *piVar20;
  undefined4 unaff_w29;
  undefined1 auVar21 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = unaff_w29;
  auVar21 = FUN_100013c0();
  lVar9 = (ZEXT48(&stack0x00000000) - 0x50) + extraout_x15 * -0x10;
  piVar8 = (int *)lVar9;
  FUN_10077e70(auVar21._0_8_,piVar8 + 0x21c,param_3 & 0xffffffff,auVar21._8_8_);
  piVar8[0x14] = param_4;
  piVar8[0x16] = 0;
  piVar8[0x17] = 0;
  piVar8[0x18] = (int)(piVar8 + 0x21c);
  piVar8[0x19] = 0;
  piVar8[0x37] = 0;
  piVar8[0x38] = 0;
  *(undefined8 *)(piVar8 + 0x32) = *(undefined8 *)(piVar8 + 0x16);
  *(undefined8 *)(piVar8 + 0x30) = *(undefined8 *)(piVar8 + 0x14);
  *(undefined8 *)(piVar8 + 0x34) = *(undefined8 *)(piVar8 + 0x18);
  FUN_100ff690(piVar8 + 0x39,0,0x3cc);
  FUN_100ff690(piVar8 + 300,0,0x3c0);
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
  piVar8[0x18] = 0;
  piVar8[0x19] = 1;
  piVar8[0x1a] = 0;
  piVar8[0x1b] = 3;
  piVar8[0x36] = param_5;
  *(longlong *)(piVar8 + 0x150) = auVar21._8_8_;
  *(undefined1 *)(piVar8 + 0x49) = 0;
  uVar12 = FUN_100ef6d8(param_6 & 0xffffffff,piVar8 + 0x14,0x2c);
  piVar20 = (int *)param_6;
  piVar1 = piVar20 + 1;
  uVar19 = 0;
  bVar7 = false;
  *(int *)(*piVar20 + 0x20) = *piVar1 - *piVar20;
  *(undefined1 *)((int)piVar8 + 0x55e) = 0;
  if (((uint)*(undefined8 *)(piVar8 + 0x150) >> 9 & 1) != 0) {
    uVar15 = 0xffffffff;
    uVar14 = 0;
    uVar16 = 0xffffffff;
    do {
      pcVar3 = (char *)(uVar14 + piVar8[0x34]);
      cVar4 = *pcVar3;
      uVar17 = uVar16;
      if (cVar4 == '\0') {
        if (pcVar3[0x10] != '\0') {
          uVar15 = uVar14;
        }
      }
      else {
        uVar17 = uVar14;
        if (cVar4 != '0') {
          uVar17 = uVar16;
        }
      }
      uVar14 = uVar14 + 1;
      uVar16 = uVar17;
    } while (uVar14 < 0x10);
    if (uVar15 != 0xffffffff && uVar17 != 0xffffffff) {
      bVar7 = true;
      *(undefined1 *)((int)piVar8 + 0x55e) = 1;
      piVar8[0x152] = uVar17;
      goto LAB_10078450;
    }
  }
  uVar17 = piVar8[0x152];
LAB_10078450:
  *(undefined1 *)(piVar8 + 0x157) = 0;
  if (bVar7) {
    pbVar2 = (byte *)(uVar17 + piVar8[0x34] + 0x10);
    *(byte *)(piVar8 + 0x157) = *pbVar2;
    *pbVar2 = *pbVar2 | 7;
  }
  uVar13 = FUN_1007fd60(uVar12,param_6 & 0xffffffff,piVar8 + 0x30);
  if ((uVar13 & 1) != 0) {
    *(int *)(*piVar20 + 0x24) = *piVar1 - *piVar20;
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      *(char *)(piVar8[0x152] + piVar8[0x34] + 0x10) = (char)piVar8[0x157];
    }
    *(undefined1 *)(piVar8 + 0x17) = 1;
    piVar8[0xc] = 0x4e47534f;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = 8;
    piVar8[0x16] = 0x210;
    iVar10 = FUN_100fece0(0x210);
    piVar8[0x14] = iVar10;
    piVar8[0x15] = iVar10;
    FUN_100ef6d8(piVar8 + 0x14,piVar8 + 0xc,0x10);
    iVar10 = piVar8[0x34];
    iVar18 = piVar8[0x30];
    uVar14 = 0;
    uVar16 = 0;
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
      bVar5 = ((byte *)(uVar16 + iVar10))[0x10];
      if (((bVar5 != 0) && (bVar6 = *(byte *)(uVar16 + iVar10), bVar6 != 0xff)) &&
         (*(uint *)(iVar18 + 8) != 0)) {
        uVar15 = 0;
        do {
          if (*(byte *)(iVar18 + 0x19 + (uint)*(byte *)(iVar18 + 0x9c + uVar15) * 8) == bVar6) {
            piVar8[0xe] = 0;
            piVar8[0xf] = 3;
            piVar8[0xd] = bVar6 & 0xf;
            piVar8[0x10] = uVar14 & 0xff;
            *(undefined1 *)(piVar8 + 0x11) = 0xf;
            *(undefined2 *)((int)piVar8 + 0x46) = 0;
            *(byte *)((int)piVar8 + 0x45) = ~(bVar5 & 0xf);
            uVar11 = FUN_100837d8((uint)bVar6);
            iVar10 = FUN_100ef818(piVar8 + 0x20,uVar11);
            piVar8[0xc] = iVar10;
            uVar14 = uVar14 + 1;
            FUN_100ef6d8(piVar8 + 0x14,piVar8 + 0xc,0x18);
            iVar10 = piVar8[0x34];
            iVar18 = piVar8[0x30];
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(iVar18 + 8));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x10);
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      piVar8[0xd] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 3;
      piVar8[0x10] = uVar14 & 0xff;
      piVar8[0x11] = 0xf80f;
      iVar10 = FUN_100ef818(piVar8 + 0x20,&DAT_1012c910);
      piVar8[0xc] = iVar10;
      uVar14 = uVar14 + 1;
      FUN_100ef6d8(piVar8 + 0x14,piVar8 + 0xc,0x18);
    }
    FUN_100efb68(piVar8 + 0x14,uVar14,piVar8 + 0x20);
    iVar10 = piVar8[0x14];
    FUN_100ef6d8(param_6 & 0xffffffff,iVar10,piVar8[0x15] - iVar10);
    FUN_100fed00(iVar10);
    iVar10 = *piVar20;
    iVar18 = *piVar1;
    *(undefined1 *)(piVar8 + 0xf) = 1;
    *(int *)(iVar10 + 0x28) = iVar18 - iVar10;
    piVar8[0xe] = 0x200;
    iVar10 = FUN_100fece0(0x200);
    piVar8[0xc] = iVar10;
    piVar8[0xd] = iVar10;
    uVar11 = FUN_100efa80(piVar8 + 0xc,piVar8[0x36]);
    uVar12 = FUN_100efd30(piVar8[0x36],piVar8 + 0xc,0);
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      pbVar2 = (byte *)(piVar8[0x152] + piVar8[0x34] + 0x10);
      *(byte *)(piVar8 + 0x157) = *pbVar2;
      *pbVar2 = *pbVar2 | 7;
    }
    FUN_10082ae8(uVar12,piVar8 + 0xc,piVar8 + 0x30);
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      *(char *)(piVar8[0x152] + piVar8[0x34] + 0x10) = (char)piVar8[0x157];
    }
    iVar18 = piVar8[0x34];
    iVar10 = 0;
    uVar14 = 0;
    do {
      cVar4 = ((char *)(uVar14 + iVar18))[0x10];
      if ((cVar4 != '\0') && (*(char *)(uVar14 + iVar18) != -1)) {
        FUN_100f0050(piVar8 + 0xc,iVar10,cVar4);
        iVar18 = piVar8[0x34];
        iVar10 = iVar10 + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      FUN_100f0050(piVar8 + 0xc,iVar10,7);
    }
    *(undefined1 *)(piVar8 + 0x17) = 1;
    piVar8[0x16] = 0x80;
    uVar12 = FUN_100fece0(0x80);
    iVar10 = piVar8[0x34];
    uVar14 = 0;
    piVar8[0x14] = (int)uVar12;
    piVar8[0x15] = (int)uVar12;
    uVar16 = 0;
    do {
      if ((((char *)(uVar16 + iVar10))[0x10] != '\0') && (*(char *)(uVar16 + iVar10) != -1)) {
        uVar12 = FUN_1007f9b0(uVar12,piVar8 + 0x30,piVar8 + 0x14,uVar16,0xf,uVar14 | 0x410200);
        iVar10 = piVar8[0x34];
        uVar14 = uVar14 + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x10);
    if (*(char *)((int)piVar8 + 0x55e) != '\0') {
      *(undefined1 *)(piVar8[0x152] + iVar10 + 0x10) = 7;
      uVar13 = FUN_100ee580(piVar8 + 0x36,4,1);
      uVar16 = piVar8[0x152];
      uVar15 = (uint)uVar13;
      if (*(byte *)((int)piVar8 + uVar16 + 0x18a) - 2 < 2) {
        uVar16 = uVar16 | 0x410100;
      }
      else {
        FUN_1007f9b0(uVar13,piVar8 + 0x30,piVar8 + 0x14,uVar16,7,uVar13 & 0xffffffff);
        uVar16 = uVar15;
      }
      piVar8[2] = 0x10;
      piVar8[3] = uVar15;
      piVar8[1] = (int)(piVar8 + 0x14);
      piVar8[8] = 0xa4;
      piVar8[9] = 0;
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xa4;
      piVar8[7] = uVar16;
      piVar8[4] = 8;
      piVar8[5] = uVar16;
      FUN_100ef510(lVar9,0x28);
      piVar8[4] = 8;
      piVar8[5] = uVar15;
      piVar8[2] = 0x44;
      piVar8[3] = uVar15;
      piVar8[1] = (int)(piVar8 + 0x14);
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xff;
      piVar8[7] = 0;
      FUN_100ef510(lVar9,0x20);
      piVar8[8] = 0xff;
      piVar8[9] = 0;
      piVar8[4] = 7;
      piVar8[5] = uVar16;
      piVar8[2] = 0x38;
      piVar8[3] = uVar14 | 0x310200;
      piVar8[1] = (int)(piVar8 + 0x14);
      *piVar8 = (int)(piVar8 + 0x36);
      piVar8[6] = 0xa4;
      piVar8[7] = uVar15;
      FUN_100ef510(lVar9,0x28);
      FUN_100ee638(piVar8 + 0x36,uVar13 & 0xffffffff);
    }
    piVar8[2] = 0x3e;
    piVar8[3] = 0;
    piVar8[1] = (int)(piVar8 + 0x14);
    *piVar8 = (int)(piVar8 + 0x36);
    FUN_100ef510(lVar9,0x10);
    if (*(byte *)((int)piVar8 + 0x10d) != 0) {
      piVar8[3] = (uint)*(byte *)((int)piVar8 + 0x10d);
      piVar8[2] = 0x2000068;
      piVar8[1] = 2;
      *piVar8 = (int)(piVar8 + 0xc);
      FUN_100ef760(lVar9,0x10);
    }
    FUN_100efae8(piVar8 + 0xc,piVar8 + 0x14,uVar11);
    iVar10 = piVar8[0xc];
    FUN_100ef6d8(param_6 & 0xffffffff,iVar10,piVar8[0xd] - iVar10);
    FUN_100fed00(piVar8[0x14]);
    FUN_100fed00(iVar10);
    FUN_100ef888(param_6 & 0xffffffff);
    uVar19 = 1;
  }
  return uVar19;
}

