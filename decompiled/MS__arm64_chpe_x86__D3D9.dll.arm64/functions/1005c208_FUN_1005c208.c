/*
 * FUN_1005c208 at 1005c208
 * undefined FUN_1005c208(void)
 * Address ranges: 1005c208-1005dd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c208(undefined8 *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,byte param_11)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  char cVar37;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint local_86c;
  uint local_830;
  byte *local_804;
  int local_7f8;
  undefined8 local_7e0;
  int local_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  int iStack_7a4;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  ulonglong local_770 [6];
  undefined1 auStack_740 [1792];
  
  if ((char)param_3[7] == -1) {
    uVar30 = 0;
  }
  else {
    uVar30 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  uVar32 = *(uint *)((int)param_1 + 0x762c);
  if (uVar32 < uVar30) {
    uVar30 = uVar32;
  }
  if (*(char *)((int)param_3 + 0x19) == '\0') {
    local_86c = (uint)*(byte *)((int)param_3 + 0x1a);
  }
  else {
    local_86c = 0;
  }
  bVar20 = *(char *)((int)param_3 + 0x41) == -0x60;
  if (bVar20) {
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x42) << 0x14;
  }
  uVar33 = (uint)bVar20;
  if (*(char *)((int)param_3 + 0x49) == -0x5f) {
    uVar33 = uVar33 | 2;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x4a) << 0x18;
  }
  if (*(char *)((int)param_3 + 0x31) == '0') {
    uVar33 = uVar33 | 4;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x32) << 0xc;
  }
  if (*(char *)((int)param_3 + 0x51) == 'P') {
    uVar33 = uVar33 | 8;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x52) << 0x1c;
  }
  if (*(char *)((int)param_3 + 0x59) == 'Q') {
    uVar38 = (uint)*(byte *)((int)param_3 + 0x5a);
    uVar33 = uVar33 | 0x10;
  }
  else {
    uVar38 = 0;
  }
  if (*(char *)((int)param_3 + 0x61) == 'R') {
    uVar33 = uVar33 | 0x20;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x62) << 4;
  }
  if (*(char *)((int)param_3 + 0x69) == 'S') {
    uVar33 = uVar33 | 0x40;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x6a) << 8;
  }
  if (*(char *)((int)param_3 + 0x71) == 'T') {
    uVar33 = uVar33 | 0x80;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x72) << 0xc;
  }
  if (*(char *)((int)param_3 + 0x79) == 'U') {
    uVar33 = uVar33 | 0x100;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x7a) << 0x10;
  }
  if (*(char *)((int)param_3 + 0x81) == 'V') {
    uVar33 = uVar33 | 0x200;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x82) << 0x14;
  }
  if (*(char *)((int)param_3 + 0x89) == 'W') {
    uVar33 = uVar33 | 0x400;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x8a) << 0x18;
  }
  if (*(char *)((int)param_3 + 0x21) == '\x10') {
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x22) << 4;
    uVar33 = *(uint *)(&DAT_10161468 + uVar30 * 4) | uVar33;
  }
  if (*(char *)((int)param_3 + 0x91) == '\x01') {
    uVar33 = uVar33 | 0x10000;
    uVar38 = uVar38 | (uint)*(byte *)((int)param_3 + 0x92) << 0x1c;
  }
  if (*(char *)((int)param_3 + 0x99) == '1') {
    uVar33 = uVar33 | 0x20000;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x9a) << 4;
  }
  uVar30 = 0x8000;
  if (*(int *)(param_1 + 0xde0) == 0 || uVar32 == 0) {
    uVar30 = 0;
  }
  if (*(char *)((int)param_3 + 0x29) == ' ') {
    uVar33 = uVar30 | uVar33;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x2a) << 8;
  }
  if (*(char *)((int)param_3 + 0x39) == '@') {
    uVar33 = uVar33 | 0x80000;
    local_86c = local_86c | (uint)*(byte *)((int)param_3 + 0x3a) << 0x10;
  }
  puVar1 = param_3 + 1;
  uVar30 = 0x40000;
  if (*puVar1 == 0) {
    uVar30 = 0;
  }
  uVar14 = uVar30 | uVar33;
  bVar20 = uVar32 == 0xff;
  if ((2 < param_2 - 4U) || (*(float *)(param_1 + 0x1d1) < 2.0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (((*(uint *)((int)param_1 + 0x694c) & 1) == 0) || (*(char *)((int)param_1 + 0xe8c) != '\0')) {
    uVar34 = *(uint *)(param_1 + 0xd29);
  }
  else {
    uVar34 = (uint)*(float *)((int)param_1 + 0x6f44);
  }
  pbVar2 = (byte *)((int)param_3 + 0x4d);
  if ((((((*(uint *)((int)param_1 + 0x6e84) == (uint)*pbVar2) &&
         (*(uint *)((int)param_1 + 0x6e94) == (uint)*(byte *)((int)param_3 + 0x55))) &&
        (*(uint *)((int)param_1 + 0x6ea4) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
       ((*(uint *)((int)param_1 + 0x6eb4) == (uint)*(byte *)((int)param_3 + 0x65) &&
        (*(uint *)((int)param_1 + 0x6ec4) == (uint)*(byte *)((int)param_3 + 0x6d))))) &&
      (*(uint *)((int)param_1 + 0x6ed4) == (uint)*(byte *)((int)param_3 + 0x75))) &&
     ((*(uint *)((int)param_1 + 0x6ee4) == (uint)*(byte *)((int)param_3 + 0x7d) &&
      (*(uint *)((int)param_1 + 0x6ef4) == (uint)*(byte *)((int)param_3 + 0x85))))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (*puVar1 == 0) {
    local_830 = 0;
    if (*(char *)((int)param_1 + 0x7644) != '\0') {
      local_830 = 8;
    }
  }
  else {
    if (((*(uint *)((int)param_1 + 0x7634) >> 2 & 1) == 0) || (*(int *)(param_1 + 0xec6) == 0)) {
      uVar35 = 1;
      local_830 = 2;
    }
    else {
      uVar35 = 3;
      local_830 = 4;
    }
    if ((((*(int *)(param_1 + 0x1eea) == 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
        (*(char *)(param_1 + 0xec8) == '\0')) &&
       (uVar15 = (*(uint *)(param_1 + 0x1ea) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(param_1 + 0x1ea) & 0x55555555) << 1,
       uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2,
       uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4,
       uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) < 5)) {
      local_830 = 5;
    }
    if (bVar22) {
      uVar35 = 6;
      local_830 = 7;
    }
    if (*(char *)((int)param_1 + 0xc) == '\0') {
      bVar21 = param_11 == 0;
    }
    else {
      bVar21 = (char)param_3[0xb] == -1 || param_11 == 0;
    }
    if (bVar21) {
      local_830 = uVar35;
    }
    if (((uVar33 & 0xf800) == 0) && (*(char *)((int)param_1 + 0x7644) == '\0')) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if (bVar21 || bVar20) {
      local_830 = local_830 + 8;
    }
  }
  local_804 = (byte *)((int)param_3 + 0x85);
  param_1[0x1f8] = param_1[0x1f8] & 0xfff7ffffffffffff;
  puVar24 = param_1;
  if (*(char *)((int)param_1 + 0xf6a5) != '\0') {
    puVar24 = (undefined8 *)FUN_10075170(param_1);
    local_804 = (byte *)0x0;
  }
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  local_7d0 = 0;
  uStack_7cc = 0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0;
  uStack_7a8 = 0;
  iStack_7a4 = 0;
  local_7b0 = 0;
  uStack_7ac = 0;
  uStack_798 = 0;
  local_7a0 = 0;
  uStack_788 = 0;
  local_790 = 0;
  local_780 = 0;
  if (bVar16) {
    *(uint *)((int)param_1 + 0xf5c) =
         (uint)*pbVar2 |
         ((uint)*(byte *)((int)param_3 + 0x55) |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*local_804 | *(byte *)((int)param_3 + 0x7d)) << 3) << 3) << 3) << 3) << 3) << 3;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xf6c4) + local_830 * 4 + 0x4c) == 0) {
    uVar35 = *(uint *)((int)param_1 + 0x694c);
    if (((uVar35 & 1) == 0) || (*(char *)((int)param_1 + 0xe8c) != '\0')) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    uVar15 = *(uint *)(param_1 + 0xec6);
    if ((*(uint *)((int)param_1 + 0x7634) & 4) == 0) {
      uVar15 = 0;
    }
    local_7e0 = (ulonglong)uVar15;
    if (bVar22) {
      uVar31 = local_7e0 | ((ulonglong)uVar35 & 2 | 1) << 8;
      if ((uVar35 >> 2 & 1) != 0) {
        uVar31 = uVar31 | 0x400;
      }
      if (bVar21) {
        uVar31 = uVar31 | 0x800;
      }
      local_7e0 = uVar31 | (ulonglong)uVar34 << 0xc;
    }
    if (*(int *)(param_1 + 0x1eea) == 0) {
      uVar23 = FUN_10074bd0(param_1);
    }
    else {
      uVar23 = (&DAT_0000126c)[*(int *)(*(int *)(param_1 + 0x1eea) + 4)];
    }
    uVar34 = 0x200000;
    if (uVar32 != 0xff) {
      uVar34 = 0;
    }
    *(uint *)((int)param_1 + 0xf9c) =
         uVar34 | (uint)param_11 << 0x1f | *(uint *)((int)param_1 + 0xf9c) & 0x7fd00000 |
         uVar30 | uVar33 & 0xfffff;
    param_1[500] = CONCAT44(uVar38,local_86c);
    FUN_100514c8(param_1 + 0x1eb,uVar23,local_770);
    uVar19 = local_770[4];
    uVar18 = local_770[3];
    uVar17 = local_770[2];
    uVar36 = local_770[1];
    uVar31 = local_770[0];
    puVar3 = (uint *)((int)param_1 + 0xf72c);
    uVar30 = *puVar3;
    if (uVar30 == 0) {
LAB_1005cd10:
      puVar25 = (undefined4 *)FUN_101321c0(0x2d0);
      puVar24 = (undefined8 *)0x0;
      if (puVar25 == (undefined4 *)0x0) goto LAB_1005d1c4;
      uVar23 = *(undefined1 *)(param_1 + 0x1ee4);
      uVar29 = *(undefined4 *)((int)param_1 + 0xf71c);
      uVar33 = 0;
      uVar10 = *(undefined4 *)(param_1 + 0x1ee3);
      *puVar25 = &PTR_D3DPERF_GetStatus_native_1015eb6c;
      *(undefined8 *)(puVar25 + 1) = 0;
      puVar25[4] = &PTR_FUN_1015ee44;
      puVar25[3] = 0;
      uVar41 = param_1[0x1eb];
      uVar40 = param_1[0x1ee];
      uVar39 = param_1[0x1ed];
      *(undefined8 *)(puVar25 + 8) = param_1[0x1ec];
      *(undefined8 *)(puVar25 + 6) = uVar41;
      *(undefined8 *)(puVar25 + 0xc) = uVar40;
      *(undefined8 *)(puVar25 + 10) = uVar39;
      uVar41 = param_1[0x1ef];
      uVar40 = param_1[0x1f2];
      uVar39 = param_1[0x1f1];
      *(undefined8 *)(puVar25 + 0x10) = param_1[0x1f0];
      *(undefined8 *)(puVar25 + 0xe) = uVar41;
      *(undefined8 *)(puVar25 + 0x14) = uVar40;
      *(undefined8 *)(puVar25 + 0x12) = uVar39;
      uVar39 = param_1[499];
      *(undefined8 *)(puVar25 + 0x18) = param_1[500];
      *(undefined8 *)(puVar25 + 0x16) = uVar39;
      *puVar25 = &PTR_FUN_1015ed28;
      *(undefined8 *)(puVar25 + 0x1c) = 0;
      puVar25[1] = uVar10;
      *(undefined1 *)(puVar25 + 0xb3) = uVar23;
      *(undefined8 *)(puVar25 + 0x1a) = 0;
      puVar25[2] = uVar29;
      puVar25[3] = puVar25 + 0x1a;
      uVar30 = *puVar3;
      if (uVar30 != 0) {
        uVar38 = 0;
        uVar34 = uVar30;
        do {
          uVar33 = uVar34 + uVar38 >> 1;
          puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1ee5) + uVar33 * 0x30);
          iVar28 = 0;
          if (((((*puVar13 == uVar31) && (iVar28 = 1, puVar13[1] == uVar36)) &&
               (iVar28 = 2, puVar13[2] == uVar17)) &&
              ((iVar28 = 3, puVar13[3] == uVar18 && (iVar28 = 4, puVar13[4] == uVar19)))) ||
             (uVar35 = uVar33, puVar13[iVar28] <= local_770[iVar28])) {
            iVar28 = 0;
            if ((((*puVar13 == uVar31) && (iVar28 = 1, puVar13[1] == uVar36)) &&
                ((iVar28 = 2, puVar13[2] == uVar17 &&
                 ((iVar28 = 3, puVar13[3] == uVar18 && (iVar28 = 4, puVar13[4] == uVar19)))))) ||
               (local_770[iVar28] <= puVar13[iVar28])) break;
            uVar38 = uVar33 + 1;
            uVar33 = uVar38;
            uVar35 = uVar34;
          }
          uVar34 = uVar35;
        } while (uVar34 != uVar38);
      }
      if (uVar33 == uVar30) {
LAB_1005cf80:
        uVar38 = *(uint *)(param_1 + 0x1ee6);
        if (uVar38 == uVar30) {
          iVar28 = 0x10;
          if (uVar38 != 0) {
            iVar28 = uVar38 << 1;
          }
          iVar26 = FUN_101322b0(iVar28 * 0x30);
          if (iVar26 != 0) {
            uVar30 = 0;
            if (*puVar3 != 0) {
              do {
                puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1ee5) + uVar30 * 0x30);
                puVar27 = (undefined8 *)(iVar26 + uVar30 * 0x30);
                uVar30 = uVar30 + 1;
                uVar41 = *puVar24;
                uVar40 = puVar24[3];
                uVar39 = puVar24[2];
                puVar27[1] = puVar24[1];
                *puVar27 = uVar41;
                puVar27[3] = uVar40;
                puVar27[2] = uVar39;
                uVar39 = puVar24[4];
                puVar27[5] = puVar24[5];
                puVar27[4] = uVar39;
              } while (uVar30 < *(uint *)((int)param_1 + 0xf72c));
            }
            FUN_101322d0(*(int *)((int)param_1 + 0xf724));
            *(int *)((int)param_1 + 0xf724) = iVar26;
            *(int *)(param_1 + 0x1ee5) = iVar26;
            *(int *)(param_1 + 0x1ee6) = iVar28;
          }
        }
        uVar30 = *(uint *)((int)param_1 + 0xf72c);
        if (*(uint *)(param_1 + 0x1ee6) == uVar30) goto LAB_1005d184;
        if (uVar33 < uVar30) {
          if (3 < uVar30 - uVar33) {
            piVar4 = (int *)(param_1 + 0x1ee5);
            do {
              iVar26 = uVar30 - 3;
              puVar24 = (undefined8 *)(*piVar4 + uVar30 * 0x30);
              puVar24[1] = puVar24[-5];
              *puVar24 = puVar24[-6];
              puVar24[3] = puVar24[-3];
              puVar24[2] = puVar24[-4];
              puVar24[5] = puVar24[-1];
              puVar24[4] = puVar24[-2];
              puVar24 = (undefined8 *)(*piVar4 + (uVar30 - 2) * 0x30);
              iVar28 = *piVar4 + uVar30 * 0x30;
              uVar41 = *puVar24;
              uVar40 = puVar24[3];
              uVar39 = puVar24[2];
              *(undefined8 *)(iVar28 + -0x28) = puVar24[1];
              *(undefined8 *)(iVar28 + -0x30) = uVar41;
              *(undefined8 *)(iVar28 + -0x18) = uVar40;
              *(undefined8 *)(iVar28 + -0x20) = uVar39;
              uVar39 = puVar24[4];
              *(undefined8 *)(iVar28 + -8) = puVar24[5];
              *(undefined8 *)(iVar28 + -0x10) = uVar39;
              puVar24 = (undefined8 *)(*piVar4 + iVar26 * 0x30);
              puVar27 = (undefined8 *)(*piVar4 + (uVar30 - 2) * 0x30);
              uVar41 = *puVar24;
              uVar40 = puVar24[3];
              uVar39 = puVar24[2];
              puVar27[1] = puVar24[1];
              *puVar27 = uVar41;
              puVar27[3] = uVar40;
              puVar27[2] = uVar39;
              uVar39 = puVar24[4];
              iVar28 = uVar30 - 4;
              uVar30 = uVar30 - 4;
              puVar27[5] = puVar24[5];
              puVar27[4] = uVar39;
              puVar24 = (undefined8 *)(*piVar4 + iVar28 * 0x30);
              puVar27 = (undefined8 *)(*piVar4 + iVar26 * 0x30);
              uVar41 = *puVar24;
              uVar40 = puVar24[3];
              uVar39 = puVar24[2];
              puVar27[1] = puVar24[1];
              *puVar27 = uVar41;
              puVar27[3] = uVar40;
              puVar27[2] = uVar39;
              uVar39 = puVar24[4];
              puVar27[5] = puVar24[5];
              puVar27[4] = uVar39;
            } while (uVar33 + 3 < uVar30);
          }
          if (uVar33 < uVar30) {
            do {
              puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1ee5) + uVar30 * 0x30);
              uVar30 = uVar30 - 1;
              puVar24[1] = puVar24[-5];
              *puVar24 = puVar24[-6];
              puVar24[3] = puVar24[-3];
              puVar24[2] = puVar24[-4];
              puVar24[5] = puVar24[-1];
              puVar24[4] = puVar24[-2];
            } while (uVar33 < uVar30);
          }
        }
        *puVar3 = *(int *)((int)param_1 + 0xf72c) + 1;
        puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1ee5) + uVar33 * 0x30);
        puVar13[1] = local_770[1];
        *puVar13 = local_770[0];
        puVar13[3] = local_770[3];
        puVar13[2] = local_770[2];
        puVar13[4] = local_770[4];
        iVar28 = *(int *)(param_1 + 0x1ee5) + uVar33 * 0x30;
      }
      else {
        uVar38 = 0;
        do {
          if (*(ulonglong *)(*(int *)(param_1 + 0x1ee5) + uVar33 * 0x30 + uVar38 * 8) !=
              local_770[uVar38]) goto LAB_1005cf80;
          uVar38 = uVar38 + 1;
        } while (uVar38 < 5);
        iVar28 = *(int *)(param_1 + 0x1ee5) + uVar33 * 0x30;
      }
      *(undefined4 **)(iVar28 + 0x28) = puVar25;
    }
    else {
      uVar33 = 0;
      uVar38 = uVar30;
      do {
        uVar34 = uVar38 + uVar33 >> 1;
        puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1ee5) + uVar34 * 0x30);
        iVar28 = 0;
        if (((((*puVar13 == local_770[0]) && (iVar28 = 1, puVar13[1] == local_770[1])) &&
             (iVar28 = 2, puVar13[2] == local_770[2])) &&
            ((iVar28 = 3, puVar13[3] == local_770[3] && (iVar28 = 4, puVar13[4] == local_770[4]))))
           || (uVar35 = uVar34, puVar13[iVar28] <= local_770[iVar28])) {
          iVar28 = 0;
          if ((((*puVar13 == local_770[0]) && (iVar28 = 1, puVar13[1] == local_770[1])) &&
              ((iVar28 = 2, puVar13[2] == local_770[2] &&
               ((iVar28 = 3, puVar13[3] == local_770[3] && (iVar28 = 4, puVar13[4] == local_770[4]))
               )))) || (local_770[iVar28] <= puVar13[iVar28])) break;
          uVar33 = uVar34 + 1;
          uVar34 = uVar33;
          uVar35 = uVar38;
        }
        uVar38 = uVar35;
      } while (uVar38 != uVar33);
      if (uVar34 == uVar30) goto LAB_1005cd10;
      uVar30 = 0;
      do {
        if (*(ulonglong *)(*(int *)(param_1 + 0x1ee5) + uVar34 * 0x30 + uVar30 * 8) !=
            local_770[uVar30]) goto LAB_1005cd10;
        uVar30 = uVar30 + 1;
      } while (uVar30 < 5);
      puVar25 = (undefined4 *)(*(int *)(param_1 + 0x1ee5) + uVar34 * 0x30 + 0x28);
      if (puVar25 == (undefined4 *)0x0) goto LAB_1005cd10;
      puVar25 = (undefined4 *)*puVar25;
    }
LAB_1005d184:
    puVar27 = (undefined8 *)FUN_10072a50(puVar25,local_7e0);
    puVar24 = (undefined8 *)0x0;
    if (puVar27 != (undefined8 *)0x0) {
      local_780 = puVar27[10];
      uStack_7c8 = (undefined4)puVar27[1];
      uStack_7c4 = (undefined4)((ulonglong)puVar27[1] >> 0x20);
      local_7d0 = (int)*puVar27;
      uStack_7cc = (undefined4)((ulonglong)*puVar27 >> 0x20);
      uStack_7b8 = (undefined4)puVar27[3];
      uStack_7b4 = (undefined4)((ulonglong)puVar27[3] >> 0x20);
      uStack_7c0 = (undefined4)puVar27[2];
      uStack_7bc = (undefined4)((ulonglong)puVar27[2] >> 0x20);
      uStack_798 = puVar27[7];
      local_7a0 = puVar27[6];
      uStack_7a8 = (undefined4)puVar27[5];
      iStack_7a4 = (int)((ulonglong)puVar27[5] >> 0x20);
      local_7b0 = (undefined4)puVar27[4];
      uStack_7ac = (undefined4)((ulonglong)puVar27[4] >> 0x20);
      uStack_788 = puVar27[9];
      local_790 = puVar27[8];
      puVar24 = puVar27;
    }
  }
LAB_1005d1c4:
  if (local_7d0 == 0) {
    local_7d0 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + local_830 * 4 + 0x4c);
    iVar28 = local_830 * 0x28;
    uStack_7c4 = (undefined4)*(undefined8 *)(iVar28 + 0x101617e8);
    uStack_7c0 = (undefined4)((ulonglong)*(undefined8 *)(iVar28 + 0x101617e8) >> 0x20);
    uStack_7cc = (undefined4)*(undefined8 *)(iVar28 + 0x101617e0);
    uStack_7c8 = (undefined4)((ulonglong)*(undefined8 *)(iVar28 + 0x101617e0) >> 0x20);
    uStack_7b4 = (undefined4)*(undefined8 *)(iVar28 + 0x101617f8);
    local_7b0 = (undefined4)((ulonglong)*(undefined8 *)(iVar28 + 0x101617f8) >> 0x20);
    uStack_7bc = (undefined4)*(undefined8 *)(iVar28 + 0x101617f0);
    uStack_7b8 = (undefined4)((ulonglong)*(undefined8 *)(iVar28 + 0x101617f0) >> 0x20);
    uStack_7ac = (undefined4)*(undefined8 *)(iVar28 + 0x10161800);
    uStack_7a8 = (undefined4)((ulonglong)*(undefined8 *)(iVar28 + 0x10161800) >> 0x20);
  }
  if (((*(uint *)((int)param_1 + 0x7634) >> 2 & 1) != 0) && ((local_830 & 0xfffffff7) == 0)) {
    puVar24 = (undefined8 *)FUN_10074e40(param_1);
  }
  uVar33 = 0;
  bVar22 = (local_830 - 5 & 0xfffffff7) == 0;
  cVar11 = *(char *)((int)param_1 + 0x764b);
  *(bool *)((int)param_1 + 0x764b) = bVar22;
  *(byte *)(param_1 + 0x1ecd) = bVar22 != (bool)cVar11 | *(byte *)(param_1 + 0x1ecd);
  puVar3 = (uint *)(param_1 + 0x1ee2);
  uVar30 = *puVar3;
  uVar31 = 0x8000000000000000;
  if (uVar32 != 0xff) {
    uVar31 = 0;
  }
  uVar31 = uVar31 | *param_3;
  if (uVar30 != 0) {
    uVar32 = 0;
    uVar38 = uVar30;
    do {
      uVar33 = uVar38 + uVar32 >> 1;
      uVar36 = *(ulonglong *)(*(int *)(param_1 + 0x1ee1) + uVar33 * 0x18);
      uVar34 = uVar33;
      if (uVar36 <= uVar31) {
        if (uVar31 <= uVar36) break;
        uVar32 = uVar33 + 1;
        uVar33 = uVar32;
        uVar34 = uVar38;
      }
      uVar38 = uVar34;
    } while (uVar38 != uVar32);
  }
  if ((uVar33 == uVar30) || (*(ulonglong *)(uVar33 * 0x18 + *(int *)(param_1 + 0x1ee1)) != uVar31))
  {
    puVar5 = (uint *)((int)param_1 + 0xf70c);
    uVar32 = *puVar5;
    if (uVar30 == uVar32) {
      uVar30 = uVar32 * 2;
      iVar28 = uVar32 * 0x30;
      if ((ulonglong)uVar30 * 0x18 >> 0x20 != 0) {
        iVar28 = -1;
      }
      iVar28 = FUN_101322b0(iVar28);
      puVar24 = (undefined8 *)0x0;
      if (iVar28 != 0) {
        iVar26 = iVar28;
        if (3 < uVar30) {
          puVar6 = (undefined8 *)(iVar28 + 8);
          puVar7 = (undefined8 *)(iVar28 + 0x20);
          puVar27 = (undefined8 *)(iVar28 + 0x38);
          puVar24 = (undefined8 *)(iVar28 + 0x50);
          do {
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar7 = 0;
            uVar30 = uVar30 - 4;
            *(undefined1 *)(puVar7 + 1) = 0;
            *puVar27 = 0;
            iVar26 = iVar26 + 0x60;
            *(undefined1 *)(puVar27 + 1) = 0;
            *puVar24 = 0;
            puVar6 = puVar6 + 0xc;
            *(undefined1 *)(puVar24 + 1) = 0;
            puVar7 = puVar7 + 0xc;
            puVar27 = puVar27 + 0xc;
            puVar24 = puVar24 + 0xc;
          } while (3 < uVar30);
        }
        if (uVar30 != 0) {
          puVar24 = (undefined8 *)(iVar26 + 8);
          do {
            *puVar24 = 0;
            *(undefined1 *)(puVar24 + 1) = 0;
            uVar30 = uVar30 - 1;
            puVar24 = puVar24 + 3;
          } while (uVar30 != 0);
        }
        uVar30 = 0;
        if (*puVar5 != 0) {
          do {
            puVar24 = (undefined8 *)(iVar28 + uVar30 * 0x18);
            puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + uVar30 * 0x18);
            uVar30 = uVar30 + 1;
            uVar39 = *puVar27;
            puVar24[1] = puVar27[1];
            *puVar24 = uVar39;
            puVar24[2] = puVar27[2];
          } while (uVar30 < *puVar5);
        }
        puVar24 = (undefined8 *)FUN_101322d0(*(undefined4 *)(param_1 + 0x1ee1));
        *(int *)(param_1 + 0x1ee1) = iVar28;
        *puVar5 = *puVar5 << 1;
      }
    }
    uVar30 = *puVar3;
    if (uVar33 < uVar30) {
      if (3 < uVar30 - uVar33) {
        do {
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + uVar30 * 0x18);
          puVar27[1] = puVar27[-2];
          *puVar27 = puVar27[-3];
          puVar27[2] = puVar27[-1];
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + (uVar30 - 2) * 0x18);
          iVar28 = *(int *)(param_1 + 0x1ee1) + uVar30 * 0x18;
          uVar39 = *puVar27;
          *(undefined8 *)(iVar28 + -0x10) = puVar27[1];
          *(undefined8 *)(iVar28 + -0x18) = uVar39;
          *(undefined8 *)(iVar28 + -8) = puVar27[2];
          iVar28 = uVar30 - 3;
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + iVar28 * 0x18);
          puVar7 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + (uVar30 - 2) * 0x18);
          uVar39 = *puVar27;
          puVar7[1] = puVar27[1];
          *puVar7 = uVar39;
          puVar7[2] = puVar27[2];
          iVar26 = uVar30 - 4;
          uVar30 = uVar30 - 4;
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + iVar26 * 0x18);
          puVar7 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + iVar28 * 0x18);
          uVar39 = *puVar27;
          puVar7[1] = puVar27[1];
          *puVar7 = uVar39;
          puVar7[2] = puVar27[2];
        } while (uVar33 + 3 < uVar30);
        if (uVar30 <= uVar33) goto LAB_1005d540;
      }
      do {
        puVar27 = (undefined8 *)(*(int *)(param_1 + 0x1ee1) + uVar30 * 0x18);
        uVar30 = uVar30 - 1;
        puVar27[1] = puVar27[-2];
        *puVar27 = puVar27[-3];
        puVar27[2] = puVar27[-1];
      } while (uVar33 < uVar30);
    }
LAB_1005d540:
    iVar26 = uVar33 * 0x18;
    *(ulonglong *)(iVar26 + *(int *)(param_1 + 0x1ee1)) = uVar31;
    iVar28 = iVar26 + *(int *)(param_1 + 0x1ee1);
    *(uint **)(iVar28 + 8) = param_3;
    *(bool *)(iVar28 + 0xc) = bVar20;
    *(undefined2 *)(iVar28 + 0xd) = local_7e0._5_2_;
    *(undefined1 *)(iVar28 + 0xf) = local_7e0._7_1_;
    uVar29 = FUN_1007fae0(puVar24,param_3,auStack_740,bVar20);
    uVar29 = FUN_10119760(*(int *)((int)param_1 + 0xf714) + 0x1630,auStack_740,uVar29);
    *(undefined4 *)(iVar26 + *(int *)(param_1 + 0x1ee1) + 0x10) = uVar29;
    *puVar3 = *puVar3 + 1;
  }
  iVar28 = *(int *)(uVar33 * 0x18 + *(int *)(param_1 + 0x1ee1) + 0x10);
  local_86c = local_7d0;
  if ((param_2 == 1) &&
     (((*(char *)((int)param_1 + 0x7646) != '\0' && (*puVar1 != 0)) ||
      (*(char *)((int)param_1 + 0x7647) != '\0')))) {
    iStack_7a4 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + (uint)bVar22 * 4 + 0x90);
    cVar11 = '\x01';
  }
  else {
    cVar37 = '\0';
    cVar11 = '\0';
    if (iStack_7a4 != 0) goto switchD_1005d670_caseD_8;
  }
  cVar37 = cVar11;
  switch(local_830) {
  case 6:
    iStack_7a4 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + 0x98);
    puVar24 = (undefined8 *)&DAT_10161710;
    break;
  case 7:
    iStack_7a4 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + 0x9c);
    puVar24 = (undefined8 *)&DAT_10161738;
    break;
  default:
    goto switchD_1005d670_caseD_8;
  case 0xe:
    iStack_7a4 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + 0xa0);
    puVar24 = (undefined8 *)&DAT_10161760;
    break;
  case 0xf:
    iStack_7a4 = *(int *)(*(int *)((int)param_1 + 0xf6c4) + 0xa4);
    puVar24 = (undefined8 *)&DAT_10161788;
  }
  uStack_798 = puVar24[1];
  local_7a0 = *puVar24;
  uStack_788 = puVar24[3];
  local_790 = puVar24[2];
  local_780 = puVar24[4];
switchD_1005d670_caseD_8:
  uVar30 = (0x1000 - *(int *)((int)param_1 + 0x54)) - *(int *)(param_1 + 10);
  uVar32 = (0x1000 - *(int *)(param_1 + 0xd)) - *(int *)((int)param_1 + 0x6c);
  bVar20 = *(char *)((int)param_1 + 0x7641) == '\0';
  puVar8 = &DAT_1016e338;
  if (bVar20) {
    puVar8 = &DAT_1016e358;
  }
  puVar9 = &DAT_1016e2f8;
  if (bVar20) {
    puVar9 = &DAT_1016e318;
  }
  if (((((*(char *)((int)param_1 + 0x7642) != '\0') ||
        (*(uint *)(param_1 + 0xd24) != uVar14 || bVar16)) ||
       ((*(int *)((int)param_1 + 0x100c) != param_6 ||
        ((*(int *)(param_1 + 0x1f9) != param_7 || (*(int *)(param_1 + 0x1f82) != param_5)))))) ||
      ((*(int *)(param_1 + 0x1f7a) != param_4 ||
       (((*(int *)((int)param_1 + 0xf80c) != local_86c ||
         (*(int *)((int)param_1 + 0xf81c) != iStack_7a4)) || (*(char *)(param_1 + 0xec9) != cVar37))
       )))) || (((*(uint *)((int)param_1 + 0x761c) != *puVar1 ||
                 (*(int *)((int)param_1 + 0xf83c) != *(int *)(puVar9 + param_2 * 4))) ||
                ((*(int *)(param_1 + 0x1f83) != *(int *)(puVar8 + param_2 * 4) ||
                 ((((*(int *)((int)param_1 + 0x6c) != 0) != (param_9 != 0) || uVar30 < param_8) ||
                   uVar32 < param_9 || (*(int *)((int)param_1 + 0xf834) != iVar28)))))))) {
    iVar26 = param_7;
    if (param_4 != *(int *)((int)param_1 + 0xf6d4)) {
      iVar26 = 0;
    }
    FUN_1005df78(param_1,uVar30 < param_8,uVar32 < param_9,iVar26);
    local_7f8 = param_6;
    if (param_4 == *(int *)((int)param_1 + 0xf6d4)) {
      local_7f8 = *(int *)((int)param_1 + 0x5c);
    }
    if (*(char *)((int)param_1 + 0x7642) != '\0') {
      *(undefined1 *)((int)param_1 + 0xf669) = 1;
      *(byte *)((int)param_1 + 0xf664) = *(byte *)((int)param_1 + 0xf664) | 1;
    }
    if (bVar16) {
      *(uint *)((int)param_1 + 0x6e84) = (uint)*pbVar2;
      *(uint *)((int)param_1 + 0x6e94) = (uint)*(byte *)((int)param_3 + 0x55);
      *(uint *)((int)param_1 + 0x6ea4) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)((int)param_1 + 0x6eb4) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)((int)param_1 + 0x6ec4) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)((int)param_1 + 0x6ed4) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)((int)param_1 + 0x6ee4) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)((int)param_1 + 0x6ef4) = (uint)*local_804;
      *(undefined1 *)((int)param_1 + 0xf671) = 1;
    }
    if (*(uint *)(param_1 + 0xd24) != uVar14) {
      *(uint *)(param_1 + 0xd24) = uVar14;
      *(undefined1 *)((int)param_1 + 0xf671) = 1;
    }
    if (*(int *)(param_1 + 0x1f9) != param_7) {
      *(int *)(param_1 + 0x1f9) = param_7;
      *(undefined1 *)((int)param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0x1f7a) != param_4) {
      *(int *)(param_1 + 0x1f7a) = param_4;
      *(undefined1 *)((int)param_1 + 0xf66f) = 1;
    }
    if (*(int *)((int)param_1 + 0x100c) != local_7f8) {
      *(int *)((int)param_1 + 0x100c) = local_7f8;
      *(undefined1 *)((int)param_1 + 0xf66f) = 1;
    }
    if (*(int *)(param_1 + 0x1f82) != param_5) {
      *(int *)(param_1 + 0x1f82) = param_5;
      *(undefined1 *)(param_1 + 0x1ece) = 1;
    }
    if (*(int *)((int)param_1 + 0xf834) != iVar28) {
      *(int *)((int)param_1 + 0xf834) = iVar28;
      *(undefined1 *)((int)param_1 + 0xfd99) = 1;
    }
    if (*(int *)((int)param_1 + 0xf81c) != iStack_7a4) {
      *(int *)((int)param_1 + 0xf81c) = iStack_7a4;
      if (iStack_7a4 == 0) {
        param_1[0x1fa9] = 0;
        param_1[0x1fa8] = 0;
        param_1[0x1fab] = 0;
        param_1[0x1faa] = 0;
        param_1[0x1fac] = 0;
      }
      else {
        param_1[0x1fa9] = uStack_798;
        param_1[0x1fa8] = local_7a0;
        param_1[0x1fab] = uStack_788;
        param_1[0x1faa] = local_790;
        param_1[0x1fac] = local_780;
      }
      *(undefined1 *)((int)param_1 + 0xfd99) = 1;
    }
    if (*(int *)((int)param_1 + 0xf80c) != local_86c) {
      *(int *)((int)param_1 + 0xf80c) = local_86c;
      param_1[0x1fa4] = CONCAT44(uStack_7c0,uStack_7c4);
      param_1[0x1fa3] = CONCAT44(uStack_7c8,uStack_7cc);
      param_1[0x1fa6] = CONCAT44(local_7b0,uStack_7b4);
      param_1[0x1fa5] = CONCAT44(uStack_7b8,uStack_7bc);
      param_1[0x1fa7] = CONCAT44(uStack_7a8,uStack_7ac);
      iVar28 = *(int *)((int)param_1 + 0xf7f4);
      *(undefined4 *)((int)param_1 + 0xf7f4) = 0;
      *(byte *)((int)param_1 + 0xf6a2) = iVar28 != 0 | *(byte *)((int)param_1 + 0xf6a2);
      *(undefined1 *)((int)param_1 + 0xfd99) = 1;
    }
    if ((*(uint *)((int)param_1 + 0x761c) != param_3[1]) ||
       (*(char *)((int)param_1 + 0x7642) != '\0')) {
      *(uint *)((int)param_1 + 0x761c) = param_3[1];
      *(undefined1 *)((int)param_1 + 0xf66e) = 1;
    }
    if (*(int *)(param_1 + 0x1f83) != *(int *)(puVar8 + param_2 * 4)) {
      *(int *)(param_1 + 0x1f83) = *(int *)(puVar8 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x1fb3) = 1;
    }
    if (*(int *)((int)param_1 + 0xf83c) != *(int *)(puVar9 + param_2 * 4)) {
      *(int *)((int)param_1 + 0xf83c) = *(int *)(puVar9 + param_2 * 4);
      *(undefined1 *)((int)param_1 + 0xfd99) = 1;
    }
    if (*(char *)(param_1 + 0xec9) != cVar37) {
      *(char *)(param_1 + 0xec9) = cVar37;
      *(undefined1 *)((int)param_1 + 0xf66d) = 1;
    }
    bVar12 = *(byte *)((int)param_1 + 0x7642);
    *(byte *)((int)param_1 + 0xf66c) = bVar12 | *(byte *)((int)param_1 + 0xf66c);
    *(byte *)((int)param_1 + 0xf66b) = bVar12 | *(byte *)((int)param_1 + 0xf66b);
    *(byte *)((int)param_1 + 0xf66d) = bVar12 | *(byte *)((int)param_1 + 0xf66d);
    *(byte *)(param_1 + 0x1ecd) = *(byte *)(param_1 + 0x1ecd) | bVar12;
    if (bVar12 != 0) {
      *(undefined1 *)((int)param_1 + 0x7642) = 0;
      FUN_10074c68(param_1);
    }
  }
  return;
}

