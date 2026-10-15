/*
 * FUN_10024a08 at 10024a08
 * undefined FUN_10024a08(void)
 * Address ranges: 10024a08-10025e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024a08(undefined8 *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,byte param_11)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  ulonglong *puVar14;
  bool bVar15;
  uint uVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 *local_320;
  int local_300;
  int local_2ec;
  undefined2 local_2a3;
  undefined1 local_2a1;
  ulonglong local_2a0 [4];
  int local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int iStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 auStack_220 [480];
  
  if ((char)param_3[7] == -1) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  if (*(uint *)(param_1 + 0x31e) < uVar23) {
    uVar23 = *(uint *)(param_1 + 0x31e);
  }
  uVar29 = (uint)((char)param_3[0xf] != -1);
  if ((char)param_3[0x11] != -1) {
    uVar29 = uVar29 | 2;
  }
  if ((char)param_3[0xb] != -1) {
    uVar29 = uVar29 | 4;
  }
  if ((char)param_3[0x13] != -1) {
    uVar29 = uVar29 | 8;
  }
  if ((char)param_3[0x15] != -1) {
    uVar29 = uVar29 | 0x10;
  }
  if ((char)param_3[0x17] != -1) {
    uVar29 = uVar29 | 0x20;
  }
  if ((char)param_3[0x19] != -1) {
    uVar29 = uVar29 | 0x40;
  }
  if ((char)param_3[0x1b] != -1) {
    uVar29 = uVar29 | 0x80;
  }
  if ((char)param_3[0x1d] != -1) {
    uVar29 = uVar29 | 0x100;
  }
  if ((char)param_3[0x1f] != -1) {
    uVar29 = uVar29 | 0x200;
  }
  if ((char)param_3[0x21] != -1) {
    uVar29 = uVar29 | 0x400;
  }
  if ((char)param_3[7] != -1) {
    uVar29 = *(uint *)(&DAT_1009d518 + uVar23 * 4) | uVar29;
  }
  pbVar1 = (byte *)((int)param_3 + 0x4d);
  if ((((*(uint *)((int)param_1 + 0xf24) == (uint)*pbVar1) &&
       (*(uint *)((int)param_1 + 0xf34) == (uint)*(byte *)((int)param_3 + 0x55))) &&
      (*(uint *)((int)param_1 + 0xf44) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
     (((*(uint *)((int)param_1 + 0xf54) == (uint)*(byte *)((int)param_3 + 0x65) &&
       (*(uint *)((int)param_1 + 0xf64) == (uint)*(byte *)((int)param_3 + 0x6d))) &&
      ((*(uint *)((int)param_1 + 0xf74) == (uint)*(byte *)((int)param_3 + 0x75) &&
       ((*(uint *)((int)param_1 + 0xf84) == (uint)*(byte *)((int)param_3 + 0x7d) &&
        (*(uint *)((int)param_1 + 0xf94) == (uint)*(byte *)((int)param_3 + 0x85))))))))) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  puVar3 = (uint *)(param_1 + 799);
  if (param_3[1] == 0) {
    local_300 = 0;
    if (*(char *)((int)param_1 + 0x1907) != '\0') {
      local_300 = 6;
    }
  }
  else {
    if (((*puVar3 >> 2 & 1) == 0) || (*(int *)((int)param_1 + 0x18f4) == 0)) {
      iVar27 = 1;
      local_300 = 2;
    }
    else {
      iVar27 = 3;
      local_300 = 4;
    }
    if (((*(char *)(param_1 + 0xf) != '\0') && (*(char *)((int)param_1 + 0x1903) == '\0')) &&
       (uVar23 = (*(uint *)((int)param_1 + 0x444) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)((int)param_1 + 0x444) & 0x55555555) << 1,
       uVar23 = (uVar23 & 0xcccccccc) >> 2 | (uVar23 & 0x33333333) << 2,
       uVar23 = (uVar23 & 0xf0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f) << 4,
       uVar23 = (uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar23 >> 0x10 | uVar23 << 0x10) < 5)) {
      local_300 = 5;
    }
    if (*(char *)((int)param_1 + 0xc) == '\0') {
      bVar17 = param_11 == 0;
    }
    else {
      bVar17 = (char)param_3[0xb] == -1 || param_11 == 0;
    }
    if (bVar17) {
      local_300 = iVar27;
    }
    if (((uVar29 & 0x7800) == 0) && (*(char *)((int)param_1 + 0x1907) == '\0')) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      local_300 = local_300 + 6;
    }
  }
  puVar19 = param_1;
  if (*(char *)((int)param_1 + 0x1d4a) != '\0') {
    puVar19 = (undefined8 *)FUN_10032a98(param_1);
  }
  uStack_278 = 0;
  uStack_274 = 0;
  local_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_258 = 0;
  iStack_254 = 0;
  local_260 = 0;
  uStack_25c = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  local_230 = 0;
  if (bVar15) {
    *(uint *)((int)param_1 + 0x44c) =
         (uint)*pbVar1 |
         ((uint)*(byte *)((int)param_3 + 0x55) |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*(byte *)((int)param_3 + 0x85) | *(byte *)((int)param_3 + 0x7d)) << 3) << 3) << 3)
         << 3) << 3) << 3;
  }
  if (*(int *)(*(int *)(param_1 + 0x3ac) + local_300 * 4 + 0x7c) == 0) {
    uVar22 = *(undefined4 *)((int)param_1 + 0x18f4);
    if ((*puVar3 & 4) == 0) {
      uVar22 = 0;
    }
    puVar20 = param_1;
    uVar18 = FUN_100324d0(param_1);
    *(uint *)((int)puVar20 + 0x48c) =
         *(uint *)((int)puVar20 + 0x48c) & 0x7fd00000 | (uint)param_11 << 0x1f | uVar29 & 0xfffff;
    FUN_1001be48(puVar20 + 0x89,uVar18,local_2a0);
    puVar2 = (uint *)(puVar20 + 0x3b9);
    uVar23 = *puVar2;
    if (uVar23 == 0) {
LAB_100250c0:
      local_320 = (undefined4 *)FUN_10081cb0(0x124);
      puVar19 = (undefined8 *)0x0;
      if (local_320 == (undefined4 *)0x0) goto LAB_10025558;
      uVar18 = *(undefined1 *)((int)puVar20 + 0x1dbc);
      uVar10 = *(undefined4 *)(puVar20 + 0x3b7);
      uVar11 = *(undefined4 *)((int)puVar20 + 0x1db4);
      *local_320 = &PTR_FUN_1009c778;
      *(undefined8 *)(local_320 + 1) = 0;
      local_320[4] = &PTR_FUN_1009c934;
      local_320[3] = 0;
      uVar34 = puVar20[0x89];
      uVar33 = puVar20[0x8c];
      uVar32 = puVar20[0x8b];
      uVar24 = 0;
      *(undefined8 *)(local_320 + 8) = puVar20[0x8a];
      *(undefined8 *)(local_320 + 6) = uVar34;
      *(undefined8 *)(local_320 + 0xc) = uVar33;
      *(undefined8 *)(local_320 + 10) = uVar32;
      uVar34 = puVar20[0x8d];
      uVar33 = puVar20[0x90];
      uVar32 = puVar20[0x8f];
      *(undefined8 *)(local_320 + 0x10) = puVar20[0x8e];
      *(undefined8 *)(local_320 + 0xe) = uVar34;
      *(undefined8 *)(local_320 + 0x14) = uVar33;
      *(undefined8 *)(local_320 + 0x12) = uVar32;
      *(undefined8 *)(local_320 + 0x16) = puVar20[0x91];
      *local_320 = &PTR_FUN_1009c874;
      local_320[1] = uVar11;
      *(undefined8 *)(local_320 + 0x18) = 0;
      *(undefined8 *)(local_320 + 0x1a) = 0;
      *(undefined1 *)(local_320 + 0x48) = uVar18;
      local_320[2] = uVar10;
      local_320[3] = local_320 + 0x18;
      uVar23 = *puVar2;
      if (uVar23 != 0) {
        uVar25 = 0;
        uVar26 = uVar23;
        do {
          uVar24 = uVar26 + uVar25 >> 1;
          puVar14 = (ulonglong *)(*(int *)((int)puVar20 + 0x1dc4) + uVar24 * 0x28);
          iVar27 = 0;
          if (((*puVar14 == local_2a0[0]) && (iVar27 = 1, puVar14[1] == local_2a0[1])) &&
             ((iVar27 = 2, puVar14[2] == local_2a0[2] && (iVar27 = 3, puVar14[3] == local_2a0[3]))))
          break;
          uVar16 = uVar24;
          if (puVar14[iVar27] <= local_2a0[iVar27]) {
            iVar27 = 0;
            if ((((*puVar14 == local_2a0[0]) && (iVar27 = 1, puVar14[1] == local_2a0[1])) &&
                ((iVar27 = 2, puVar14[2] == local_2a0[2] && (iVar27 = 3, puVar14[3] == local_2a0[3])
                 ))) || (local_2a0[iVar27] <= puVar14[iVar27])) break;
            uVar25 = uVar24 + 1;
            uVar24 = uVar25;
            uVar16 = uVar26;
          }
          uVar26 = uVar16;
        } while (uVar26 != uVar25);
      }
      if (uVar24 == uVar23) {
LAB_100252f4:
        uVar25 = *(uint *)((int)puVar20 + 0x1dcc);
        if (uVar25 == uVar23) {
          iVar27 = 0x10;
          if (uVar25 != 0) {
            iVar27 = uVar25 << 1;
          }
          iVar21 = FUN_10081da0(iVar27 * 0x28);
          if (iVar21 != 0) {
            uVar23 = 0;
            if (*puVar2 != 0) {
              do {
                puVar19 = (undefined8 *)(iVar21 + uVar23 * 0x28);
                puVar5 = (undefined8 *)(*(int *)((int)puVar20 + 0x1dc4) + uVar23 * 0x28);
                uVar23 = uVar23 + 1;
                uVar34 = *puVar5;
                uVar33 = puVar5[3];
                uVar32 = puVar5[2];
                puVar19[1] = puVar5[1];
                *puVar19 = uVar34;
                puVar19[3] = uVar33;
                puVar19[2] = uVar32;
                puVar19[4] = puVar5[4];
              } while (uVar23 < *(uint *)(puVar20 + 0x3b9));
            }
            FUN_10081dc0(*(int *)(puVar20 + 0x3b8));
            *(int *)((int)puVar20 + 0x1dc4) = iVar21;
            *(int *)(puVar20 + 0x3b8) = iVar21;
            *(int *)((int)puVar20 + 0x1dcc) = iVar27;
          }
        }
        uVar23 = *(uint *)(puVar20 + 0x3b9);
        if (*(uint *)((int)puVar20 + 0x1dcc) == uVar23) goto LAB_10025524;
        if (uVar24 < uVar23) {
          if (3 < uVar23 - uVar24) {
            piVar6 = (int *)((int)puVar20 + 0x1dc4);
            do {
              puVar19 = (undefined8 *)(*piVar6 + uVar23 * 0x28);
              puVar19[1] = puVar19[-4];
              *puVar19 = puVar19[-5];
              puVar19[3] = puVar19[-2];
              puVar19[2] = puVar19[-3];
              puVar19[4] = puVar19[-1];
              puVar19 = (undefined8 *)(*piVar6 + (uVar23 - 2) * 0x28);
              iVar27 = *piVar6 + uVar23 * 0x28;
              uVar34 = *puVar19;
              uVar33 = puVar19[3];
              uVar32 = puVar19[2];
              *(undefined8 *)(iVar27 + -0x20) = puVar19[1];
              *(undefined8 *)(iVar27 + -0x28) = uVar34;
              *(undefined8 *)(iVar27 + -0x10) = uVar33;
              *(undefined8 *)(iVar27 + -0x18) = uVar32;
              *(undefined8 *)(iVar27 + -8) = puVar19[4];
              iVar27 = uVar23 - 3;
              puVar19 = (undefined8 *)(*piVar6 + iVar27 * 0x28);
              puVar5 = (undefined8 *)(*piVar6 + (uVar23 - 2) * 0x28);
              uVar34 = *puVar19;
              uVar33 = puVar19[3];
              uVar32 = puVar19[2];
              puVar5[1] = puVar19[1];
              *puVar5 = uVar34;
              puVar5[3] = uVar33;
              puVar5[2] = uVar32;
              puVar5[4] = puVar19[4];
              iVar21 = uVar23 - 4;
              uVar23 = uVar23 - 4;
              puVar19 = (undefined8 *)(*piVar6 + iVar21 * 0x28);
              puVar5 = (undefined8 *)(*piVar6 + iVar27 * 0x28);
              uVar34 = *puVar19;
              uVar33 = puVar19[3];
              uVar32 = puVar19[2];
              puVar5[1] = puVar19[1];
              *puVar5 = uVar34;
              puVar5[3] = uVar33;
              puVar5[2] = uVar32;
              puVar5[4] = puVar19[4];
            } while (uVar24 + 3 < uVar23);
          }
          if (uVar24 < uVar23) {
            do {
              puVar19 = (undefined8 *)(*(int *)((int)puVar20 + 0x1dc4) + uVar23 * 0x28);
              uVar23 = uVar23 - 1;
              puVar19[1] = puVar19[-4];
              *puVar19 = puVar19[-5];
              puVar19[3] = puVar19[-2];
              puVar19[2] = puVar19[-3];
              puVar19[4] = puVar19[-1];
            } while (uVar24 < uVar23);
          }
        }
        *puVar2 = *(int *)(puVar20 + 0x3b9) + 1;
        puVar14 = (ulonglong *)(*(int *)((int)puVar20 + 0x1dc4) + uVar24 * 0x28);
        puVar14[1] = local_2a0[1];
        *puVar14 = local_2a0[0];
        puVar14[3] = local_2a0[3];
        puVar14[2] = local_2a0[2];
        iVar27 = *(int *)((int)puVar20 + 0x1dc4) + uVar24 * 0x28;
      }
      else {
        uVar25 = 0;
        do {
          if (*(ulonglong *)(*(int *)((int)puVar20 + 0x1dc4) + uVar24 * 0x28 + uVar25 * 8) !=
              local_2a0[uVar25]) goto LAB_100252f4;
          uVar25 = uVar25 + 1;
        } while (uVar25 < 4);
        iVar27 = *(int *)((int)puVar20 + 0x1dc4) + uVar24 * 0x28;
      }
      *(undefined4 **)(iVar27 + 0x20) = local_320;
    }
    else {
      uVar24 = 0;
      uVar25 = uVar23;
      do {
        uVar26 = uVar25 + uVar24 >> 1;
        puVar14 = (ulonglong *)(*(int *)((int)puVar20 + 0x1dc4) + uVar26 * 0x28);
        iVar27 = 0;
        if (((*puVar14 == local_2a0[0]) && (iVar27 = 1, puVar14[1] == local_2a0[1])) &&
           ((iVar27 = 2, puVar14[2] == local_2a0[2] && (iVar27 = 3, puVar14[3] == local_2a0[3]))))
        break;
        uVar16 = uVar26;
        if (puVar14[iVar27] <= local_2a0[iVar27]) {
          iVar27 = 0;
          if (((((*puVar14 == local_2a0[0]) && (iVar27 = 1, puVar14[1] == local_2a0[1])) &&
               (iVar27 = 2, puVar14[2] == local_2a0[2])) && (iVar27 = 3, puVar14[3] == local_2a0[3])
              ) || (local_2a0[iVar27] <= puVar14[iVar27])) break;
          uVar24 = uVar26 + 1;
          uVar26 = uVar24;
          uVar16 = uVar25;
        }
        uVar25 = uVar16;
      } while (uVar25 != uVar24);
      if (uVar26 == uVar23) goto LAB_100250c0;
      uVar23 = 0;
      do {
        if (*(ulonglong *)(*(int *)((int)puVar20 + 0x1dc4) + uVar26 * 0x28 + uVar23 * 8) !=
            local_2a0[uVar23]) goto LAB_100250c0;
        uVar23 = uVar23 + 1;
      } while (uVar23 < 4);
      local_320 = (undefined4 *)(*(int *)((int)puVar20 + 0x1dc4) + uVar26 * 0x28 + 0x20);
      if (local_320 == (undefined4 *)0x0) goto LAB_100250c0;
      local_320 = (undefined4 *)*local_320;
    }
LAB_10025524:
    puVar20 = (undefined8 *)FUN_10031618(local_320,uVar22);
    puVar19 = (undefined8 *)0x0;
    if (puVar20 != (undefined8 *)0x0) {
      local_230 = puVar20[10];
      uStack_278 = (undefined4)puVar20[1];
      uStack_274 = (undefined4)((ulonglong)puVar20[1] >> 0x20);
      local_280 = (int)*puVar20;
      uStack_27c = (undefined4)((ulonglong)*puVar20 >> 0x20);
      uStack_268 = (undefined4)puVar20[3];
      uStack_264 = (undefined4)((ulonglong)puVar20[3] >> 0x20);
      uStack_270 = (undefined4)puVar20[2];
      uStack_26c = (undefined4)((ulonglong)puVar20[2] >> 0x20);
      uStack_248 = puVar20[7];
      uStack_250 = puVar20[6];
      uStack_258 = (undefined4)puVar20[5];
      iStack_254 = (int)((ulonglong)puVar20[5] >> 0x20);
      local_260 = (undefined4)puVar20[4];
      uStack_25c = (undefined4)((ulonglong)puVar20[4] >> 0x20);
      uStack_238 = puVar20[9];
      local_240 = puVar20[8];
      puVar19 = puVar20;
    }
  }
LAB_10025558:
  if (local_280 == 0) {
    local_280 = *(int *)(*(int *)(param_1 + 0x3ac) + local_300 * 4 + 0x7c);
    iVar27 = local_300 * 0x28;
    uStack_274 = (undefined4)*(undefined8 *)(iVar27 + 0x1009d738);
    uStack_270 = (undefined4)((ulonglong)*(undefined8 *)(iVar27 + 0x1009d738) >> 0x20);
    uStack_27c = (undefined4)*(undefined8 *)(iVar27 + 0x1009d730);
    uStack_278 = (undefined4)((ulonglong)*(undefined8 *)(iVar27 + 0x1009d730) >> 0x20);
    uStack_264 = (undefined4)*(undefined8 *)(iVar27 + 0x1009d748);
    local_260 = (undefined4)((ulonglong)*(undefined8 *)(iVar27 + 0x1009d748) >> 0x20);
    uStack_26c = (undefined4)*(undefined8 *)(iVar27 + 0x1009d740);
    uStack_268 = (undefined4)((ulonglong)*(undefined8 *)(iVar27 + 0x1009d740) >> 0x20);
    uStack_25c = (undefined4)*(undefined8 *)(iVar27 + 0x1009d750);
    uStack_258 = (undefined4)((ulonglong)*(undefined8 *)(iVar27 + 0x1009d750) >> 0x20);
  }
  iVar27 = local_280;
  if (((*puVar3 >> 2 & 1) != 0) && (local_300 == 0 || local_300 == 6)) {
    puVar19 = (undefined8 *)FUN_10032770(param_1);
  }
  uVar24 = 0;
  bVar17 = local_300 == 5 || local_300 == 0xb;
  cVar12 = *(char *)((int)param_1 + 0x191b);
  *(bool *)((int)param_1 + 0x191b) = bVar17;
  *(byte *)(param_1 + 0x3a7) = bVar17 != (bool)cVar12 | *(byte *)(param_1 + 0x3a7);
  piVar6 = (int *)((int)param_1 + 0x1da4);
  puVar3 = (uint *)((int)param_1 + 0x1dac);
  uVar23 = *puVar3;
  uVar31 = (ulonglong)*param_3;
  if (uVar23 != 0) {
    uVar25 = 0;
    uVar26 = uVar23;
    do {
      uVar24 = uVar26 + uVar25 >> 1;
      uVar28 = *(ulonglong *)(*piVar6 + uVar24 * 0x18);
      uVar16 = uVar24;
      if (uVar28 <= uVar31) {
        if (uVar31 <= uVar28) break;
        uVar25 = uVar24 + 1;
        uVar24 = uVar25;
        uVar16 = uVar26;
      }
      uVar26 = uVar16;
    } while (uVar26 != uVar25);
  }
  if ((uVar24 != uVar23) && (*(ulonglong *)(*piVar6 + uVar24 * 0x18) == uVar31)) goto LAB_10025924;
  puVar2 = (uint *)(param_1 + 0x3b5);
  uVar25 = *puVar2;
  if (uVar23 == uVar25) {
    uVar23 = uVar25 * 2;
    iVar21 = uVar25 * 0x30;
    if ((ulonglong)uVar23 * 0x18 >> 0x20 != 0) {
      iVar21 = -1;
    }
    iVar21 = FUN_10081da0(iVar21);
    puVar19 = (undefined8 *)0x0;
    if (iVar21 != 0) {
      iVar30 = iVar21;
      if (3 < uVar23) {
        puVar4 = (undefined8 *)(iVar21 + 8);
        puVar5 = (undefined8 *)(iVar21 + 0x20);
        puVar20 = (undefined8 *)(iVar21 + 0x38);
        puVar19 = (undefined8 *)(iVar21 + 0x50);
        do {
          *puVar4 = 0;
          *(undefined1 *)(puVar4 + 1) = 0;
          *puVar5 = 0;
          uVar23 = uVar23 - 4;
          *(undefined1 *)(puVar5 + 1) = 0;
          *puVar20 = 0;
          iVar30 = iVar30 + 0x60;
          *(undefined1 *)(puVar20 + 1) = 0;
          *puVar19 = 0;
          puVar4 = puVar4 + 0xc;
          *(undefined1 *)(puVar19 + 1) = 0;
          puVar5 = puVar5 + 0xc;
          puVar20 = puVar20 + 0xc;
          puVar19 = puVar19 + 0xc;
        } while (3 < uVar23);
      }
      if (uVar23 != 0) {
        puVar19 = (undefined8 *)(iVar30 + 8);
        do {
          *puVar19 = 0;
          *(undefined1 *)(puVar19 + 1) = 0;
          uVar23 = uVar23 - 1;
          puVar19 = puVar19 + 3;
        } while (uVar23 != 0);
      }
      uVar23 = 0;
      if (*puVar2 != 0) {
        do {
          puVar19 = (undefined8 *)(iVar21 + uVar23 * 0x18);
          puVar20 = (undefined8 *)(*piVar6 + uVar23 * 0x18);
          uVar23 = uVar23 + 1;
          uVar32 = *puVar20;
          puVar19[1] = puVar20[1];
          *puVar19 = uVar32;
          puVar19[2] = puVar20[2];
        } while (uVar23 < *puVar2);
      }
      puVar19 = (undefined8 *)FUN_10081dc0(*piVar6);
      *piVar6 = iVar21;
      *puVar2 = *puVar2 << 1;
    }
  }
  uVar23 = *puVar3;
  if (uVar24 < uVar23) {
    if (3 < uVar23 - uVar24) {
      do {
        puVar20 = (undefined8 *)(*piVar6 + uVar23 * 0x18);
        puVar20[1] = puVar20[-2];
        *puVar20 = puVar20[-3];
        puVar20[2] = puVar20[-1];
        puVar20 = (undefined8 *)(*piVar6 + (uVar23 - 2) * 0x18);
        iVar21 = *piVar6 + uVar23 * 0x18;
        uVar32 = *puVar20;
        *(undefined8 *)(iVar21 + -0x10) = puVar20[1];
        *(undefined8 *)(iVar21 + -0x18) = uVar32;
        *(undefined8 *)(iVar21 + -8) = puVar20[2];
        iVar21 = uVar23 - 3;
        puVar20 = (undefined8 *)(*piVar6 + iVar21 * 0x18);
        puVar5 = (undefined8 *)(*piVar6 + (uVar23 - 2) * 0x18);
        uVar32 = *puVar20;
        puVar5[1] = puVar20[1];
        *puVar5 = uVar32;
        puVar5[2] = puVar20[2];
        iVar30 = uVar23 - 4;
        uVar23 = uVar23 - 4;
        puVar20 = (undefined8 *)(*piVar6 + iVar30 * 0x18);
        puVar5 = (undefined8 *)(*piVar6 + iVar21 * 0x18);
        uVar32 = *puVar20;
        puVar5[1] = puVar20[1];
        *puVar5 = uVar32;
        puVar5[2] = puVar20[2];
      } while (uVar24 + 3 < uVar23);
      if (uVar23 <= uVar24) goto LAB_1002589c;
    }
    do {
      puVar20 = (undefined8 *)(*piVar6 + uVar23 * 0x18);
      uVar23 = uVar23 - 1;
      puVar20[1] = puVar20[-2];
      *puVar20 = puVar20[-3];
      puVar20[2] = puVar20[-1];
    } while (uVar24 < uVar23);
  }
LAB_1002589c:
  iVar30 = uVar24 * 0x18;
  *(ulonglong *)(*piVar6 + iVar30) = uVar31;
  iVar21 = *piVar6 + iVar30;
  *(uint **)(iVar21 + 8) = param_3;
  *(undefined1 *)(iVar21 + 0xc) = 0;
  *(undefined2 *)(iVar21 + 0xd) = local_2a3;
  *(undefined1 *)(iVar21 + 0xf) = local_2a1;
  uVar22 = FUN_1003bd00(puVar19,param_3,auStack_220);
  uVar22 = FUN_100741b0(*(int *)(param_1 + 0x3b6) + 0x1630,auStack_220,uVar22);
  *(undefined4 *)(*piVar6 + iVar30 + 0x10) = uVar22;
  *puVar3 = *puVar3 + 1;
LAB_10025924:
  iVar21 = *(int *)(*piVar6 + uVar24 * 0x18 + 0x10);
  uVar23 = (0x1000 - *(int *)((int)param_1 + 0x54)) - *(int *)(param_1 + 10);
  uVar24 = (0x1000 - *(int *)(param_1 + 0xd)) - *(int *)((int)param_1 + 0x6c);
  bVar17 = *(char *)((int)param_1 + 0x1904) == '\0';
  puVar8 = (undefined *)0x100a2290;
  if (bVar17) {
    puVar8 = &DAT_100a22b0;
  }
  puVar9 = (undefined *)0x100a2250;
  if (bVar17) {
    puVar9 = &DAT_100a2270;
  }
  if (((((*(char *)((int)param_1 + 0x1905) != '\0') ||
        (*(uint *)(param_1 + 0x132) != uVar29 || bVar15)) ||
       (*(int *)((int)param_1 + 0x4f4) != param_6)) ||
      (((*(int *)(param_1 + 0x96) != param_7 || (*(int *)((int)param_1 + 0x2064) != param_5)) ||
       ((*(int *)((int)param_1 + 0x2024) != param_4 ||
        ((*(int *)((int)param_1 + 0x1dfc) != iVar27 || (*(uint *)(param_1 + 0x31c) != param_3[1]))))
       )))) || ((*(int *)((int)param_1 + 0x1e2c) != *(int *)(puVar9 + param_2 * 4) ||
                (((*(int *)((int)param_1 + 0x206c) != *(int *)(puVar8 + param_2 * 4) ||
                  (((*(int *)((int)param_1 + 0x6c) != 0) != (param_9 != 0) || uVar23 < param_8) ||
                   uVar24 < param_9)) || (*(int *)((int)param_1 + 0x1e24) != iVar21)))))) {
    iVar30 = param_7;
    if (param_4 != *(int *)(param_1 + 0x3ae)) {
      iVar30 = 0;
    }
    FUN_10026090(param_1,uVar23 < param_8,uVar24 < param_9,iVar30);
    local_2ec = param_6;
    if (param_4 == *(int *)(param_1 + 0x3ae)) {
      local_2ec = *(int *)((int)param_1 + 0x5c);
    }
    if (*(char *)((int)param_1 + 0x1905) != '\0') {
      *(undefined1 *)((int)param_1 + 0x1d39) = 1;
      *(byte *)((int)param_1 + 0x1d34) = *(byte *)((int)param_1 + 0x1d34) | 1;
    }
    if (bVar15) {
      *(uint *)((int)param_1 + 0xf24) = (uint)*pbVar1;
      *(uint *)((int)param_1 + 0xf34) = (uint)*(byte *)((int)param_3 + 0x55);
      *(uint *)((int)param_1 + 0xf44) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)((int)param_1 + 0xf54) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)((int)param_1 + 0xf64) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)((int)param_1 + 0xf74) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)((int)param_1 + 0xf84) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)((int)param_1 + 0xf94) = (uint)*(byte *)((int)param_3 + 0x85);
      *(undefined1 *)((int)param_1 + 0x1d41) = 1;
    }
    if (*(uint *)(param_1 + 0x132) != uVar29) {
      *(uint *)(param_1 + 0x132) = uVar29;
      *(undefined1 *)((int)param_1 + 0x1d41) = 1;
    }
    if (*(int *)(param_1 + 0x96) != param_7) {
      *(int *)(param_1 + 0x96) = param_7;
      *(undefined1 *)((int)param_1 + 0x1d3f) = 1;
    }
    if (*(int *)((int)param_1 + 0x2024) != param_4) {
      *(int *)((int)param_1 + 0x2024) = param_4;
      *(undefined1 *)((int)param_1 + 0x1d3f) = 1;
    }
    if (*(int *)((int)param_1 + 0x4f4) != local_2ec) {
      *(int *)((int)param_1 + 0x4f4) = local_2ec;
      *(undefined1 *)((int)param_1 + 0x1d3f) = 1;
    }
    if (*(int *)((int)param_1 + 0x2064) != param_5) {
      *(int *)((int)param_1 + 0x2064) = param_5;
      *(undefined1 *)(param_1 + 0x3a8) = 1;
    }
    puVar7 = (undefined1 *)((int)param_1 + 0x21d1);
    if (*(int *)((int)param_1 + 0x1e24) != iVar21) {
      *(int *)((int)param_1 + 0x1e24) = iVar21;
      *puVar7 = 1;
    }
    if (*(int *)((int)param_1 + 0x1e0c) != iStack_254) {
      *(int *)((int)param_1 + 0x1e0c) = iStack_254;
      *puVar7 = 1;
    }
    if (*(int *)((int)param_1 + 0x1dfc) != iVar27) {
      *(int *)((int)param_1 + 0x1dfc) = iVar27;
      param_1[0x42b] = CONCAT44(uStack_270,uStack_274);
      param_1[0x42a] = CONCAT44(uStack_278,uStack_27c);
      param_1[0x42d] = CONCAT44(local_260,uStack_264);
      param_1[0x42c] = CONCAT44(uStack_268,uStack_26c);
      param_1[0x42e] = CONCAT44(uStack_258,uStack_25c);
      *puVar7 = 1;
    }
    if ((*(uint *)(param_1 + 0x31c) != param_3[1]) || (*(char *)((int)param_1 + 0x1905) != '\0')) {
      *(uint *)(param_1 + 0x31c) = param_3[1];
      *(undefined1 *)((int)param_1 + 0x1d3e) = 1;
    }
    if (*(int *)((int)param_1 + 0x206c) != *(int *)(puVar8 + param_2 * 4)) {
      *(int *)((int)param_1 + 0x206c) = *(int *)(puVar8 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x43a) = 1;
    }
    if (*(int *)((int)param_1 + 0x1e2c) != *(int *)(puVar9 + param_2 * 4)) {
      *(int *)((int)param_1 + 0x1e2c) = *(int *)(puVar9 + param_2 * 4);
      *(undefined1 *)((int)param_1 + 0x21d1) = 1;
    }
    bVar13 = *(byte *)((int)param_1 + 0x1905);
    *(byte *)((int)param_1 + 0x1d3c) = bVar13 | *(byte *)((int)param_1 + 0x1d3c);
    *(byte *)((int)param_1 + 0x1d3b) = bVar13 | *(byte *)((int)param_1 + 0x1d3b);
    *(byte *)((int)param_1 + 0x1d3d) = bVar13 | *(byte *)((int)param_1 + 0x1d3d);
    *(byte *)(param_1 + 0x3a7) = *(byte *)(param_1 + 0x3a7) | bVar13;
    if (bVar13 != 0) {
      *(undefined1 *)((int)param_1 + 0x1905) = 0;
      FUN_10032568(param_1);
    }
  }
  return;
}

