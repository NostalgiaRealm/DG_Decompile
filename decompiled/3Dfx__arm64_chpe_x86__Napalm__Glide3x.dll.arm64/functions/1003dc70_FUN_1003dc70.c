/*
 * FUN_1003dc70 at 1003dc70
 * undefined FUN_1003dc70(void)
 * Address ranges: 1003dc70-1003e247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1003dc70(undefined8 param_1,undefined8 *param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  
  uVar11 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  if (param_4 != 0) {
    do {
      iVar15 = param_3 + uVar11 * 0x250;
      uVar5 = *(uint *)(param_3 + 0x130 + uVar11 * 0x250);
      if (uVar5 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)*(uint *)(iVar15 + 0x120);
      }
      uVar6 = *(uint *)(param_3 + 0x134 + uVar11 * 0x250);
      if (uVar6 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(iVar15 + 0x124);
      }
      uVar7 = *(uint *)(param_3 + 0x138 + uVar11 * 0x250);
      if (uVar7 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar15 + 0x128);
      }
      uVar8 = *(uint *)(param_3 + 0x13c + uVar11 * 0x250);
      if (uVar8 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)*(uint *)(iVar15 + 300);
      }
      iVar9 = *(int *)(param_3 + 0x1a4 + uVar11 * 0x250);
      if (iVar9 == 0xff) {
        iVar9 = 0x1b;
      }
      param_2[uVar11] =
           ((ulonglong)(uVar13 | iVar12 << 10) & 0x3fffff) << 10 |
           (uVar10 | ((ulonglong)uVar5 |
                     ((ulonglong)uVar6 |
                     ((ulonglong)uVar7 |
                     ((ulonglong)uVar8 |
                     ((ulonglong)(*(byte *)(iVar9 + 0x1009fdf8) >> 1) |
                     ((ulonglong)*(uint *)(param_3 + 0x1b8 + uVar11 * 0x250) |
                     ((ulonglong)*(uint *)(param_3 + 0x1b0 + uVar11 * 0x250) |
                     ((ulonglong)*(uint *)(param_3 + 0x1b4 + uVar11 * 0x250) |
                     (ulonglong)*(uint *)(param_3 + 0x1bc + uVar11 * 0x250) << 1) << 1) << 2) << 5)
                     << 4) << 3) << 3) << 3) << 10) << 0x1e | uVar14;
      uVar5 = *(uint *)(param_3 + 0x160 + uVar11 * 0x250);
      if (uVar5 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (ulonglong)*(uint *)(iVar15 + 0x150);
      }
      uVar6 = *(uint *)(param_3 + 0x164 + uVar11 * 0x250);
      if (uVar6 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(iVar15 + 0x154);
      }
      uVar7 = *(uint *)(param_3 + 0x168 + uVar11 * 0x250);
      if (uVar7 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar15 + 0x158);
      }
      uVar8 = *(uint *)(param_3 + 0x16c + uVar11 * 0x250);
      if (uVar8 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)*(uint *)(iVar15 + 0x15c);
      }
      uVar1 = 4;
      if (*(int *)(param_3 + 0x1ec + uVar11 * 0x250) == 0) {
        uVar1 = 0;
      }
      uVar2 = 0x200;
      if (*(float *)(param_3 + 0x194 + uVar11 * 0x250) ==
          *(float *)(param_3 + 0x198 + uVar11 * 0x250)) {
        uVar2 = 0;
      }
      uVar3 = 0x80;
      if (*(int *)(param_3 + 0x174 + uVar11 * 0x250) == 0) {
        uVar3 = 0;
      }
      uVar4 = 0x100;
      if (*(int *)(param_3 + 0x144 + uVar11 * 0x250) == 0) {
        uVar4 = 0;
      }
      param_2[uVar11 + 3] =
           ((ulonglong)(uVar13 | iVar12 << 10) & 0x3fffff) << 10 |
           (uVar10 | ((ulonglong)uVar5 |
                     ((ulonglong)uVar6 |
                     ((ulonglong)uVar7 |
                     (uVar2 | ((ulonglong)*(uint *)(param_3 + 0x1a8 + uVar11 * 0x250) |
                              (uVar1 | *(uint *)(param_3 + 0x1ac + uVar11 * 0x250)) << 2) << 10 |
                      uVar3 | uVar4 | (ulonglong)uVar8) << 3) << 3) << 3) << 10) << 0x1e | uVar14;
      iVar12 = uVar11 * 0x250;
      iVar9 = uVar11 * 0x250;
      iVar15 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      *(int *)((int)param_2 + iVar15 + 0x40) =
           (int)*(float *)(param_3 + 0x170 + iVar9) | (int)*(float *)(param_3 + 0x140 + iVar12) << 4
      ;
    } while (uVar11 < param_4);
  }
  if (*(uint *)(param_3 + 0xd0) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulonglong)*(uint *)(param_3 + 0xc0);
  }
  if (*(uint *)(param_3 + 0xd4) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(param_3 + 0xc4);
  }
  if (*(uint *)(param_3 + 0xd8) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_3 + 200);
  }
  if (*(uint *)(param_3 + 0xdc) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_3 + 0xcc);
  }
  param_2[6] = ((ulonglong)(uVar11 | iVar15 << 10) & 0x3fffff) << 10 |
               (uVar10 | ((ulonglong)*(uint *)(param_3 + 0xd0) |
                         ((ulonglong)*(uint *)(param_3 + 0xd4) |
                         ((ulonglong)*(uint *)(param_3 + 0xd8) |
                         (ulonglong)*(uint *)(param_3 + 0xdc) << 3) << 3) << 3) << 10) << 0x1e |
               uVar14;
  if (*(uint *)(param_3 + 0x100) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (ulonglong)*(uint *)(param_3 + 0xf0);
  }
  if (*(uint *)(param_3 + 0x104) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(param_3 + 0xf4);
  }
  if (*(uint *)(param_3 + 0x108) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_3 + 0xf8);
  }
  if (*(uint *)(param_3 + 0x10c) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_3 + 0xfc);
  }
  uVar1 = 0x20;
  if (*(int *)(param_3 + 0x864) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10;
  if (*(int *)(param_3 + 0x4c) == 0) {
    uVar2 = 0;
  }
  param_2[7] = ((ulonglong)(uVar11 | iVar15 << 10) & 0x3fffff) << 10 |
               (uVar10 | ((ulonglong)*(uint *)(param_3 + 0x100) |
                         ((ulonglong)*(uint *)(param_3 + 0x104) |
                         ((ulonglong)*(uint *)(param_3 + 0x108) |
                         ((ulonglong)*(uint *)(param_3 + 0x10c) |
                         (uVar1 | (ulonglong)(uint)(int)*(float *)(param_3 + 0x110) << 6 | uVar2 |
                         (ulonglong)*(uint *)(param_3 + 0x78)) << 3) << 3) << 3) << 3) << 10) <<
               0x1e | uVar14;
  uVar11 = 8;
  if (*(int *)(param_3 + 0x28) == 0) {
    uVar11 = 0;
  }
  *(uint *)((int)param_2 + 0x4c) =
       (uint)(*(int *)(param_3 + 0xa0) != 0) |
       (*(uint *)(param_3 + 0x8c) & 3 |
       (*(uint *)(param_3 + 0x8c) >> 8 & 3 |
       (*(uint *)(param_3 + 0x74) |
       (*(uint *)(param_3 + 0xac) |
       (uVar11 | (*(uint *)(param_3 + 0x1c) >> 4 & 0xf0 |
                  ((int)*(float *)(param_3 + 0xe0) | param_4 << 4) << 0xb |
                 *(uint *)(param_3 + 0x1c) & 0xf) << 4 | *(uint *)(param_3 + 0x24)) << 2) << 4) << 2
       ) << 2) << 1;
  return param_2;
}

