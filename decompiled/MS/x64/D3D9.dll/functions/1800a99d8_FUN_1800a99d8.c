/*
 * FUN_1800a99d8 at 1800a99d8
 * undefined __fastcall FUN_1800a99d8(longlong * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1800a99d8-1800a9d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800a99d8(longlong *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint local_1448;
  uint local_1438 [256];
  float local_1038 [1022];
  undefined8 uStack_40;
  
  uStack_40 = 0x1800a9a02;
  lVar17 = (longlong)param_3 * 0x2c;
  lVar21 = 8;
  bVar1 = (&DAT_18010ff26)[lVar17];
  if (param_4 == 0) {
    bVar2 = (&DAT_18010ff28)[lVar17];
    uVar16 = 0;
    bVar13 = (&DAT_18010ff27)[lVar17];
    do {
      uVar14 = (uint)uVar16;
      uVar18 = *(uint *)(&DAT_18010ff1c + lVar17) & uVar14;
      if (param_3 == 8) {
        uVar19 = 0;
        uVar10 = 0;
        uVar15 = 0;
      }
      else {
        bVar13 = (&DAT_18010ff20)[lVar17];
        uVar15 = uVar14 & *(uint *)(&DAT_18010ff10 + lVar17);
        uVar20 = uVar14 & *(uint *)(&DAT_18010ff18 + lVar17);
        if ((char)bVar13 < '\0') {
          uVar10 = uVar15 << (-bVar13 & 0x1f);
        }
        else {
          uVar10 = uVar15 >> (bVar13 & 0x1f);
        }
        uVar10 = uVar15 >> ((&DAT_18010ff21)[lVar17] & 0x1f) | uVar10;
        bVar13 = (&DAT_18010ff24)[lVar17];
        uVar19 = (uVar14 & *(uint *)(&DAT_18010ff14 + lVar17)) >> ((&DAT_18010ff23)[lVar17] & 0x1f)
                 | (uVar14 & *(uint *)(&DAT_18010ff14 + lVar17)) >>
                   ((&DAT_18010ff22)[lVar17] & 0x1f);
        if ((char)bVar13 < '\0') {
          uVar15 = uVar20 << (-bVar13 & 0x1f);
        }
        else {
          uVar15 = uVar20 >> (bVar13 & 0x1f);
        }
        bVar13 = (&DAT_18010ff27)[lVar17];
        if (param_3 == 10) {
          uVar15 = 0x7f;
        }
        else {
          uVar15 = uVar20 >> ((&DAT_18010ff25)[lVar17] & 0x1f) | uVar15;
        }
      }
      if ((char)(&DAT_18010ff26)[lVar17] < '\0') {
        uVar20 = uVar18 << (-bVar1 & 0x1f);
      }
      else {
        uVar20 = uVar18 >> (bVar1 & 0x1f);
      }
      if (bVar2 == 0) {
        uVar18 = (-(uint)((&DAT_18010ff29)[lVar17] != '\0') & 0xffffff80) + 0xff;
      }
      else {
        uVar18 = (uVar18 >> (bVar13 & 0x1f) | uVar20) * (uint)bVar2;
      }
      uVar20 = uVar14 * 4;
      local_1438[uVar16] = ((uVar18 << 8 | uVar15) << 8 | uVar19) << 8 | uVar10;
      uVar16 = (ulonglong)(uVar14 + 1);
      local_1038[uVar20] = (float)uVar10;
      local_1038[uVar20 + 1] = (float)uVar19;
      local_1038[uVar20 + 2] = (float)uVar15;
      bVar13 = (&DAT_18010ff27)[lVar17];
      local_1038[uVar20 + 3] = (float)uVar18;
    } while (uVar14 + 1 < 0x100);
  }
  else {
    bVar2 = (&DAT_18010ff27)[lVar17];
    bVar13 = (&DAT_18010ff28)[lVar17];
    local_1448 = 0;
    do {
      bVar3 = (byte)param_4 & 0x1f;
      uVar18 = local_1448 << bVar3;
      uVar14 = *(uint *)(&DAT_18010ff1c + lVar17) & uVar18;
      if (param_3 == 8) {
        uVar10 = 0;
        uVar18 = 0 << bVar3;
        uVar15 = 0;
      }
      else {
        bVar13 = (&DAT_18010ff20)[lVar17];
        uVar15 = uVar18 & *(uint *)(&DAT_18010ff10 + lVar17);
        uVar19 = uVar18 & *(uint *)(&DAT_18010ff18 + lVar17);
        if ((char)bVar13 < '\0') {
          uVar10 = uVar15 << (-bVar13 & 0x1f);
        }
        else {
          uVar10 = uVar15 >> (bVar13 & 0x1f);
        }
        uVar10 = uVar15 >> ((&DAT_18010ff21)[lVar17] & 0x1f) | uVar10;
        bVar13 = (&DAT_18010ff24)[lVar17];
        uVar15 = (uVar18 & *(uint *)(&DAT_18010ff14 + lVar17)) >> ((&DAT_18010ff23)[lVar17] & 0x1f)
                 | (uVar18 & *(uint *)(&DAT_18010ff14 + lVar17)) >>
                   ((&DAT_18010ff22)[lVar17] & 0x1f);
        if ((char)bVar13 < '\0') {
          uVar18 = uVar19 << (-bVar13 & 0x1f);
        }
        else {
          uVar18 = uVar19 >> (bVar13 & 0x1f);
        }
        bVar13 = (&DAT_18010ff28)[lVar17];
        uVar18 = uVar19 >> ((&DAT_18010ff25)[lVar17] & 0x1f) | uVar18;
      }
      if ((char)(&DAT_18010ff26)[lVar17] < '\0') {
        uVar19 = uVar14 << (-bVar1 & 0x1f);
      }
      else {
        uVar19 = uVar14 >> (bVar1 & 0x1f);
      }
      uVar14 = (uVar14 >> (bVar2 & 0x1f) | uVar19) * (uint)bVar13;
      local_1438[local_1448] = ((uVar14 * 0x100 | uVar18) << 8 | uVar15) << 8 | uVar10;
      uVar19 = local_1448 * 4;
      local_1038[uVar19] = (float)uVar10;
      local_1038[uVar19 + 1] = (float)uVar15;
      bVar13 = (&DAT_18010ff28)[lVar17];
      local_1038[uVar19 + 2] = (float)uVar18;
      local_1038[uVar19 + 3] = (float)uVar14;
      local_1448 = local_1448 + 1;
    } while (local_1448 < 0x100);
  }
  puVar12 = (undefined8 *)((longlong)param_1 + ((ulonglong)(uint)(param_2 << 8) + 0x2c) * 4);
  puVar11 = local_1438;
  do {
    uVar6 = *(undefined8 *)(puVar11 + 2);
    uVar7 = *(undefined8 *)(puVar11 + 4);
    uVar8 = *(undefined8 *)(puVar11 + 6);
    *puVar12 = *(undefined8 *)puVar11;
    puVar12[1] = uVar6;
    uVar6 = *(undefined8 *)(puVar11 + 8);
    uVar9 = *(undefined8 *)(puVar11 + 10);
    puVar12[2] = uVar7;
    puVar12[3] = uVar8;
    uVar7 = *(undefined8 *)(puVar11 + 0xc);
    uVar8 = *(undefined8 *)(puVar11 + 0xe);
    puVar12[4] = uVar6;
    puVar12[5] = uVar9;
    uVar6 = *(undefined8 *)(puVar11 + 0x10);
    uVar9 = *(undefined8 *)(puVar11 + 0x12);
    puVar12[6] = uVar7;
    puVar12[7] = uVar8;
    uVar7 = *(undefined8 *)(puVar11 + 0x14);
    uVar8 = *(undefined8 *)(puVar11 + 0x16);
    puVar12[8] = uVar6;
    puVar12[9] = uVar9;
    uVar14 = puVar11[0x18];
    uVar18 = puVar11[0x19];
    uVar10 = puVar11[0x1a];
    uVar15 = puVar11[0x1b];
    puVar12[10] = uVar7;
    puVar12[0xb] = uVar8;
    uVar19 = puVar11[0x1c];
    uVar20 = puVar11[0x1d];
    uVar4 = puVar11[0x1e];
    uVar5 = puVar11[0x1f];
    puVar11 = puVar11 + 0x20;
    *(uint *)(puVar12 + 0xc) = uVar14;
    *(uint *)((longlong)puVar12 + 100) = uVar18;
    *(uint *)(puVar12 + 0xd) = uVar10;
    *(uint *)((longlong)puVar12 + 0x6c) = uVar15;
    *(uint *)(puVar12 + 0xe) = uVar19;
    *(uint *)((longlong)puVar12 + 0x74) = uVar20;
    *(uint *)(puVar12 + 0xf) = uVar4;
    *(uint *)((longlong)puVar12 + 0x7c) = uVar5;
    puVar12 = puVar12 + 0x10;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  (**(code **)(*param_1 + 0x158))(param_1,param_2,local_1038,0x18010ff01);
  return;
}

