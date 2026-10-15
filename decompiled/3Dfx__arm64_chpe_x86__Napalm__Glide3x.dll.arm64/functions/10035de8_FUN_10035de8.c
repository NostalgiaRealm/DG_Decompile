/*
 * FUN_10035de8 at 10035de8
 * undefined FUN_10035de8(void)
 * Address ranges: 10035de8-1003629f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035de8(int param_1,uint param_2)

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
    puVar9 = (uint *)0x100a9a00;
    puVar13 = (uint *)0x100a9b00;
    puVar12 = (uint *)0x100a9c00;
    iVar5 = 0x100a9640;
    break;
  case 0xb:
  case 0xc:
    puVar9 = (uint *)0x100a9a10;
    puVar13 = (uint *)0x100a9b10;
    puVar12 = (uint *)0x100a9c10;
    iVar5 = 0x100a9650;
    break;
  case 0xd:
  case 0xe:
    puVar9 = &DAT_100a9a20;
    puVar13 = &DAT_100a9b20;
    puVar12 = &DAT_100a9c20;
    iVar5 = 0x100a9660;
    break;
  default:
    if (param_2 < 0x11) {
      puVar9 = (uint *)0x0;
      puVar13 = (uint *)0x0;
      puVar12 = (uint *)0x0;
      iVar5 = 0;
      break;
    }
    goto switchD_10035ee8_caseD_10036274;
  }
  lVar10 = 0;
  uVar11 = 0xffffffff;
  uVar6 = 0xffffffff;
  switch((&switchD_10035ee8::switchdataD_100362b8)[param_2] * 4 + 0x10036084) {
  case 0x10035eec:
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
  case 0x10035f30:
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
  case 0x10035f74:
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
  case 0x10035ff8:
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
  case 0x1003603c:
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
  case 0x10036084:
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
  case 0x100360dc:
    uVar6 = 0;
  case 0x100360e0:
    uVar11 = uVar6;
    lVar10 = 8;
  case 0x100360e4:
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
  case 0x100361ec:
    uVar6 = 0;
    do {
      uVar8 = (ulonglong)uVar6;
      *(undefined4 *)(param_1 + 0xc + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + 4 + uVar6 * 0x10) = 0;
      *(undefined4 *)(param_1 + uVar6 * 0x10) = 0;
      iVar5 = uVar6 * 0x10;
      uVar6 = uVar6 + 1;
      *(float *)(param_1 + 8 + iVar5) = (float)uVar8;
    } while (uVar6 < 0x100);
    break;
  case 0x10036230:
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
  case 0x10036274:
switchD_10035ee8_caseD_10036274:
    FUN_10083b70(param_1,0,0x1000);
  }
  return;
}

