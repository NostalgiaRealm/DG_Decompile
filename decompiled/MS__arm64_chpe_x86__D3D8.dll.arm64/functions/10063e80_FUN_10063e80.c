/*
 * FUN_10063e80 at 10063e80
 * undefined FUN_10063e80(void)
 * Address ranges: 10063e80-10064063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063e80(int param_1,undefined8 param_2,uint param_3)

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
    uVar4 = param_3 + 0xd8e0;
    uVar35 = 0;
    if ((param_3 + 0xd8dc < uVar36 || param_1 + 0xd96cU < param_3) &&
       (param_3 + 0x1b1bc < uVar36 || param_1 + 0xd96cU < uVar4)) {
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
      } while (uVar35 < 0x3638);
    }
    else {
      do {
        puVar8 = (uint *)(uVar36 + uVar35 * 4);
        uVar9 = *(uint *)(uVar4 + uVar35 * 4);
        iVar1 = uVar35 * 4;
        uVar35 = uVar35 + 1;
        *puVar8 = *(uint *)(param_3 + iVar1) & uVar9 | *puVar8 & (uVar9 ^ 0xffffffff);
      } while (uVar35 < 0x3638);
    }
    puVar3 = (undefined8 *)(param_3 + 0x1b1c0);
    pbVar5 = (byte *)(param_1 + 0xd970);
    if (((byte *)(param_3 + 0x1b1fc) < pbVar5) || ((undefined8 *)(param_1 + 0xd9acU) < puVar3)) {
      uVar11 = *(undefined8 *)(param_1 + 0xd978);
      uVar10 = *(undefined8 *)pbVar5;
      uVar38 = *(undefined8 *)(param_3 + 0x1b1c8);
      uVar37 = *puVar3;
      bVar12 = *(byte *)(param_3 + 0x1b1c2);
      bVar13 = *(byte *)(param_3 + 0x1b1c3);
      bVar14 = *(byte *)(param_3 + 0x1b1c4);
      bVar15 = *(byte *)(param_3 + 0x1b1c5);
      bVar16 = *(byte *)(param_3 + 0x1b1c6);
      bVar17 = *(byte *)(param_3 + 0x1b1c7);
      *(byte *)(param_1 + 0xd978) = (byte)uVar11 | *(byte *)(param_3 + 0x1b1c8);
      *(byte *)(param_1 + 0xd979) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xd97a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xd97b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xd97c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xd97d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xd97e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xd97f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *pbVar5 = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xd971) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xd972) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xd973) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xd974) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xd975) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xd976) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xd977) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar11 = *(undefined8 *)(param_1 + 0xd988);
      uVar10 = *(undefined8 *)(param_1 + 0xd980);
      uVar38 = *(undefined8 *)(param_3 + 0x1b1d8);
      uVar37 = *(undefined8 *)(param_3 + 0x1b1d0);
      bVar12 = *(byte *)(param_3 + 0x1b1d2);
      bVar13 = *(byte *)(param_3 + 0x1b1d3);
      bVar14 = *(byte *)(param_3 + 0x1b1d4);
      bVar15 = *(byte *)(param_3 + 0x1b1d5);
      bVar16 = *(byte *)(param_3 + 0x1b1d6);
      bVar17 = *(byte *)(param_3 + 0x1b1d7);
      *(byte *)(param_1 + 0xd988) = (byte)uVar11 | *(byte *)(param_3 + 0x1b1d8);
      *(byte *)(param_1 + 0xd989) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xd98a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xd98b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xd98c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xd98d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xd98e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xd98f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xd980) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xd981) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xd982) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xd983) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xd984) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xd985) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xd986) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xd987) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar38 = *(undefined8 *)(param_3 + 0x1b1e8);
      uVar37 = *(undefined8 *)(param_3 + 0x1b1e0);
      bVar12 = *(byte *)(param_3 + 0x1b1e2);
      bVar13 = *(byte *)(param_3 + 0x1b1e3);
      bVar14 = *(byte *)(param_3 + 0x1b1e4);
      bVar15 = *(byte *)(param_3 + 0x1b1e5);
      bVar16 = *(byte *)(param_3 + 0x1b1e6);
      bVar17 = *(byte *)(param_3 + 0x1b1e7);
      uVar11 = *(undefined8 *)(param_1 + 0xd998);
      uVar10 = *(undefined8 *)(param_1 + 0xd990);
      *(byte *)(param_1 + 0xd998) = (byte)uVar11 | *(byte *)(param_3 + 0x1b1e8);
      *(byte *)(param_1 + 0xd999) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xd99a) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xd99b) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xd99c) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xd99d) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xd99e) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xd99f) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xd990) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xd991) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xd992) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xd993) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xd994) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xd995) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xd996) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xd997) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
      uVar11 = *(undefined8 *)(param_1 + 0xd9a8);
      uVar10 = *(undefined8 *)(param_1 + 0xd9a0);
      uVar38 = *(undefined8 *)(param_3 + 0x1b1f8);
      uVar37 = *(undefined8 *)(param_3 + 0x1b1f0);
      bVar12 = *(byte *)(param_3 + 0x1b1f2);
      bVar13 = *(byte *)(param_3 + 0x1b1f3);
      bVar14 = *(byte *)(param_3 + 0x1b1f4);
      bVar15 = *(byte *)(param_3 + 0x1b1f5);
      bVar16 = *(byte *)(param_3 + 0x1b1f6);
      bVar17 = *(byte *)(param_3 + 0x1b1f7);
      *(byte *)(param_1 + 0xd9a8) = (byte)uVar11 | *(byte *)(param_3 + 0x1b1f8);
      *(byte *)(param_1 + 0xd9a9) = (byte)((ulonglong)uVar11 >> 8) | (byte)((ulonglong)uVar38 >> 8);
      *(byte *)(param_1 + 0xd9aa) =
           (byte)((ulonglong)uVar11 >> 0x10) | (byte)((ulonglong)uVar38 >> 0x10);
      *(byte *)(param_1 + 0xd9ab) =
           (byte)((ulonglong)uVar11 >> 0x18) | (byte)((ulonglong)uVar38 >> 0x18);
      *(byte *)(param_1 + 0xd9ac) =
           (byte)((ulonglong)uVar11 >> 0x20) | (byte)((ulonglong)uVar38 >> 0x20);
      *(byte *)(param_1 + 0xd9ad) =
           (byte)((ulonglong)uVar11 >> 0x28) | (byte)((ulonglong)uVar38 >> 0x28);
      *(byte *)(param_1 + 0xd9ae) =
           (byte)((ulonglong)uVar11 >> 0x30) | (byte)((ulonglong)uVar38 >> 0x30);
      *(byte *)(param_1 + 0xd9af) =
           (byte)((ulonglong)uVar11 >> 0x38) | (byte)((ulonglong)uVar38 >> 0x38);
      *(byte *)(param_1 + 0xd9a0) = (byte)uVar10 | (byte)uVar37;
      *(byte *)(param_1 + 0xd9a1) = (byte)((ulonglong)uVar10 >> 8) | (byte)((ulonglong)uVar37 >> 8);
      *(byte *)(param_1 + 0xd9a2) = (byte)((ulonglong)uVar10 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xd9a3) = (byte)((ulonglong)uVar10 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xd9a4) = (byte)((ulonglong)uVar10 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xd9a5) = (byte)((ulonglong)uVar10 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xd9a6) = (byte)((ulonglong)uVar10 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xd9a7) = (byte)((ulonglong)uVar10 >> 0x38) | bVar17;
    }
    else {
      uVar36 = 0;
      do {
        *(uint *)(pbVar5 + uVar36 * 4) =
             *(uint *)((int)puVar3 + uVar36 * 4) | *(uint *)(pbVar5 + uVar36 * 4);
        puVar8 = (uint *)(param_1 + 0xd974 + uVar36 * 4);
        *puVar8 = *(uint *)(param_3 + 0x1b1c4 + uVar36 * 4) | *puVar8;
        puVar8 = (uint *)(param_1 + 0xd978 + uVar36 * 4);
        *puVar8 = *(uint *)(param_3 + 0x1b1c8 + uVar36 * 4) | *puVar8;
        iVar1 = uVar36 * 4;
        puVar8 = (uint *)(param_1 + 0xd97c + uVar36 * 4);
        uVar36 = uVar36 + 4;
        *puVar8 = *(uint *)(param_3 + 0x1b1cc + iVar1) | *puVar8;
      } while (uVar36 < 0xd);
      if (uVar36 < 0x10) {
        do {
          iVar1 = uVar36 * 4;
          iVar2 = uVar36 * 4;
          uVar36 = uVar36 + 1;
          *(uint *)(pbVar5 + iVar2) = *(uint *)((int)puVar3 + iVar1) | *(uint *)(pbVar5 + iVar2);
        } while (uVar36 < 0x10);
        return;
      }
    }
  }
  return;
}

