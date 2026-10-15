/*
 * FUN_10038e98 at 10038e98
 * undefined FUN_10038e98(void)
 * Address ranges: 10038e98-1003c29b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10038e98(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  code *pcVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong extraout_x1;
  ulonglong *puVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  uint uVar32;
  undefined1 *puVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  int extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  code *extraout_w11_26;
  code *extraout_w11_27;
  code *extraout_w11_28;
  code *extraout_w11_29;
  code *extraout_w11_30;
  ulonglong uVar37;
  int extraout_w13;
  uint *puVar38;
  uint *puVar39;
  int iVar40;
  longlong lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  uint *local_1c0;
  int local_1bc;
  undefined1 local_1b8;
  uint local_1b4;
  int local_1b0;
  uint *local_1ac;
  uint *local_1a8;
  undefined4 *local_1a4;
  int *local_1a0;
  ulonglong local_198;
  uint local_190;
  uint *local_18c;
  int *local_188;
  int *local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  ulonglong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  ulonglong local_120 [8];
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  undefined8 local_d0;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0 [4];
  undefined8 *local_b0 [4];
  undefined8 *local_a0 [4];
  undefined4 local_90 [4];
  undefined1 auStack_80 [64];
  
  pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_1b0 = param_1 + 0x5000;
  local_1a0 = (int *)(param_1 + 0x4000);
  local_1b8 = 1;
  uVar32 = (*(uint *)(param_1 + 0x638) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0x638) & 0x55555555) << 1;
  uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
  uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
  uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
  local_190 = (uint)LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
  puVar38 = (uint *)(param_1 + 0x5955);
  if (*(char *)puVar38 == '\0') {
    local_1b4 = *(uint *)(param_1 + 0xd970);
    uVar32 = (local_1b4 & 0xaaaaaaaa) >> 1 | (local_1b4 & 0x55555555) << 1;
    uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
    uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
    uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
    lVar41 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
    uVar32 = (uint)lVar41;
    if ((1 - (uVar32 >> 5) & 0xff) != 0) {
      pbVar9 = (byte *)((int)&local_1b4 + ((int)uVar32 >> 3));
      local_1a4 = (undefined4 *)(param_1 + 0xdb08);
      *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      local_198 = CONCAT44(local_198._4_4_,param_1 + 0xd9b8);
      local_1a8 = puVar38;
      do {
        iVar21 = *(int *)local_198;
        uVar20 = *(undefined4 *)(iVar21 + 0x13c);
        uVar24 = *(undefined4 *)(iVar21 + 0x140);
        uVar25 = *(undefined4 *)(iVar21 + 0x144);
        uVar32 = (uint)lVar41;
        iVar21 = local_1a4[uVar32];
        if (iVar21 == 0) {
          iVar21 = param_1 + uVar32 * 4;
          if (*(int *)(iVar21 + 0xdb28) != 0) {
            uVar25 = *(undefined4 *)(*(int *)(iVar21 + 0xdb28) + 0x38);
          }
        }
        else {
          if ((iVar21 == *(int *)(param_1 + 0xdacc)) || (iVar21 == *(int *)(param_1 + 0xdadc))) {
            uVar19 = (*pcVar11)();
            cVar18 = (*extraout_w11)(uVar19);
            if (cVar18 != '\0') goto LAB_10039010;
          }
          else {
LAB_10039010:
            iVar21 = *(int *)(*(int *)(param_1 + uVar32 * 4 + 0xdb08) + 0x34);
            if (iVar21 != 2 && iVar21 != 5) {
              uVar20 = (*pcVar11)();
              uVar20 = (*extraout_w11_00)(uVar20,0);
              iVar21 = param_1 + uVar32 * 4;
              goto LAB_100390a4;
            }
            uVar24 = (*pcVar11)();
            uVar24 = (*extraout_w11_01)(uVar24,0);
          }
          iVar21 = param_1 + uVar32 * 4;
        }
LAB_100390a4:
        if (uVar32 < 8) {
          *(undefined4 *)(iVar21 + 0xda48) = 0;
        }
        *(undefined4 *)(param_1 + 0xda68 + uVar32 * 4) = uVar20;
        *(undefined4 *)(param_1 + 0xda88 + uVar32 * 4) = uVar24;
        *(undefined4 *)(param_1 + 0xdaa8 + uVar32 * 4) = uVar25;
        uVar32 = (local_1b4 & 0xaaaaaaaa) >> 1 | (local_1b4 & 0x55555555) << 1;
        uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
        uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
        uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
        lVar41 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
        uVar32 = (uint)lVar41;
        puVar38 = local_1a8;
        if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
        pbVar9 = (byte *)((int)&local_1b4 + ((int)uVar32 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xd970) = 0;
  }
  iVar21 = *(int *)(param_1 + 0xd9b0);
  (*(code *)PTR_FUN_10134070)(iVar21 + 0x4a0);
  piVar1 = (int *)(iVar21 + 0x49c);
  local_1bc = *piVar1;
  *piVar1 = param_1;
  if (*(char *)(param_1 + 0xd978) != '\0' || local_1bc != param_1) {
    local_18c = puVar38;
    if (((char)*puVar38 == '\0') && (iVar21 = *(int *)(param_1 + 0xda2c), iVar21 != 0)) {
      if ((local_1a0[0x651] == 0) || (*(int *)(param_1 + 0xdbe4) != 0)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      uVar32 = *(uint *)(*(int *)(iVar21 + 4) + 0xcc);
      uVar30 = *(ulonglong *)(param_1 + 0x6a0);
      if ((local_1a0[0x620] & uVar32) == 0) {
        uVar30 = *(ulonglong *)(param_1 + 0x6a0) & 0xffffffefffffffff;
      }
      if ((local_1a0[0x621] & uVar32) == 0) {
        uVar30 = uVar30 & 0xffffffdfffffffff;
      }
      uVar37 = uVar30 & 0x38000000;
      if (*(char *)(local_1b0 + 0x951) == '\0') {
        uVar37 = 0x38000000;
      }
      uVar10 = uVar30 & 0xffffffffc7ffffff;
      if (!bVar17) {
        uVar10 = uVar30 & 0xffffffff47ffffff;
      }
      if (*(char *)(local_1b0 + 0x961) == '\0') {
        uVar10 = uVar10 & 0xfffffff7ffffffff;
      }
      if ((uVar10 & 0x100000000) == 0) {
        uVar10 = uVar10 & 0xfffffff9ffffffff;
      }
      iVar21 = FUN_10042108(iVar21 + 8,uVar37 | uVar10 & 0xfffffffffbffffff,
                            *(undefined8 *)(param_1 + 0x568));
      local_1b8 = iVar21 != 0;
    }
    else {
      if ((char)*puVar38 == '\0') {
        if ((local_1a0[0x651] == 0) || (*(int *)(param_1 + 0xdbe4) != 0)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        uVar32 = (1 << (ulonglong)(local_190 & 0x1f)) - 1;
        uVar30 = *(ulonglong *)(param_1 + 0x6a0);
        if ((local_1a0[0x620] & uVar32) == 0) {
          uVar30 = *(ulonglong *)(param_1 + 0x6a0) & 0xffffffefffffffff;
        }
        if ((local_1a0[0x621] & uVar32) == 0) {
          uVar30 = uVar30 & 0xffffffdfffffffff;
        }
        local_150 = uVar30 & 0x38000000;
        if (*(char *)(local_1b0 + 0x951) == '\0') {
          local_150 = 0x38000000;
        }
        uVar37 = uVar30 & 0xffffffffc7ffffff;
        if (!bVar17) {
          uVar37 = uVar30 & 0xffffffff47ffffff;
        }
        if (*(char *)(local_1b0 + 0x961) == '\0') {
          uVar37 = uVar37 & 0xfffffff7ffffffff;
        }
        if ((uVar37 & 0x100000000) == 0) {
          uVar37 = uVar37 & 0xfffffff9ffffffff;
        }
        local_150 = local_150 | uVar37;
        local_188 = (int *)(param_1 + 0xd9b8);
        local_184 = (int *)(param_1 + 0xdb80);
        if ((*local_184 == *(int *)(*local_188 + 0xe8)) ||
           (*local_184 == *(int *)(*local_188 + 0x108))) {
          iVar21 = 0;
        }
        else {
          local_1a8 = (uint *)(param_1 + 0x5e0);
          local_1b4 = param_1 + 0xd9dc;
          FUN_10042528(local_1a8,local_190,local_120);
          uVar15 = local_120[5];
          uVar14 = local_120[4];
          uVar13 = local_120[3];
          uVar10 = local_120[2];
          uVar37 = local_120[1];
          uVar30 = local_120[0];
          local_1ac = (uint *)(extraout_w13 + 8);
          local_1c0 = (uint *)(extraout_w13 + 0x10);
          uVar32 = *local_1c0;
          local_170 = local_120[6];
          local_198 = CONCAT44(local_198._4_4_,uVar32);
          if (uVar32 != 0) {
            uVar22 = 0;
            uVar23 = uVar32;
            do {
              uVar36 = uVar23 + uVar22 >> 1;
              puVar29 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + uVar36 * 0x40);
              iVar21 = 0;
              if (((((*puVar29 == local_120[0]) && (iVar21 = 1, puVar29[1] == local_120[1])) &&
                   (iVar21 = 2, puVar29[2] == local_120[2])) &&
                  (((iVar21 = 3, puVar29[3] == local_120[3] &&
                    (iVar21 = 4, puVar29[4] == local_120[4])) &&
                   ((iVar21 = 5, puVar29[5] == local_120[5] &&
                    (iVar21 = 6, puVar29[6] == local_120[6])))))) ||
                 (uVar16 = uVar36, puVar29[iVar21] <= local_120[iVar21])) {
                iVar21 = 0;
                if ((((*puVar29 == local_120[0]) && (iVar21 = 1, puVar29[1] == local_120[1])) &&
                    (((iVar21 = 2, puVar29[2] == local_120[2] &&
                      (((iVar21 = 3, puVar29[3] == local_120[3] &&
                        (iVar21 = 4, puVar29[4] == local_120[4])) &&
                       (iVar21 = 5, puVar29[5] == local_120[5])))) &&
                     (iVar21 = 6, puVar29[6] == local_120[6])))) ||
                   (local_120[iVar21] <= puVar29[iVar21])) break;
                uVar22 = uVar36 + 1;
                uVar36 = uVar22;
                uVar16 = uVar23;
              }
              uVar23 = uVar16;
            } while (uVar23 != uVar22);
            if (((uVar36 != uVar32) &&
                (uVar28 = FUN_10042470(*(int *)(extraout_w13 + 0xc) + uVar36 * 0x40,local_120),
                (uVar28 & 1) != 0)) && ((undefined4 *)(extraout_w10 + 0x38) != (undefined4 *)0x0)) {
              iVar21 = FUN_10042108(*(undefined4 *)(extraout_w10 + 0x38),local_150,0);
              goto LAB_10039b84;
            }
          }
          iVar21 = 0;
          uVar7 = *(undefined1 *)(param_1 + 0x83);
          local_1a4 = (undefined4 *)FUN_100febf0(0x78);
          puVar38 = local_1a8;
          if (local_1a4 != (undefined4 *)0x0) {
            puVar29 = (ulonglong *)(local_1a4 + 2);
            local_1a8 = local_1c0;
            iVar21 = *(int *)(local_1b4 + 4);
            iVar26 = *(int *)(param_1 + 0xd9dc);
            *puVar29 = 0;
            *local_1a4 = &PTR_FUN_101296c8;
            *(undefined8 *)(local_1a4 + 6) = 0;
            local_1a4[8] = iVar26;
            local_1a4[9] = iVar21;
            local_1a4[0xb] = 0;
            *(undefined1 *)(local_1a4 + 0xd) = 0;
            *(undefined8 *)(local_1a4 + 4) = 0;
            local_1a4[0xc] = *(undefined4 *)(iVar26 + iVar21 * 0x28 + 0x38);
            uVar45 = *(undefined8 *)puVar38;
            uVar43 = *(undefined8 *)(puVar38 + 6);
            uVar42 = *(undefined8 *)(puVar38 + 4);
            *(undefined8 *)(local_1a4 + 0x10) = *(undefined8 *)(puVar38 + 2);
            *(undefined8 *)(local_1a4 + 0xe) = uVar45;
            *(undefined8 *)(local_1a4 + 0x14) = uVar43;
            *(undefined8 *)(local_1a4 + 0x12) = uVar42;
            uVar42 = *(undefined8 *)(puVar38 + 8);
            *(undefined8 *)(local_1a4 + 0x18) = *(undefined8 *)(puVar38 + 10);
            *(undefined8 *)(local_1a4 + 0x16) = uVar42;
            *(undefined8 *)(local_1a4 + 0x1a) = *(undefined8 *)(puVar38 + 0xc);
            *(undefined1 *)(local_1a4 + 0x1c) = uVar7;
            *local_1a4 = &PTR_FUN_101296d0;
            uVar22 = FUN_10068bf8(local_1a4 + 0xe,0xffffffffff000000);
            uVar32 = (uVar22 & 0xaa) >> 1 | (uVar22 & 0x55) << 1;
            uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
            lVar41 = LZCOUNT((uVar32 >> 4 | (uVar32 & 0xf0f0f0f) << 4) << 0x18);
            uVar32 = (uint)lVar41;
            uVar28 = extraout_x1;
            if ((1 - (uVar32 >> 5) & 0xff) != 0) {
              local_198 = uVar15;
              pbVar9 = (byte *)((int)&local_1c0 + ((int)uVar32 >> 3));
              *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
              while( true ) {
                uVar28 = 7L << ((ulonglong)(uint)((int)lVar41 * 3) & 0x3f) | uVar28;
                uVar32 = (uVar22 & 0xaa) >> 1 | (uVar22 & 0x55) << 1;
                uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
                lVar41 = LZCOUNT((uVar32 >> 4 | (uVar32 & 0xf0f0f0f) << 4) << 0x18);
                uVar32 = (uint)lVar41;
                if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
                pbVar9 = (byte *)((int)&local_1c0 + ((int)uVar32 >> 3));
                *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
              }
            }
            *puVar29 = uVar28;
            uVar22 = 0;
            uVar32 = *local_1a8;
            local_1c0 = local_1ac;
            local_198 = CONCAT44(local_198._4_4_,uVar32);
            if (uVar32 != 0) {
              uVar23 = 0;
              uVar36 = uVar32;
              do {
                uVar22 = uVar36 + uVar23 >> 1;
                puVar29 = (ulonglong *)(local_1ac[1] + uVar22 * 0x40);
                iVar21 = 0;
                if ((((*puVar29 == uVar30) && (iVar21 = 1, puVar29[1] == uVar37)) &&
                    ((iVar21 = 2, puVar29[2] == uVar10 &&
                     ((((iVar21 = 3, puVar29[3] == uVar13 && (iVar21 = 4, puVar29[4] == uVar14)) &&
                       (iVar21 = 5, puVar29[5] == uVar15)) && (iVar21 = 6, puVar29[6] == local_170))
                     )))) || (uVar16 = uVar22, puVar29[iVar21] <= local_120[iVar21])) {
                  iVar21 = 0;
                  if (((((*puVar29 == uVar30) && (iVar21 = 1, puVar29[1] == uVar37)) &&
                       ((iVar21 = 2, puVar29[2] == uVar10 &&
                        ((iVar21 = 3, puVar29[3] == uVar13 && (iVar21 = 4, puVar29[4] == uVar14)))))
                       ) && ((iVar21 = 5, puVar29[5] == uVar15 &&
                             (iVar21 = 6, puVar29[6] == local_170)))) ||
                     (local_120[iVar21] <= puVar29[iVar21])) break;
                  uVar23 = uVar22 + 1;
                  uVar22 = uVar23;
                  uVar16 = uVar36;
                }
                uVar36 = uVar16;
              } while (uVar36 != uVar23);
            }
            puVar38 = (uint *)(uVar22 * 0x40);
            if ((((uVar22 == uVar32) ||
                 (puVar29 = (ulonglong *)((int)puVar38 + local_1ac[1]), *puVar29 != uVar30)) ||
                (puVar29[1] != uVar37)) ||
               (((puVar29[2] != uVar10 || (puVar29[3] != uVar13)) ||
                ((puVar29[4] != uVar14 || ((puVar29[5] != uVar15 || (puVar29[6] != local_170))))))))
            {
              puVar39 = local_1ac + 1;
              uVar23 = local_1ac[3];
              puVar35 = puVar39;
              if (uVar23 == uVar32) {
                uVar32 = 0x10;
                if (uVar23 != 0) {
                  uVar32 = uVar23 << 1;
                }
                uVar23 = FUN_100fece0(uVar32 << 6);
                puVar12 = local_1c0;
                if (uVar23 != 0) {
                  uVar36 = 0;
                  if (*local_1a8 != 0) {
                    do {
                      puVar4 = (undefined8 *)(*(int *)(local_1b4 + 0xc) + uVar36 * 0x40);
                      puVar3 = (undefined8 *)(uVar23 + uVar36 * 0x40);
                      uVar36 = uVar36 + 1;
                      uVar45 = *puVar4;
                      uVar43 = puVar4[3];
                      uVar42 = puVar4[2];
                      puVar3[1] = puVar4[1];
                      *puVar3 = uVar45;
                      puVar3[3] = uVar43;
                      puVar3[2] = uVar42;
                      uVar45 = puVar4[4];
                      uVar43 = puVar4[7];
                      uVar42 = puVar4[6];
                      puVar3[5] = puVar4[5];
                      puVar3[4] = uVar45;
                      puVar3[7] = uVar43;
                      puVar3[6] = uVar42;
                      local_1ac = puVar38;
                    } while (uVar36 < *(uint *)(local_1b4 + 0x10));
                  }
                  FUN_100fed00(*local_1c0);
                  *puVar12 = uVar23;
                  puVar12[1] = uVar23;
                  puVar12[3] = uVar32;
                  puVar35 = puVar12 + 1;
                }
              }
              uVar32 = local_1c0[2];
              if (local_1c0[3] != uVar32) {
                if (uVar22 < uVar32) {
                  if (3 < uVar32 - uVar22) {
                    piVar1 = (int *)(local_1b4 + 0xc);
                    do {
                      puVar4 = (undefined8 *)(*piVar1 + uVar32 * 0x40);
                      puVar4[1] = puVar4[-7];
                      *puVar4 = puVar4[-8];
                      puVar4[3] = puVar4[-5];
                      puVar4[2] = puVar4[-6];
                      puVar4[5] = puVar4[-3];
                      puVar4[4] = puVar4[-4];
                      puVar4[7] = puVar4[-1];
                      puVar4[6] = puVar4[-2];
                      puVar4 = (undefined8 *)(*piVar1 + (uVar32 - 2) * 0x40);
                      iVar21 = *piVar1 + uVar32 * 0x40;
                      uVar45 = *puVar4;
                      uVar43 = puVar4[3];
                      uVar42 = puVar4[2];
                      *(undefined8 *)(iVar21 + -0x38) = puVar4[1];
                      *(undefined8 *)(iVar21 + -0x40) = uVar45;
                      *(undefined8 *)(iVar21 + -0x28) = uVar43;
                      *(undefined8 *)(iVar21 + -0x30) = uVar42;
                      uVar45 = puVar4[4];
                      uVar43 = puVar4[7];
                      uVar42 = puVar4[6];
                      *(undefined8 *)(iVar21 + -0x18) = puVar4[5];
                      *(undefined8 *)(iVar21 + -0x20) = uVar45;
                      *(undefined8 *)(iVar21 + -8) = uVar43;
                      *(undefined8 *)(iVar21 + -0x10) = uVar42;
                      iVar21 = uVar32 - 3;
                      puVar4 = (undefined8 *)(*piVar1 + iVar21 * 0x40);
                      puVar3 = (undefined8 *)(*piVar1 + (uVar32 - 2) * 0x40);
                      uVar45 = *puVar4;
                      uVar43 = puVar4[3];
                      uVar42 = puVar4[2];
                      puVar3[1] = puVar4[1];
                      *puVar3 = uVar45;
                      puVar3[3] = uVar43;
                      puVar3[2] = uVar42;
                      uVar45 = puVar4[4];
                      uVar43 = puVar4[7];
                      uVar42 = puVar4[6];
                      iVar26 = uVar32 - 4;
                      uVar32 = uVar32 - 4;
                      puVar3[5] = puVar4[5];
                      puVar3[4] = uVar45;
                      puVar3[7] = uVar43;
                      puVar3[6] = uVar42;
                      puVar4 = (undefined8 *)(*piVar1 + iVar26 * 0x40);
                      puVar3 = (undefined8 *)(*piVar1 + iVar21 * 0x40);
                      uVar45 = *puVar4;
                      uVar43 = puVar4[3];
                      uVar42 = puVar4[2];
                      puVar3[1] = puVar4[1];
                      *puVar3 = uVar45;
                      puVar3[3] = uVar43;
                      puVar3[2] = uVar42;
                      uVar45 = puVar4[4];
                      uVar43 = puVar4[7];
                      uVar42 = puVar4[6];
                      puVar3[5] = puVar4[5];
                      puVar3[4] = uVar45;
                      puVar3[7] = uVar43;
                      puVar3[6] = uVar42;
                      local_1ac = puVar38;
                    } while (uVar22 + 3 < uVar32);
                  }
                  puVar35 = puVar39;
                  if (uVar22 < uVar32) {
                    do {
                      puVar4 = (undefined8 *)(*(uint *)(local_1b4 + 0xc) + uVar32 * 0x40);
                      uVar32 = uVar32 - 1;
                      puVar4[1] = puVar4[-7];
                      *puVar4 = puVar4[-8];
                      puVar4[3] = puVar4[-5];
                      puVar4[2] = puVar4[-6];
                      puVar4[5] = puVar4[-3];
                      puVar4[4] = puVar4[-4];
                      puVar4[7] = puVar4[-1];
                      puVar4[6] = puVar4[-2];
                    } while (uVar22 < uVar32);
                    puVar38 = (uint *)(uVar22 << 6);
                    puVar35 = (uint *)(local_1b4 + 0xc);
                  }
                }
                *local_1a8 = local_1c0[2] + 1;
                puVar29 = (ulonglong *)(*puVar35 + (int)puVar38);
                puVar29[1] = local_120[1];
                *puVar29 = local_120[0];
                puVar29[3] = local_120[3];
                puVar29[2] = local_120[2];
                puVar29[5] = local_120[5];
                puVar29[4] = local_120[4];
                puVar29[6] = local_120[6];
                puVar29 = (ulonglong *)(*puVar35 + (int)puVar38);
                goto LAB_10039b60;
              }
            }
            else {
LAB_10039b60:
              *(undefined4 **)(puVar29 + 7) = local_1a4;
            }
            iVar21 = FUN_10042108(local_1a4,local_150,0);
          }
        }
LAB_10039b84:
        if (iVar21 != 0) goto LAB_10039c60;
        piVar1 = local_188;
        if ((char)*local_18c != '\0') goto LAB_10039c30;
        uVar32 = 4;
        if (local_190 < 5) {
          uVar32 = local_190;
        }
        iVar21 = *local_188;
        if ((*local_184 == *(int *)(iVar21 + 0xe8)) ||
           (bVar17 = false, *local_184 == *(int *)(iVar21 + 0x108))) {
          bVar17 = true;
        }
        iVar26 = 10;
        if (!bVar17) {
          iVar26 = 0;
        }
        iVar27 = 5;
        if (*(char *)(local_1b0 + 0x953) == '\0') {
          iVar27 = iVar26;
        }
        piVar1 = (int *)(iVar21 + (iVar27 + *(int *)(&DAT_1012bad0 + uVar32 * 4)) * 4 + 0x8c);
      }
      else {
        piVar1 = (int *)(param_1 + 0xd9b8);
LAB_10039c30:
        iVar21 = 0xcc;
        if (*(int *)(param_1 + 0xdac8) == 0) {
          iVar21 = 200;
        }
        piVar1 = (int *)(iVar21 + *piVar1);
      }
      iVar21 = *piVar1;
    }
LAB_10039c60:
    *(undefined1 *)(param_1 + 0xd978) = 0;
    if (*(int *)(param_1 + 0xdb84) != iVar21) {
      *(int *)(param_1 + 0xdb84) = iVar21;
      *(undefined1 *)(param_1 + 0xdf04) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xd984) & 1) != 0) {
    FUN_1002f7f0(param_1 + 0x5964,(undefined8 *)(param_1 + 0x9964),1);
    *(undefined8 *)(param_1 + 0x4dd0) = *(undefined8 *)(param_1 + 0x9964);
    *(undefined8 *)(param_1 + 0x4dd8) = *(undefined8 *)(param_1 + 0x996c);
    *(undefined8 *)(param_1 + 0x4de0) = *(undefined8 *)(param_1 + 0x9974);
    *(undefined8 *)(param_1 + 0x4de8) = *(undefined8 *)(param_1 + 0x997c);
    *(undefined8 *)(param_1 + 0x4df0) = *(undefined8 *)(param_1 + 0x9984);
    *(undefined8 *)(param_1 + 0x4df8) = *(undefined8 *)(param_1 + 0x998c);
    *(undefined8 *)(param_1 + 0x4e00) = *(undefined8 *)(param_1 + 0x9994);
    *(undefined8 *)(param_1 + 0x4e08) = *(undefined8 *)(param_1 + 0x999c);
    *(uint *)(param_1 + 0xd984) = *(uint *)(param_1 + 0xd984) & 0xfffffffe;
  }
  if (*(char *)(param_1 + 0xd981) != '\0') {
    FUN_10038d38(param_1,*(undefined4 *)(param_1 + 0xd9c4),param_1 + 0x4ca0,0xbc0);
    *(undefined1 *)(param_1 + 0xd981) = 0;
  }
  if (((local_1a0[0x32c] & 0xf800U) != 0) && (*(char *)(param_1 + 0xd982) != '\0')) {
    uVar32 = 0;
    do {
      puVar38 = (uint *)(param_1 + (uVar32 + 0x3661) * 4);
      while (uVar22 = *puVar38, uVar22 = (uVar22 & 0xaaaaaaaa) >> 1 | (uVar22 & 0x55555555) << 1,
            uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2,
            uVar22 = (uVar22 & 0xf0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f) << 4,
            uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8,
            uVar22 = (uint)LZCOUNT(uVar22 >> 0x10 | uVar22 << 0x10), (1 - (uVar22 >> 5) & 0xff) != 0
            ) {
        pbVar9 = (byte *)(((int)uVar22 >> 3) + (int)puVar38);
        iVar21 = uVar22 + uVar32 * 0x20;
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar22 & 7)) ^ 0xff);
        if (0xff < iVar21) break;
        iVar21 = param_1 + iVar21 * 0x40;
        FUN_1002f7f0(iVar21 + 0x5964,iVar21 + 0x9964,1);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 < 8);
    puVar31 = (undefined4 *)(param_1 + 0xd9cc);
    uVar20 = (*pcVar11)();
    (*extraout_w11_02)(uVar20,*puVar31,0,0);
    *(undefined1 *)(param_1 + 0xd982) = 0;
  }
  if (*(char *)(param_1 + 0xd9a8) != '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0xda40);
    uVar24 = (*pcVar11)();
    iVar21 = (*extraout_w11_03)(uVar24,uVar20,0,4,0,local_c0);
    if (-1 < iVar21) {
      FUN_100ff660(local_c0[0],param_1 + 0x4860,0x440);
      uVar24 = (*pcVar11)();
      (*extraout_w11_04)(uVar24,uVar20,0);
    }
    *(undefined1 *)(param_1 + 0xd9a8) = 0;
  }
  if (*(char *)(param_1 + 0xd9a6) != '\0') {
    uVar20 = *(undefined4 *)(&DAT_0000da38 + param_1);
    uVar24 = (*pcVar11)();
    iVar21 = (*extraout_w11_05)(uVar24,uVar20,0,4,0,local_b0);
    if (-1 < iVar21) {
      uVar45 = *(undefined8 *)(param_1 + 0x47d0);
      uVar43 = *(undefined8 *)(param_1 + 0x47e8);
      uVar42 = *(undefined8 *)(param_1 + 0x47e0);
      local_b0[0][1] = *(undefined8 *)(param_1 + 0x47d8);
      *local_b0[0] = uVar45;
      local_b0[0][3] = uVar43;
      local_b0[0][2] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x47f0);
      uVar43 = *(undefined8 *)(param_1 + 0x4808);
      uVar42 = *(undefined8 *)(param_1 + 0x4800);
      local_b0[0][5] = *(undefined8 *)(param_1 + 0x47f8);
      local_b0[0][4] = uVar45;
      local_b0[0][7] = uVar43;
      local_b0[0][6] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x4810);
      uVar43 = *(undefined8 *)(param_1 + 0x4828);
      uVar42 = *(undefined8 *)(param_1 + 0x4820);
      local_b0[0][9] = *(undefined8 *)(param_1 + 0x4818);
      local_b0[0][8] = uVar45;
      local_b0[0][0xb] = uVar43;
      local_b0[0][10] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x4830);
      uVar43 = *(undefined8 *)(param_1 + 0x4848);
      uVar42 = *(undefined8 *)(param_1 + 0x4840);
      local_b0[0][0xd] = *(undefined8 *)(param_1 + 0x4838);
      local_b0[0][0xc] = uVar45;
      local_b0[0][0xf] = uVar43;
      local_b0[0][0xe] = uVar42;
      uVar24 = (*pcVar11)();
      (*extraout_w11_06)(uVar24,uVar20,0);
    }
    *(undefined1 *)(param_1 + 0xd9a6) = 0;
  }
  if (*(char *)(param_1 + 0xd9a4) != '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0xda30);
    uVar24 = (*pcVar11)();
    iVar21 = (*extraout_w11_07)(uVar24,uVar20,0,4,0,local_a0);
    if (iVar21 < 0) {
      *(undefined1 *)(param_1 + 0xd9a4) = 0;
    }
    else {
      uVar45 = *(undefined8 *)(param_1 + 0x4730);
      uVar43 = *(undefined8 *)(param_1 + 0x4748);
      uVar42 = *(undefined8 *)(param_1 + 0x4740);
      local_a0[0][1] = *(undefined8 *)(param_1 + 0x4738);
      *local_a0[0] = uVar45;
      local_a0[0][3] = uVar43;
      local_a0[0][2] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x4750);
      uVar43 = *(undefined8 *)(param_1 + 0x4768);
      uVar42 = *(undefined8 *)(param_1 + 0x4760);
      local_a0[0][5] = *(undefined8 *)(param_1 + 0x4758);
      local_a0[0][4] = uVar45;
      local_a0[0][7] = uVar43;
      local_a0[0][6] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x4770);
      uVar43 = *(undefined8 *)(param_1 + 0x4788);
      uVar42 = *(undefined8 *)(param_1 + 0x4780);
      local_a0[0][9] = *(undefined8 *)(param_1 + 0x4778);
      local_a0[0][8] = uVar45;
      local_a0[0][0xb] = uVar43;
      local_a0[0][10] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x4790);
      uVar43 = *(undefined8 *)(param_1 + 0x47a8);
      uVar42 = *(undefined8 *)(param_1 + 0x47a0);
      local_a0[0][0xd] = *(undefined8 *)(param_1 + 0x4798);
      local_a0[0][0xc] = uVar45;
      local_a0[0][0xf] = uVar43;
      local_a0[0][0xe] = uVar42;
      uVar45 = *(undefined8 *)(param_1 + 0x47b0);
      uVar43 = *(undefined8 *)(param_1 + 0x47c8);
      uVar42 = *(undefined8 *)(param_1 + 0x47c0);
      local_a0[0][0x11] = *(undefined8 *)(param_1 + 0x47b8);
      local_a0[0][0x10] = uVar45;
      local_a0[0][0x13] = uVar43;
      local_a0[0][0x12] = uVar42;
      uVar24 = (*pcVar11)();
      (*extraout_w11_08)(uVar24,uVar20,0);
      *(undefined1 *)(param_1 + 0xd9a4) = 0;
    }
  }
  if (*(char *)(param_1 + 0xd9a5) != '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0x7c);
    uVar24 = *(undefined4 *)(param_1 + 0xda34);
    uVar25 = (*pcVar11)();
    iVar21 = (*extraout_w11_09)(uVar25,uVar24,0,4,0,local_90);
    if (-1 < iVar21) {
      FUN_100ff660(local_90[0],param_1 + 0x730,uVar20);
      uVar20 = (*pcVar11)();
      (*extraout_w11_10)(uVar20,uVar24,0);
    }
    *(undefined1 *)(param_1 + 0xd9a5) = 0;
  }
  if (local_1bc != param_1) {
    local_168 = *(undefined4 *)(param_1 + 0xda30);
    uStack_164 = *(undefined4 *)(param_1 + 0xda34);
    local_138 = *(undefined4 *)(param_1 + 0xda40);
    uStack_134 = *(undefined4 *)(&DAT_0000da38 + param_1);
    local_130 = *(undefined4 *)(param_1 + 0xda3c);
    uVar20 = (*pcVar11)();
    (*extraout_w11_11)(uVar20,3,2,&local_168);
    uVar20 = (*pcVar11)();
    (*extraout_w11_12)(uVar20,3,3,&local_138);
    uVar20 = (*pcVar11)();
    (*extraout_w11_13)(uVar20,3,2,&local_168);
    local_160 = *(undefined4 *)(param_1 + 0xd9c4);
    uStack_15c = *(undefined4 *)(param_1 + 0xd9c8);
    local_158 = *(undefined4 *)(param_1 + 0xd9cc);
    uVar20 = (*pcVar11)();
    (*extraout_w11_14)(uVar20,0,3,&local_160);
    uVar20 = (*pcVar11)();
    (*extraout_w11_15)(uVar20,0,2,&local_160);
    uVar20 = (*pcVar11)();
    (*extraout_w11_16)(uVar20,0,3,&local_160);
  }
  if (*(char *)(param_1 + 0xd97a) != '\0' || local_1bc != param_1) {
    local_148 = 0;
    local_140 = 0;
    iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar18 = *(int *)(iVar21 + 0x7fc) != 0;
    if ((bool)cVar18) {
      *(int *)(iVar21 + 0x7fc) = 0;
    }
    if (*(int *)(iVar21 + 0x800) != 0) {
      *(int *)(iVar21 + 0x800) = 0;
      cVar18 = cVar18 + '\x01';
    }
    if (*(int *)(iVar21 + 0x804) != 0) {
      *(int *)(iVar21 + 0x804) = 0;
      cVar18 = cVar18 + '\x01';
    }
    if (*(int *)(iVar21 + 0x808) != 0) {
      *(int *)(iVar21 + 0x808) = 0;
      cVar18 = cVar18 + '\x01';
    }
    if ((cVar18 != '\0') || (*(int *)(iVar21 + 0x80c) != 0)) {
      uVar20 = (*pcVar11)();
      (*extraout_w11_17)(uVar20,4,&local_148,0);
      *(undefined4 *)(iVar21 + 0x80c) = 0;
    }
  }
  if (*(char *)(param_1 + 0xd979) != '\0' || local_1bc != param_1) {
    iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
    if (*(char *)(param_1 + 0x5955) == '\0') {
      piVar1 = (int *)(iVar21 + 0x664);
      uVar30 = ZEXT48(piVar1);
      if (*piVar1 != *(int *)(param_1 + 0xda48)) {
        *piVar1 = *(int *)(param_1 + 0xda48);
        uVar20 = (*pcVar11)();
        (*extraout_w11_18)(uVar20,0x18,1,uVar30 & 0xffffffff);
      }
      iVar26 = 0;
      iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar17 = *(int *)(iVar21 + 0x604) != *(int *)(param_1 + 0xda68);
      if (bVar17) {
        *(int *)(iVar21 + 0x604) = *(int *)(param_1 + 0xda68);
      }
      uVar30 = (ulonglong)bVar17;
      if (*(int *)(iVar21 + 0x608) != *(int *)(param_1 + 0xda6c)) {
        *(int *)(iVar21 + 0x608) = *(int *)(param_1 + 0xda6c);
        if (bVar17) {
          uVar30 = 2;
        }
        else {
          iVar26 = 1;
          uVar30 = 1;
        }
      }
      if (*(int *)(iVar21 + 0x60c) != *(int *)(param_1 + 0xda70)) {
        *(int *)(iVar21 + 0x60c) = *(int *)(param_1 + 0xda70);
        if ((int)uVar30 == 0) {
          iVar26 = 2;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(3 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x610) != *(int *)(param_1 + 0xda74)) {
        *(int *)(iVar21 + 0x610) = *(int *)(param_1 + 0xda74);
        if ((int)uVar30 == 0) {
          iVar26 = 3;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(4 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x614) != *(int *)(param_1 + 0xda78)) {
        *(int *)(iVar21 + 0x614) = *(int *)(param_1 + 0xda78);
        if ((int)uVar30 == 0) {
          iVar26 = 4;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(5 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x618) != *(int *)(param_1 + 0xda7c)) {
        *(int *)(iVar21 + 0x618) = *(int *)(param_1 + 0xda7c);
        if ((int)uVar30 == 0) {
          iVar26 = 5;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(6 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x61c) != *(int *)(param_1 + 0xda80)) {
        *(int *)(iVar21 + 0x61c) = *(int *)(param_1 + 0xda80);
        if ((int)uVar30 == 0) {
          iVar26 = 6;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(7 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x620) == *(int *)(param_1 + 0xda84)) {
LAB_1003a72c:
        if ((int)uVar30 != 0) goto LAB_1003a730;
      }
      else {
        *(int *)(iVar21 + 0x620) = *(int *)(param_1 + 0xda84);
        if ((int)uVar30 != 0) {
          uVar30 = (ulonglong)(8 - iVar26);
          goto LAB_1003a72c;
        }
        iVar26 = 7;
        uVar30 = 1;
LAB_1003a730:
        auVar46 = (*pcVar11)(*(undefined4 *)(iVar21 + 0x514),iVar26,uVar30,
                             iVar21 + (iVar26 + 0x181) * 4);
        (*extraout_w11_19)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff
                          );
      }
      iVar26 = 8;
      iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar17 = *(int *)(iVar21 + 0x624) != *(int *)(param_1 + 0xda88);
      if (bVar17) {
        *(int *)(iVar21 + 0x624) = *(int *)(param_1 + 0xda88);
      }
      uVar30 = (ulonglong)bVar17;
      if (*(int *)(iVar21 + 0x628) != *(int *)(param_1 + 0xda8c)) {
        *(int *)(iVar21 + 0x628) = *(int *)(param_1 + 0xda8c);
        if (bVar17) {
          uVar30 = 2;
        }
        else {
          iVar26 = 9;
          uVar30 = 1;
        }
      }
      if (*(int *)(iVar21 + 0x62c) != *(int *)(param_1 + 0xda90)) {
        *(int *)(iVar21 + 0x62c) = *(int *)(param_1 + 0xda90);
        if ((int)uVar30 == 0) {
          iVar26 = 10;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xb - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x630) != *(int *)(param_1 + 0xda94)) {
        *(int *)(iVar21 + 0x630) = *(int *)(param_1 + 0xda94);
        if ((int)uVar30 == 0) {
          iVar26 = 0xb;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xc - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x634) != *(int *)(param_1 + 0xda98)) {
        *(int *)(iVar21 + 0x634) = *(int *)(param_1 + 0xda98);
        if ((int)uVar30 == 0) {
          iVar26 = 0xc;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xd - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x638) != *(int *)(param_1 + 0xda9c)) {
        *(int *)(iVar21 + 0x638) = *(int *)(param_1 + 0xda9c);
        if ((int)uVar30 == 0) {
          iVar26 = 0xd;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xe - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x63c) != *(int *)(param_1 + 0xdaa0)) {
        *(int *)(iVar21 + 0x63c) = *(int *)(param_1 + 0xdaa0);
        if ((int)uVar30 == 0) {
          iVar26 = 0xe;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xf - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x640) == *(int *)(param_1 + 0xdaa4)) {
LAB_1003a924:
        if ((int)uVar30 != 0) goto LAB_1003a928;
      }
      else {
        *(int *)(iVar21 + 0x640) = *(int *)(param_1 + 0xdaa4);
        if ((int)uVar30 != 0) {
          uVar30 = (ulonglong)(0x10 - iVar26);
          goto LAB_1003a924;
        }
        iVar26 = 0xf;
        uVar30 = 1;
LAB_1003a928:
        auVar46 = (*pcVar11)(*(undefined4 *)(iVar21 + 0x514),iVar26,uVar30,
                             iVar21 + (iVar26 + 0x181) * 4);
        (*extraout_w11_20)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff
                          );
      }
      iVar26 = 0x10;
      iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar17 = *(int *)(iVar21 + 0x644) != *(int *)(param_1 + 0xdaa8);
      if (bVar17) {
        *(int *)(iVar21 + 0x644) = *(int *)(param_1 + 0xdaa8);
      }
      uVar30 = (ulonglong)bVar17;
      if (*(int *)(iVar21 + 0x648) != *(int *)(param_1 + 0xdaac)) {
        *(int *)(iVar21 + 0x648) = *(int *)(param_1 + 0xdaac);
        if (bVar17) {
          uVar30 = 2;
        }
        else {
          iVar26 = 0x11;
          uVar30 = 1;
        }
      }
      if (*(int *)(iVar21 + 0x64c) != *(int *)(param_1 + 0xdab0)) {
        *(int *)(iVar21 + 0x64c) = *(int *)(param_1 + 0xdab0);
        if ((int)uVar30 == 0) {
          iVar26 = 0x12;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0x13 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x650) != *(int *)(param_1 + 0xdab4)) {
        *(int *)(iVar21 + 0x650) = *(int *)(param_1 + 0xdab4);
        if ((int)uVar30 == 0) {
          iVar26 = 0x13;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0x14 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x654) != *(int *)(param_1 + 0xdab8)) {
        *(int *)(iVar21 + 0x654) = *(int *)(param_1 + 0xdab8);
        if ((int)uVar30 == 0) {
          iVar26 = 0x14;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0x15 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x658) != *(int *)(param_1 + 0xdabc)) {
        *(int *)(iVar21 + 0x658) = *(int *)(param_1 + 0xdabc);
        if ((int)uVar30 == 0) {
          iVar26 = 0x15;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0x16 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x65c) != *(int *)(param_1 + 56000)) {
        *(int *)(iVar21 + 0x65c) = *(int *)(param_1 + 56000);
        if ((int)uVar30 == 0) {
          iVar26 = 0x16;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0x17 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x660) == *(int *)(param_1 + 0xdac4)) {
LAB_1003ab1c:
        if ((int)uVar30 == 0) goto LAB_1003ae54;
      }
      else {
        *(int *)(iVar21 + 0x660) = *(int *)(param_1 + 0xdac4);
        if ((int)uVar30 != 0) {
          uVar30 = (ulonglong)(0x18 - iVar26);
          goto LAB_1003ab1c;
        }
        iVar26 = 0x17;
        uVar30 = 1;
      }
      uVar20 = *(undefined4 *)(iVar21 + 0x514);
      iVar21 = iVar21 + (iVar26 + 0x181) * 4;
LAB_1003ae30:
      auVar46 = (*pcVar11)(uVar20,iVar26,uVar30,iVar21);
      (*extraout_w11_22)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff);
    }
    else {
      iVar26 = 8;
      bVar17 = *(int *)(iVar21 + 0x624) != 0;
      if (bVar17) {
        *(int *)(iVar21 + 0x624) = 0;
      }
      uVar30 = (ulonglong)bVar17;
      if (*(int *)(iVar21 + 0x628) != 0) {
        *(int *)(iVar21 + 0x628) = 0;
        if (bVar17) {
          uVar30 = 2;
        }
        else {
          iVar26 = 9;
          uVar30 = 1;
        }
      }
      if (*(int *)(iVar21 + 0x62c) != 0) {
        *(int *)(iVar21 + 0x62c) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 10;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xb - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x630) != 0) {
        *(int *)(iVar21 + 0x630) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 0xb;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xc - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x634) != 0) {
        *(int *)(iVar21 + 0x634) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 0xc;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xd - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x638) != 0) {
        *(int *)(iVar21 + 0x638) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 0xd;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xe - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x63c) != 0) {
        *(int *)(iVar21 + 0x63c) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 0xe;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(0xf - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x640) == 0) {
LAB_1003ac70:
        if ((int)uVar30 != 0) goto LAB_1003ac74;
      }
      else {
        *(int *)(iVar21 + 0x640) = 0;
        if ((int)uVar30 != 0) {
          uVar30 = (ulonglong)(0x10 - iVar26);
          goto LAB_1003ac70;
        }
        iVar26 = 0xf;
        uVar30 = 1;
LAB_1003ac74:
        auVar46 = (*pcVar11)(*(undefined4 *)(iVar21 + 0x514),iVar26,uVar30,
                             iVar21 + (iVar26 + 0x181) * 4);
        (*extraout_w11_21)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff
                          );
      }
      iVar26 = 0;
      iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar17 = *(int *)(iVar21 + 0x604) != *(int *)(param_1 + 0xdac8);
      if (bVar17) {
        *(int *)(iVar21 + 0x604) = *(int *)(param_1 + 0xdac8);
      }
      uVar30 = (ulonglong)bVar17;
      if (*(int *)(iVar21 + 0x608) != 0) {
        *(int *)(iVar21 + 0x608) = 0;
        if (bVar17) {
          uVar30 = 2;
        }
        else {
          iVar26 = 1;
          uVar30 = 1;
        }
      }
      if (*(int *)(iVar21 + 0x60c) != 0) {
        *(int *)(iVar21 + 0x60c) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 2;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(3 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x610) != 0) {
        *(int *)(iVar21 + 0x610) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 3;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(4 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x614) != 0) {
        *(int *)(iVar21 + 0x614) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 4;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(5 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x618) != 0) {
        *(int *)(iVar21 + 0x618) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 5;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(6 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x61c) != 0) {
        *(int *)(iVar21 + 0x61c) = 0;
        if ((int)uVar30 == 0) {
          iVar26 = 6;
          uVar30 = 1;
        }
        else {
          uVar30 = (ulonglong)(7 - iVar26);
        }
      }
      if (*(int *)(iVar21 + 0x620) != 0) {
        *(int *)(iVar21 + 0x620) = 0;
        if ((int)uVar30 != 0) {
          uVar30 = (ulonglong)(8 - iVar26);
          goto LAB_1003ae14;
        }
        iVar26 = 7;
        uVar30 = 1;
LAB_1003ae18:
        uVar20 = *(undefined4 *)(iVar21 + 0x514);
        iVar21 = iVar21 + (iVar26 + 0x181) * 4;
        goto LAB_1003ae30;
      }
LAB_1003ae14:
      if ((int)uVar30 != 0) goto LAB_1003ae18;
    }
LAB_1003ae54:
    *(undefined1 *)(param_1 + 0xd979) = 0;
  }
  if (*(char *)(param_1 + 0xd97a) != '\0' || local_1bc != param_1) {
    local_17c = *(int *)(param_1 + 0xdb4c);
    local_178 = *(int *)(param_1 + 0xdb50);
    local_174 = *(int *)(param_1 + 0xdb54);
    local_180 = *(int *)(param_1 + 0xdb48);
    iVar21 = *(int *)(param_1 + 0xdb78);
    iVar26 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar18 = *(int *)(iVar26 + 0x7fc) != local_180;
    if ((bool)cVar18) {
      *(int *)(iVar26 + 0x7fc) = local_180;
    }
    if (*(int *)(iVar26 + 0x800) != local_17c) {
      *(int *)(iVar26 + 0x800) = local_17c;
      cVar18 = cVar18 + '\x01';
    }
    if (*(int *)(iVar26 + 0x804) != local_178) {
      *(int *)(iVar26 + 0x804) = local_178;
      cVar18 = cVar18 + '\x01';
    }
    if (*(int *)(iVar26 + 0x808) != local_174) {
      *(int *)(iVar26 + 0x808) = local_174;
      cVar18 = cVar18 + '\x01';
    }
    if ((cVar18 != '\0') || (iVar21 != *(int *)(iVar26 + 0x80c))) {
      uVar20 = (*pcVar11)();
      (*extraout_w11_23)(uVar20,4,&local_180,iVar21);
      *(int *)(iVar26 + 0x80c) = iVar21;
    }
    *(undefined1 *)(param_1 + 0xd97a) = 0;
  }
  if (*(char *)(param_1 + 0xd97b) != '\0' || local_1bc != param_1) {
    puVar4 = (undefined8 *)(param_1 + 0xdda0);
    pbVar9 = (byte *)(param_1 + 0xddb0);
    pbVar2 = (byte *)(param_1 + 0xddb1);
    if (*(char *)(param_1 + 0x5955) == '\0') {
      *(undefined8 *)(param_1 + 0xdda8) = *(undefined8 *)(param_1 + 0x418);
      *puVar4 = *(undefined8 *)(param_1 + 0x410);
      *(undefined8 *)(param_1 + 0xddb8) = *(undefined8 *)(param_1 + 0x428);
      *(undefined8 *)(param_1 + 0xddb0) = *(undefined8 *)(param_1 + 0x420);
      *(undefined8 *)(param_1 + 0xddc8) = *(undefined8 *)(param_1 + 0x438);
      *(undefined8 *)(param_1 + 0xddc0) = *(undefined8 *)(param_1 + 0x430);
      *(undefined4 *)(param_1 + 0xddd0) = *(undefined4 *)(param_1 + 0x440);
      *pbVar9 = *(byte *)(local_1b0 + 0x892) & *pbVar9;
      *pbVar2 = *(byte *)(local_1b0 + 0x892) & *pbVar2;
      puVar33 = &DAT_00005890;
    }
    else {
      *(undefined8 *)(param_1 + 0xdda8) = *(undefined8 *)(param_1 + 0x480);
      *puVar4 = *(undefined8 *)(param_1 + 0x478);
      *(undefined8 *)(param_1 + 0xddb8) = *(undefined8 *)(param_1 + 0x490);
      *(undefined8 *)(param_1 + 0xddb0) = *(undefined8 *)(param_1 + 0x488);
      *(undefined8 *)(param_1 + 0xddc8) = *(undefined8 *)(param_1 + 0x4a0);
      *(undefined8 *)(param_1 + 0xddc0) = *(undefined8 *)(param_1 + 0x498);
      *(undefined4 *)(param_1 + 0xddd0) = *(undefined4 *)(param_1 + 0x4a8);
      *pbVar9 = *(byte *)(local_1b0 + 0x892) & *pbVar9;
      *pbVar2 = *(byte *)(local_1b0 + 0x892) & *pbVar2;
      puVar33 = (undefined1 *)0x5891;
    }
    FUN_100d7d88(*(undefined4 *)(param_1 + 0xd9b0),*(undefined4 *)(param_1 + 0x10),puVar4,
                 puVar33[param_1]);
    *(undefined1 *)(param_1 + 0xd97b) = 0;
  }
  if (*(char *)(param_1 + 0xd97c) != '\0' || local_1bc != param_1) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      iVar21 = 0x4ac;
      if (*(char *)(local_1b0 + 0x950) != '\x01') {
        iVar21 = 0x4cc;
      }
    }
    else {
      iVar21 = 0x4ec;
    }
    puVar31 = (undefined4 *)(iVar21 + param_1);
    *(undefined4 *)(param_1 + 0xdddc) = *puVar31;
    *(undefined4 *)(param_1 + 0xdde0) = puVar31[1];
    *(undefined4 *)(param_1 + 0xdde4) = puVar31[2];
    *(undefined4 *)(param_1 + 0xdde8) = puVar31[3];
    *(undefined4 *)(param_1 + 0xddec) = puVar31[4];
    *(undefined4 *)(param_1 + 0xddf0) = puVar31[5];
    *(undefined4 *)(param_1 + 0xddf4) = puVar31[6];
    *(undefined1 *)(param_1 + 0xddf8) = *(undefined1 *)(puVar31 + 7);
    FUN_100d7a20(*(undefined4 *)(param_1 + 0xd9b0),*(undefined4 *)(param_1 + 0x10),param_1 + 0xddd4)
    ;
    *(undefined1 *)(param_1 + 0xd97c) = 0;
  }
  if (*(char *)(param_1 + 0xd97d) != '\0' || local_1bc != param_1) {
    if (*(char *)(param_1 + 0x5955) == '\0') {
      iVar21 = 0x534;
      if (*(char *)(local_1b0 + 0x95b) == '\0') {
        iVar21 = 0x50c;
      }
      puVar31 = (undefined4 *)(iVar21 + param_1);
    }
    else {
      puVar31 = &DAT_10136038;
    }
    *(undefined4 *)(param_1 + 0xdedc) = *puVar31;
    *(undefined4 *)(param_1 + 0xdee0) = puVar31[1];
    *(undefined4 *)(param_1 + 0xdee4) = puVar31[2];
    *(undefined4 *)(param_1 + 0xdee8) = puVar31[3];
    *(undefined4 *)(param_1 + 0xdeec) = puVar31[4];
    *(undefined4 *)(param_1 + 0xdef0) = puVar31[5];
    *(undefined4 *)(param_1 + 0xdef4) = puVar31[6];
    *(undefined4 *)(param_1 + 0xdef8) = puVar31[7];
    *(undefined4 *)(param_1 + 0xdefc) = puVar31[8];
    *(undefined4 *)(param_1 + 0xdf00) = puVar31[9];
    FUN_100d8060(*(undefined4 *)(param_1 + 0xd9b0),*(undefined4 *)(param_1 + 0x10),param_1 + 0xdedc)
    ;
    *(undefined1 *)(param_1 + 0xd97d) = 0;
  }
  if (*(char *)(param_1 + 0xd97e) != '\0' || local_1bc != param_1) {
    iVar21 = local_1a0[0x64c];
    if ((*(char *)(param_1 + 0x5955) == '\0') && ((iVar21 != 0 || ((local_1a0[0x652] & 1U) != 0))))
    {
      iVar26 = 0x5a8;
    }
    else {
      iVar26 = 0x5c0;
    }
    puVar4 = (undefined8 *)(iVar26 + param_1);
    uVar42 = *puVar4;
    *(undefined8 *)(param_1 + 0xdbf0) = puVar4[1];
    *(undefined8 *)(param_1 + 0xdbe8) = uVar42;
    *(undefined8 *)(param_1 + 0xdbf8) = puVar4[2];
    if (0xafff < *(int *)(param_1 + 0xda44)) {
      *(float *)(param_1 + 0xdbe8) = *(float *)(param_1 + 0x5d8) + *(float *)(param_1 + 0xdbe8);
      *(float *)(param_1 + 0xdbec) = *(float *)(param_1 + 0x5dc) + *(float *)(param_1 + 0xdbec);
    }
    if (iVar21 == 0) {
      *(undefined4 *)(param_1 + 0xdbf8) = 0;
      *(undefined4 *)(param_1 + 0xdbfc) = 0x3f800000;
    }
    FUN_100d83d0(*(undefined4 *)(param_1 + 0xd9b0),*(undefined4 *)(param_1 + 0x10),
                 (undefined8 *)(param_1 + 0xdbe8));
    *(undefined1 *)(param_1 + 0xd97e) = 0;
  }
  if (*(char *)(param_1 + 0xdf04) != '\0' || local_1bc != param_1) {
    FUN_100d88d0(*(undefined4 *)(param_1 + 0xd9b0),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0xdbe0),*(undefined4 *)(param_1 + 0xdb7c),
                 *(undefined4 *)(param_1 + 0xdb80),*(undefined4 *)(param_1 + 0xdb84),
                 *(undefined4 *)(param_1 + 0xdb88));
    *(char *)(param_1 + 0xdf04) = '\0';
  }
  pbVar9 = (byte *)(param_1 + 0xd974);
  puVar31 = *(undefined4 **)(param_1 + 0xd974);
  if ((puVar31 == (undefined4 *)0x0) && (local_1bc == param_1)) goto LAB_1003ba6c;
  if (*(char *)(param_1 + 0x5955) != '\0') {
    if (*(int *)(param_1 + 0xdac8) != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510 + 0x594);
      uVar30 = ZEXT48(piVar1);
      if (*piVar1 != *(int *)(param_1 + 0xd9d8)) {
        *piVar1 = *(int *)(param_1 + 0xd9d8);
        uVar20 = (*pcVar11)();
        (*extraout_w11_26)(uVar20,0,1,uVar30 & 0xffffffff);
      }
      *pbVar9 = *pbVar9 & 0xfe;
    }
    goto LAB_1003ba6c;
  }
  uVar32 = ((uint)puVar31 & 0xaaaaaaaa) >> 1 | ((uint)puVar31 & 0x55555555) << 1;
  uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
  uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
  uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
  lVar41 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
  uVar32 = (uint)lVar41;
  local_1a4 = puVar31;
  if ((1 - (uVar32 >> 5) & 0xff) != 0) {
    pbVar2 = (byte *)((int)&local_1a4 + ((int)uVar32 >> 3));
    local_1b0 = param_1 + 0xdb58;
    local_184 = (int *)(param_1 + 0x3d3);
    local_188 = (int *)(param_1 + 0x3d4);
    local_18c = (uint *)(param_1 + 0xbc);
    local_190 = param_1 + 0x3d0;
    *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
    local_1b4 = param_1 + 0x5860;
    local_1c0 = (uint *)(param_1 + 0xdc00);
    local_1a8 = (uint *)(param_1 + 0x3d2);
    local_198 = CONCAT44(local_198._4_4_,param_1 + 0x3d1);
    local_1ac = (uint *)(param_1 + 0x230);
    local_1a0 = (int *)(param_1 + 0xd9b4);
    do {
      uVar32 = (uint)lVar41;
      if ((uint)local_188[uVar32 * 2] < (uint)*(byte *)(local_184 + uVar32 * 2)) {
        fVar44 = (float)*(byte *)(local_184 + uVar32 * 2);
      }
      else {
        fVar44 = (float)(uint)local_188[uVar32 * 2];
      }
      local_18c[uVar32 * 0xd] = (uint)fVar44;
      uVar22 = (uint)*(byte *)(local_190 + uVar32 * 8);
      bVar17 = uVar22 == 2;
      if (bVar17) {
        uVar22 = 0;
      }
      if (!bVar17) {
        fVar44 = 3.4028235e+38;
      }
      uVar23 = (uint)*(byte *)((int)(int *)local_198 + uVar32 * 8);
      uVar36 = (uint)(byte)local_1a8[uVar32 * 2];
      *(float *)(param_1 + uVar32 * 0x34 + 0xc0) = fVar44;
      if (uVar23 == 2 || uVar36 == 2) {
        *(undefined4 *)(param_1 + 0x90 + uVar32 * 0x34) = 0x55;
        *(undefined4 *)(param_1 + 0x260 + uVar32 * 0x34) =
             *(undefined4 *)(param_1 + 0xc0 + uVar32 * 0x34);
        if (uVar23 != 2 && uVar36 != 2) goto LAB_1003b62c;
        uVar22 = 0xd5;
      }
      else {
        *(undefined4 *)(param_1 + 0x90 + uVar32 * 0x34) =
             *(undefined4 *)(&DAT_1012c460 + (uVar22 | (uVar23 | uVar36 << 1) << 1) * 4);
        *(undefined4 *)(param_1 + 0x260 + uVar32 * 0x34) =
             *(undefined4 *)(param_1 + 0xc0 + uVar32 * 0x34);
LAB_1003b62c:
        uVar22 = *(uint *)(&DAT_1012c440 + (uVar22 | (uVar23 | uVar36 << 1) << 1) * 4);
      }
      local_1ac[uVar32 * 0xd] = uVar22;
      puVar38 = local_1c0 + uVar32 * 0xd;
      iVar21 = 0x230;
      if (1 < (*(int *)(local_1b4 + uVar32 * 4) + 0xfbU & 0xff)) {
        iVar21 = 0x90;
      }
      puVar4 = (undefined8 *)(iVar21 + uVar32 * 0x34 + param_1);
      uVar45 = *puVar4;
      uVar43 = puVar4[3];
      uVar42 = puVar4[2];
      *(undefined8 *)(puVar38 + 2) = puVar4[1];
      *(undefined8 *)puVar38 = uVar45;
      *(undefined8 *)(puVar38 + 6) = uVar43;
      *(undefined8 *)(puVar38 + 4) = uVar42;
      uVar42 = puVar4[4];
      *(undefined8 *)(puVar38 + 10) = puVar4[5];
      *(undefined8 *)(puVar38 + 8) = uVar42;
      puVar38[0xc] = *(uint *)(puVar4 + 6);
      iVar26 = FUN_100d9ea0(*local_1a0 + 0x39c,puVar38);
      iVar21 = *(int *)(local_1b0 + uVar32 * 4);
      if (iVar26 != iVar21) {
        if (iVar21 != 0) {
          iVar27 = *(int *)(param_1 + 0xd9b4);
          (*pcVar11)();
          (*extraout_w11_24)(iVar21,auStack_80);
          iVar27 = FUN_100da158(iVar27 + 0x39c,auStack_80);
          if (iVar27 != 0) {
            uVar22 = 0;
            do {
              if (*(int *)(iVar27 + 0x1c + uVar22 * 0x24) == iVar21) {
                *(undefined1 *)(iVar27 + uVar22 * 0x24 + 0x20) = 0;
                break;
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < 0x14);
          }
        }
        *(int *)(param_1 + uVar32 * 4 + 0xdb58) = iVar26;
      }
      pbVar9[(int)uVar32 >> 3] =
           pbVar9[(int)uVar32 >> 3] & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      uVar32 = ((uint)local_1a4 & 0xaaaaaaaa) >> 1 | ((uint)local_1a4 & 0x55555555) << 1;
      uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
      lVar41 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
      uVar32 = (uint)lVar41;
      if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
      pbVar2 = (byte *)((int)&local_1a4 + ((int)uVar32 >> 3));
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
    } while( true );
  }
  iVar26 = 0;
  iVar21 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
  bVar17 = *(int *)(iVar21 + 0x594) != *(int *)(param_1 + 0xdb58);
  if (bVar17) {
    *(int *)(iVar21 + 0x594) = *(int *)(param_1 + 0xdb58);
  }
  uVar30 = (ulonglong)bVar17;
  if (*(int *)(iVar21 + 0x598) != *(int *)(param_1 + 0xdb5c)) {
    *(int *)(iVar21 + 0x598) = *(int *)(param_1 + 0xdb5c);
    if (bVar17) {
      uVar30 = 2;
    }
    else {
      iVar26 = 1;
      uVar30 = 1;
    }
  }
  if (*(int *)(iVar21 + 0x59c) != *(int *)(param_1 + 0xdb60)) {
    *(int *)(iVar21 + 0x59c) = *(int *)(param_1 + 0xdb60);
    if ((int)uVar30 == 0) {
      iVar26 = 2;
      uVar30 = 1;
    }
    else {
      uVar30 = (ulonglong)(3 - iVar26);
    }
  }
  if (*(int *)(iVar21 + 0x5a0) != *(int *)(param_1 + 0xdb64)) {
    *(int *)(iVar21 + 0x5a0) = *(int *)(param_1 + 0xdb64);
    if ((int)uVar30 == 0) {
      iVar26 = 3;
      uVar30 = 1;
    }
    else {
      uVar30 = (ulonglong)(4 - iVar26);
    }
  }
  if (*(int *)(iVar21 + 0x5a4) != *(int *)(param_1 + 0xdb68)) {
    *(int *)(iVar21 + 0x5a4) = *(int *)(param_1 + 0xdb68);
    if ((int)uVar30 == 0) {
      iVar26 = 4;
      uVar30 = 1;
    }
    else {
      uVar30 = (ulonglong)(5 - iVar26);
    }
  }
  if (*(int *)(iVar21 + 0x5a8) != *(int *)(param_1 + 0xdb6c)) {
    *(int *)(iVar21 + 0x5a8) = *(int *)(param_1 + 0xdb6c);
    if ((int)uVar30 == 0) {
      iVar26 = 5;
      uVar30 = 1;
    }
    else {
      uVar30 = (ulonglong)(6 - iVar26);
    }
  }
  if (*(int *)(iVar21 + 0x5ac) != *(int *)(param_1 + 0xdb70)) {
    *(int *)(iVar21 + 0x5ac) = *(int *)(param_1 + 0xdb70);
    if ((int)uVar30 == 0) {
      iVar26 = 6;
      uVar30 = 1;
    }
    else {
      uVar30 = (ulonglong)(7 - iVar26);
    }
  }
  if (*(int *)(iVar21 + 0x5b0) == *(int *)(param_1 + 0xdb74)) {
LAB_1003b98c:
    if ((int)uVar30 == 0) goto LAB_1003ba6c;
  }
  else {
    *(int *)(iVar21 + 0x5b0) = *(int *)(param_1 + 0xdb74);
    if ((int)uVar30 != 0) {
      uVar30 = (ulonglong)(8 - iVar26);
      goto LAB_1003b98c;
    }
    iVar26 = 7;
    uVar30 = 1;
  }
  auVar46 = (*pcVar11)(*(undefined4 *)(iVar21 + 0x514),iVar26,uVar30,iVar21 + (iVar26 + 0x165) * 4);
  (*extraout_w11_25)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff);
LAB_1003ba6c:
  if (*(char *)(param_1 + 0xd97f) != '\0' || local_1bc != param_1) {
    iVar21 = param_1 + 0x6ec;
    iVar26 = param_1 + 0x6a8;
    uVar22 = 0;
    uVar30 = 0;
    iVar8 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
    uVar32 = 0;
    iVar27 = iVar8 + 0x510;
    iVar8 = iVar8 + 0x704;
    iVar34 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xdb8c + uVar32 * 4);
      if (((*(int *)(iVar8 + uVar32 * 4) != iVar6) ||
          (iVar40 = iVar27 + uVar32 * 4, *(int *)(iVar40 + 0x234) != *(int *)(iVar26 + uVar32 * 4)))
         || (*(int *)(iVar40 + 0x274) != *(int *)(iVar21 + uVar32 * 4))) {
        iVar40 = iVar27 + uVar32 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar26 + uVar32 * 4);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + uVar32 * 4);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar32;
        }
        else {
          uVar30 = (ulonglong)((uVar32 - uVar22) + 1);
        }
      }
      uVar23 = uVar32 + 1;
      iVar6 = *(int *)(iVar34 + param_1 + 0xdb90);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar40 = iVar27 + uVar23 * 4, *(int *)(iVar40 + 0x234) != *(int *)(iVar34 + iVar26 + 4)))
         || (*(int *)(iVar40 + 0x274) != *(int *)(iVar21 + iVar34 + 4))) {
        iVar40 = iVar27 + uVar23 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar34 + iVar26 + 4);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 4);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      iVar40 = iVar34 + iVar26;
      uVar23 = uVar32 + 2;
      iVar6 = *(int *)(iVar34 + param_1 + 0xdb94);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar5 = iVar27 + uVar23 * 4, *(int *)(iVar5 + 0x234) != *(int *)(iVar40 + 8))) ||
         (*(int *)(iVar5 + 0x274) != *(int *)(iVar21 + iVar34 + 8))) {
        iVar5 = iVar27 + uVar23 * 4;
        *(int *)(iVar5 + 500) = iVar6;
        *(undefined4 *)(iVar5 + 0x234) = *(undefined4 *)(iVar40 + 8);
        *(undefined4 *)(iVar5 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 8);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      uVar23 = uVar32 + 3;
      iVar6 = *(int *)(iVar34 + param_1 + 0xdb98);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar5 = iVar27 + uVar23 * 4, *(int *)(iVar5 + 0x234) != *(int *)(iVar40 + 0xc))) ||
         (*(int *)(iVar5 + 0x274) != *(int *)(iVar21 + iVar34 + 0xc))) {
        iVar40 = iVar27 + uVar23 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar34 + iVar26 + 0xc);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 0xc);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      uVar23 = uVar32 + 4;
      iVar6 = *(int *)(param_1 + 0xdb9c + iVar34);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar40 = iVar27 + uVar23 * 4,
          *(int *)(iVar40 + 0x234) != *(int *)(iVar34 + iVar26 + 0x10))) ||
         (*(int *)(iVar40 + 0x274) != *(int *)(iVar21 + iVar34 + 0x10))) {
        iVar40 = iVar27 + uVar23 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar34 + iVar26 + 0x10);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 0x10);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      iVar40 = iVar34 + iVar26;
      uVar23 = uVar32 + 5;
      iVar6 = *(int *)(iVar34 + param_1 + 0xdba0);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar5 = iVar27 + uVar23 * 4, *(int *)(iVar5 + 0x234) != *(int *)(iVar40 + 0x14))) ||
         (*(int *)(iVar5 + 0x274) != *(int *)(iVar21 + iVar34 + 0x14))) {
        iVar5 = iVar27 + uVar23 * 4;
        *(int *)(iVar5 + 500) = iVar6;
        *(undefined4 *)(iVar5 + 0x234) = *(undefined4 *)(iVar40 + 0x14);
        *(undefined4 *)(iVar5 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 0x14);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      uVar23 = uVar32 + 6;
      iVar6 = *(int *)(iVar34 + param_1 + 0xdba4);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar5 = iVar27 + uVar23 * 4, *(int *)(iVar5 + 0x234) != *(int *)(iVar40 + 0x18))) ||
         (*(int *)(iVar5 + 0x274) != *(int *)(iVar21 + iVar34 + 0x18))) {
        iVar40 = iVar27 + uVar23 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar34 + iVar26 + 0x18);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 0x18);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      uVar23 = uVar32 + 7;
      iVar6 = *(int *)(param_1 + 0xdba8 + iVar34);
      if (((*(int *)(iVar8 + uVar23 * 4) != iVar6) ||
          (iVar40 = iVar27 + uVar23 * 4,
          *(int *)(iVar40 + 0x234) != *(int *)(iVar34 + iVar26 + 0x1c))) ||
         (*(int *)(iVar40 + 0x274) != *(int *)(iVar21 + iVar34 + 0x1c))) {
        iVar40 = iVar27 + uVar23 * 4;
        *(int *)(iVar40 + 500) = iVar6;
        *(undefined4 *)(iVar40 + 0x234) = *(undefined4 *)(iVar34 + iVar26 + 0x1c);
        *(undefined4 *)(iVar40 + 0x274) = *(undefined4 *)(iVar21 + iVar34 + 0x1c);
        if ((int)uVar30 == 0) {
          uVar30 = 1;
          uVar22 = uVar23;
        }
        else {
          uVar30 = (ulonglong)((uVar23 - uVar22) + 1);
        }
      }
      uVar32 = uVar32 + 8;
      iVar34 = iVar34 + 0x20;
    } while (uVar32 < 0x10);
    if ((int)uVar30 != 0) {
      auVar46 = (*pcVar11)();
      (*extraout_w11_27)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff);
    }
    *(undefined1 *)(param_1 + 0xd97f) = 0;
  }
  if (*(char *)(param_1 + 0xd980) != '\0' || local_1bc != param_1) {
    iVar21 = *(int *)(param_1 + 0xdbcc);
    if (iVar21 == *(int *)(param_1 + 0xd9d0)) {
      uVar30 = 0x2a;
    }
    else {
      uVar30 = (ulonglong)*(uint *)(param_1 + 0xdbd8);
    }
    iVar26 = *(int *)(param_1 + 0xd9b0) + *(int *)(param_1 + 0x10) * 0x1510;
    if (((iVar21 != *(int *)(iVar26 + 0x7c4)) || ((int)uVar30 != *(int *)(iVar26 + 0x7c8))) ||
       (*(int *)(iVar26 + 0x7cc) != 0)) {
      *(int *)(iVar26 + 0x7c4) = iVar21;
      *(int *)(iVar26 + 0x7c8) = (int)uVar30;
      *(undefined4 *)(iVar26 + 0x7cc) = 0;
      auVar46 = (*pcVar11)();
      (*extraout_w11_28)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_ & 0xffffffff,uVar30 & 0xffffffff,0
                        );
    }
    *(undefined1 *)(param_1 + 0xd980) = 0;
  }
  iVar21 = *(int *)(param_1 + 0xdacc);
  if (iVar21 != 0) {
    local_e0 = 0;
    uVar32 = *(uint *)(param_1 + 0xdae0);
    local_d8 = *(uint *)(iVar21 + 0x14) >> (ulonglong)(uVar32 & 0x1f);
    if (local_d8 == 0) {
      local_d8 = 1;
    }
    local_d4 = *(uint *)(iVar21 + 0x18) >> (ulonglong)(uVar32 & 0x1f);
    if (local_d4 == 0) {
      local_d4 = 1;
    }
    auVar46 = (*pcVar11)(iVar21,uVar32 + *(int *)(param_1 + 0xdaf0) * *(int *)(iVar21 + 0x2c));
    (*extraout_w11_29)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_,&local_e0);
  }
  iVar21 = 0x478;
  if (*(char *)(param_1 + 0x5955) == '\0') {
    iVar21 = 0x410;
  }
  iVar26 = *(int *)(param_1 + 0xdadc);
  if (((iVar26 != 0) && (*(int *)(iVar21 + param_1) != 0)) && (((int *)(iVar21 + param_1))[1] != 0))
  {
    uVar32 = *(uint *)(param_1 + 0xdb00);
    local_d0 = 0;
    local_c8 = *(uint *)(iVar26 + 0x14) >> (ulonglong)(uVar32 & 0x1f);
    if (local_c8 == 0) {
      local_c8 = 1;
    }
    local_c4 = *(uint *)(iVar26 + 0x18) >> (ulonglong)(uVar32 & 0x1f);
    if (local_c4 == 0) {
      local_c4 = 1;
    }
    auVar46 = (*pcVar11)(iVar26,uVar32 + *(int *)(param_1 + 0xdb04) * *(int *)(iVar26 + 0x2c));
    (*extraout_w11_30)(auVar46._0_8_ & 0xffffffff,auVar46._8_8_,&local_d0);
  }
  return local_1b8;
}

