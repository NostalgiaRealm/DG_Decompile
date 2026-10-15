/*
 * FUN_1800586d0 at 1800586d0
 * undefined FUN_1800586d0(void)
 * Address ranges: 1800586d0-180058817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800586d0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
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
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  
  if (param_3 != 0) {
    uVar42 = param_1 + 0xb0;
    uVar2 = param_3 + 0xf5d0;
    if ((param_3 + 0xf5cc < uVar42 || param_1 + 0xf67cU < param_3) &&
       (param_3 + 0x1eb9c < uVar42 || param_1 + 0xf67cU < uVar2)) {
      lVar43 = 0;
      do {
        lVar41 = lVar43 * 4;
        pbVar4 = (byte *)(lVar41 + uVar2);
        bVar10 = *pbVar4;
        bVar11 = pbVar4[1];
        bVar12 = pbVar4[2];
        bVar13 = pbVar4[3];
        bVar14 = pbVar4[4];
        bVar15 = pbVar4[5];
        bVar16 = pbVar4[6];
        bVar17 = pbVar4[7];
        bVar18 = pbVar4[9];
        bVar19 = pbVar4[10];
        bVar20 = pbVar4[0xb];
        bVar21 = pbVar4[0xc];
        bVar22 = pbVar4[0xd];
        bVar23 = pbVar4[0xe];
        bVar24 = pbVar4[0xf];
        lVar43 = lVar43 + 4;
        pbVar5 = (byte *)(lVar41 + param_3);
        uVar8 = *(undefined8 *)(pbVar5 + 8);
        bVar33 = *pbVar5;
        bVar34 = pbVar5[1];
        bVar35 = pbVar5[2];
        bVar36 = pbVar5[3];
        bVar37 = pbVar5[4];
        bVar38 = pbVar5[5];
        bVar39 = pbVar5[6];
        bVar40 = pbVar5[7];
        pbVar6 = (byte *)(lVar41 + uVar42);
        bVar25 = *pbVar6;
        bVar26 = pbVar6[1];
        bVar27 = pbVar6[2];
        bVar28 = pbVar6[3];
        bVar29 = pbVar6[4];
        bVar30 = pbVar6[5];
        bVar31 = pbVar6[6];
        bVar32 = pbVar6[7];
        pbVar7 = (byte *)(lVar41 + uVar42);
        pbVar7[8] = pbVar6[8] ^ (pbVar6[8] ^ pbVar5[8]) & pbVar4[8];
        pbVar7[9] = pbVar6[9] ^ (pbVar6[9] ^ (byte)((ulonglong)uVar8 >> 8)) & bVar18;
        pbVar7[10] = pbVar6[10] ^ (pbVar6[10] ^ (byte)((ulonglong)uVar8 >> 0x10)) & bVar19;
        pbVar7[0xb] = pbVar6[0xb] ^ (pbVar6[0xb] ^ (byte)((ulonglong)uVar8 >> 0x18)) & bVar20;
        pbVar7[0xc] = pbVar6[0xc] ^ (pbVar6[0xc] ^ (byte)((ulonglong)uVar8 >> 0x20)) & bVar21;
        pbVar7[0xd] = pbVar6[0xd] ^ (pbVar6[0xd] ^ (byte)((ulonglong)uVar8 >> 0x28)) & bVar22;
        pbVar7[0xe] = pbVar6[0xe] ^ (pbVar6[0xe] ^ (byte)((ulonglong)uVar8 >> 0x30)) & bVar23;
        pbVar7[0xf] = pbVar6[0xf] ^ (pbVar6[0xf] ^ (byte)((ulonglong)uVar8 >> 0x38)) & bVar24;
        *pbVar7 = bVar25 ^ (bVar25 ^ bVar33) & bVar10;
        pbVar7[1] = bVar26 ^ (bVar26 ^ bVar34) & bVar11;
        pbVar7[2] = bVar27 ^ (bVar27 ^ bVar35) & bVar12;
        pbVar7[3] = bVar28 ^ (bVar28 ^ bVar36) & bVar13;
        pbVar7[4] = bVar29 ^ (bVar29 ^ bVar37) & bVar14;
        pbVar7[5] = bVar30 ^ (bVar30 ^ bVar38) & bVar15;
        pbVar7[6] = bVar31 ^ (bVar31 ^ bVar39) & bVar16;
        pbVar7[7] = bVar32 ^ (bVar32 ^ bVar40) & bVar17;
      } while (lVar43 != 0x3d74);
    }
    else {
      lVar43 = 0;
      do {
        uVar1 = *(uint *)(uVar2 + lVar43 * 4);
        lVar3 = param_1 + lVar43 * 4;
        lVar41 = lVar43 * 4;
        lVar43 = lVar43 + 1;
        *(uint *)(lVar3 + 0xb0) =
             *(uint *)(lVar3 + 0xb0) & (uVar1 ^ 0xffffffff) | uVar1 & *(uint *)(param_3 + lVar41);
      } while (lVar43 != 0x3d74);
    }
    pbVar5 = (byte *)(param_1 + 0xf680);
    pbVar4 = (byte *)(param_3 + 0x1eba0);
    if (((byte *)(param_3 + 0x1ebe8) < pbVar5) || (uVar42 = 0, (byte *)(param_1 + 0xf6c8U) < pbVar4)
       ) {
      uVar9 = *(undefined8 *)(param_1 + 0xf688);
      uVar8 = *(undefined8 *)pbVar5;
      uVar42 = 0x10;
      bVar10 = *pbVar4;
      bVar11 = *(byte *)(param_3 + 0x1eba1);
      bVar12 = *(byte *)(param_3 + 0x1eba2);
      bVar13 = *(byte *)(param_3 + 0x1eba3);
      bVar14 = *(byte *)(param_3 + 0x1eba4);
      bVar15 = *(byte *)(param_3 + 0x1eba5);
      bVar16 = *(byte *)(param_3 + 0x1eba6);
      bVar17 = *(byte *)(param_3 + 0x1eba7);
      bVar18 = *(byte *)(param_3 + 0x1eba9);
      bVar19 = *(byte *)(param_3 + 0x1ebaa);
      bVar20 = *(byte *)(param_3 + 0x1ebab);
      bVar21 = *(byte *)(param_3 + 0x1ebac);
      bVar22 = *(byte *)(param_3 + 0x1ebad);
      bVar23 = *(byte *)(param_3 + 0x1ebae);
      bVar24 = *(byte *)(param_3 + 0x1ebaf);
      *(byte *)(param_1 + 0xf688) = (byte)uVar9 | *(byte *)(param_3 + 0x1eba8);
      *(byte *)(param_1 + 0xf689) = (byte)((ulonglong)uVar9 >> 8) | bVar18;
      *(byte *)(param_1 + 0xf68a) = (byte)((ulonglong)uVar9 >> 0x10) | bVar19;
      *(byte *)(param_1 + 0xf68b) = (byte)((ulonglong)uVar9 >> 0x18) | bVar20;
      *(byte *)(param_1 + 0xf68c) = (byte)((ulonglong)uVar9 >> 0x20) | bVar21;
      *(byte *)(param_1 + 0xf68d) = (byte)((ulonglong)uVar9 >> 0x28) | bVar22;
      *(byte *)(param_1 + 0xf68e) = (byte)((ulonglong)uVar9 >> 0x30) | bVar23;
      *(byte *)(param_1 + 0xf68f) = (byte)((ulonglong)uVar9 >> 0x38) | bVar24;
      *pbVar5 = (byte)uVar8 | bVar10;
      *(byte *)(param_1 + 0xf681) = (byte)((ulonglong)uVar8 >> 8) | bVar11;
      *(byte *)(param_1 + 0xf682) = (byte)((ulonglong)uVar8 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf683) = (byte)((ulonglong)uVar8 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf684) = (byte)((ulonglong)uVar8 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf685) = (byte)((ulonglong)uVar8 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf686) = (byte)((ulonglong)uVar8 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf687) = (byte)((ulonglong)uVar8 >> 0x38) | bVar17;
      bVar10 = *(byte *)(param_3 + 0x1ebb0);
      bVar11 = *(byte *)(param_3 + 0x1ebb1);
      bVar12 = *(byte *)(param_3 + 0x1ebb2);
      bVar13 = *(byte *)(param_3 + 0x1ebb3);
      bVar14 = *(byte *)(param_3 + 0x1ebb4);
      bVar15 = *(byte *)(param_3 + 0x1ebb5);
      bVar16 = *(byte *)(param_3 + 0x1ebb6);
      bVar17 = *(byte *)(param_3 + 0x1ebb7);
      bVar18 = *(byte *)(param_3 + 0x1ebb9);
      bVar19 = *(byte *)(param_3 + 0x1ebba);
      bVar20 = *(byte *)(param_3 + 0x1ebbb);
      bVar21 = *(byte *)(param_3 + 0x1ebbc);
      bVar22 = *(byte *)(param_3 + 0x1ebbd);
      bVar23 = *(byte *)(param_3 + 0x1ebbe);
      bVar24 = *(byte *)(param_3 + 0x1ebbf);
      uVar9 = *(undefined8 *)(param_1 + 0xf698);
      uVar8 = *(undefined8 *)(param_1 + 0xf690);
      *(byte *)(param_1 + 0xf698) = (byte)uVar9 | *(byte *)(param_3 + 0x1ebb8);
      *(byte *)(param_1 + 0xf699) = (byte)((ulonglong)uVar9 >> 8) | bVar18;
      *(byte *)(param_1 + 0xf69a) = (byte)((ulonglong)uVar9 >> 0x10) | bVar19;
      *(byte *)(param_1 + 0xf69b) = (byte)((ulonglong)uVar9 >> 0x18) | bVar20;
      *(byte *)(param_1 + 0xf69c) = (byte)((ulonglong)uVar9 >> 0x20) | bVar21;
      *(byte *)(param_1 + 0xf69d) = (byte)((ulonglong)uVar9 >> 0x28) | bVar22;
      *(byte *)(param_1 + 0xf69e) = (byte)((ulonglong)uVar9 >> 0x30) | bVar23;
      *(byte *)(param_1 + 0xf69f) = (byte)((ulonglong)uVar9 >> 0x38) | bVar24;
      *(byte *)(param_1 + 0xf690) = (byte)uVar8 | bVar10;
      *(byte *)(param_1 + 0xf691) = (byte)((ulonglong)uVar8 >> 8) | bVar11;
      *(byte *)(param_1 + 0xf692) = (byte)((ulonglong)uVar8 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf693) = (byte)((ulonglong)uVar8 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf694) = (byte)((ulonglong)uVar8 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf695) = (byte)((ulonglong)uVar8 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf696) = (byte)((ulonglong)uVar8 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf697) = (byte)((ulonglong)uVar8 >> 0x38) | bVar17;
      uVar9 = *(undefined8 *)(param_1 + 0xf6a8);
      uVar8 = *(undefined8 *)(param_1 + 0xf6a0);
      bVar10 = *(byte *)(param_3 + 0x1ebc0);
      bVar11 = *(byte *)(param_3 + 0x1ebc1);
      bVar12 = *(byte *)(param_3 + 0x1ebc2);
      bVar13 = *(byte *)(param_3 + 0x1ebc3);
      bVar14 = *(byte *)(param_3 + 0x1ebc4);
      bVar15 = *(byte *)(param_3 + 0x1ebc5);
      bVar16 = *(byte *)(param_3 + 0x1ebc6);
      bVar17 = *(byte *)(param_3 + 0x1ebc7);
      bVar18 = *(byte *)(param_3 + 0x1ebc9);
      bVar19 = *(byte *)(param_3 + 0x1ebca);
      bVar20 = *(byte *)(param_3 + 0x1ebcb);
      bVar21 = *(byte *)(param_3 + 0x1ebcc);
      bVar22 = *(byte *)(param_3 + 0x1ebcd);
      bVar23 = *(byte *)(param_3 + 0x1ebce);
      bVar24 = *(byte *)(param_3 + 0x1ebcf);
      *(byte *)(param_1 + 0xf6a8) = (byte)uVar9 | *(byte *)(param_3 + 0x1ebc8);
      *(byte *)(param_1 + 0xf6a9) = (byte)((ulonglong)uVar9 >> 8) | bVar18;
      *(byte *)(param_1 + 0xf6aa) = (byte)((ulonglong)uVar9 >> 0x10) | bVar19;
      *(byte *)(param_1 + 0xf6ab) = (byte)((ulonglong)uVar9 >> 0x18) | bVar20;
      *(byte *)(param_1 + 0xf6ac) = (byte)((ulonglong)uVar9 >> 0x20) | bVar21;
      *(byte *)(param_1 + 0xf6ad) = (byte)((ulonglong)uVar9 >> 0x28) | bVar22;
      *(byte *)(param_1 + 0xf6ae) = (byte)((ulonglong)uVar9 >> 0x30) | bVar23;
      *(byte *)(param_1 + 0xf6af) = (byte)((ulonglong)uVar9 >> 0x38) | bVar24;
      *(byte *)(param_1 + 0xf6a0) = (byte)uVar8 | bVar10;
      *(byte *)(param_1 + 0xf6a1) = (byte)((ulonglong)uVar8 >> 8) | bVar11;
      *(byte *)(param_1 + 0xf6a2) = (byte)((ulonglong)uVar8 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf6a3) = (byte)((ulonglong)uVar8 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf6a4) = (byte)((ulonglong)uVar8 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf6a5) = (byte)((ulonglong)uVar8 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf6a6) = (byte)((ulonglong)uVar8 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf6a7) = (byte)((ulonglong)uVar8 >> 0x38) | bVar17;
      uVar9 = *(undefined8 *)(param_1 + 0xf6b8);
      uVar8 = *(undefined8 *)(param_1 + 0xf6b0);
      bVar10 = *(byte *)(param_3 + 0x1ebd0);
      bVar11 = *(byte *)(param_3 + 0x1ebd1);
      bVar12 = *(byte *)(param_3 + 0x1ebd2);
      bVar13 = *(byte *)(param_3 + 0x1ebd3);
      bVar14 = *(byte *)(param_3 + 0x1ebd4);
      bVar15 = *(byte *)(param_3 + 0x1ebd5);
      bVar16 = *(byte *)(param_3 + 0x1ebd6);
      bVar17 = *(byte *)(param_3 + 0x1ebd7);
      bVar18 = *(byte *)(param_3 + 0x1ebd9);
      bVar19 = *(byte *)(param_3 + 0x1ebda);
      bVar20 = *(byte *)(param_3 + 0x1ebdb);
      bVar21 = *(byte *)(param_3 + 0x1ebdc);
      bVar22 = *(byte *)(param_3 + 0x1ebdd);
      bVar23 = *(byte *)(param_3 + 0x1ebde);
      bVar24 = *(byte *)(param_3 + 0x1ebdf);
      *(byte *)(param_1 + 0xf6b8) = (byte)uVar9 | *(byte *)(param_3 + 0x1ebd8);
      *(byte *)(param_1 + 0xf6b9) = (byte)((ulonglong)uVar9 >> 8) | bVar18;
      *(byte *)(param_1 + 0xf6ba) = (byte)((ulonglong)uVar9 >> 0x10) | bVar19;
      *(byte *)(param_1 + 0xf6bb) = (byte)((ulonglong)uVar9 >> 0x18) | bVar20;
      *(byte *)(param_1 + 0xf6bc) = (byte)((ulonglong)uVar9 >> 0x20) | bVar21;
      *(byte *)(param_1 + 0xf6bd) = (byte)((ulonglong)uVar9 >> 0x28) | bVar22;
      *(byte *)(param_1 + 0xf6be) = (byte)((ulonglong)uVar9 >> 0x30) | bVar23;
      *(byte *)(param_1 + 0xf6bf) = (byte)((ulonglong)uVar9 >> 0x38) | bVar24;
      *(byte *)(param_1 + 0xf6b0) = (byte)uVar8 | bVar10;
      *(byte *)(param_1 + 0xf6b1) = (byte)((ulonglong)uVar8 >> 8) | bVar11;
      *(byte *)(param_1 + 0xf6b2) = (byte)((ulonglong)uVar8 >> 0x10) | bVar12;
      *(byte *)(param_1 + 0xf6b3) = (byte)((ulonglong)uVar8 >> 0x18) | bVar13;
      *(byte *)(param_1 + 0xf6b4) = (byte)((ulonglong)uVar8 >> 0x20) | bVar14;
      *(byte *)(param_1 + 0xf6b5) = (byte)((ulonglong)uVar8 >> 0x28) | bVar15;
      *(byte *)(param_1 + 0xf6b6) = (byte)((ulonglong)uVar8 >> 0x30) | bVar16;
      *(byte *)(param_1 + 0xf6b7) = (byte)((ulonglong)uVar8 >> 0x38) | bVar17;
    }
    do {
      *(uint *)(pbVar5 + uVar42 * 4) =
           *(uint *)(pbVar5 + uVar42 * 4) | *(uint *)(pbVar4 + uVar42 * 4);
      uVar1 = (int)uVar42 + 1;
      uVar42 = (ulonglong)uVar1;
    } while (uVar1 < 0x13);
  }
  return;
}

