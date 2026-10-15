/*
 * FUN_1003c860 at 1003c860
 * undefined FUN_1003c860(void)
 * Address ranges: 1003c860-1003e067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c860(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,byte param_11)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte bVar9;
  ulonglong *puVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  byte *extraout_w1;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  undefined4 uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  char cVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  int local_118;
  undefined4 *local_114;
  int local_104;
  uint local_e8;
  byte *local_bc;
  int local_b0;
  byte *local_a4;
  undefined8 local_98;
  undefined1 local_90;
  byte *local_88;
  int local_84;
  uint *local_80;
  ulonglong local_78;
  uint local_70;
  ulonglong local_68 [5];
  
  if ((char)param_3[7] == -1) {
    uVar21 = 0;
  }
  else {
    uVar21 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  uVar23 = *(uint *)(param_1 + 0x5940);
  if (uVar23 < uVar21) {
    uVar21 = uVar23;
  }
  uVar28 = (uint)((char)param_3[0xf] != -1);
  if ((char)param_3[0x11] != -1) {
    uVar28 = uVar28 | 2;
  }
  if ((char)param_3[0xb] != -1) {
    uVar28 = uVar28 | 4;
  }
  if ((char)param_3[0x13] != -1) {
    uVar28 = uVar28 | 8;
  }
  if ((char)param_3[0x15] != -1) {
    uVar28 = uVar28 | 0x10;
  }
  if ((char)param_3[0x17] != -1) {
    uVar28 = uVar28 | 0x20;
  }
  if ((char)param_3[0x19] != -1) {
    uVar28 = uVar28 | 0x40;
  }
  if ((char)param_3[0x1b] != -1) {
    uVar28 = uVar28 | 0x80;
  }
  if ((char)param_3[0x1d] != -1) {
    uVar28 = uVar28 | 0x100;
  }
  if ((char)param_3[0x1f] != -1) {
    uVar28 = uVar28 | 0x200;
  }
  if ((char)param_3[0x21] != -1) {
    uVar28 = uVar28 | 0x400;
  }
  if ((char)param_3[7] != -1) {
    uVar28 = *(uint *)(&DAT_1012bae8 + uVar21 * 4) | uVar28;
  }
  if ((char)param_3[0x23] != -1) {
    uVar28 = uVar28 | 0x10000;
  }
  if ((char)param_3[0x25] != -1) {
    uVar28 = uVar28 | 0x20000;
  }
  uVar21 = 0x8000;
  if (*(int *)(param_1 + 0x5290) == 0 || uVar23 == 0) {
    uVar21 = 0;
  }
  if ((char)param_3[9] != -1) {
    uVar28 = uVar21 | uVar28;
  }
  local_80 = param_3 + 1;
  if ((char)param_3[0xd] != -1) {
    uVar28 = uVar28 | 0x80000;
  }
  uVar21 = 0x40000;
  if (*local_80 == 0) {
    uVar21 = 0;
  }
  uVar11 = uVar28 | uVar21;
  bVar14 = uVar23 == 0xff;
  if (*(int *)(param_1 + 0xda44) < 0xb000) {
    bVar16 = false;
  }
  else if ((2 < param_2 - 4U) || (bVar16 = true, *(float *)(param_1 + 0x570) < 2.0)) {
    bVar16 = false;
  }
  local_98 = (ulonglong)*(uint *)(param_1 + 0x4cd8);
  local_88 = (byte *)((int)param_3 + 0x4d);
  if ((((*(uint *)(param_1 + 0x5214) == (uint)*local_88) &&
       (*(uint *)(param_1 + 0x5224) == (uint)*(byte *)((int)param_3 + 0x55))) &&
      (*(uint *)(param_1 + 0x5234) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
     (((*(uint *)(param_1 + 0x5244) == (uint)*(byte *)((int)param_3 + 0x65) &&
       (*(uint *)(param_1 + 0x5254) == (uint)*(byte *)((int)param_3 + 0x6d))) &&
      ((*(uint *)(param_1 + 0x5264) == (uint)*(byte *)((int)param_3 + 0x75) &&
       ((*(uint *)(param_1 + 0x5274) == (uint)*(byte *)((int)param_3 + 0x7d) &&
        (*(uint *)(param_1 + 0x5284) == (uint)*(byte *)((int)param_3 + 0x85))))))))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (*local_80 == 0) {
    local_e8 = 0;
    if (*(char *)(param_1 + 0x5957) != '\0') {
      local_e8 = 8;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x5948) >> 2 & 1) == 0) || (*(int *)(param_1 + 0x5944) == 0)) {
      uVar22 = 1;
      local_e8 = 2;
    }
    else {
      uVar22 = 3;
      local_e8 = 4;
    }
    if ((((*(int *)(param_1 + 0xda2c) == 0) && (*(char *)(param_1 + 0x80) != '\0')) &&
        (*(char *)(param_1 + 0x5953) == '\0')) &&
       (uVar26 = (*(uint *)(param_1 + 0x638) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(param_1 + 0x638) & 0x55555555) << 1,
       uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2,
       uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4,
       uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10) < 5)) {
      local_e8 = 5;
    }
    if (bVar16) {
      uVar22 = 6;
      local_e8 = 7;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      bVar15 = param_11 == 0;
    }
    else {
      bVar15 = (char)param_3[0xb] == -1 || param_11 == 0;
    }
    if (bVar15) {
      local_e8 = uVar22;
    }
    if (((uVar28 & 0xf800) == 0) && (*(char *)(param_1 + 0x5957) == '\0')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15 || bVar14) {
      local_e8 = local_e8 + 8;
    }
  }
  local_bc = (byte *)((int)param_3 + 0x85);
  *(ulonglong *)(param_1 + 0x6a0) = *(ulonglong *)(param_1 + 0x6a0) & 0xfffffffffbffffff;
  local_84 = param_5;
  local_70 = param_8;
  if (*(char *)(param_1 + 0xd9aa) != '\0') {
    FUN_1005f7a0(param_1);
    local_bc = extraout_w1;
  }
  local_a4 = (byte *)((int)param_3 + 0x55);
  local_104 = 0;
  local_118 = 0;
  if (bVar12) {
    *(uint *)(param_1 + 0x640) =
         (uint)*local_88 |
         ((uint)*local_a4 |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*local_bc | *(byte *)((int)param_3 + 0x7d)) << 3) << 3) << 3) << 3) << 3) << 3;
  }
  piVar24 = (int *)(param_1 + 0xd9b8);
  if (*(int *)(*piVar24 + local_e8 * 4 + 0xd4) == 0) {
    uVar22 = *(uint *)(param_1 + 0x4cdc);
    if (((uVar22 & 1) == 0) || (*(char *)(param_1 + 0x574) != '\0')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    uVar26 = *(uint *)(param_1 + 0x5944);
    if ((*(uint *)(param_1 + 0x5948) & 4) == 0) {
      uVar26 = 0;
    }
    local_78 = (ulonglong)uVar26;
    if (bVar16) {
      local_78 = local_78 | ((ulonglong)uVar22 & 2 | 1) << 8;
      if ((uVar22 >> 2 & 1) != 0) {
        local_78 = local_78 | 0x400;
      }
      if (bVar15) {
        local_78 = local_78 | 0x800;
      }
      local_78 = local_78 | local_98 << 0xc;
    }
    local_98 = local_78;
    if (*(int *)(param_1 + 0xda2c) == 0) {
      uVar17 = FUN_1005f200(param_1);
    }
    else {
      uVar17 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xda2c) + 4) + 0x124);
    }
    uVar22 = 0x200000;
    if (uVar23 != 0xff) {
      uVar22 = 0;
    }
    *(uint *)(param_1 + 0x680) =
         uVar22 | (uint)param_11 << 0x1f | uVar28 & 0xfffff | uVar21 |
         *(uint *)(param_1 + 0x680) & 0x7fd00000;
    FUN_100432d8((undefined8 *)(param_1 + 0x63c),uVar17,local_68);
    puVar1 = (uint *)(param_1 + 0xda24);
    uVar21 = *puVar1;
    if (uVar21 == 0) {
LAB_1003d120:
      local_114 = (undefined4 *)FUN_100febf0(0x124);
      if (local_114 == (undefined4 *)0x0) goto LAB_1003d5d4;
      uVar17 = *(undefined1 *)(param_1 + 0xda18);
      uVar25 = *(undefined4 *)(param_1 + 0xda14);
      uVar28 = 0;
      uVar8 = *(undefined4 *)(param_1 + 0xda10);
      *local_114 = &PTR_FUN_101296e8;
      *(undefined8 *)(local_114 + 1) = 0;
      local_114[4] = &PTR_FUN_10129924;
      local_114[3] = 0;
      uVar33 = *(undefined8 *)(param_1 + 0x63c);
      uVar32 = *(undefined8 *)(param_1 + 0x654);
      uVar31 = *(undefined8 *)(param_1 + 0x64c);
      *(undefined8 *)(local_114 + 8) = *(undefined8 *)(param_1 + 0x644);
      *(undefined8 *)(local_114 + 6) = uVar33;
      *(undefined8 *)(local_114 + 0xc) = uVar32;
      *(undefined8 *)(local_114 + 10) = uVar31;
      uVar33 = *(undefined8 *)(param_1 + 0x65c);
      uVar32 = *(undefined8 *)(param_1 + 0x674);
      uVar31 = *(undefined8 *)(param_1 + 0x66c);
      *(undefined8 *)(local_114 + 0x10) = *(undefined8 *)(param_1 + 0x664);
      *(undefined8 *)(local_114 + 0xe) = uVar33;
      *(undefined8 *)(local_114 + 0x14) = uVar32;
      *(undefined8 *)(local_114 + 0x12) = uVar31;
      *(undefined8 *)(local_114 + 0x16) = *(undefined8 *)(param_1 + 0x67c);
      *local_114 = &PTR_FUN_101296f0;
      local_114[1] = uVar8;
      *(undefined8 *)(local_114 + 0x18) = 0;
      *(undefined8 *)(local_114 + 0x1a) = 0;
      *(undefined1 *)(local_114 + 0x48) = uVar17;
      local_114[2] = uVar25;
      local_114[3] = local_114 + 0x18;
      uVar21 = *puVar1;
      if (uVar21 != 0) {
        uVar22 = 0;
        uVar26 = uVar21;
        do {
          uVar28 = uVar26 + uVar22 >> 1;
          puVar10 = (ulonglong *)(*(int *)(param_1 + 0xda20) + uVar28 * 0x28);
          iVar20 = 0;
          if ((((*puVar10 == local_68[0]) && (iVar20 = 1, puVar10[1] == local_68[1])) &&
              ((iVar20 = 2, puVar10[2] == local_68[2] && (iVar20 = 3, puVar10[3] == local_68[3]))))
             || (uVar13 = uVar28, puVar10[iVar20] <= local_68[iVar20])) {
            iVar20 = 0;
            if (((((*puVar10 == local_68[0]) && (iVar20 = 1, puVar10[1] == local_68[1])) &&
                 (iVar20 = 2, puVar10[2] == local_68[2])) && (iVar20 = 3, puVar10[3] == local_68[3])
                ) || (local_68[iVar20] <= puVar10[iVar20])) break;
            uVar22 = uVar28 + 1;
            uVar28 = uVar22;
            uVar13 = uVar26;
          }
          uVar26 = uVar13;
        } while (uVar26 != uVar22);
      }
      if (uVar28 == uVar21) {
LAB_1003d370:
        uVar22 = *(uint *)(param_1 + 0xda28);
        if (uVar22 == uVar21) {
          iVar20 = 0x10;
          if (uVar22 != 0) {
            iVar20 = uVar22 << 1;
          }
          iVar18 = FUN_100fece0(iVar20 * 0x28);
          if (iVar18 != 0) {
            uVar21 = 0;
            if (*puVar1 != 0) {
              do {
                puVar4 = (undefined8 *)(iVar18 + uVar21 * 0x28);
                puVar6 = (undefined8 *)(*(int *)(param_1 + 0xda20) + uVar21 * 0x28);
                uVar21 = uVar21 + 1;
                uVar33 = *puVar6;
                uVar32 = puVar6[3];
                uVar31 = puVar6[2];
                puVar4[1] = puVar6[1];
                *puVar4 = uVar33;
                puVar4[3] = uVar32;
                puVar4[2] = uVar31;
                puVar4[4] = puVar6[4];
              } while (uVar21 < *(uint *)(param_1 + 0xda24));
            }
            FUN_100fed00(*(int *)(param_1 + 0xda1c));
            *(int *)(param_1 + 0xda1c) = iVar18;
            *(int *)(param_1 + 0xda20) = iVar18;
            *(int *)(param_1 + 0xda28) = iVar20;
          }
        }
        uVar21 = *(uint *)(param_1 + 0xda24);
        if (*(uint *)(param_1 + 0xda28) == uVar21) goto LAB_1003d59c;
        if (uVar28 < uVar21) {
          if (3 < uVar21 - uVar28) {
            piVar19 = (int *)(param_1 + 0xda20);
            do {
              puVar4 = (undefined8 *)(*piVar19 + uVar21 * 0x28);
              puVar4[1] = puVar4[-4];
              *puVar4 = puVar4[-5];
              puVar4[3] = puVar4[-2];
              puVar4[2] = puVar4[-3];
              puVar4[4] = puVar4[-1];
              puVar4 = (undefined8 *)(*piVar19 + (uVar21 - 2) * 0x28);
              iVar20 = *piVar19 + uVar21 * 0x28;
              uVar33 = *puVar4;
              uVar32 = puVar4[3];
              uVar31 = puVar4[2];
              *(undefined8 *)(iVar20 + -0x20) = puVar4[1];
              *(undefined8 *)(iVar20 + -0x28) = uVar33;
              *(undefined8 *)(iVar20 + -0x10) = uVar32;
              *(undefined8 *)(iVar20 + -0x18) = uVar31;
              *(undefined8 *)(iVar20 + -8) = puVar4[4];
              iVar20 = uVar21 - 3;
              puVar4 = (undefined8 *)(*piVar19 + iVar20 * 0x28);
              puVar6 = (undefined8 *)(*piVar19 + (uVar21 - 2) * 0x28);
              uVar33 = *puVar4;
              uVar32 = puVar4[3];
              uVar31 = puVar4[2];
              puVar6[1] = puVar4[1];
              *puVar6 = uVar33;
              puVar6[3] = uVar32;
              puVar6[2] = uVar31;
              puVar6[4] = puVar4[4];
              iVar18 = uVar21 - 4;
              uVar21 = uVar21 - 4;
              puVar4 = (undefined8 *)(*piVar19 + iVar18 * 0x28);
              puVar6 = (undefined8 *)(*piVar19 + iVar20 * 0x28);
              uVar33 = *puVar4;
              uVar32 = puVar4[3];
              uVar31 = puVar4[2];
              puVar6[1] = puVar4[1];
              *puVar6 = uVar33;
              puVar6[3] = uVar32;
              puVar6[2] = uVar31;
              puVar6[4] = puVar4[4];
            } while (uVar28 + 3 < uVar21);
          }
          if (uVar28 < uVar21) {
            do {
              puVar4 = (undefined8 *)(*(int *)(param_1 + 0xda20) + uVar21 * 0x28);
              uVar21 = uVar21 - 1;
              puVar4[1] = puVar4[-4];
              *puVar4 = puVar4[-5];
              puVar4[3] = puVar4[-2];
              puVar4[2] = puVar4[-3];
              puVar4[4] = puVar4[-1];
            } while (uVar28 < uVar21);
          }
        }
        *puVar1 = *(int *)(param_1 + 0xda24) + 1;
        puVar10 = (ulonglong *)(*(int *)(param_1 + 0xda20) + uVar28 * 0x28);
        puVar10[1] = local_68[1];
        *puVar10 = local_68[0];
        puVar10[3] = local_68[3];
        puVar10[2] = local_68[2];
        iVar20 = *(int *)(param_1 + 0xda20) + uVar28 * 0x28;
      }
      else {
        uVar22 = 0;
        do {
          if (*(ulonglong *)(*(int *)(param_1 + 0xda20) + uVar28 * 0x28 + uVar22 * 8) !=
              local_68[uVar22]) goto LAB_1003d370;
          uVar22 = uVar22 + 1;
        } while (uVar22 < 4);
        iVar20 = *(int *)(param_1 + 0xda20) + uVar28 * 0x28;
      }
      *(undefined4 **)(iVar20 + 0x20) = local_114;
    }
    else {
      uVar28 = 0;
      uVar22 = uVar21;
      do {
        uVar26 = uVar22 + uVar28 >> 1;
        puVar10 = (ulonglong *)(*(int *)(param_1 + 0xda20) + uVar26 * 0x28);
        iVar20 = 0;
        if (((((*puVar10 == local_68[0]) && (iVar20 = 1, puVar10[1] == local_68[1])) &&
             (iVar20 = 2, puVar10[2] == local_68[2])) && (iVar20 = 3, puVar10[3] == local_68[3])) ||
           (uVar13 = uVar26, puVar10[iVar20] <= local_68[iVar20])) {
          iVar20 = 0;
          if ((((*puVar10 == local_68[0]) && (iVar20 = 1, puVar10[1] == local_68[1])) &&
              ((iVar20 = 2, puVar10[2] == local_68[2] && (iVar20 = 3, puVar10[3] == local_68[3]))))
             || (local_68[iVar20] <= puVar10[iVar20])) break;
          uVar28 = uVar26 + 1;
          uVar26 = uVar28;
          uVar13 = uVar22;
        }
        uVar22 = uVar13;
      } while (uVar22 != uVar28);
      if (uVar26 == uVar21) goto LAB_1003d120;
      uVar21 = 0;
      do {
        if (*(ulonglong *)(*(int *)(param_1 + 0xda20) + uVar26 * 0x28 + uVar21 * 8) !=
            local_68[uVar21]) goto LAB_1003d120;
        uVar21 = uVar21 + 1;
      } while (uVar21 < 4);
      local_114 = (undefined4 *)(*(int *)(param_1 + 0xda20) + uVar26 * 0x28 + 0x20);
      if (local_114 == (undefined4 *)0x0) goto LAB_1003d120;
      local_114 = (undefined4 *)*local_114;
    }
LAB_1003d59c:
    piVar19 = (int *)FUN_10043010(local_114,local_98);
    if (piVar19 != (int *)0x0) {
      local_104 = *piVar19;
      local_118 = piVar19[1];
    }
  }
  else {
    local_78 = 0;
  }
LAB_1003d5d4:
  if (((*(uint *)(param_1 + 0x5948) >> 2 & 1) != 0) && ((local_e8 & 0xfffffff7) == 0)) {
    FUN_1005f470(param_1);
  }
  if (local_104 == 0) {
    local_104 = *(int *)(*piVar24 + local_e8 * 4 + 0xd4);
    uVar21 = local_e8;
  }
  else {
    uVar21 = 0x10;
  }
  uVar22 = 0;
  bVar16 = (local_e8 - 5 & 0xfffffff7) == 0;
  cVar30 = *(char *)(param_1 + 0x595e);
  *(bool *)(param_1 + 0x595e) = bVar16;
  *(byte *)(param_1 + 0xd978) = bVar16 != (bool)cVar30 | *(byte *)(param_1 + 0xd978);
  local_98 = CONCAT44(uVar21,param_3);
  puVar1 = (uint *)(param_1 + 0xd9fc);
  uVar28 = *puVar1;
  uVar29 = 0x8000000000000000;
  if (uVar23 != 0xff) {
    uVar29 = 0;
  }
  uVar29 = uVar29 | (ulonglong)uVar21 << 0x20 | (ulonglong)*param_3;
  if (uVar28 != 0) {
    uVar21 = 0;
    uVar23 = uVar28;
    do {
      uVar22 = uVar23 + uVar21 >> 1;
      uVar27 = *(ulonglong *)(*(int *)(param_1 + 0xd9f4) + uVar22 * 0x18);
      uVar26 = uVar22;
      if (uVar27 <= uVar29) {
        if (uVar29 <= uVar27) break;
        uVar21 = uVar22 + 1;
        uVar22 = uVar21;
        uVar26 = uVar23;
      }
      uVar23 = uVar26;
    } while (uVar23 != uVar21);
  }
  local_90 = bVar14;
  if ((uVar22 == uVar28) || (*(ulonglong *)(uVar22 * 0x18 + *(int *)(param_1 + 0xd9f4)) != uVar29))
  {
    puVar2 = (uint *)(param_1 + 0xd9f8);
    if (uVar28 == *puVar2) {
      uVar21 = *puVar2 << 1;
      uVar25 = (undefined4)((ulonglong)uVar21 * 0x18);
      if ((ulonglong)uVar21 * 0x18 >> 0x20 != 0) {
        uVar25 = 0xffffffff;
      }
      iVar20 = FUN_100fece0(uVar25);
      if (iVar20 != 0) {
        iVar18 = iVar20;
        if (3 < uVar21) {
          puVar3 = (undefined8 *)(iVar20 + 8);
          puVar4 = (undefined8 *)(iVar20 + 0x20);
          puVar5 = (undefined8 *)(iVar20 + 0x38);
          puVar6 = (undefined8 *)(iVar20 + 0x50);
          do {
            *puVar3 = 0;
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar4 = 0;
            uVar21 = uVar21 - 4;
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar5 = 0;
            iVar18 = iVar18 + 0x60;
            *(undefined1 *)(puVar5 + 1) = 0;
            *puVar6 = 0;
            puVar3 = puVar3 + 0xc;
            *(undefined1 *)(puVar6 + 1) = 0;
            puVar4 = puVar4 + 0xc;
            puVar5 = puVar5 + 0xc;
            puVar6 = puVar6 + 0xc;
          } while (3 < uVar21);
        }
        if (uVar21 != 0) {
          puVar4 = (undefined8 *)(iVar18 + 8);
          do {
            *puVar4 = 0;
            *(undefined1 *)(puVar4 + 1) = 0;
            uVar21 = uVar21 - 1;
            puVar4 = puVar4 + 3;
          } while (uVar21 != 0);
        }
        uVar21 = 0;
        if (*puVar2 != 0) {
          do {
            puVar4 = (undefined8 *)(iVar20 + uVar21 * 0x18);
            puVar6 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + uVar21 * 0x18);
            uVar21 = uVar21 + 1;
            uVar31 = *puVar6;
            puVar4[1] = puVar6[1];
            *puVar4 = uVar31;
            puVar4[2] = puVar6[2];
          } while (uVar21 < *puVar2);
        }
        FUN_100fed00(*(undefined4 *)(param_1 + 0xd9f4));
        *(int *)(param_1 + 0xd9f4) = iVar20;
        *puVar2 = *puVar2 << 1;
      }
    }
    uVar21 = *puVar1;
    if (uVar22 < uVar21) {
      if (3 < uVar21 - uVar22) {
        do {
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + uVar21 * 0x18);
          puVar4[1] = puVar4[-2];
          *puVar4 = puVar4[-3];
          puVar4[2] = puVar4[-1];
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + (uVar21 - 2) * 0x18);
          iVar20 = *(int *)(param_1 + 0xd9f4) + uVar21 * 0x18;
          uVar31 = *puVar4;
          *(undefined8 *)(iVar20 + -0x10) = puVar4[1];
          *(undefined8 *)(iVar20 + -0x18) = uVar31;
          *(undefined8 *)(iVar20 + -8) = puVar4[2];
          iVar20 = uVar21 - 3;
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + iVar20 * 0x18);
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + (uVar21 - 2) * 0x18);
          uVar31 = *puVar4;
          puVar6[1] = puVar4[1];
          *puVar6 = uVar31;
          puVar6[2] = puVar4[2];
          iVar18 = uVar21 - 4;
          uVar21 = uVar21 - 4;
          puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + iVar18 * 0x18);
          puVar6 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + iVar20 * 0x18);
          uVar31 = *puVar4;
          puVar6[1] = puVar4[1];
          *puVar6 = uVar31;
          puVar6[2] = puVar4[2];
        } while (uVar22 + 3 < uVar21);
      }
      for (; uVar22 < uVar21; uVar21 = uVar21 - 1) {
        puVar4 = (undefined8 *)(*(int *)(param_1 + 0xd9f4) + uVar21 * 0x18);
        puVar4[1] = puVar4[-2];
        *puVar4 = puVar4[-3];
        puVar4[2] = puVar4[-1];
      }
    }
    FUN_1003f2c8(param_1 + 0xd9f4,uVar22,uVar29,&local_98);
    *puVar1 = *puVar1 + 1;
  }
  iVar20 = *(int *)(*(int *)(param_1 + 0xd9f4) + uVar22 * 0x18 + 0x14);
  if ((param_2 == 1) &&
     (((*(char *)(param_1 + 0x5959) != '\0' && (*local_80 != 0)) ||
      (*(char *)(param_1 + 0x595a) != '\0')))) {
    local_118 = *(int *)(*piVar24 + (uint)bVar16 * 4 + 0x118);
    cVar30 = '\x01';
  }
  else {
    cVar30 = '\0';
    if (local_118 != 0) goto switchD_1003d9f8_caseD_8;
    local_118 = 0;
    cVar30 = '\0';
  }
  switch(local_e8) {
  case 6:
    piVar24 = (int *)(*piVar24 + 0x120);
    break;
  case 7:
    piVar24 = (int *)(*piVar24 + 0x124);
    break;
  default:
    goto switchD_1003d9f8_caseD_8;
  case 0xe:
    piVar24 = (int *)(*piVar24 + 0x128);
    break;
  case 0xf:
    piVar24 = (int *)(*piVar24 + 300);
  }
  local_118 = *piVar24;
switchD_1003d9f8_caseD_8:
  uVar21 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar23 = (0x1000 - *(int *)(param_1 + 0x68)) - *(int *)(param_1 + 0x6c);
  puVar7 = &DAT_10135ec8;
  if (*(char *)(param_1 + 0x5954) == '\0') {
    puVar7 = &DAT_10135ee8;
  }
  if ((((*(char *)(param_1 + 0x5955) != '\0') || (*(uint *)(param_1 + 0x4cb0) != uVar11 || bVar12))
      || ((*(int *)(param_1 + 0x6ec) != param_6 ||
          ((*(int *)(param_1 + 0x6a8) != param_7 || (*(int *)(param_1 + 0xdbcc) != local_84)))))) ||
     ((*(int *)(param_1 + 0xdb8c) != param_4 ||
      ((((((*(int *)(param_1 + 0xdb80) != local_104 || (*(int *)(param_1 + 0xdb88) != local_118)) ||
          (*(char *)(param_1 + 0x595b) != cVar30)) ||
         ((*(uint *)(param_1 + 0x5930) != *local_80 ||
          (*(int *)(param_1 + 0xdbe0) != *(int *)(puVar7 + param_2 * 4))))) ||
        (((*(int *)(param_1 + 0x6c) != 0) != (param_9 != 0) || uVar21 < local_70) ||
         uVar23 < param_9)) || (*(int *)(param_1 + 0xdb7c) != iVar20)))))) {
    iVar18 = param_7;
    if (param_4 != *(int *)(param_1 + 0xd9d4)) {
      iVar18 = 0;
    }
    FUN_1003c678(param_1,uVar21 < local_70,uVar23 < param_9,iVar18);
    local_b0 = param_6;
    if (param_4 == *(int *)(param_1 + 0xd9d4)) {
      local_b0 = *(int *)(param_1 + 0x5c);
    }
    if (*(char *)(param_1 + 0x5955) != '\0') {
      *(undefined1 *)(param_1 + 0xd979) = 1;
      *(byte *)(param_1 + 0xd974) = *(byte *)(param_1 + 0xd974) | 1;
    }
    if (bVar12) {
      *(uint *)(param_1 + 0x5214) = (uint)*local_88;
      *(uint *)(param_1 + 0x5224) = (uint)*local_a4;
      *(uint *)(param_1 + 0x5234) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)(param_1 + 0x5244) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)(param_1 + 0x5254) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)(param_1 + 0x5264) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)(param_1 + 0x5274) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)(param_1 + 0x5284) = (uint)*local_bc;
      *(undefined1 *)(param_1 + 0xd981) = 1;
    }
    if (*(uint *)(param_1 + 0x4cb0) != uVar11) {
      *(uint *)(param_1 + 0x4cb0) = uVar11;
      *(undefined1 *)(param_1 + 0xd981) = 1;
    }
    if (*(int *)(param_1 + 0x6a8) != param_7) {
      *(int *)(param_1 + 0x6a8) = param_7;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdb8c) != param_4) {
      *(int *)(param_1 + 0xdb8c) = param_4;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0x6ec) != local_b0) {
      *(int *)(param_1 + 0x6ec) = local_b0;
      *(undefined1 *)(param_1 + 0xd97f) = 1;
    }
    if (*(int *)(param_1 + 0xdbcc) != local_84) {
      *(int *)(param_1 + 0xdbcc) = local_84;
      *(undefined1 *)(param_1 + 0xd980) = 1;
    }
    if (*(int *)(param_1 + 0xdb7c) != iVar20) {
      *(int *)(param_1 + 0xdb7c) = iVar20;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    iVar20 = *(int *)(param_1 + 0xdb88);
    if (iVar20 != local_118) {
      *(int *)(param_1 + 0xdb88) = local_118;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
      iVar20 = local_118;
    }
    if (*(int *)(param_1 + 0xdb80) != local_104) {
      *(int *)(param_1 + 0xdb80) = local_104;
      if (((iVar20 == 0) || (iVar20 == *(int *)(*(int *)(param_1 + 0xd9b8) + 0x118))) ||
         (bVar14 = true, iVar20 == *(int *)(*(int *)(param_1 + 0xd9b8) + 0x11c))) {
        bVar14 = false;
      }
      iVar20 = *(int *)(param_1 + 0xd9b8);
      if ((((local_104 == *(int *)(iVar20 + 0xe4)) || (local_104 == *(int *)(iVar20 + 0xe0))) ||
          (local_104 == *(int *)(iVar20 + 0x104))) ||
         (local_104 == *(int *)(iVar20 + 0x100) || bVar14)) {
        local_78 = local_78 | 0x3f;
      }
      *(uint *)(param_1 + 0xdbe4) = (uint)local_78 & 0x3f;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    if ((*(uint *)(param_1 + 0x5930) != param_3[1]) || (*(char *)(param_1 + 0x5955) != '\0')) {
      *(uint *)(param_1 + 0x5930) = param_3[1];
      *(undefined1 *)(param_1 + 0xd97e) = 1;
    }
    if (*(int *)(param_1 + 0xdbe0) != *(int *)(puVar7 + param_2 * 4)) {
      *(int *)(param_1 + 0xdbe0) = *(int *)(puVar7 + param_2 * 4);
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
    if (*(char *)(param_1 + 0x595b) != cVar30) {
      *(char *)(param_1 + 0x595b) = cVar30;
      *(undefined1 *)(param_1 + 0xd97d) = 1;
    }
    bVar9 = *(byte *)(param_1 + 0x5955);
    *(byte *)(param_1 + 0xd97c) = bVar9 | *(byte *)(param_1 + 0xd97c);
    *(byte *)(param_1 + 0xd97b) = bVar9 | *(byte *)(param_1 + 0xd97b);
    *(byte *)(param_1 + 0xd97d) = bVar9 | *(byte *)(param_1 + 0xd97d);
    *(byte *)(param_1 + 0xd978) = *(byte *)(param_1 + 0xd978) | bVar9;
    if (bVar9 != 0) {
      *(undefined1 *)(param_1 + 0x5955) = 0;
      FUN_1005f298(param_1);
    }
  }
  return;
}

