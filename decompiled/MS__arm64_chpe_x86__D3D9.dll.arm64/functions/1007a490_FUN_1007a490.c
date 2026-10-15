/*
 * FUN_1007a490 at 1007a490
 * undefined FUN_1007a490(void)
 * Address ranges: 1007a490-1007a67b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a490(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  if (param_3 != 0) {
    uVar36 = param_1 + 0x90;
    uVar4 = param_3 + 0xf5d0;
    uVar35 = 0;
    if ((param_3 + 0xf5cc < uVar36 || param_1 + 0xf65cU < param_3) &&
       (param_3 + 0x1eb9c < uVar36 || param_1 + 0xf65cU < uVar4)) {
      do {
        pbVar5 = (byte *)(uVar4 + uVar35 * 4);
        pbVar6 = (byte *)(uVar36 + uVar35 * 4);
        bVar12 = *pbVar5;
        bVar13 = pbVar5[1];
        bVar14 = pbVar5[2];
        bVar15 = pbVar5[3];
        bVar16 = pbVar5[4];
        bVar17 = pbVar5[5];
        bVar18 = pbVar5[6];
        bVar19 = pbVar5[7];
        bVar20 = pbVar5[9];
        bVar21 = pbVar5[10];
        bVar22 = pbVar5[0xb];
        bVar23 = pbVar5[0xc];
        bVar24 = pbVar5[0xd];
        bVar25 = pbVar5[0xe];
        bVar26 = pbVar5[0xf];
        pbVar7 = (byte *)(param_3 + uVar35 * 4);
        uVar35 = uVar35 + 4;
        uVar10 = *(undefined8 *)(pbVar7 + 8);
        bVar27 = *pbVar7;
        bVar28 = pbVar7[1];
        bVar29 = pbVar7[2];
        bVar30 = pbVar7[3];
        bVar31 = pbVar7[4];
        bVar32 = pbVar7[5];
        bVar33 = pbVar7[6];
        bVar34 = pbVar7[7];
        pbVar6[8] = pbVar6[8] ^ (pbVar6[8] ^ pbVar7[8]) & pbVar5[8];
        pbVar6[9] = pbVar6[9] ^ (pbVar6[9] ^ (byte)((ulonglong)uVar10 >> 8)) & bVar20;
        pbVar6[10] = pbVar6[10] ^ (pbVar6[10] ^ (byte)((ulonglong)uVar10 >> 0x10)) & bVar21;
        pbVar6[0xb] = pbVar6[0xb] ^ (pbVar6[0xb] ^ (byte)((ulonglong)uVar10 >> 0x18)) & bVar22;
        pbVar6[0xc] = pbVar6[0xc] ^ (pbVar6[0xc] ^ (byte)((ulonglong)uVar10 >> 0x20)) & bVar23;
        pbVar6[0xd] = pbVar6[0xd] ^ (pbVar6[0xd] ^ (byte)((ulonglong)uVar10 >> 0x28)) & bVar24;
        pbVar6[0xe] = pbVar6[0xe] ^ (pbVar6[0xe] ^ (byte)((ulonglong)uVar10 >> 0x30)) & bVar25;
        pbVar6[0xf] = pbVar6[0xf] ^ (pbVar6[0xf] ^ (byte)((ulonglong)uVar10 >> 0x38)) & bVar26;
        *pbVar6 = *pbVar6 ^ (*pbVar6 ^ bVar27) & bVar12;
        pbVar6[1] = pbVar6[1] ^ (pbVar6[1] ^ bVar28) & bVar13;
        pbVar6[2] = pbVar6[2] ^ (pbVar6[2] ^ bVar29) & bVar14;
        pbVar6[3] = pbVar6[3] ^ (pbVar6[3] ^ bVar30) & bVar15;
        pbVar6[4] = pbVar6[4] ^ (pbVar6[4] ^ bVar31) & bVar16;
        pbVar6[5] = pbVar6[5] ^ (pbVar6[5] ^ bVar32) & bVar17;
        pbVar6[6] = pbVar6[6] ^ (pbVar6[6] ^ bVar33) & bVar18;
        pbVar6[7] = pbVar6[7] ^ (pbVar6[7] ^ bVar34) & bVar19;
      } while (uVar35 < 0x3d74);
    }
    else {
      do {
        puVar8 = (uint *)(uVar36 + uVar35 * 4);
        uVar9 = *(uint *)(uVar4 + uVar35 * 4);
        iVar1 = uVar35 * 4;
        uVar35 = uVar35 + 1;
        *puVar8 = *(uint *)(param_3 + iVar1) & uVar9 | *puVar8 & (uVar9 ^ 0xffffffff);
      } while (uVar35 < 0x3d74);
    }
    puVar3 = (undefined8 *)(param_3 + 0x1eba0);
    pbVar5 = (byte *)(param_1 + 0xf660);
    if (((byte *)(param_3 + 0x1ebe8) < pbVar5) || ((undefined8 *)(param_1 + 0xf6a8U) < puVar3)) {
      uVar11 = *(undefined8 *)(param_1 + 0xf668);
      uVar10 = *(undefined8 *)pbVar5;
      uVar38 = *(undefined8 *)(param_3 + 0x1eba8);
      uVar37 = *puVar3;
      bVar12 = *(byte *)(param_3 + 0x1eba2);
      bVar13 = *(byte *)(param_3 + 0x1eba3);
      bVar14 = *(byte *)(param_3 + 0x1eba4);
      bVar15 = *(byte *)(param_3 + 0x1eba5);
      bVar16 = *(byte *)(param_3 + 0x1eba6);
      bVar17 = *(byte *)(param_3 + 0x1eba7);
      *(byte *)(param_1 + 0xf668) = (byte)uVar11 | *(byte *)(param_3 + 0x1eba8);
      *(byte *)(param_1 + 0xf669) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xf66a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xf66b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xf66c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xf66d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xf66e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xf66f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *pbVar5 = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xf661) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xf662) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf663) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf664) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf665) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf666) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf667) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar11 = *(undefined8 *)(param_1 + 0xf678);
      uVar10 = *(undefined8 *)(param_1 + 0xf670);
      uVar38 = *(undefined8 *)(param_3 + 0x1ebb8);
      uVar37 = *(undefined8 *)(param_3 + 0x1ebb0);
      bVar12 = *(byte *)(param_3 + 0x1ebb2);
      bVar13 = *(byte *)(param_3 + 0x1ebb3);
      bVar14 = *(byte *)(param_3 + 0x1ebb4);
      bVar15 = *(byte *)(param_3 + 0x1ebb5);
      bVar16 = *(byte *)(param_3 + 0x1ebb6);
      bVar17 = *(byte *)(param_3 + 0x1ebb7);
      *(byte *)(param_1 + 0xf678) = (byte)uVar11 | *(byte *)(param_3 + 0x1ebb8);
      *(byte *)(param_1 + 0xf679) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xf67a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xf67b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xf67c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xf67d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xf67e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xf67f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xf670) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xf671) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xf672) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf673) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf674) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf675) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf676) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf677) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar38 = *(undefined8 *)(param_3 + 0x1ebc8);
      uVar37 = *(undefined8 *)(param_3 + 0x1ebc0);
      bVar12 = *(byte *)(param_3 + 0x1ebc2);
      bVar13 = *(byte *)(param_3 + 0x1ebc3);
      bVar14 = *(byte *)(param_3 + 0x1ebc4);
      bVar15 = *(byte *)(param_3 + 0x1ebc5);
      bVar16 = *(byte *)(param_3 + 0x1ebc6);
      bVar17 = *(byte *)(param_3 + 0x1ebc7);
      uVar11 = *(undefined8 *)(param_1 + 0xf688);
      uVar10 = *(undefined8 *)(param_1 + 0xf680);
      *(byte *)(param_1 + 0xf688) = (byte)uVar11 | *(byte *)(param_3 + 0x1ebc8);
      *(byte *)(param_1 + 0xf689) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xf68a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xf68b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xf68c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xf68d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xf68e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xf68f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xf680) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xf681) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xf682) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf683) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf684) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf685) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf686) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf687) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar38 = *(undefined8 *)(param_3 + 0x1ebd8);
      uVar37 = *(undefined8 *)(param_3 + 0x1ebd0);
      bVar12 = *(byte *)(param_3 + 0x1ebd2);
      bVar13 = *(byte *)(param_3 + 0x1ebd3);
      bVar14 = *(byte *)(param_3 + 0x1ebd4);
      bVar15 = *(byte *)(param_3 + 0x1ebd5);
      bVar16 = *(byte *)(param_3 + 0x1ebd6);
      bVar17 = *(byte *)(param_3 + 0x1ebd7);
      uVar11 = *(undefined8 *)(param_1 + 0xf698);
      uVar10 = *(undefined8 *)(param_1 + 0xf690);
      uVar36 = 0x10;
      *(byte *)(param_1 + 0xf698) = (byte)uVar11 | *(byte *)(param_3 + 0x1ebd8);
      *(byte *)(param_1 + 0xf699) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xf69a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xf69b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xf69c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xf69d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xf69e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xf69f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xf690) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xf691) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xf692) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf693) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf694) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf695) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf696) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf697) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
    }
    else {
      uVar36 = 0;
      do {
        *(uint *)(pbVar5 + uVar36 * 4) =
             *(uint *)((int)puVar3 + uVar36 * 4) | *(uint *)(pbVar5 + uVar36 * 4);
        puVar8 = (uint *)(param_1 + 0xf664 + uVar36 * 4);
        *puVar8 = *(uint *)(param_3 + 0x1eba4 + uVar36 * 4) | *puVar8;
        puVar8 = (uint *)(param_1 + 0xf668 + uVar36 * 4);
        *puVar8 = *(uint *)(param_3 + 0x1eba8 + uVar36 * 4) | *puVar8;
        iVar1 = uVar36 * 4;
        puVar8 = (uint *)(param_1 + 0xf66c + uVar36 * 4);
        uVar36 = uVar36 + 4;
        *puVar8 = *(uint *)(param_3 + 0x1ebac + iVar1) | *puVar8;
      } while (uVar36 < 0x10);
      if (0x12 < uVar36) {
        return;
      }
    }
    do {
      iVar1 = uVar36 * 4;
      iVar2 = uVar36 * 4;
      uVar36 = uVar36 + 1;
      *(uint *)(pbVar5 + iVar2) = *(uint *)((int)puVar3 + iVar1) | *(uint *)(pbVar5 + iVar2);
    } while (uVar36 < 0x13);
  }
  return;
}

