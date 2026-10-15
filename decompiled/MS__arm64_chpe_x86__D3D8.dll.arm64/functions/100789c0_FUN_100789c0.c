/*
 * FUN_100789c0 at 100789c0
 * undefined FUN_100789c0(void)
 * Address ranges: 100789c0-10078f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100789c0(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5,
            int param_6,undefined8 param_7,int param_8)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong extraout_x15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined4 unaff_w29;
  undefined1 auVar21 [16];
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = unaff_w29;
  auVar21 = FUN_100013c0();
  lVar9 = (ZEXT48(&stack0x00000000) - 0x50) + extraout_x15 * -0x10;
  piVar7 = (int *)lVar9;
  piVar7[0x18] = auVar21._0_4_;
  FUN_10077e70(auVar21._0_8_,piVar7 + 0x218,param_3 & 0xffffffff,auVar21._8_8_);
  piVar7[8] = param_5;
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[0xc] = (int)(piVar7 + 0x218);
  piVar7[0xd] = 0;
  piVar7[0x33] = param_4;
  piVar7[0x34] = 0;
  *(undefined8 *)(piVar7 + 0x2e) = *(undefined8 *)(piVar7 + 10);
  *(undefined8 *)(piVar7 + 0x2c) = *(undefined8 *)(piVar7 + 8);
  *(undefined8 *)(piVar7 + 0x30) = *(undefined8 *)(piVar7 + 0xc);
  FUN_100ff690(piVar7 + 0x35,0,0x3cc);
  FUN_100ff690(piVar7 + 0x128,0,0x3c0);
  piVar7[0x10] = 0;
  piVar7[0x11] = 0;
  piVar7[0x12] = 0;
  piVar7[0x69] = 0;
  piVar7[0x6a] = 0;
  piVar7[0x67] = 0;
  piVar7[0x68] = 0;
  piVar7[0x6d] = 0;
  piVar7[0x6e] = 0;
  piVar7[0x6b] = 0;
  piVar7[0x6c] = 0;
  piVar7[0x71] = 0;
  piVar7[0x72] = 0;
  piVar7[0x6f] = 0;
  piVar7[0x70] = 0;
  piVar7[0x75] = 0;
  piVar7[0x76] = 0;
  piVar7[0x73] = 0;
  piVar7[0x74] = 0;
  piVar7[0x79] = 0;
  piVar7[0x7a] = 0;
  piVar7[0x77] = 0;
  piVar7[0x78] = 0;
  piVar7[0x7d] = 0;
  piVar7[0x7e] = 0;
  piVar7[0x7b] = 0;
  piVar7[0x7c] = 0;
  piVar7[0x81] = 0;
  piVar7[0x82] = 0;
  piVar7[0x7f] = 0;
  piVar7[0x80] = 0;
  piVar7[0x85] = 0;
  piVar7[0x86] = 0;
  piVar7[0x83] = 0;
  piVar7[0x84] = 0;
  piVar7[0x89] = 0;
  piVar7[0x8a] = 0;
  piVar7[0x87] = 0;
  piVar7[0x88] = 0;
  piVar7[0x8d] = 0;
  piVar7[0x8e] = 0;
  piVar7[0x8b] = 0;
  piVar7[0x8c] = 0;
  piVar7[0x91] = 0;
  piVar7[0x92] = 0;
  piVar7[0x8f] = 0;
  piVar7[0x90] = 0;
  piVar7[0x95] = 0;
  piVar7[0x96] = 0;
  piVar7[0x93] = 0;
  piVar7[0x94] = 0;
  piVar7[0x99] = 0;
  piVar7[0x9a] = 0;
  piVar7[0x97] = 0;
  piVar7[0x98] = 0;
  piVar7[0x9d] = 0;
  piVar7[0x9e] = 0;
  piVar7[0x9b] = 0;
  piVar7[0x9c] = 0;
  piVar7[0xa1] = 0;
  piVar7[0xa2] = 0;
  piVar7[0x9f] = 0;
  piVar7[0xa0] = 0;
  piVar7[0xa5] = 0;
  piVar7[0xa6] = 0;
  piVar7[0xa3] = 0;
  piVar7[0xa4] = 0;
  piVar7[0xa9] = 0;
  piVar7[0xaa] = 0;
  piVar7[0xa7] = 0;
  piVar7[0xa8] = 0;
  piVar7[0xad] = 0;
  piVar7[0xae] = 0;
  piVar7[0xab] = 0;
  piVar7[0xac] = 0;
  piVar7[0xb1] = 0;
  piVar7[0xb2] = 0;
  piVar7[0xaf] = 0;
  piVar7[0xb0] = 0;
  piVar7[0xb5] = 0;
  piVar7[0xb6] = 0;
  piVar7[0xb3] = 0;
  piVar7[0xb4] = 0;
  piVar7[0xb9] = 0;
  piVar7[0xba] = 0;
  piVar7[0xb7] = 0;
  piVar7[0xb8] = 0;
  piVar7[0xbb] = 0;
  piVar7[0xbc] = 0;
  piVar7[0xbd] = 0;
  piVar7[0x5c] = param_6 + 4;
  piVar7[0x5d] = param_4;
  *(undefined1 *)(piVar7 + 0x5e) = 0;
  *(longlong *)(piVar7 + 0x14c) = auVar21._8_8_;
  *(undefined2 *)((int)piVar7 + 0x54e) = 0;
  *(char *)((int)piVar7 + 0x179) = (char)piVar7[0x144a];
  *(undefined1 *)(piVar7 + 0x154) = 0;
  *(char *)(piVar7 + 0x45) = (char)piVar7[0x144c];
  piVar7[0x34] = 0;
  piVar7[0x35] = 0;
  piVar7[0x32] = 0;
  piVar7[0x33] = 0;
  piVar7[0x38] = 0;
  piVar7[0x39] = 0;
  piVar7[0x36] = 0;
  piVar7[0x37] = 0;
  piVar7[0x3c] = 0;
  piVar7[0x3d] = 0;
  piVar7[0x3a] = 0;
  piVar7[0x3b] = 0;
  piVar7[0x3e] = 0;
  piVar7[0x3f] = 0;
  piVar7[0x3e] = (int)piVar7 + 0x116;
  piVar7[0x32] = param_8;
  piVar3 = (int *)piVar7[0x1444];
  *(undefined2 *)(piVar7 + 0x3f) = 0x40;
  piVar7[8] = 0x43425844;
  piVar7[9] = 0;
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[0xc] = 0;
  piVar7[0xd] = 1;
  piVar7[0xe] = 0;
  piVar7[0xf] = 3;
  FUN_100ef6d8(piVar3,piVar7 + 8,0x2c);
  piVar1 = piVar3 + 1;
  uVar20 = 0;
  *(int *)(*piVar3 + 0x20) = *piVar1 - *piVar3;
  piVar7[8] = 0x4e475349;
  piVar7[9] = 0;
  piVar7[10] = 0;
  piVar7[0xb] = 8;
  piVar7[6] = 0x210;
  *(undefined1 *)(piVar7 + 7) = 1;
  iVar10 = FUN_100fece0(0x210);
  piVar7[4] = iVar10;
  piVar7[5] = iVar10;
  FUN_100ef6d8(piVar7 + 4,piVar7 + 8,0x10);
  uVar14 = *(ulonglong *)(piVar7 + 0x14c);
  iVar10 = piVar7[0x30];
  iVar15 = piVar7[0x2c];
  uVar19 = 0;
  piVar7[0x1e] = 0;
  piVar7[0x1f] = 0;
  piVar7[0x1c] = 0;
  piVar7[0x1d] = 0;
  piVar7[0x22] = 0;
  piVar7[0x23] = 0;
  piVar7[0x20] = 0;
  piVar7[0x21] = 0;
  uVar16 = 0;
  piVar7[0x26] = 0;
  piVar7[0x27] = 0;
  piVar7[0x24] = 0;
  piVar7[0x25] = 0;
  piVar7[0x2a] = 0;
  piVar7[0x2b] = 0;
  piVar7[0x28] = 0;
  piVar7[0x29] = 0;
  uVar17 = 0xffffffff;
  do {
    pbVar2 = (byte *)(iVar10 + uVar16);
    bVar4 = pbVar2[0x10];
    uVar18 = uVar16;
    if ((bVar4 == 0) || (bVar5 = *pbVar2, bVar5 == 0xff)) {
      if (*pbVar2 != 0x30) {
        uVar18 = uVar17;
      }
    }
    else {
      if (bVar5 != 0x30) {
        uVar18 = uVar17;
      }
      if (*(uint *)(iVar15 + 8) != 0) {
        uVar17 = 0;
        do {
          uVar11 = (uint)bVar5;
          if (*(byte *)(iVar15 + 0x19 + (uint)*(byte *)(iVar15 + 0x9c + uVar17) * 8) == uVar11) {
            piVar7[10] = 0;
            piVar7[0xb] = 3;
            piVar7[9] = uVar11 & 0xf;
            piVar7[0xc] = uVar19 & 0xff;
            *(undefined1 *)(piVar7 + 0xd) = 0xf;
            *(byte *)((int)piVar7 + 0x35) = bVar4 & 0xf;
            *(undefined2 *)((int)piVar7 + 0x36) = 0;
            uVar12 = FUN_100837d8(uVar11);
            iVar10 = FUN_100ef818(piVar7 + 0x1c,uVar12);
            piVar7[8] = iVar10;
            uVar19 = uVar19 + 1;
            FUN_100ef6d8(piVar7 + 4,piVar7 + 8,0x18);
            iVar10 = piVar7[0x30];
            iVar15 = piVar7[0x2c];
            break;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(iVar15 + 8));
      }
    }
    uVar16 = uVar16 + 1;
    uVar17 = uVar18;
    if (0xf < uVar16) {
      piVar7[0x14e] = -1;
      if ((uVar18 != 0xffffffff) && ((uVar14 >> 9 & 1) != 0)) {
        piVar7[9] = 0;
        piVar7[10] = 0;
        piVar7[0x14e] = uVar19;
        piVar7[0xb] = 3;
        piVar7[0xc] = uVar19 & 0xff;
        piVar7[0xd] = 0x70f;
        iVar10 = FUN_100ef818(piVar7 + 0x1c,&DAT_1012c910);
        piVar7[8] = iVar10;
        uVar19 = uVar19 + 1;
        FUN_100ef6d8(piVar7 + 4,piVar7 + 8,0x18);
      }
      FUN_100efb68(piVar7 + 4,uVar19,piVar7 + 0x1c);
      iVar10 = piVar7[4];
      FUN_100ef6d8(piVar3,iVar10,piVar7[5] - iVar10);
      uVar13 = FUN_100fed00(iVar10);
      *(int *)(*piVar3 + 0x24) = *piVar1 - *piVar3;
      iVar10 = FUN_10078fa0(uVar13,piVar3,piVar7 + 0x2c);
      piVar7[0x14f] = iVar10;
      if (iVar10 != 0) {
        iVar10 = *piVar3;
        iVar15 = *piVar1;
        bVar8 = false;
        *(undefined1 *)(piVar7 + 7) = 1;
        *(int *)(iVar10 + 0x28) = iVar15 - iVar10;
        piVar7[6] = 0x200;
        uVar13 = FUN_100fece0(0x200);
        piVar7[4] = (int)uVar13;
        piVar7[5] = (int)uVar13;
        auVar21 = FUN_10073d68(uVar13,piVar7 + 4,piVar7 + 0x2c);
        uVar14 = auVar21._0_8_;
        if (auVar21._0_4_ == 0) {
          iVar10 = piVar7[4];
        }
        else {
          iVar15 = piVar7[0x30];
          iVar10 = 0;
          uVar19 = 0;
          do {
            cVar6 = ((char *)(iVar15 + uVar19))[0x10];
            if ((cVar6 != '\0') && (*(char *)(iVar15 + uVar19) != -1)) {
              auVar21 = FUN_100eff50(piVar7 + 4,auVar21._8_8_,iVar10,cVar6);
              iVar15 = piVar7[0x30];
              iVar10 = iVar10 + 1;
            }
            uVar13 = auVar21._0_8_;
            uVar19 = uVar19 + 1;
          } while (uVar19 < 0x10);
          if (piVar7[0x14e] != -1) {
            uVar13 = FUN_100eff50(piVar7 + 4,auVar21._8_8_,iVar10,7);
          }
          FUN_10073ec8(uVar13,piVar7 + 4,piVar7 + 0x2c);
          *(undefined1 *)(piVar7 + 0x17) = 1;
          piVar7[0x16] = 0x80;
          iVar10 = FUN_100fece0(0x80);
          piVar7[10] = 0x80;
          piVar7[0x14] = iVar10;
          piVar7[0x15] = iVar10;
          *(undefined1 *)(piVar7 + 0xb) = 1;
          iVar10 = FUN_100fece0(0x80);
          piVar7[8] = iVar10;
          piVar7[9] = iVar10;
          FUN_10074158(piVar7[0x18],piVar7 + 0x14,piVar7 + 8,piVar7 + 0x2c);
          piVar7[2] = 0x3e;
          piVar7[3] = 0;
          piVar7[1] = (int)(piVar7 + 0x14);
          *piVar7 = (int)(piVar7 + 0x32);
          FUN_100ef510(lVar9,0x10);
          uVar13 = FUN_100ef6d8(piVar7 + 0x14,piVar7[8],piVar7[9] - piVar7[8]);
          uVar13 = FUN_10082b68(uVar13,piVar7 + 4,piVar7 + 0x2c);
          FUN_10074000(uVar13,piVar7 + 4,piVar7 + 0x2c);
          FUN_100efae8(piVar7 + 4,piVar7 + 0x14,uVar14 & 0xffffffff);
          iVar10 = piVar7[4];
          FUN_100ef6d8(piVar3,iVar10,piVar7[5] - iVar10);
          bVar8 = true;
          FUN_100fed00(piVar7[8]);
          FUN_100fed00(piVar7[0x14]);
        }
        FUN_100fed00(iVar10);
        if (bVar8) {
          uVar20 = FUN_100ef888(piVar3);
          FUN_10082c00(uVar20,piVar7 + 0x2c,piVar7[0x1446]);
          uVar20 = 1;
        }
      }
      return uVar20;
    }
  } while( true );
}

