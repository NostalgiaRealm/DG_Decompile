/*
 * FUN_100149a8 at 100149a8
 * undefined FUN_100149a8(void)
 * Address ranges: 100149a8-100176af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100149a8(int param_1)

{
  byte *pbVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int *piVar14;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  ulonglong extraout_x1;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  uint *puVar29;
  int *piVar30;
  int *piVar31;
  uint uVar32;
  int iVar33;
  uint *puVar34;
  int *piVar35;
  uint *puVar36;
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
  ulonglong uVar37;
  int extraout_w13;
  longlong lVar38;
  char cVar39;
  int *piVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  int *local_164;
  int local_160;
  char local_15c;
  int *local_158;
  int *local_154;
  int *local_150;
  char local_14c;
  char local_14b;
  uint *local_148;
  uint local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 *local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  ulonglong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0 [8];
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90 [4];
  undefined1 auStack_80 [64];
  
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_160 = param_1 + 0x1000;
  cVar16 = '\0';
  cVar39 = '\0';
  uVar32 = (*(uint *)(param_1 + 0x444) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0x444) & 0x55555555) << 1;
  uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
  uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
  uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
  local_144 = (uint)LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
  if (*(char *)(param_1 + 0x1905) == '\0') {
    if ((*(char *)(param_1 + 0x1919) == '\0') || (*(char *)(param_1 + 0x1909) == '\0')) {
      cVar16 = '\0';
    }
    else {
      cVar16 = '\x01';
    }
    puVar34 = (uint *)(param_1 + 0x1d30);
    local_158 = (int *)*puVar34;
    uVar32 = ((uint)local_158 & 0xaaaaaaaa) >> 1 | ((uint)local_158 & 0x55555555) << 1;
    uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
    uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
    uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
    lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
    uVar32 = (uint)lVar38;
    cVar39 = '\0';
    if ((1 - (uVar32 >> 5) & 0xff) != 0) {
      local_15c = '\0';
      pbVar8 = (byte *)((int)&local_158 + ((int)uVar32 >> 3));
      *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      local_164 = (int *)(param_1 + 0x1df4);
      local_154 = (int *)(param_1 + 0x1d58);
      local_150 = local_154;
      local_14c = cVar16;
      local_14b = cVar16;
      local_148 = puVar34;
      do {
        iVar33 = *local_150;
        iVar18 = *(int *)(iVar33 + 0x124);
        uVar19 = *(undefined4 *)(iVar33 + 0x128);
        uVar21 = *(undefined4 *)(iVar33 + 300);
        uVar32 = (uint)lVar38;
        iVar33 = *(int *)(param_1 + 0x1e94 + uVar32 * 4);
        if (iVar33 != 0) {
          if ((iVar33 == *(int *)(param_1 + 0x1e58)) || (iVar33 == *(int *)(param_1 + 0x1e68))) {
            uVar17 = (*pcVar9)();
            cVar16 = (*extraout_w11)(uVar17);
            if (cVar16 == '\0') goto LAB_10014bc0;
          }
          iVar33 = *(int *)(*(int *)(param_1 + uVar32 * 4 + 0x1e94) + 0x34);
          if (iVar33 == 2 || iVar33 == 5) {
            uVar19 = (*pcVar9)();
            uVar19 = (*extraout_w11_01)(uVar19,0);
          }
          else {
            uVar17 = (*pcVar9)();
            iVar18 = (*extraout_w11_00)(uVar17,0);
          }
        }
LAB_10014bc0:
        if (uVar32 < 8) {
          if (((uVar32 == 0) && (local_14c != '\0')) && (iVar18 != *(int *)(*local_154 + 0x124))) {
            uVar17 = (*pcVar9)();
            uVar17 = (*extraout_w11_02)(uVar17);
            local_140 = 0;
            local_138 = 0;
            *(undefined4 *)(param_1 + 0x1dd4) = uVar17;
            uVar17 = (*pcVar9)();
            (*extraout_w11_03)(uVar17,&local_140,(int)&local_140 + 4,&local_138,(int)&local_138 + 4)
            ;
            iVar33 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
            bVar15 = *(int *)(iVar33 + 0x66c) != (int)local_140;
            if (bVar15) {
              *(int *)(iVar33 + 0x66c) = (int)local_140;
            }
            uVar26 = (ulonglong)bVar15;
            iVar22 = 0x1a;
            if (*(int *)(iVar33 + 0x670) != local_140._4_4_) {
              *(int *)(iVar33 + 0x670) = local_140._4_4_;
              if (bVar15) {
                uVar26 = 2;
                iVar22 = 0x1a;
              }
              else {
                iVar22 = 0x1b;
                uVar26 = 1;
              }
            }
            if (*(int *)(iVar33 + 0x674) != (int)local_138) {
              *(int *)(iVar33 + 0x674) = (int)local_138;
              if ((int)uVar26 == 0) {
                iVar22 = 0x1c;
                uVar26 = 1;
              }
              else {
                uVar26 = (ulonglong)(0x1d - iVar22);
              }
            }
            if (*(int *)(iVar33 + 0x678) == local_138._4_4_) {
LAB_10014d2c:
              if ((int)uVar26 != 0) goto LAB_10014d30;
            }
            else {
              *(int *)(iVar33 + 0x678) = local_138._4_4_;
              if ((int)uVar26 != 0) {
                uVar26 = (ulonglong)(0x1e - iVar22);
                goto LAB_10014d2c;
              }
              iVar22 = 0x1d;
              uVar26 = 1;
LAB_10014d30:
              auVar45 = (*pcVar9)(*(undefined4 *)(iVar33 + 0x514),iVar22,uVar26,
                                  iVar33 + (iVar22 + 0x181) * 4);
              (*extraout_w11_04)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,
                                 uVar26 & 0xffffffff);
            }
            local_15c = '\x01';
          }
          else {
            *(undefined4 *)(param_1 + uVar32 * 4 + 0x1dd4) = 0;
          }
        }
        local_164[uVar32] = iVar18;
        *(undefined4 *)(param_1 + 0x1e14 + uVar32 * 4) = uVar19;
        *(undefined4 *)(param_1 + 0x1e34 + uVar32 * 4) = uVar21;
        uVar32 = ((uint)local_158 & 0xaaaaaaaa) >> 1 | ((uint)local_158 & 0x55555555) << 1;
        uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
        uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
        uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
        lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
        uVar32 = (uint)lVar38;
        puVar34 = local_148;
        cVar16 = local_14b;
        cVar39 = local_15c;
        if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
        pbVar8 = (byte *)((int)&local_158 + ((int)uVar32 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      } while( true );
    }
    *puVar34 = 0;
  }
  iVar33 = *(int *)(param_1 + 0x1d50);
  (*(code *)PTR_FUN_100a1014)(iVar33 + 0x4a0);
  piVar31 = (int *)(iVar33 + 0x49c);
  iVar33 = *piVar31;
  *piVar31 = param_1;
  if ((cVar16 != '\0') && (cVar39 != '\0' || iVar33 != param_1)) {
    uVar19 = (*pcVar9)();
    (*extraout_w11_05)(uVar19);
  }
  if ((*(char *)(param_1 + 0x1d38) != '\0') || (iVar33 != param_1)) {
    if (*(char *)(param_1 + 0x1905) == '\0') {
      if ((*(int *)(param_1 + 0x18f4) == 0) || (*(int *)(param_1 + 0x1f50) != 0)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      uVar32 = (1 << (ulonglong)(local_144 & 0x1f)) - 1;
      uVar26 = *(ulonglong *)(param_1 + 0x4a8);
      if ((*(uint *)(param_1 + 0x1830) & uVar32) == 0) {
        uVar26 = *(ulonglong *)(param_1 + 0x4a8) & 0xefffffffffffffff;
      }
      if ((*(uint *)(param_1 + 0x1834) & uVar32) == 0) {
        uVar26 = uVar26 & 0xdfffffffffffffff;
      }
      uVar37 = uVar26 & 0x38000000000000;
      if (*(char *)(local_160 + 0x901) == '\0') {
        uVar37 = 0x38000000000000;
      }
      uVar28 = uVar26 & 0xffc7ffffffffffff;
      if (!bVar15) {
        uVar28 = uVar26 & 0xff47ffffffffffff;
      }
      if (*(char *)(local_160 + 0x91e) == '\0') {
        uVar28 = uVar28 & 0xf7ffffffffffffff;
      }
      if ((uVar28 & 0x100000000000000) == 0) {
        uVar28 = uVar28 & 0xf9ffffffffffffff;
      }
      uVar26 = (uVar37 | uVar28) >> 0x19;
      if (cVar16 == '\0') {
        uVar26 = 0;
      }
      local_118 = ((uVar37 | uVar28) ^ uVar26 << 0x19) & 0xfffffffffdffffff ^ uVar26 << 0x19;
      if ((uVar26 & 1) == 0) {
        local_118 = local_118 & 0xfffc010003ffffff;
      }
      if ((*(int *)(param_1 + 0x1eec) == *(int *)(*(int *)(param_1 + 0x1d58) + 0xf8)) ||
         (*(int *)(param_1 + 0x1eec) == *(int *)(*(int *)(param_1 + 0x1d58) + 0x110))) {
        iVar18 = 0;
      }
      else {
        local_164 = (int *)(param_1 + 0x3ec);
        local_158 = (int *)(param_1 + 0x1d7c);
        FUN_1001b7e0(local_164,local_144,local_f0);
        uVar12 = local_f0[5];
        uVar11 = local_f0[4];
        uVar10 = local_f0[3];
        uVar28 = local_f0[2];
        uVar37 = local_f0[1];
        uVar26 = local_f0[0];
        local_150 = (int *)(extraout_w13 + 8);
        local_130 = (undefined4 *)(extraout_w13 + 0x10);
        local_148 = (uint *)*local_130;
        local_140 = local_f0[6];
        if (local_148 != (uint *)0x0) {
          puVar34 = (uint *)0x0;
          puVar29 = local_148;
          do {
            puVar36 = (uint *)((uint)((int)puVar29 + (int)puVar34) >> 1);
            puVar25 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + (int)puVar36 * 0x40);
            iVar18 = 0;
            if (((((((*puVar25 == local_f0[0]) && (iVar18 = 1, puVar25[1] == local_f0[1])) &&
                   (iVar18 = 2, puVar25[2] == local_f0[2])) &&
                  ((iVar18 = 3, puVar25[3] == local_f0[3] && (iVar18 = 4, puVar25[4] == local_f0[4])
                   ))) && (iVar18 = 5, puVar25[5] == local_f0[5])) &&
                (iVar18 = 6, puVar25[6] == local_f0[6])) ||
               (puVar13 = puVar36, puVar25[iVar18] <= local_f0[iVar18])) {
              iVar18 = 0;
              if (((((*puVar25 == local_f0[0]) && (iVar18 = 1, puVar25[1] == local_f0[1])) &&
                   ((iVar18 = 2, puVar25[2] == local_f0[2] &&
                    (((iVar18 = 3, puVar25[3] == local_f0[3] &&
                      (iVar18 = 4, puVar25[4] == local_f0[4])) &&
                     (iVar18 = 5, puVar25[5] == local_f0[5])))))) &&
                  (iVar18 = 6, puVar25[6] == local_f0[6])) || (local_f0[iVar18] <= puVar25[iVar18]))
              break;
              puVar34 = (uint *)((int)puVar36 + 1);
              puVar36 = puVar34;
              puVar13 = puVar29;
            }
            puVar29 = puVar13;
          } while (puVar29 != puVar34);
          if ((((puVar36 != local_148) &&
               (puVar25 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + (int)puVar36 * 0x40),
               *puVar25 == local_f0[0])) &&
              (((puVar25[1] == local_f0[1] &&
                ((puVar25[2] == local_f0[2] && (puVar25[3] == local_f0[3])))) &&
               (puVar25[4] == local_f0[4])))) &&
             (((puVar25[5] == local_f0[5] && (puVar25[6] == local_f0[6])) &&
              (puVar25 + 7 != (ulonglong *)0x0)))) {
            iVar18 = FUN_1001b488((int)puVar25[7],local_118);
            goto LAB_10015800;
          }
        }
        iVar18 = 0;
        local_154 = (int *)FUN_10081cb0(0x78);
        if (local_154 != (int *)0x0) {
          puVar25 = (ulonglong *)(local_154 + 2);
          iVar18 = *local_158;
          iVar22 = local_158[1];
          *puVar25 = 0;
          *local_154 = (int)&PTR_FUN_1009c768;
          local_154[4] = 0;
          local_154[5] = 0;
          local_154[6] = 0;
          local_154[7] = 0;
          local_154[8] = iVar18;
          local_154[9] = iVar22;
          local_154[0xb] = 0;
          *(undefined1 *)(local_154 + 0xd) = 0;
          local_154[0xc] = *(int *)(iVar18 + iVar22 * 0x28 + 0x38);
          uVar44 = *(undefined8 *)local_164;
          uVar42 = *(undefined8 *)(local_164 + 6);
          uVar41 = *(undefined8 *)(local_164 + 4);
          *(undefined8 *)(local_154 + 0x10) = *(undefined8 *)(local_164 + 2);
          *(undefined8 *)(local_154 + 0xe) = uVar44;
          *(undefined8 *)(local_154 + 0x14) = uVar42;
          *(undefined8 *)(local_154 + 0x12) = uVar41;
          uVar41 = *(undefined8 *)(local_164 + 8);
          *(undefined8 *)(local_154 + 0x18) = *(undefined8 *)(local_164 + 10);
          *(undefined8 *)(local_154 + 0x16) = uVar41;
          *(undefined8 *)(local_154 + 0x1a) = *(undefined8 *)(local_164 + 0xc);
          *(undefined1 *)(local_154 + 0x1c) = 0;
          *local_154 = (int)&PTR_FUN_1009c770;
          puVar27 = local_130;
          uVar20 = FUN_1003bfa8(local_154 + 0xe,0xffffffffff000000);
          piVar31 = local_150;
          uVar32 = (uVar20 & 0xaa) >> 1 | (uVar20 & 0x55) << 1;
          uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
          lVar38 = LZCOUNT((uVar32 >> 4 | (uVar32 & 0xf0f0f0f) << 4) << 0x18);
          uVar32 = (uint)lVar38;
          uVar24 = extraout_x1;
          if ((1 - (uVar32 >> 5) & 0xff) != 0) {
            pbVar8 = (byte *)((int)&local_164 + ((int)uVar32 >> 3));
            *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
            while( true ) {
              uVar24 = 7L << ((ulonglong)(uint)((int)lVar38 * 3) & 0x3f) | uVar24;
              uVar32 = (uVar20 & 0xaa) >> 1 | (uVar20 & 0x55) << 1;
              uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
              lVar38 = LZCOUNT((uVar32 >> 4 | (uVar32 & 0xf0f0f0f) << 4) << 0x18);
              uVar32 = (uint)lVar38;
              if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
              pbVar8 = (byte *)((int)&local_164 + ((int)uVar32 >> 3));
              *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
            }
          }
          *puVar25 = uVar24;
          piVar4 = (int *)*puVar27;
          piVar40 = (int *)0x0;
          local_164 = local_150;
          if (piVar4 != (int *)0x0) {
            piVar35 = (int *)0x0;
            piVar30 = piVar4;
            do {
              piVar40 = (int *)((uint)((int)piVar30 + (int)piVar35) >> 1);
              puVar25 = (ulonglong *)(local_150[1] + (int)piVar40 * 0x40);
              iVar18 = 0;
              if (((((*puVar25 == uVar26) && (iVar18 = 1, puVar25[1] == uVar37)) &&
                   ((iVar18 = 2, puVar25[2] == uVar28 &&
                    ((iVar18 = 3, puVar25[3] == uVar10 && (iVar18 = 4, puVar25[4] == uVar11)))))) &&
                  ((iVar18 = 5, puVar25[5] == uVar12 && (iVar18 = 6, puVar25[6] == local_140)))) ||
                 (piVar14 = piVar40, puVar25[iVar18] <= local_f0[iVar18])) {
                iVar18 = 0;
                if ((((((*puVar25 == uVar26) && (iVar18 = 1, puVar25[1] == uVar37)) &&
                      (iVar18 = 2, puVar25[2] == uVar28)) &&
                     ((iVar18 = 3, puVar25[3] == uVar10 && (iVar18 = 4, puVar25[4] == uVar11)))) &&
                    ((iVar18 = 5, puVar25[5] == uVar12 && (iVar18 = 6, puVar25[6] == local_140))))
                   || (local_f0[iVar18] <= puVar25[iVar18])) break;
                piVar35 = (int *)((int)piVar40 + 1);
                piVar40 = piVar35;
                piVar14 = piVar30;
              }
              piVar30 = piVar14;
            } while (piVar30 != piVar35);
          }
          if (piVar40 == piVar4) {
LAB_100155e8:
            piVar35 = (int *)local_150[3];
            local_150 = piVar4;
            if (piVar35 == piVar4) {
              iVar18 = 0x10;
              if (piVar35 != (int *)0x0) {
                iVar18 = (int)piVar35 << 1;
              }
              iVar22 = FUN_10081da0(iVar18 << 6);
              piVar4 = local_164;
              if (iVar22 != 0) {
                uVar32 = 0;
                if (piVar31[2] != 0) {
                  do {
                    puVar3 = (undefined8 *)(local_158[3] + uVar32 * 0x40);
                    puVar7 = (undefined8 *)(iVar22 + uVar32 * 0x40);
                    uVar32 = uVar32 + 1;
                    uVar44 = *puVar3;
                    uVar42 = puVar3[3];
                    uVar41 = puVar3[2];
                    puVar7[1] = puVar3[1];
                    *puVar7 = uVar44;
                    puVar7[3] = uVar42;
                    puVar7[2] = uVar41;
                    uVar44 = puVar3[4];
                    uVar42 = puVar3[7];
                    uVar41 = puVar3[6];
                    puVar7[5] = puVar3[5];
                    puVar7[4] = uVar44;
                    puVar7[7] = uVar42;
                    puVar7[6] = uVar41;
                  } while (uVar32 < (uint)local_158[4]);
                }
                FUN_10081dc0(*local_164);
                *piVar4 = iVar22;
                piVar4[1] = iVar22;
                piVar4[3] = iVar18;
              }
            }
            piVar31 = (int *)local_164[2];
            if ((int *)local_164[3] != piVar31) {
              if (piVar40 < piVar31) {
                if (3 < (uint)((int)piVar31 - (int)piVar40)) {
                  piVar4 = local_158 + 3;
                  do {
                    puVar3 = (undefined8 *)(*piVar4 + (int)piVar31 * 0x40);
                    puVar3[1] = puVar3[-7];
                    *puVar3 = puVar3[-8];
                    puVar3[3] = puVar3[-5];
                    puVar3[2] = puVar3[-6];
                    puVar3[5] = puVar3[-3];
                    puVar3[4] = puVar3[-4];
                    puVar3[7] = puVar3[-1];
                    puVar3[6] = puVar3[-2];
                    puVar3 = (undefined8 *)(*piVar4 + ((int)piVar31 + -2) * 0x40);
                    iVar18 = *piVar4 + (int)piVar31 * 0x40;
                    uVar44 = *puVar3;
                    uVar42 = puVar3[3];
                    uVar41 = puVar3[2];
                    *(undefined8 *)(iVar18 + -0x38) = puVar3[1];
                    *(undefined8 *)(iVar18 + -0x40) = uVar44;
                    *(undefined8 *)(iVar18 + -0x28) = uVar42;
                    *(undefined8 *)(iVar18 + -0x30) = uVar41;
                    uVar44 = puVar3[4];
                    uVar42 = puVar3[7];
                    uVar41 = puVar3[6];
                    *(undefined8 *)(iVar18 + -0x18) = puVar3[5];
                    *(undefined8 *)(iVar18 + -0x20) = uVar44;
                    *(undefined8 *)(iVar18 + -8) = uVar42;
                    *(undefined8 *)(iVar18 + -0x10) = uVar41;
                    iVar18 = (int)piVar31 + -3;
                    puVar3 = (undefined8 *)(*piVar4 + iVar18 * 0x40);
                    puVar7 = (undefined8 *)(*piVar4 + ((int)piVar31 + -2) * 0x40);
                    uVar44 = *puVar3;
                    uVar42 = puVar3[3];
                    uVar41 = puVar3[2];
                    puVar7[1] = puVar3[1];
                    *puVar7 = uVar44;
                    puVar7[3] = uVar42;
                    puVar7[2] = uVar41;
                    uVar44 = puVar3[4];
                    uVar42 = puVar3[7];
                    uVar41 = puVar3[6];
                    piVar35 = piVar31 + -1;
                    piVar31 = piVar31 + -1;
                    puVar7[5] = puVar3[5];
                    puVar7[4] = uVar44;
                    puVar7[7] = uVar42;
                    puVar7[6] = uVar41;
                    puVar3 = (undefined8 *)(*piVar4 + (int)piVar35 * 0x40);
                    puVar7 = (undefined8 *)(*piVar4 + iVar18 * 0x40);
                    uVar44 = *puVar3;
                    uVar42 = puVar3[3];
                    uVar41 = puVar3[2];
                    puVar7[1] = puVar3[1];
                    *puVar7 = uVar44;
                    puVar7[3] = uVar42;
                    puVar7[2] = uVar41;
                    uVar44 = puVar3[4];
                    uVar42 = puVar3[7];
                    uVar41 = puVar3[6];
                    puVar7[5] = puVar3[5];
                    puVar7[4] = uVar44;
                    puVar7[7] = uVar42;
                    puVar7[6] = uVar41;
                  } while ((int *)((int)piVar40 + 3U) < piVar31);
                  if (piVar31 <= piVar40) goto LAB_10015798;
                }
                do {
                  puVar3 = (undefined8 *)(local_158[3] + (int)piVar31 * 0x40);
                  piVar31 = (int *)((int)piVar31 + -1);
                  puVar3[1] = puVar3[-7];
                  *puVar3 = puVar3[-8];
                  puVar3[3] = puVar3[-5];
                  puVar3[2] = puVar3[-6];
                  puVar3[5] = puVar3[-3];
                  puVar3[4] = puVar3[-4];
                  puVar3[7] = puVar3[-1];
                  puVar3[6] = puVar3[-2];
                } while (piVar40 < piVar31);
              }
LAB_10015798:
              local_164[2] = local_164[2] + 1;
              puVar25 = (ulonglong *)(local_164[1] + (int)piVar40 * 0x40);
              puVar25[1] = local_f0[1];
              *puVar25 = local_f0[0];
              puVar25[3] = local_f0[3];
              puVar25[2] = local_f0[2];
              puVar25[5] = local_f0[5];
              puVar25[4] = local_f0[4];
              puVar25[6] = local_f0[6];
              iVar18 = local_164[1] + (int)piVar40 * 0x40;
              goto LAB_100157dc;
            }
          }
          else {
            puVar25 = (ulonglong *)(local_150[1] + (int)piVar40 * 0x40);
            if ((((*puVar25 != uVar26) || (puVar25[1] != uVar37)) ||
                ((puVar25[2] != uVar28 ||
                 (((puVar25[3] != uVar10 || (puVar25[4] != uVar11)) || (puVar25[5] != uVar12))))))
               || (puVar25[6] != local_140)) goto LAB_100155e8;
            iVar18 = local_150[1] + (int)piVar40 * 0x40;
            local_150 = piVar4;
LAB_100157dc:
            *(int **)(iVar18 + 0x38) = local_154;
          }
          iVar18 = FUN_1001b488(local_154,local_118);
        }
      }
LAB_10015800:
      if (iVar18 == 0) {
        if (*(char *)(param_1 + 0x1905) != '\0') goto LAB_1001591c;
        uVar32 = 4;
        if (local_144 < 5) {
          uVar32 = local_144;
        }
        iVar18 = *(int *)(param_1 + 0x1d58);
        if ((*(int *)(param_1 + 0x1eec) == *(int *)(iVar18 + 0xf8)) ||
           (bVar15 = false, *(int *)(param_1 + 0x1eec) == *(int *)(iVar18 + 0x110))) {
          bVar15 = true;
        }
        iVar22 = 0x12;
        if (!bVar15) {
          iVar22 = 0;
        }
        iVar23 = 9;
        if (*(char *)(local_160 + 0x903) == '\0') {
          iVar23 = iVar22;
        }
        if ((*(char *)(param_1 + 0x1919) == '\0') ||
           (*(char *)(param_1 + 0x1909) == '\0' || uVar32 != 1)) {
          piVar31 = (int *)(iVar18 + (*(int *)(&DAT_1009d500 + uVar32 * 4) + iVar23) * 4 + 0x6c);
        }
        else {
          bVar15 = *(char *)(param_1 + 0x220) == '\x01';
          if (*(char *)(local_160 + 0x911) == '\0') {
            iVar22 = 5;
            if (bVar15) {
              iVar22 = 6;
            }
            piVar31 = (int *)(iVar18 + (iVar22 + iVar23) * 4 + 0x6c);
          }
          else {
            iVar22 = 7;
            if (bVar15) {
              iVar22 = 8;
            }
            piVar31 = (int *)(iVar18 + (iVar22 + iVar23) * 4 + 0x6c);
          }
        }
        goto LAB_1001594c;
      }
    }
    else {
LAB_1001591c:
      iVar18 = 0xdc;
      if (*(int *)(param_1 + 0x1e54) == 0) {
        iVar18 = 0xd8;
      }
      piVar31 = (int *)(iVar18 + *(int *)(param_1 + 0x1d58));
LAB_1001594c:
      iVar18 = *piVar31;
    }
    *(undefined1 *)(param_1 + 0x1d38) = 0;
    if (*(int *)(param_1 + 0x1ef0) != iVar18) {
      *(int *)(param_1 + 0x1ef0) = iVar18;
      *(undefined1 *)(param_1 + 0x2270) = 1;
    }
  }
  puVar34 = (uint *)(param_1 + 0x1d44);
  if ((*puVar34 & 1) != 0) {
    FUN_100126d8(param_1 + 0x1920,(undefined8 *)(param_1 + 0x1b20),1);
    *(undefined8 *)(param_1 + 0xab0) = *(undefined8 *)(param_1 + 0x1b20);
    *(undefined8 *)(param_1 + 0xab8) = *(undefined8 *)(param_1 + 0x1b28);
    *(undefined8 *)(param_1 + 0xac0) = *(undefined8 *)(param_1 + 0x1b30);
    *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(param_1 + 0x1b38);
    *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0x1b40);
    *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0x1b48);
    *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(param_1 + 0x1b50);
    *(undefined8 *)(param_1 + 0xae8) = *(undefined8 *)(param_1 + 7000);
    *puVar34 = *puVar34 & 0xfffffffe;
  }
  iVar18 = local_160;
  if (*(char *)(local_160 + 0xd41) != '\0') {
    FUN_10014828(param_1,*(undefined4 *)(param_1 + 0x1d64),param_1 + 0x980,0xe90);
    *(undefined1 *)(iVar18 + 0xd41) = 0;
  }
  if (((*(uint *)(param_1 + 0x990) & 0x7800) != 0) && (*(char *)(param_1 + 0x1d42) != '\0')) {
    uVar32 = (*puVar34 & 0xaaaaaaaa) >> 1 | (*puVar34 & 0x55555555) << 1;
    uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
    uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
    uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
    lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
    uVar32 = (uint)lVar38;
    while ((1 - (uVar32 >> 5) & 0xff) != 0) {
      uVar20 = (uint)lVar38;
      pbVar8 = (byte *)(((int)uVar20 >> 3) + (int)puVar34);
      *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      if (7 < uVar20) break;
      iVar18 = param_1 + uVar20 * 0x40;
      FUN_100126d8(iVar18 + 0x1920,iVar18 + 0x1b20,1);
      uVar32 = (*puVar34 & 0xaaaaaaaa) >> 1 | (*puVar34 & 0x55555555) << 1;
      uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
      lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
      uVar32 = (uint)lVar38;
    }
    puVar27 = (undefined4 *)(param_1 + 0x1d6c);
    uVar19 = (*pcVar9)();
    (*extraout_w11_06)(uVar19,*puVar27,0,0);
    *(undefined1 *)(param_1 + 0x1d42) = 0;
  }
  if (*(char *)(local_160 + 0xd48) != '\0') {
    uVar19 = *(undefined4 *)(param_1 + 0x1dcc);
    uVar21 = (*pcVar9)();
    iVar18 = (*extraout_w11_07)(uVar21,uVar19,0,4,0,local_90);
    if (-1 < iVar18) {
      FUN_10081ee0(local_90[0],param_1 + 0x540,0x440);
      uVar21 = (*pcVar9)();
      (*extraout_w11_08)(uVar21,uVar19,0);
    }
    *(undefined1 *)(local_160 + 0xd48) = 0;
  }
  if (iVar33 != param_1) {
    uVar19 = (*pcVar9)();
    (*extraout_w11_09)(uVar19,3,1,(undefined4 *)(param_1 + 0x1dcc));
    local_110 = *(undefined4 *)(param_1 + 0x1d64);
    uStack_10c = *(undefined4 *)(param_1 + 0x1d68);
    local_108 = *(undefined4 *)(param_1 + 0x1d6c);
    uVar19 = (*pcVar9)();
    (*extraout_w11_10)(uVar19,0,3,&local_110);
    uVar19 = (*pcVar9)();
    (*extraout_w11_11)(uVar19,0,2,&local_110);
    uVar19 = (*pcVar9)();
    (*extraout_w11_12)(uVar19,0,3,&local_110);
  }
  if (*(char *)(param_1 + 0x1d3a) != '\0' || iVar33 != param_1) {
    local_100 = 0;
    local_f8 = 0;
    iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar16 = *(int *)(iVar18 + 0x7fc) != 0;
    if ((bool)cVar16) {
      *(int *)(iVar18 + 0x7fc) = 0;
    }
    if (*(int *)(iVar18 + 0x800) != 0) {
      *(int *)(iVar18 + 0x800) = 0;
      cVar16 = cVar16 + '\x01';
    }
    if (*(int *)(iVar18 + 0x804) != 0) {
      *(int *)(iVar18 + 0x804) = 0;
      cVar16 = cVar16 + '\x01';
    }
    if (*(int *)(iVar18 + 0x808) != 0) {
      *(int *)(iVar18 + 0x808) = 0;
      cVar16 = cVar16 + '\x01';
    }
    if ((cVar16 != '\0') || (*(int *)(iVar18 + 0x80c) != 0)) {
      uVar19 = (*pcVar9)();
      (*extraout_w11_13)(uVar19,4,&local_100,0);
      *(undefined4 *)(iVar18 + 0x80c) = 0;
    }
  }
  if (*(char *)(param_1 + 0x1d39) != '\0' || iVar33 != param_1) {
    iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
    if (*(char *)(param_1 + 0x1905) == '\0') {
      piVar31 = (int *)(iVar18 + 0x664);
      uVar26 = ZEXT48(piVar31);
      if (*piVar31 != *(int *)(param_1 + 0x1dd4)) {
        *piVar31 = *(int *)(param_1 + 0x1dd4);
        uVar19 = (*pcVar9)();
        (*extraout_w11_14)(uVar19,0x18,1,uVar26 & 0xffffffff);
      }
      iVar22 = 0;
      iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar15 = *(int *)(iVar18 + 0x604) != *(int *)(param_1 + 0x1df4);
      if (bVar15) {
        *(int *)(iVar18 + 0x604) = *(int *)(param_1 + 0x1df4);
      }
      uVar26 = (ulonglong)bVar15;
      if (*(int *)(iVar18 + 0x608) != *(int *)(param_1 + 0x1df8)) {
        *(int *)(iVar18 + 0x608) = *(int *)(param_1 + 0x1df8);
        if (bVar15) {
          uVar26 = 2;
        }
        else {
          iVar22 = 1;
          uVar26 = 1;
        }
      }
      if (*(int *)(iVar18 + 0x60c) != *(int *)(param_1 + 0x1dfc)) {
        *(int *)(iVar18 + 0x60c) = *(int *)(param_1 + 0x1dfc);
        if ((int)uVar26 == 0) {
          iVar22 = 2;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(3 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x610) != *(int *)(param_1 + 0x1e00)) {
        *(int *)(iVar18 + 0x610) = *(int *)(param_1 + 0x1e00);
        if ((int)uVar26 == 0) {
          iVar22 = 3;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(4 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x614) != *(int *)(param_1 + 0x1e04)) {
        *(int *)(iVar18 + 0x614) = *(int *)(param_1 + 0x1e04);
        if ((int)uVar26 == 0) {
          iVar22 = 4;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(5 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x618) != *(int *)(param_1 + 0x1e08)) {
        *(int *)(iVar18 + 0x618) = *(int *)(param_1 + 0x1e08);
        if ((int)uVar26 == 0) {
          iVar22 = 5;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(6 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x61c) != *(int *)(param_1 + 0x1e0c)) {
        *(int *)(iVar18 + 0x61c) = *(int *)(param_1 + 0x1e0c);
        if ((int)uVar26 == 0) {
          iVar22 = 6;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(7 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x620) == *(int *)(param_1 + 0x1e10)) {
LAB_100160dc:
        if ((int)uVar26 != 0) goto LAB_100160e0;
      }
      else {
        *(int *)(iVar18 + 0x620) = *(int *)(param_1 + 0x1e10);
        if ((int)uVar26 != 0) {
          uVar26 = (ulonglong)(8 - iVar22);
          goto LAB_100160dc;
        }
        iVar22 = 7;
        uVar26 = 1;
LAB_100160e0:
        auVar45 = (*pcVar9)(*(undefined4 *)(iVar18 + 0x514),iVar22,uVar26,
                            iVar18 + (iVar22 + 0x181) * 4);
        (*extraout_w11_15)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff
                          );
      }
      iVar22 = 8;
      iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar15 = *(int *)(iVar18 + 0x624) != *(int *)(param_1 + 0x1e14);
      if (bVar15) {
        *(int *)(iVar18 + 0x624) = *(int *)(param_1 + 0x1e14);
      }
      uVar26 = (ulonglong)bVar15;
      if (*(int *)(iVar18 + 0x628) != *(int *)(param_1 + 0x1e18)) {
        *(int *)(iVar18 + 0x628) = *(int *)(param_1 + 0x1e18);
        if (bVar15) {
          uVar26 = 2;
        }
        else {
          iVar22 = 9;
          uVar26 = 1;
        }
      }
      if (*(int *)(iVar18 + 0x62c) != *(int *)(param_1 + 0x1e1c)) {
        *(int *)(iVar18 + 0x62c) = *(int *)(param_1 + 0x1e1c);
        if ((int)uVar26 == 0) {
          iVar22 = 10;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xb - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x630) != *(int *)(param_1 + 0x1e20)) {
        *(int *)(iVar18 + 0x630) = *(int *)(param_1 + 0x1e20);
        if ((int)uVar26 == 0) {
          iVar22 = 0xb;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xc - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x634) != *(int *)(param_1 + 0x1e24)) {
        *(int *)(iVar18 + 0x634) = *(int *)(param_1 + 0x1e24);
        if ((int)uVar26 == 0) {
          iVar22 = 0xc;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xd - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x638) != *(int *)(param_1 + 0x1e28)) {
        *(int *)(iVar18 + 0x638) = *(int *)(param_1 + 0x1e28);
        if ((int)uVar26 == 0) {
          iVar22 = 0xd;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xe - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x63c) != *(int *)(param_1 + 0x1e2c)) {
        *(int *)(iVar18 + 0x63c) = *(int *)(param_1 + 0x1e2c);
        if ((int)uVar26 == 0) {
          iVar22 = 0xe;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xf - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x640) == *(int *)(param_1 + 0x1e30)) {
LAB_100162d4:
        if ((int)uVar26 != 0) goto LAB_100162d8;
      }
      else {
        *(int *)(iVar18 + 0x640) = *(int *)(param_1 + 0x1e30);
        if ((int)uVar26 != 0) {
          uVar26 = (ulonglong)(0x10 - iVar22);
          goto LAB_100162d4;
        }
        iVar22 = 0xf;
        uVar26 = 1;
LAB_100162d8:
        auVar45 = (*pcVar9)(*(undefined4 *)(iVar18 + 0x514),iVar22,uVar26,
                            iVar18 + (iVar22 + 0x181) * 4);
        (*extraout_w11_16)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff
                          );
      }
      iVar22 = 0x10;
      iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar15 = *(int *)(iVar18 + 0x644) != *(int *)(param_1 + 0x1e34);
      if (bVar15) {
        *(int *)(iVar18 + 0x644) = *(int *)(param_1 + 0x1e34);
      }
      uVar26 = (ulonglong)bVar15;
      if (*(int *)(iVar18 + 0x648) != *(int *)(param_1 + 0x1e38)) {
        *(int *)(iVar18 + 0x648) = *(int *)(param_1 + 0x1e38);
        if (bVar15) {
          uVar26 = 2;
        }
        else {
          iVar22 = 0x11;
          uVar26 = 1;
        }
      }
      if (*(int *)(iVar18 + 0x64c) != *(int *)(param_1 + 0x1e3c)) {
        *(int *)(iVar18 + 0x64c) = *(int *)(param_1 + 0x1e3c);
        if ((int)uVar26 == 0) {
          iVar22 = 0x12;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0x13 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x650) != *(int *)(param_1 + 0x1e40)) {
        *(int *)(iVar18 + 0x650) = *(int *)(param_1 + 0x1e40);
        if ((int)uVar26 == 0) {
          iVar22 = 0x13;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0x14 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x654) != *(int *)(param_1 + 0x1e44)) {
        *(int *)(iVar18 + 0x654) = *(int *)(param_1 + 0x1e44);
        if ((int)uVar26 == 0) {
          iVar22 = 0x14;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0x15 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x658) != *(int *)(param_1 + 0x1e48)) {
        *(int *)(iVar18 + 0x658) = *(int *)(param_1 + 0x1e48);
        if ((int)uVar26 == 0) {
          iVar22 = 0x15;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0x16 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x65c) != *(int *)(param_1 + 0x1e4c)) {
        *(int *)(iVar18 + 0x65c) = *(int *)(param_1 + 0x1e4c);
        if ((int)uVar26 == 0) {
          iVar22 = 0x16;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0x17 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x660) == *(int *)(param_1 + 0x1e50)) {
LAB_100164cc:
        if ((int)uVar26 == 0) goto LAB_10016804;
      }
      else {
        *(int *)(iVar18 + 0x660) = *(int *)(param_1 + 0x1e50);
        if ((int)uVar26 != 0) {
          uVar26 = (ulonglong)(0x18 - iVar22);
          goto LAB_100164cc;
        }
        iVar22 = 0x17;
        uVar26 = 1;
      }
      uVar19 = *(undefined4 *)(iVar18 + 0x514);
      iVar18 = iVar18 + (iVar22 + 0x181) * 4;
LAB_100167e0:
      auVar45 = (*pcVar9)(uVar19,iVar22,uVar26,iVar18);
      (*extraout_w11_18)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff);
    }
    else {
      iVar22 = 8;
      bVar15 = *(int *)(iVar18 + 0x624) != 0;
      if (bVar15) {
        *(int *)(iVar18 + 0x624) = 0;
      }
      uVar26 = (ulonglong)bVar15;
      if (*(int *)(iVar18 + 0x628) != 0) {
        *(int *)(iVar18 + 0x628) = 0;
        if (bVar15) {
          uVar26 = 2;
        }
        else {
          iVar22 = 9;
          uVar26 = 1;
        }
      }
      if (*(int *)(iVar18 + 0x62c) != 0) {
        *(int *)(iVar18 + 0x62c) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 10;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xb - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x630) != 0) {
        *(int *)(iVar18 + 0x630) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 0xb;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xc - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x634) != 0) {
        *(int *)(iVar18 + 0x634) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 0xc;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xd - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x638) != 0) {
        *(int *)(iVar18 + 0x638) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 0xd;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xe - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x63c) != 0) {
        *(int *)(iVar18 + 0x63c) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 0xe;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(0xf - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x640) == 0) {
LAB_10016620:
        if ((int)uVar26 != 0) goto LAB_10016624;
      }
      else {
        *(int *)(iVar18 + 0x640) = 0;
        if ((int)uVar26 != 0) {
          uVar26 = (ulonglong)(0x10 - iVar22);
          goto LAB_10016620;
        }
        iVar22 = 0xf;
        uVar26 = 1;
LAB_10016624:
        auVar45 = (*pcVar9)(*(undefined4 *)(iVar18 + 0x514),iVar22,uVar26,
                            iVar18 + (iVar22 + 0x181) * 4);
        (*extraout_w11_17)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff
                          );
      }
      iVar22 = 0;
      iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar15 = *(int *)(iVar18 + 0x604) != *(int *)(param_1 + 0x1e54);
      if (bVar15) {
        *(int *)(iVar18 + 0x604) = *(int *)(param_1 + 0x1e54);
      }
      uVar26 = (ulonglong)bVar15;
      if (*(int *)(iVar18 + 0x608) != 0) {
        *(int *)(iVar18 + 0x608) = 0;
        if (bVar15) {
          uVar26 = 2;
        }
        else {
          iVar22 = 1;
          uVar26 = 1;
        }
      }
      if (*(int *)(iVar18 + 0x60c) != 0) {
        *(int *)(iVar18 + 0x60c) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 2;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(3 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x610) != 0) {
        *(int *)(iVar18 + 0x610) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 3;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(4 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x614) != 0) {
        *(int *)(iVar18 + 0x614) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 4;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(5 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x618) != 0) {
        *(int *)(iVar18 + 0x618) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 5;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(6 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x61c) != 0) {
        *(int *)(iVar18 + 0x61c) = 0;
        if ((int)uVar26 == 0) {
          iVar22 = 6;
          uVar26 = 1;
        }
        else {
          uVar26 = (ulonglong)(7 - iVar22);
        }
      }
      if (*(int *)(iVar18 + 0x620) != 0) {
        *(int *)(iVar18 + 0x620) = 0;
        if ((int)uVar26 != 0) {
          uVar26 = (ulonglong)(8 - iVar22);
          goto LAB_100167c4;
        }
        iVar22 = 7;
        uVar26 = 1;
LAB_100167c8:
        uVar19 = *(undefined4 *)(iVar18 + 0x514);
        iVar18 = iVar18 + (iVar22 + 0x181) * 4;
        goto LAB_100167e0;
      }
LAB_100167c4:
      if ((int)uVar26 != 0) goto LAB_100167c8;
    }
LAB_10016804:
    *(undefined1 *)(param_1 + 0x1d39) = 0;
  }
  if (*(char *)(param_1 + 0x1d3a) != '\0' || iVar33 != param_1) {
    local_128 = *(int *)(param_1 + 0x1eb4);
    local_124 = *(int *)(param_1 + 0x1eb8);
    local_120 = *(int *)(param_1 + 0x1ebc);
    local_11c = *(int *)(param_1 + 0x1ec0);
    iVar18 = *(int *)(param_1 + 0x1ee4);
    iVar22 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar16 = *(int *)(iVar22 + 0x7fc) != local_128;
    if ((bool)cVar16) {
      *(int *)(iVar22 + 0x7fc) = local_128;
    }
    if (*(int *)(iVar22 + 0x800) != local_124) {
      *(int *)(iVar22 + 0x800) = local_124;
      cVar16 = cVar16 + '\x01';
    }
    if (*(int *)(iVar22 + 0x804) != local_120) {
      *(int *)(iVar22 + 0x804) = local_120;
      cVar16 = cVar16 + '\x01';
    }
    if (*(int *)(iVar22 + 0x808) != local_11c) {
      *(int *)(iVar22 + 0x808) = local_11c;
      cVar16 = cVar16 + '\x01';
    }
    if ((cVar16 != '\0') || (iVar18 != *(int *)(iVar22 + 0x80c))) {
      uVar19 = (*pcVar9)();
      (*extraout_w11_19)(uVar19,4,&local_128,iVar18);
      *(int *)(iVar22 + 0x80c) = iVar18;
    }
    *(undefined1 *)(param_1 + 0x1d3a) = 0;
  }
  if (*(char *)(local_160 + 0xd3b) != '\0' || iVar33 != param_1) {
    puVar3 = (undefined8 *)(param_1 + 0x210c);
    pbVar8 = (byte *)(param_1 + 0x211c);
    pbVar1 = (byte *)(param_1 + 0x211d);
    if (*(char *)(param_1 + 0x1905) == '\0') {
      *(undefined8 *)(param_1 + 0x2114) = *(undefined8 *)(param_1 + 0x268);
      *puVar3 = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x2124) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x211c) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x2134) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_1 + 0x212c) = *(undefined8 *)(param_1 + 0x280);
      *(undefined4 *)(param_1 + 0x213c) = *(undefined4 *)(param_1 + 0x290);
      *pbVar8 = *pbVar8 & *(byte *)(local_160 + 0x842);
      *pbVar1 = *(byte *)(local_160 + 0x842) & *pbVar1;
      iVar18 = 0x1840;
    }
    else {
      *(undefined8 *)(param_1 + 0x2114) = *(undefined8 *)(param_1 + 0x2d0);
      *puVar3 = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x2124) = *(undefined8 *)(param_1 + 0x2e0);
      *(undefined8 *)(param_1 + 0x211c) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2134) = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined8 *)(param_1 + 0x212c) = *(undefined8 *)(param_1 + 0x2e8);
      *(undefined4 *)(param_1 + 0x213c) = *(undefined4 *)(param_1 + 0x2f8);
      *pbVar8 = *pbVar8 & *(byte *)(local_160 + 0x842);
      *pbVar1 = *(byte *)(local_160 + 0x842) & *pbVar1;
      iVar18 = 0x1841;
    }
    FUN_1006e6c0(*(undefined4 *)(param_1 + 0x1d50),*(undefined4 *)(param_1 + 0x10),puVar3,
                 *(undefined1 *)(iVar18 + param_1));
    *(undefined1 *)(local_160 + 0xd3b) = 0;
  }
  if (*(char *)(local_160 + 0xd3c) != '\0' || iVar33 != param_1) {
    if (*(char *)(param_1 + 0x1905) == '\0') {
      iVar18 = 0x2fc;
      if (*(char *)(local_160 + 0x900) != '\x01') {
        iVar18 = 0x31c;
      }
    }
    else {
      iVar18 = 0x33c;
    }
    puVar27 = (undefined4 *)(iVar18 + param_1);
    *(undefined4 *)(param_1 + 0x2148) = *puVar27;
    *(undefined4 *)(param_1 + 0x214c) = puVar27[1];
    *(undefined4 *)(param_1 + 0x2150) = puVar27[2];
    *(undefined4 *)(param_1 + 0x2154) = puVar27[3];
    *(undefined4 *)(param_1 + 0x2158) = puVar27[4];
    *(undefined4 *)(param_1 + 0x215c) = puVar27[5];
    *(undefined4 *)(param_1 + 0x2160) = puVar27[6];
    *(undefined1 *)(param_1 + 0x2164) = *(undefined1 *)(puVar27 + 7);
    FUN_1006e360(*(undefined4 *)(param_1 + 0x1d50),*(undefined4 *)(param_1 + 0x10),param_1 + 0x2140)
    ;
    *(undefined1 *)(local_160 + 0xd3c) = 0;
  }
  if ((*(char *)(local_160 + 0xd3d) != '\0') || (iVar33 != param_1)) {
    puVar27 = &DAT_100a22d0;
    if (*(char *)(param_1 + 0x1905) == '\0') {
      puVar27 = (undefined4 *)(param_1 + 0x35c);
    }
    *(undefined4 *)(param_1 + 0x2248) = *puVar27;
    *(undefined4 *)(param_1 + 0x224c) = puVar27[1];
    *(undefined4 *)(param_1 + 0x2250) = puVar27[2];
    *(undefined4 *)(param_1 + 0x2254) = puVar27[3];
    *(undefined4 *)(param_1 + 0x2258) = puVar27[4];
    *(undefined4 *)(param_1 + 0x225c) = puVar27[5];
    *(undefined4 *)(param_1 + 0x2260) = puVar27[6];
    *(undefined4 *)(param_1 + 0x2264) = puVar27[7];
    *(undefined4 *)(param_1 + 0x2268) = puVar27[8];
    *(undefined4 *)(param_1 + 0x226c) = puVar27[9];
    FUN_1006e998(*(undefined4 *)(param_1 + 0x1d50),*(undefined4 *)(param_1 + 0x10),
                 (undefined4 *)(param_1 + 0x2248));
    *(undefined1 *)(local_160 + 0xd3d) = 0;
  }
  if (*(char *)(param_1 + 0x1d3e) != '\0' || iVar33 != param_1) {
    if ((*(char *)(param_1 + 0x1905) == '\0') &&
       ((*(int *)(param_1 + 0x18e0) != 0 || ((*(uint *)(param_1 + 0x18f8) & 1) != 0)))) {
      iVar18 = 0x3b4;
    }
    else {
      iVar18 = 0x3cc;
    }
    pfVar2 = (float *)(param_1 + 0x1f54);
    puVar3 = (undefined8 *)(iVar18 + param_1);
    uVar41 = *puVar3;
    *(undefined8 *)(param_1 + 0x1f5c) = puVar3[1];
    *(undefined8 *)pfVar2 = uVar41;
    *(undefined8 *)(param_1 + 0x1f64) = puVar3[2];
    if (0xafff < *(int *)(param_1 + 0x1dd0)) {
      *pfVar2 = *(float *)(param_1 + 0x3e4) + *pfVar2;
      *(float *)(param_1 + 0x1f58) = *(float *)(param_1 + 1000) + *(float *)(param_1 + 0x1f58);
    }
    if (*(int *)(param_1 + 0x18e0) == 0) {
      *(undefined4 *)(param_1 + 0x1f64) = 0;
      *(undefined4 *)(param_1 + 0x1f68) = 0x3f800000;
    }
    FUN_1006ed08(*(undefined4 *)(param_1 + 0x1d50),*(undefined4 *)(param_1 + 0x10),pfVar2);
    *(undefined1 *)(param_1 + 0x1d3e) = 0;
  }
  if (*(char *)(param_1 + 0x2270) != '\0' || iVar33 != param_1) {
    FUN_1006f108(*(undefined4 *)(param_1 + 0x1d50),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x1f4c),*(undefined4 *)(param_1 + 0x1ee8),
                 *(undefined4 *)(param_1 + 0x1eec),*(undefined4 *)(param_1 + 0x1ef0),
                 *(undefined4 *)(param_1 + 0x1ef4));
    *(char *)(param_1 + 0x2270) = '\0';
  }
  pbVar8 = (byte *)(param_1 + 0x1d34);
  piVar31 = *(int **)pbVar8;
  if ((piVar31 == (int *)0x0) && (iVar33 == param_1)) goto LAB_1001734c;
  if (*(char *)(param_1 + 0x1905) != '\0') {
    if (*(int *)(param_1 + 0x1e54) != 0) {
      piVar31 = (int *)(*(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510 + 0x594);
      uVar26 = ZEXT48(piVar31);
      if (*piVar31 != *(int *)(param_1 + 0x1d78)) {
        *piVar31 = *(int *)(param_1 + 0x1d78);
        uVar19 = (*pcVar9)();
        (*extraout_w11_22)(uVar19,0,1,uVar26 & 0xffffffff);
      }
      *pbVar8 = *pbVar8 & 0xfe;
    }
    goto LAB_1001734c;
  }
  uVar32 = ((uint)piVar31 & 0xaaaaaaaa) >> 1 | ((uint)piVar31 & 0x55555555) << 1;
  uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
  uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
  uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
  lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
  uVar32 = (uint)lVar38;
  local_154 = piVar31;
  if ((1 - (uVar32 >> 5) & 0xff) != 0) {
    pbVar1 = (byte *)((int)&local_154 + ((int)uVar32 >> 3));
    local_130 = (undefined4 *)(param_1 + 0x223);
    local_148 = (uint *)(param_1 + 0x224);
    local_144 = param_1 + 0xac;
    local_118 = CONCAT44(local_118._4_4_,param_1 + 0xb0);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
    local_150 = (int *)(param_1 + 0x220);
    local_158 = (int *)(param_1 + 0x221);
    local_164 = (int *)(param_1 + 0x222);
    do {
      uVar32 = (uint)lVar38;
      if (local_148[uVar32 * 2] < (uint)*(byte *)(local_130 + uVar32 * 2)) {
        fVar43 = (float)*(byte *)(local_130 + uVar32 * 2);
      }
      else {
        fVar43 = (float)local_148[uVar32 * 2];
      }
      *(float *)(local_144 + uVar32 * 0x34) = fVar43;
      bVar5 = *(byte *)(local_158 + uVar32 * 2);
      bVar6 = *(byte *)(local_164 + uVar32 * 2);
      uVar20 = (uint)*(byte *)(local_150 + uVar32 * 2);
      bVar15 = uVar20 == 2;
      if (bVar15) {
        uVar20 = 0;
      }
      if (!bVar15) {
        fVar43 = 3.4028235e+38;
      }
      *(float *)((int)local_118 + uVar32 * 0x34) = fVar43;
      if (bVar5 == 2 || bVar6 == 2) {
        uVar19 = 0x55;
      }
      else {
        uVar19 = *(undefined4 *)
                  (&DAT_1009dec0 + (uVar20 | ((uint)bVar5 | (uint)bVar6 << 1) << 1) * 4);
      }
      puVar3 = (undefined8 *)(param_1 + 0x80 + uVar32 * 0x34);
      puVar7 = (undefined8 *)(param_1 + 0x1f6c + uVar32 * 0x34);
      *(undefined4 *)puVar3 = uVar19;
      uVar44 = *puVar3;
      uVar42 = puVar3[3];
      uVar41 = puVar3[2];
      puVar7[1] = puVar3[1];
      *puVar7 = uVar44;
      puVar7[3] = uVar42;
      puVar7[2] = uVar41;
      uVar41 = puVar3[4];
      uVar19 = *(undefined4 *)(puVar3 + 6);
      puVar7[5] = puVar3[5];
      puVar7[4] = uVar41;
      *(undefined4 *)(puVar7 + 6) = uVar19;
      iVar22 = FUN_1006f7c8(*(int *)(param_1 + 0x1d54) + 0x39c,puVar7);
      iVar18 = *(int *)(param_1 + 0x1ec4 + uVar32 * 4);
      if (iVar22 != iVar18) {
        if (iVar18 != 0) {
          local_140 = CONCAT44(local_140._4_4_,*(int *)(param_1 + 0x1d54) + 0x39c);
          (*pcVar9)();
          (*extraout_w11_20)(iVar18,auStack_80);
          iVar23 = FUN_1006f9e8(local_140 & 0xffffffff,auStack_80);
          if (iVar23 != 0) {
            uVar20 = 0;
            do {
              if (*(int *)(iVar23 + 0x1c + uVar20 * 0x24) == iVar18) {
                *(undefined1 *)(iVar23 + uVar20 * 0x24 + 0x20) = 0;
                break;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < 0x14);
          }
        }
        *(int *)(param_1 + uVar32 * 4 + 0x1ec4) = iVar22;
      }
      pbVar8[(int)uVar32 >> 3] =
           pbVar8[(int)uVar32 >> 3] & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
      uVar32 = ((uint)local_154 & 0xaaaaaaaa) >> 1 | ((uint)local_154 & 0x55555555) << 1;
      uVar32 = (uVar32 & 0xcccccccc) >> 2 | (uVar32 & 0x33333333) << 2;
      uVar32 = (uVar32 & 0xf0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f) << 4;
      uVar32 = (uVar32 & 0xff00ff00) >> 8 | (uVar32 & 0xff00ff) << 8;
      lVar38 = LZCOUNT(uVar32 >> 0x10 | uVar32 << 0x10);
      uVar32 = (uint)lVar38;
      if ((1 - (uVar32 >> 5) & 0xff) == 0) break;
      pbVar1 = (byte *)((int)&local_154 + ((int)uVar32 >> 3));
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar32 & 7)) ^ 0xff);
    } while( true );
  }
  iVar22 = 0;
  iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
  bVar15 = *(int *)(iVar18 + 0x594) != *(int *)(param_1 + 0x1ec4);
  if (bVar15) {
    *(int *)(iVar18 + 0x594) = *(int *)(param_1 + 0x1ec4);
  }
  uVar26 = (ulonglong)bVar15;
  if (*(int *)(iVar18 + 0x598) != *(int *)(param_1 + 0x1ec8)) {
    *(int *)(iVar18 + 0x598) = *(int *)(param_1 + 0x1ec8);
    if (bVar15) {
      uVar26 = 2;
    }
    else {
      iVar22 = 1;
      uVar26 = 1;
    }
  }
  if (*(int *)(iVar18 + 0x59c) != *(int *)(param_1 + 0x1ecc)) {
    *(int *)(iVar18 + 0x59c) = *(int *)(param_1 + 0x1ecc);
    if ((int)uVar26 == 0) {
      iVar22 = 2;
      uVar26 = 1;
    }
    else {
      uVar26 = (ulonglong)(3 - iVar22);
    }
  }
  if (*(int *)(iVar18 + 0x5a0) != *(int *)(param_1 + 0x1ed0)) {
    *(int *)(iVar18 + 0x5a0) = *(int *)(param_1 + 0x1ed0);
    if ((int)uVar26 == 0) {
      iVar22 = 3;
      uVar26 = 1;
    }
    else {
      uVar26 = (ulonglong)(4 - iVar22);
    }
  }
  if (*(int *)(iVar18 + 0x5a4) != *(int *)(param_1 + 0x1ed4)) {
    *(int *)(iVar18 + 0x5a4) = *(int *)(param_1 + 0x1ed4);
    if ((int)uVar26 == 0) {
      iVar22 = 4;
      uVar26 = 1;
    }
    else {
      uVar26 = (ulonglong)(5 - iVar22);
    }
  }
  if (*(int *)(iVar18 + 0x5a8) != *(int *)(param_1 + 0x1ed8)) {
    *(int *)(iVar18 + 0x5a8) = *(int *)(param_1 + 0x1ed8);
    if ((int)uVar26 == 0) {
      iVar22 = 5;
      uVar26 = 1;
    }
    else {
      uVar26 = (ulonglong)(6 - iVar22);
    }
  }
  if (*(int *)(iVar18 + 0x5ac) != *(int *)(param_1 + 0x1edc)) {
    *(int *)(iVar18 + 0x5ac) = *(int *)(param_1 + 0x1edc);
    if ((int)uVar26 == 0) {
      iVar22 = 6;
      uVar26 = 1;
    }
    else {
      uVar26 = (ulonglong)(7 - iVar22);
    }
  }
  if (*(int *)(iVar18 + 0x5b0) == *(int *)(param_1 + 0x1ee0)) {
LAB_10017268:
    if ((int)uVar26 == 0) goto LAB_1001734c;
  }
  else {
    *(int *)(iVar18 + 0x5b0) = *(int *)(param_1 + 0x1ee0);
    if ((int)uVar26 != 0) {
      uVar26 = (ulonglong)(8 - iVar22);
      goto LAB_10017268;
    }
    iVar22 = 7;
    uVar26 = 1;
  }
  auVar45 = (*pcVar9)(*(undefined4 *)(iVar18 + 0x514),iVar22,uVar26,iVar18 + (iVar22 + 0x165) * 4);
  (*extraout_w11_21)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff);
LAB_1001734c:
  if (*(char *)(local_160 + 0xd3f) != '\0' || iVar33 != param_1) {
    iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
    piVar31 = (int *)(iVar18 + 0x704);
    uVar26 = ZEXT48(piVar31);
    if (((*piVar31 != *(int *)(param_1 + 0x1ef8)) ||
        (*(int *)(iVar18 + 0x744) != *(int *)(param_1 + 0x4b0))) ||
       (*(int *)(iVar18 + 0x784) != *(int *)(param_1 + 0x4f4))) {
      *piVar31 = *(int *)(param_1 + 0x1ef8);
      uVar37 = ZEXT48((int *)(iVar18 + 0x744U));
      uVar28 = ZEXT48((int *)(iVar18 + 0x784U));
      *(int *)(iVar18 + 0x744U) = *(int *)(param_1 + 0x4b0);
      *(int *)(iVar18 + 0x784U) = *(int *)(param_1 + 0x4f4);
      uVar19 = (*pcVar9)();
      (*extraout_w11_23)(uVar19,0,1,uVar26 & 0xffffffff,uVar37 & 0xffffffff,uVar28 & 0xffffffff);
    }
    *(undefined1 *)(local_160 + 0xd3f) = 0;
  }
  if (*(char *)(param_1 + 0x1d40) != '\0' || iVar33 != param_1) {
    iVar33 = *(int *)(param_1 + 0x1f38);
    if (iVar33 == *(int *)(param_1 + 0x1d70)) {
      uVar26 = 0x2a;
    }
    else {
      uVar26 = (ulonglong)*(uint *)(param_1 + 0x1f44);
    }
    iVar18 = *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x1510;
    if (((iVar33 != *(int *)(iVar18 + 0x7c4)) || ((int)uVar26 != *(int *)(iVar18 + 0x7c8))) ||
       (*(int *)(iVar18 + 0x7cc) != 0)) {
      *(int *)(iVar18 + 0x7c4) = iVar33;
      *(int *)(iVar18 + 0x7c8) = (int)uVar26;
      *(undefined4 *)(iVar18 + 0x7cc) = 0;
      auVar45 = (*pcVar9)();
      (*extraout_w11_24)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_ & 0xffffffff,uVar26 & 0xffffffff,0
                        );
    }
    *(undefined1 *)(param_1 + 0x1d40) = 0;
  }
  iVar33 = *(int *)(param_1 + 0x1e58);
  if (iVar33 != 0) {
    uVar32 = *(uint *)(param_1 + 0x1e6c);
    local_b0 = 0;
    local_a8 = *(uint *)(iVar33 + 0x14) >> (ulonglong)(uVar32 & 0x1f);
    if (local_a8 == 0) {
      local_a8 = 1;
    }
    local_a4 = *(uint *)(iVar33 + 0x18) >> (ulonglong)(uVar32 & 0x1f);
    if (local_a4 == 0) {
      local_a4 = 1;
    }
    auVar45 = (*pcVar9)(iVar33,uVar32 + *(int *)(iVar33 + 0x2c) * *(int *)(param_1 + 0x1e7c));
    (*extraout_w11_25)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_,&local_b0);
  }
  iVar33 = 0x2c8;
  if (*(char *)(param_1 + 0x1905) == '\0') {
    iVar33 = 0x260;
  }
  iVar18 = *(int *)(param_1 + 0x1e68);
  if (((iVar18 != 0) && (*(int *)(iVar33 + param_1) != 0)) && (((int *)(iVar33 + param_1))[1] != 0))
  {
    uVar32 = *(uint *)(param_1 + 0x1e8c);
    local_a0 = 0;
    local_98 = *(uint *)(iVar18 + 0x14) >> (ulonglong)(uVar32 & 0x1f);
    if (local_98 == 0) {
      local_98 = 1;
    }
    local_94 = *(uint *)(iVar18 + 0x18) >> (ulonglong)(uVar32 & 0x1f);
    if (local_94 == 0) {
      local_94 = 1;
    }
    auVar45 = (*pcVar9)(iVar18,uVar32 + *(int *)(iVar18 + 0x2c) * *(int *)(param_1 + 0x1e90));
    (*extraout_w11_26)(auVar45._0_8_ & 0xffffffff,auVar45._8_8_,&local_a0);
  }
  return 1;
}

