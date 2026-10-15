/*
 * FUN_10036c68 at 10036c68
 * undefined FUN_10036c68(void)
 * Address ranges: 10036c68-10037097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036c68(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  float fVar14;
  
  switch(param_2) {
  case 9:
  case 10:
    puVar9 = (uint *)0x100a1830;
    puVar13 = (uint *)0x100a1930;
    puVar12 = (uint *)0x100a1a30;
    iVar5 = 0x100a1530;
    break;
  case 0xb:
  case 0xc:
    puVar9 = (uint *)0x100a1840;
    puVar13 = (uint *)0x100a1940;
    puVar12 = (uint *)0x100a1a40;
    iVar5 = 0x100a1540;
    break;
  case 0xd:
  case 0xe:
    puVar9 = &DAT_100a1850;
    puVar13 = &DAT_100a1950;
    puVar12 = &DAT_100a1a50;
    iVar5 = 0x100a1550;
    break;
  default:
    if (param_2 < 0xf) {
      puVar9 = (uint *)0x0;
      puVar13 = (uint *)0x0;
      puVar12 = (uint *)0x0;
      iVar5 = 0;
      break;
    }
    goto switchD_10036d68_caseD_1003706c;
  }
  lVar10 = 0;
  uVar11 = 0xffffffff;
  uVar6 = 0xffffffff;
  switch((&switchD_10036d68::switchdataD_100370b0)[param_2] * 4 + 0x10036ebc) {
  case 0x10036d6c:
    uVar6 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + 4 + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + uVar6 * 0x10) = 0;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + 0xc + iVar5) = 0x437f0000;
    } while (uVar6 < 0x100);
    break;
  case 0x10036db0:
    uVar6 = 0;
    do {
      uVar8 = (ulonglong)uVar6;
      *(undefined4 *)(param_1 + 8 + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + 4 + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + uVar6 * 0x10) = 0;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_1 + 0xc + iVar5) = (float)uVar8;
    } while (uVar6 < 0x100);
    break;
  case 0x10036df4:
    uVar8 = 0;
    do {
      uVar11 = (uint)(uVar8 >> 3);
      uVar7 = (uint)uVar8;
      *(float *)(param_1 + uVar7 * 0x10) =
           (float)(uVar7 & 0xe0 | (uVar11 & 0x18 | uVar7 & 0xe0) >> 3);
      uVar6 = uVar7 & 3;
      *(float *)(param_1 + 4 + uVar7 * 0x10) =
           (float)(uVar11 & 3 | (uVar7 & 0x1c) << 3 | uVar7 & 0x1c);
      *(float *)(param_1 + 8 + uVar7 * 0x10) =
           (float)(uVar6 | (uVar6 | (uVar6 | uVar6 << 2) << 2) << 2);
      uVar8 = (ulonglong)(uVar7 + 1);
      *(undefined4 *)(param_1 + 0xc + uVar7 * 0x10) = 0x437f0000;
    } while (uVar7 + 1 < 0x100);
    break;
  case 0x10036e78:
    uVar6 = 0;
    do {
      fVar14 = (float)uVar6;
      *(float *)(param_1 + 0xc + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + 8 + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + 4 + uVar6 * 0x10) = fVar14;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_1 + iVar5) = fVar14;
    } while (uVar6 < 0x100);
    break;
  case 0x10036ebc:
    uVar6 = 0;
    do {
      fVar14 = (float)uVar6;
      *(float *)(param_1 + 8 + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + 4 + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + uVar6 * 0x10) = fVar14;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + 0xc + iVar5) = 0x437f0000;
    } while (uVar6 < 0x100);
    break;
  case 0x10036f04:
    uVar6 = 0;
    do {
      fVar14 = (float)(uVar6 & 0xf | (uVar6 & 0xf) << 4);
      *(float *)(param_1 + 8 + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + 4 + uVar6 * 0x10) = fVar14;
      *(float *)(param_1 + uVar6 * 0x10) = fVar14;
      uVar11 = uVar6 & 0xf0;
      uVar7 = uVar6 >> 4;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_1 + 0xc + iVar5) = (float)(uVar11 | uVar7 & 0xf);
    } while (uVar6 < 0x100);
    break;
  case 0x10036f5c:
    uVar6 = 0;
  case 0x10036f60:
    uVar11 = uVar6;
    lVar10 = 8;
  case 0x10036f64:
    uVar6 = 0;
    do {
      uVar4 = uVar6 << lVar10;
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar7 = ((int)(short)uVar4 & puVar9[3] | *(uint *)(iVar5 + 4)) & uVar11;
      *(float *)(param_1 + uVar6 * 0x10) =
           (float)((uVar4 & *puVar9) >> (ulonglong)(*puVar12 & 0x1f) |
                  (uVar4 & *puVar9) >> (ulonglong)(*puVar13 & 0x1f));
      *(float *)(param_1 + 4 + uVar6 * 0x10) =
           (float)((uVar4 & uVar2) >> (ulonglong)(puVar12[1] & 0x1f) |
                  (uVar4 & uVar2) >> (ulonglong)(puVar13[1] & 0x1f));
      *(float *)(param_1 + 8 + uVar6 * 0x10) =
           (float)((uVar4 & uVar3) >> (ulonglong)(puVar12[2] & 0x1f) |
                  (uVar4 & uVar3) << (ulonglong)(puVar13[2] & 0x1f));
      iVar1 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_1 + 0xc + iVar1) =
           (float)(uVar7 >> (ulonglong)(puVar12[3] & 0x1f) | uVar7 >> (ulonglong)(puVar13[3] & 0x1f)
                  );
    } while (uVar6 < 0x100);
    break;
  case 0x1003706c:
switchD_10036d68_caseD_1003706c:
    FUN_1007e4d0(param_1,0,0x1000);
  }
  return;
}

