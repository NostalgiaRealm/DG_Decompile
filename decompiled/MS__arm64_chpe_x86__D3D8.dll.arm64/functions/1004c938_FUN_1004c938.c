/*
 * FUN_1004c938 at 1004c938
 * undefined FUN_1004c938(void)
 * Address ranges: 1004c938-1004e233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c938(undefined8 *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
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
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  char cVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  int local_334;
  byte *local_314;
  uint local_30c;
  byte *local_2dc;
  int local_2d0;
  undefined8 local_2b8;
  int local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int iStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulonglong local_240 [4];
  undefined1 auStack_220 [480];
  
  if ((char)param_3[7] == -1) {
    uVar27 = 0;
  }
  else {
    uVar27 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  uVar29 = *(uint *)(param_1 + 0xb28);
  if (uVar29 < uVar27) {
    uVar27 = uVar29;
  }
  uVar31 = (uint)((char)param_3[0xf] != -1);
  if ((char)param_3[0x11] != -1) {
    uVar31 = uVar31 | 2;
  }
  if ((char)param_3[0xb] != -1) {
    uVar31 = uVar31 | 4;
  }
  if ((char)param_3[0x13] != -1) {
    uVar31 = uVar31 | 8;
  }
  if ((char)param_3[0x15] != -1) {
    uVar31 = uVar31 | 0x10;
  }
  if ((char)param_3[0x17] != -1) {
    uVar31 = uVar31 | 0x20;
  }
  if ((char)param_3[0x19] != -1) {
    uVar31 = uVar31 | 0x40;
  }
  if ((char)param_3[0x1b] != -1) {
    uVar31 = uVar31 | 0x80;
  }
  if ((char)param_3[0x1d] != -1) {
    uVar31 = uVar31 | 0x100;
  }
  if ((char)param_3[0x1f] != -1) {
    uVar31 = uVar31 | 0x200;
  }
  if ((char)param_3[0x21] != -1) {
    uVar31 = uVar31 | 0x400;
  }
  if ((char)param_3[7] != -1) {
    uVar31 = *(uint *)(&DAT_1012bae8 + uVar27 * 4) | uVar31;
  }
  if ((char)param_3[0x23] != -1) {
    uVar31 = uVar31 | 0x10000;
  }
  if ((char)param_3[0x25] != -1) {
    uVar31 = uVar31 | 0x20000;
  }
  uVar27 = 0x8000;
  if (*(int *)(param_1 + 0xa52) == 0 || uVar29 == 0) {
    uVar27 = 0;
  }
  if ((char)param_3[9] != -1) {
    uVar31 = uVar27 | uVar31;
  }
  puVar1 = param_3 + 1;
  if ((char)param_3[0xd] != -1) {
    uVar31 = uVar31 | 0x80000;
  }
  uVar27 = 0x40000;
  if (*puVar1 == 0) {
    uVar27 = 0;
  }
  uVar14 = uVar31 | uVar27;
  bVar17 = uVar29 == 0xff;
  if ((2 < param_2 - 4U) || (*(float *)(param_1 + 0xae) < 2.0)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  uVar28 = *(uint *)(param_1 + 0x99b);
  pbVar2 = (byte *)((int)param_3 + 0x4d);
  if ((((((*(uint *)((int)param_1 + 0x5214) == (uint)*pbVar2) &&
         (*(uint *)((int)param_1 + 0x5224) == (uint)*(byte *)((int)param_3 + 0x55))) &&
        (*(uint *)((int)param_1 + 0x5234) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
       ((*(uint *)((int)param_1 + 0x5244) == (uint)*(byte *)((int)param_3 + 0x65) &&
        (*(uint *)((int)param_1 + 0x5254) == (uint)*(byte *)((int)param_3 + 0x6d))))) &&
      (*(uint *)((int)param_1 + 0x5264) == (uint)*(byte *)((int)param_3 + 0x75))) &&
     ((*(uint *)((int)param_1 + 0x5274) == (uint)*(byte *)((int)param_3 + 0x7d) &&
      (*(uint *)((int)param_1 + 0x5284) == (uint)*(byte *)((int)param_3 + 0x85))))) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (*puVar1 == 0) {
    local_30c = 0;
    if (*(char *)((int)param_1 + 0x5957) != '\0') {
      local_30c = 8;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0xb29) >> 2 & 1) == 0) || (*(int *)((int)param_1 + 0x5944) == 0)) {
      uVar32 = 1;
      local_30c = 2;
    }
    else {
      uVar32 = 3;
      local_30c = 4;
    }
    if ((((*(int *)(param_1 + 0x1b4a) == 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
        (*(char *)((int)param_1 + 0x5953) == '\0')) &&
       (uVar15 = (*(uint *)(param_1 + 199) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(param_1 + 199) & 0x55555555) << 1,
       uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2,
       uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4,
       uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10) < 5)) {
      local_30c = 5;
    }
    if (bVar19) {
      uVar32 = 6;
      local_30c = 7;
    }
    if (*(char *)((int)param_1 + 0xc) == '\0') {
      bVar18 = param_11 == 0;
    }
    else {
      bVar18 = (char)param_3[0xb] == -1 || param_11 == 0;
    }
    if (bVar18) {
      local_30c = uVar32;
    }
    if (((uVar31 & 0xf800) == 0) && (*(char *)((int)param_1 + 0x5957) == '\0')) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18 || bVar17) {
      local_30c = local_30c + 8;
    }
  }
  local_2dc = (byte *)((int)param_3 + 0x85);
  param_1[0xd4] = param_1[0xd4] & 0xfffffffffbffffff;
  puVar21 = param_1;
  if (*(char *)((int)param_1 + 0xd9aa) != '\0') {
    puVar21 = (undefined8 *)FUN_1005f7a0(param_1);
    local_2dc = (byte *)0x0;
  }
  local_314 = (byte *)((int)param_3 + 0x55);
  uStack_298 = 0;
  uStack_294 = 0;
  local_2a0 = 0;
  uStack_29c = 0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_278 = 0;
  iStack_274 = 0;
  local_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  local_250 = 0;
  if (bVar16) {
    *(uint *)(param_1 + 200) =
         (uint)*pbVar2 |
         ((uint)*local_314 |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*local_2dc | *(byte *)((int)param_3 + 0x7d)) << 3) << 3) << 3) << 3) << 3) << 3;
  }
  local_2b8 = (ulonglong)uVar28;
  if (*(int *)(*(int *)((int)param_1 + 0xd9c4) + local_30c * 4 + 0x4c) == 0) {
    uVar32 = *(uint *)((int)param_1 + 0x4cdc);
    if (((uVar32 & 1) == 0) || (*(char *)((int)param_1 + 0x574) != '\0')) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    uVar15 = *(uint *)((int)param_1 + 0x5944);
    if ((*(uint *)(param_1 + 0xb29) & 4) == 0) {
      uVar15 = 0;
    }
    local_2b8 = (ulonglong)uVar15;
    if (bVar19) {
      local_2b8 = local_2b8 | ((ulonglong)uVar32 & 2 | 1) << 8;
      if ((uVar32 >> 2 & 1) != 0) {
        local_2b8 = local_2b8 | 0x400;
      }
      if (bVar18) {
        local_2b8 = local_2b8 | 0x800;
      }
      local_2b8 = local_2b8 | (ulonglong)uVar28 << 0xc;
    }
    if (*(int *)(param_1 + 0x1b4a) == 0) {
      uVar20 = FUN_1005f200(param_1);
    }
    else {
      uVar20 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b4a) + 4) + 0x124);
    }
    uVar28 = 0x200000;
    if (uVar29 != 0xff) {
      uVar28 = 0;
    }
    *(uint *)(param_1 + 0xd0) =
         uVar28 | (uint)param_11 << 0x1f | uVar31 & 0xfffff | uVar27 |
         *(uint *)(param_1 + 0xd0) & 0x7fd00000;
    FUN_100432d8((undefined8 *)((int)param_1 + 0x63c),uVar20,local_240);
    puVar3 = (uint *)((int)param_1 + 0xda2c);
    uVar27 = *puVar3;
    if (uVar27 == 0) {
LAB_1004d1ec:
      puVar22 = (undefined4 *)FUN_100febf0(0x124);
      puVar21 = (undefined8 *)0x0;
      if (puVar22 == (undefined4 *)0x0) goto LAB_1004d6b8;
      uVar20 = *(undefined1 *)(param_1 + 0x1b44);
      uVar26 = *(undefined4 *)((int)param_1 + 0xda1c);
      uVar31 = 0;
      uVar10 = *(undefined4 *)(param_1 + 0x1b43);
      *puVar22 = &PTR_FUN_101296e8;
      *(undefined8 *)(puVar22 + 1) = 0;
      puVar22[4] = &PTR_FUN_10129924;
      puVar22[3] = 0;
      uVar37 = *(undefined8 *)((int)param_1 + 0x63c);
      uVar36 = *(undefined8 *)((int)param_1 + 0x654);
      uVar35 = *(undefined8 *)((int)param_1 + 0x64c);
      *(undefined8 *)(puVar22 + 8) = *(undefined8 *)((int)param_1 + 0x644);
      *(undefined8 *)(puVar22 + 6) = uVar37;
      *(undefined8 *)(puVar22 + 0xc) = uVar36;
      *(undefined8 *)(puVar22 + 10) = uVar35;
      uVar37 = *(undefined8 *)((int)param_1 + 0x65c);
      uVar36 = *(undefined8 *)((int)param_1 + 0x674);
      uVar35 = *(undefined8 *)((int)param_1 + 0x66c);
      *(undefined8 *)(puVar22 + 0x10) = *(undefined8 *)((int)param_1 + 0x664);
      *(undefined8 *)(puVar22 + 0xe) = uVar37;
      *(undefined8 *)(puVar22 + 0x14) = uVar36;
      *(undefined8 *)(puVar22 + 0x12) = uVar35;
      *(undefined8 *)(puVar22 + 0x16) = *(undefined8 *)((int)param_1 + 0x67c);
      *puVar22 = &PTR_FUN_10129850;
      puVar22[1] = uVar10;
      *(undefined8 *)(puVar22 + 0x18) = 0;
      *(undefined8 *)(puVar22 + 0x1a) = 0;
      *(undefined1 *)(puVar22 + 0x48) = uVar20;
      puVar22[2] = uVar26;
      puVar22[3] = puVar22 + 0x18;
      uVar27 = *puVar3;
      if (uVar27 != 0) {
        uVar28 = 0;
        uVar32 = uVar27;
        do {
          uVar31 = uVar32 + uVar28 >> 1;
          puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1b45) + uVar31 * 0x28);
          iVar25 = 0;
          if ((((*puVar13 == local_240[0]) && (iVar25 = 1, puVar13[1] == local_240[1])) &&
              ((iVar25 = 2, puVar13[2] == local_240[2] && (iVar25 = 3, puVar13[3] == local_240[3])))
              ) || (uVar15 = uVar31, puVar13[iVar25] <= local_240[iVar25])) {
            iVar25 = 0;
            if (((((*puVar13 == local_240[0]) && (iVar25 = 1, puVar13[1] == local_240[1])) &&
                 (iVar25 = 2, puVar13[2] == local_240[2])) &&
                (iVar25 = 3, puVar13[3] == local_240[3])) || (local_240[iVar25] <= puVar13[iVar25]))
            break;
            uVar28 = uVar31 + 1;
            uVar31 = uVar28;
            uVar15 = uVar32;
          }
          uVar32 = uVar15;
        } while (uVar32 != uVar28);
      }
      if (uVar31 == uVar27) {
LAB_1004d43c:
        uVar28 = *(uint *)(param_1 + 0x1b46);
        if (uVar28 == uVar27) {
          iVar25 = 0x10;
          if (uVar28 != 0) {
            iVar25 = uVar28 << 1;
          }
          iVar23 = FUN_100fece0(iVar25 * 0x28);
          if (iVar23 != 0) {
            uVar27 = 0;
            if (*puVar3 != 0) {
              do {
                puVar21 = (undefined8 *)(iVar23 + uVar27 * 0x28);
                puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b45) + uVar27 * 0x28);
                uVar27 = uVar27 + 1;
                uVar37 = *puVar24;
                uVar36 = puVar24[3];
                uVar35 = puVar24[2];
                puVar21[1] = puVar24[1];
                *puVar21 = uVar37;
                puVar21[3] = uVar36;
                puVar21[2] = uVar35;
                puVar21[4] = puVar24[4];
              } while (uVar27 < *(uint *)((int)param_1 + 0xda2c));
            }
            FUN_100fed00(*(int *)((int)param_1 + 0xda24));
            *(int *)((int)param_1 + 0xda24) = iVar23;
            *(int *)(param_1 + 0x1b45) = iVar23;
            *(int *)(param_1 + 0x1b46) = iVar25;
          }
        }
        uVar27 = *(uint *)((int)param_1 + 0xda2c);
        if (*(uint *)(param_1 + 0x1b46) == uVar27) goto LAB_1004d678;
        if (uVar31 < uVar27) {
          if (3 < uVar27 - uVar31) {
            piVar4 = (int *)(param_1 + 0x1b45);
            do {
              puVar21 = (undefined8 *)(*piVar4 + uVar27 * 0x28);
              puVar21[1] = puVar21[-4];
              *puVar21 = puVar21[-5];
              puVar21[3] = puVar21[-2];
              puVar21[2] = puVar21[-3];
              puVar21[4] = puVar21[-1];
              puVar21 = (undefined8 *)(*piVar4 + (uVar27 - 2) * 0x28);
              iVar25 = *piVar4 + uVar27 * 0x28;
              uVar37 = *puVar21;
              uVar36 = puVar21[3];
              uVar35 = puVar21[2];
              *(undefined8 *)(iVar25 + -0x20) = puVar21[1];
              *(undefined8 *)(iVar25 + -0x28) = uVar37;
              *(undefined8 *)(iVar25 + -0x10) = uVar36;
              *(undefined8 *)(iVar25 + -0x18) = uVar35;
              *(undefined8 *)(iVar25 + -8) = puVar21[4];
              iVar25 = uVar27 - 3;
              puVar21 = (undefined8 *)(*piVar4 + iVar25 * 0x28);
              puVar24 = (undefined8 *)(*piVar4 + (uVar27 - 2) * 0x28);
              uVar37 = *puVar21;
              uVar36 = puVar21[3];
              uVar35 = puVar21[2];
              puVar24[1] = puVar21[1];
              *puVar24 = uVar37;
              puVar24[3] = uVar36;
              puVar24[2] = uVar35;
              puVar24[4] = puVar21[4];
              iVar23 = uVar27 - 4;
              uVar27 = uVar27 - 4;
              puVar21 = (undefined8 *)(*piVar4 + iVar23 * 0x28);
              puVar24 = (undefined8 *)(*piVar4 + iVar25 * 0x28);
              uVar37 = *puVar21;
              uVar36 = puVar21[3];
              uVar35 = puVar21[2];
              puVar24[1] = puVar21[1];
              *puVar24 = uVar37;
              puVar24[3] = uVar36;
              puVar24[2] = uVar35;
              puVar24[4] = puVar21[4];
            } while (uVar31 + 3 < uVar27);
          }
          if (uVar31 < uVar27) {
            do {
              puVar21 = (undefined8 *)(*(int *)(param_1 + 0x1b45) + uVar27 * 0x28);
              uVar27 = uVar27 - 1;
              puVar21[1] = puVar21[-4];
              *puVar21 = puVar21[-5];
              puVar21[3] = puVar21[-2];
              puVar21[2] = puVar21[-3];
              puVar21[4] = puVar21[-1];
            } while (uVar31 < uVar27);
          }
        }
        *puVar3 = *(int *)((int)param_1 + 0xda2c) + 1;
        puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1b45) + uVar31 * 0x28);
        puVar13[1] = local_240[1];
        *puVar13 = local_240[0];
        puVar13[3] = local_240[3];
        puVar13[2] = local_240[2];
        iVar25 = *(int *)(param_1 + 0x1b45) + uVar31 * 0x28;
      }
      else {
        uVar28 = 0;
        do {
          if (*(ulonglong *)(*(int *)(param_1 + 0x1b45) + uVar31 * 0x28 + uVar28 * 8) !=
              local_240[uVar28]) goto LAB_1004d43c;
          uVar28 = uVar28 + 1;
        } while (uVar28 < 4);
        iVar25 = *(int *)(param_1 + 0x1b45) + uVar31 * 0x28;
      }
      *(undefined4 **)(iVar25 + 0x20) = puVar22;
    }
    else {
      uVar31 = 0;
      uVar28 = uVar27;
      do {
        uVar32 = uVar28 + uVar31 >> 1;
        puVar13 = (ulonglong *)(*(int *)(param_1 + 0x1b45) + uVar32 * 0x28);
        iVar25 = 0;
        if (((((*puVar13 == local_240[0]) && (iVar25 = 1, puVar13[1] == local_240[1])) &&
             (iVar25 = 2, puVar13[2] == local_240[2])) && (iVar25 = 3, puVar13[3] == local_240[3]))
           || (uVar15 = uVar32, puVar13[iVar25] <= local_240[iVar25])) {
          iVar25 = 0;
          if ((((*puVar13 == local_240[0]) && (iVar25 = 1, puVar13[1] == local_240[1])) &&
              ((iVar25 = 2, puVar13[2] == local_240[2] && (iVar25 = 3, puVar13[3] == local_240[3])))
              ) || (local_240[iVar25] <= puVar13[iVar25])) break;
          uVar31 = uVar32 + 1;
          uVar32 = uVar31;
          uVar15 = uVar28;
        }
        uVar28 = uVar15;
      } while (uVar28 != uVar31);
      if (uVar32 == uVar27) goto LAB_1004d1ec;
      uVar27 = 0;
      do {
        if (*(ulonglong *)(*(int *)(param_1 + 0x1b45) + uVar32 * 0x28 + uVar27 * 8) !=
            local_240[uVar27]) goto LAB_1004d1ec;
        uVar27 = uVar27 + 1;
      } while (uVar27 < 4);
      puVar22 = (undefined4 *)(*(int *)(param_1 + 0x1b45) + uVar32 * 0x28 + 0x20);
      if (puVar22 == (undefined4 *)0x0) goto LAB_1004d1ec;
      puVar22 = (undefined4 *)*puVar22;
    }
LAB_1004d678:
    puVar24 = (undefined8 *)FUN_1005e090(puVar22,local_2b8);
    puVar21 = (undefined8 *)0x0;
    if (puVar24 != (undefined8 *)0x0) {
      local_250 = puVar24[10];
      uStack_298 = (undefined4)puVar24[1];
      uStack_294 = (undefined4)((ulonglong)puVar24[1] >> 0x20);
      local_2a0 = (int)*puVar24;
      uStack_29c = (undefined4)((ulonglong)*puVar24 >> 0x20);
      uStack_288 = (undefined4)puVar24[3];
      uStack_284 = (undefined4)((ulonglong)puVar24[3] >> 0x20);
      uStack_290 = (undefined4)puVar24[2];
      uStack_28c = (undefined4)((ulonglong)puVar24[2] >> 0x20);
      uStack_268 = puVar24[7];
      local_270 = puVar24[6];
      uStack_278 = (undefined4)puVar24[5];
      iStack_274 = (int)((ulonglong)puVar24[5] >> 0x20);
      local_280 = (undefined4)puVar24[4];
      uStack_27c = (undefined4)((ulonglong)puVar24[4] >> 0x20);
      uStack_258 = puVar24[9];
      local_260 = puVar24[8];
      puVar21 = puVar24;
    }
  }
LAB_1004d6b8:
  if (local_2a0 == 0) {
    local_2a0 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + local_30c * 4 + 0x4c);
    iVar25 = local_30c * 0x28;
    uStack_294 = (undefined4)*(undefined8 *)(iVar25 + 0x1012be08);
    uStack_290 = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + 0x1012be08) >> 0x20);
    uStack_29c = (undefined4)*(undefined8 *)(iVar25 + 0x1012be00);
    uStack_298 = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + 0x1012be00) >> 0x20);
    uStack_284 = (undefined4)*(undefined8 *)(iVar25 + 0x1012be18);
    local_280 = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + 0x1012be18) >> 0x20);
    uStack_28c = (undefined4)*(undefined8 *)(iVar25 + 0x1012be10);
    uStack_288 = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + 0x1012be10) >> 0x20);
    uStack_27c = (undefined4)*(undefined8 *)(iVar25 + 0x1012be20);
    uStack_278 = (undefined4)((ulonglong)*(undefined8 *)(iVar25 + 0x1012be20) >> 0x20);
  }
  if (((*(uint *)(param_1 + 0xb29) >> 2 & 1) != 0) && ((local_30c & 0xfffffff7) == 0)) {
    puVar21 = (undefined8 *)FUN_1005f470(param_1);
  }
  uVar31 = 0;
  bVar19 = (local_30c - 5 & 0xfffffff7) == 0;
  cVar11 = *(char *)((int)param_1 + 0x595e);
  *(bool *)((int)param_1 + 0x595e) = bVar19;
  *(byte *)(param_1 + 0x1b2f) = bVar19 != (bool)cVar11 | *(byte *)(param_1 + 0x1b2f);
  puVar3 = (uint *)(param_1 + 0x1b42);
  uVar27 = *puVar3;
  uVar34 = 0x8000000000000000;
  if (uVar29 != 0xff) {
    uVar34 = 0;
  }
  uVar34 = uVar34 | *param_3;
  if (uVar27 != 0) {
    uVar29 = 0;
    uVar28 = uVar27;
    do {
      uVar31 = uVar28 + uVar29 >> 1;
      uVar30 = *(ulonglong *)(*(int *)(param_1 + 0x1b41) + uVar31 * 0x18);
      uVar32 = uVar31;
      if (uVar30 <= uVar34) {
        if (uVar34 <= uVar30) break;
        uVar29 = uVar31 + 1;
        uVar31 = uVar29;
        uVar32 = uVar28;
      }
      uVar28 = uVar32;
    } while (uVar28 != uVar29);
  }
  if ((uVar31 == uVar27) || (*(ulonglong *)(*(int *)(param_1 + 0x1b41) + uVar31 * 0x18) != uVar34))
  {
    puVar5 = (uint *)((int)param_1 + 0xda0c);
    uVar29 = *puVar5;
    if (uVar27 == uVar29) {
      uVar27 = uVar29 * 2;
      iVar25 = uVar29 * 0x30;
      if ((ulonglong)uVar27 * 0x18 >> 0x20 != 0) {
        iVar25 = -1;
      }
      iVar25 = FUN_100fece0(iVar25);
      puVar21 = (undefined8 *)0x0;
      if (iVar25 != 0) {
        iVar23 = iVar25;
        if (3 < uVar27) {
          puVar6 = (undefined8 *)(iVar25 + 8);
          puVar7 = (undefined8 *)(iVar25 + 0x20);
          puVar24 = (undefined8 *)(iVar25 + 0x38);
          puVar21 = (undefined8 *)(iVar25 + 0x50);
          do {
            *puVar6 = 0;
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar7 = 0;
            uVar27 = uVar27 - 4;
            *(undefined1 *)(puVar7 + 1) = 0;
            *puVar24 = 0;
            iVar23 = iVar23 + 0x60;
            *(undefined1 *)(puVar24 + 1) = 0;
            *puVar21 = 0;
            puVar6 = puVar6 + 0xc;
            *(undefined1 *)(puVar21 + 1) = 0;
            puVar7 = puVar7 + 0xc;
            puVar24 = puVar24 + 0xc;
            puVar21 = puVar21 + 0xc;
          } while (3 < uVar27);
        }
        if (uVar27 != 0) {
          puVar21 = (undefined8 *)(iVar23 + 8);
          do {
            *puVar21 = 0;
            *(undefined1 *)(puVar21 + 1) = 0;
            uVar27 = uVar27 - 1;
            puVar21 = puVar21 + 3;
          } while (uVar27 != 0);
        }
        uVar27 = 0;
        if (*puVar5 != 0) {
          do {
            puVar21 = (undefined8 *)(iVar25 + uVar27 * 0x18);
            puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + uVar27 * 0x18);
            uVar27 = uVar27 + 1;
            uVar35 = *puVar24;
            puVar21[1] = puVar24[1];
            *puVar21 = uVar35;
            puVar21[2] = puVar24[2];
          } while (uVar27 < *puVar5);
        }
        puVar21 = (undefined8 *)FUN_100fed00(*(undefined4 *)(param_1 + 0x1b41));
        *(int *)(param_1 + 0x1b41) = iVar25;
        *puVar5 = *puVar5 << 1;
      }
    }
    uVar27 = *puVar3;
    if (uVar31 < uVar27) {
      if (3 < uVar27 - uVar31) {
        do {
          puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + uVar27 * 0x18);
          puVar24[1] = puVar24[-2];
          *puVar24 = puVar24[-3];
          puVar24[2] = puVar24[-1];
          puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + (uVar27 - 2) * 0x18);
          iVar25 = *(int *)(param_1 + 0x1b41) + uVar27 * 0x18;
          uVar35 = *puVar24;
          *(undefined8 *)(iVar25 + -0x10) = puVar24[1];
          *(undefined8 *)(iVar25 + -0x18) = uVar35;
          *(undefined8 *)(iVar25 + -8) = puVar24[2];
          iVar25 = uVar27 - 3;
          puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + iVar25 * 0x18);
          puVar7 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + (uVar27 - 2) * 0x18);
          uVar35 = *puVar24;
          puVar7[1] = puVar24[1];
          *puVar7 = uVar35;
          puVar7[2] = puVar24[2];
          iVar23 = uVar27 - 4;
          uVar27 = uVar27 - 4;
          puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + iVar23 * 0x18);
          puVar7 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + iVar25 * 0x18);
          uVar35 = *puVar24;
          puVar7[1] = puVar24[1];
          *puVar7 = uVar35;
          puVar7[2] = puVar24[2];
        } while (uVar31 + 3 < uVar27);
        if (uVar27 <= uVar31) goto LAB_1004da34;
      }
      do {
        puVar24 = (undefined8 *)(*(int *)(param_1 + 0x1b41) + uVar27 * 0x18);
        uVar27 = uVar27 - 1;
        puVar24[1] = puVar24[-2];
        *puVar24 = puVar24[-3];
        puVar24[2] = puVar24[-1];
      } while (uVar31 < uVar27);
    }
LAB_1004da34:
    iVar23 = uVar31 * 0x18;
    *(ulonglong *)(*(int *)(param_1 + 0x1b41) + iVar23) = uVar34;
    iVar25 = *(int *)(param_1 + 0x1b41) + iVar23;
    *(uint **)(iVar25 + 8) = param_3;
    *(bool *)(iVar25 + 0xc) = bVar17;
    *(undefined2 *)(iVar25 + 0xd) = local_2b8._5_2_;
    *(undefined1 *)(iVar25 + 0xf) = 0;
    uVar26 = FUN_10068890(puVar21,param_3,auStack_220,bVar17);
    uVar26 = FUN_100e6f10(*(int *)((int)param_1 + 0xda14) + 0x1630,auStack_220,uVar26);
    *(undefined4 *)(*(int *)(param_1 + 0x1b41) + iVar23 + 0x10) = uVar26;
    *puVar3 = *puVar3 + 1;
  }
  iVar25 = *(int *)(*(int *)(param_1 + 0x1b41) + uVar31 * 0x18 + 0x10);
  local_334 = local_2a0;
  if ((param_2 == 1) &&
     (((*(char *)((int)param_1 + 0x5959) != '\0' && (*puVar1 != 0)) ||
      (*(char *)((int)param_1 + 0x595a) != '\0')))) {
    iStack_274 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + (uint)bVar19 * 4 + 0x90);
    cVar11 = '\x01';
  }
  else {
    cVar33 = '\0';
    cVar11 = '\0';
    if (iStack_274 != 0) goto switchD_1004db64_caseD_8;
  }
  cVar33 = cVar11;
  switch(local_30c) {
  case 6:
    iStack_274 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + 0x98);
    puVar21 = (undefined8 *)&DAT_1012bd30;
    break;
  case 7:
    iStack_274 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + 0x9c);
    puVar21 = (undefined8 *)&DAT_1012bd58;
    break;
  default:
    goto switchD_1004db64_caseD_8;
  case 0xe:
    iStack_274 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + 0xa0);
    puVar21 = (undefined8 *)&DAT_1012bd80;
    break;
  case 0xf:
    iStack_274 = *(int *)(*(int *)((int)param_1 + 0xd9c4) + 0xa4);
    puVar21 = (undefined8 *)&DAT_1012bda8;
  }
  uStack_268 = puVar21[1];
  local_270 = *puVar21;
  uStack_258 = puVar21[3];
  local_260 = puVar21[2];
  local_250 = puVar21[4];
switchD_1004db64_caseD_8:
  uVar27 = (0x1000 - *(int *)((int)param_1 + 0x54)) - *(int *)(param_1 + 10);
  uVar29 = (0x1000 - *(int *)(param_1 + 0xd)) - *(int *)((int)param_1 + 0x6c);
  bVar17 = *(char *)((int)param_1 + 0x5954) == '\0';
  puVar8 = &DAT_10135ff8;
  if (bVar17) {
    puVar8 = &DAT_10136018;
  }
  puVar9 = &DAT_10135fb8;
  if (bVar17) {
    puVar9 = &DAT_10135fd8;
  }
  if (((((*(char *)((int)param_1 + 0x5955) != '\0') ||
        (*(uint *)(param_1 + 0x996) != uVar14 || bVar16)) ||
       ((*(int *)((int)param_1 + 0x6ec) != param_6 ||
        ((*(int *)(param_1 + 0xd5) != param_7 || (*(int *)(param_1 + 0x1b9b) != param_5)))))) ||
      ((*(int *)(param_1 + 0x1b93) != param_4 ||
       (((*(int *)((int)param_1 + 0xda74) != local_334 ||
         (*(int *)((int)param_1 + 0xda84) != iStack_274)) ||
        (*(char *)((int)param_1 + 0x595b) != cVar33)))))) ||
     (((*(uint *)(param_1 + 0xb26) != *puVar1 ||
       (*(int *)((int)param_1 + 0xdaa4) != *(int *)(puVar9 + param_2 * 4))) ||
      ((*(int *)(param_1 + 0x1b9c) != *(int *)(puVar8 + param_2 * 4) ||
       ((((*(int *)((int)param_1 + 0x6c) != 0) != (param_9 != 0) || uVar27 < param_8) ||
         uVar29 < param_9 || (*(int *)((int)param_1 + 0xda9c) != iVar25)))))))) {
    iVar23 = param_7;
    if (param_4 != *(int *)((int)param_1 + 0xd9d4)) {
      iVar23 = 0;
    }
    FUN_1004e440(param_1,uVar27 < param_8,uVar29 < param_9,iVar23);
    local_2d0 = param_6;
    if (param_4 == *(int *)((int)param_1 + 0xd9d4)) {
      local_2d0 = *(int *)((int)param_1 + 0x5c);
    }
    if (*(char *)((int)param_1 + 0x5955) != '\0') {
      *(undefined1 *)((int)param_1 + 0xd979) = 1;
      *(byte *)((int)param_1 + 0xd974) = *(byte *)((int)param_1 + 0xd974) | 1;
    }
    if (bVar16) {
      *(uint *)((int)param_1 + 0x5214) = (uint)*pbVar2;
      *(uint *)((int)param_1 + 0x5224) = (uint)*local_314;
      *(uint *)((int)param_1 + 0x5234) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)((int)param_1 + 0x5244) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)((int)param_1 + 0x5254) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)((int)param_1 + 0x5264) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)((int)param_1 + 0x5274) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)((int)param_1 + 0x5284) = (uint)*local_2dc;
      *(undefined1 *)((int)param_1 + 0xd981) = 1;
    }
    if (*(uint *)(param_1 + 0x996) != uVar14) {
      *(uint *)(param_1 + 0x996) = uVar14;
      *(undefined1 *)((int)param_1 + 0xd981) = 1;
    }
    if (*(int *)(param_1 + 0xd5) != param_7) {
      *(int *)(param_1 + 0xd5) = param_7;
      *(undefined1 *)((int)param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0x1b93) != param_4) {
      *(int *)(param_1 + 0x1b93) = param_4;
      *(undefined1 *)((int)param_1 + 0xd97f) = 1;
    }
    if (*(int *)((int)param_1 + 0x6ec) != local_2d0) {
      *(int *)((int)param_1 + 0x6ec) = local_2d0;
      *(undefined1 *)((int)param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0x1b9b) != param_5) {
      *(int *)(param_1 + 0x1b9b) = param_5;
      *(undefined1 *)(param_1 + 0x1b30) = 1;
    }
    if (*(int *)((int)param_1 + 0xda9c) != iVar25) {
      *(int *)((int)param_1 + 0xda9c) = iVar25;
      *(undefined1 *)((int)param_1 + 0xde59) = 1;
    }
    if (*(int *)((int)param_1 + 0xda84) != iStack_274) {
      *(int *)((int)param_1 + 0xda84) = iStack_274;
      if (iStack_274 == 0) {
        param_1[0x1bc1] = 0;
        param_1[0x1bc0] = 0;
        param_1[0x1bc3] = 0;
        param_1[0x1bc2] = 0;
        param_1[0x1bc4] = 0;
      }
      else {
        param_1[0x1bc1] = uStack_268;
        param_1[0x1bc0] = local_270;
        param_1[0x1bc3] = uStack_258;
        param_1[0x1bc2] = local_260;
        param_1[0x1bc4] = local_250;
      }
      *(undefined1 *)((int)param_1 + 0xde59) = 1;
    }
    if (*(int *)((int)param_1 + 0xda74) != local_334) {
      *(int *)((int)param_1 + 0xda74) = local_334;
      param_1[0x1bbc] = CONCAT44(uStack_290,uStack_294);
      param_1[0x1bbb] = CONCAT44(uStack_298,uStack_29c);
      param_1[0x1bbe] = CONCAT44(local_280,uStack_284);
      param_1[0x1bbd] = CONCAT44(uStack_288,uStack_28c);
      param_1[0x1bbf] = CONCAT44(uStack_278,uStack_27c);
      *(undefined1 *)((int)param_1 + 0xde59) = 1;
    }
    if ((*(uint *)(param_1 + 0xb26) != param_3[1]) || (*(char *)((int)param_1 + 0x5955) != '\0')) {
      *(uint *)(param_1 + 0xb26) = param_3[1];
      *(undefined1 *)((int)param_1 + 0xd97e) = 1;
    }
    if (*(int *)(param_1 + 0x1b9c) != *(int *)(puVar8 + param_2 * 4)) {
      *(int *)(param_1 + 0x1b9c) = *(int *)(puVar8 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x1bcb) = 1;
    }
    if (*(int *)((int)param_1 + 0xdaa4) != *(int *)(puVar9 + param_2 * 4)) {
      *(int *)((int)param_1 + 0xdaa4) = *(int *)(puVar9 + param_2 * 4);
      *(undefined1 *)((int)param_1 + 0xde59) = 1;
    }
    if (*(char *)((int)param_1 + 0x595b) != cVar33) {
      *(char *)((int)param_1 + 0x595b) = cVar33;
      *(undefined1 *)((int)param_1 + 0xd97d) = 1;
    }
    bVar12 = *(byte *)((int)param_1 + 0x5955);
    *(byte *)((int)param_1 + 0xd97c) = bVar12 | *(byte *)((int)param_1 + 0xd97c);
    *(byte *)((int)param_1 + 0xd97b) = bVar12 | *(byte *)((int)param_1 + 0xd97b);
    *(byte *)((int)param_1 + 0xd97d) = bVar12 | *(byte *)((int)param_1 + 0xd97d);
    *(byte *)(param_1 + 0x1b2f) = *(byte *)(param_1 + 0x1b2f) | bVar12;
    if (bVar12 != 0) {
      *(undefined1 *)((int)param_1 + 0x5955) = 0;
      FUN_1005f298(param_1);
    }
  }
  return;
}

