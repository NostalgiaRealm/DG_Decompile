/*
 * FUN_18003ab70 at 18003ab70
 * undefined FUN_18003ab70(void)
 * Address ranges: 18003ab70-18003de4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003ab70(ulonglong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  int iVar17;
  undefined4 uVar16;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  ulonglong extraout_x1_02;
  ulonglong extraout_x1_03;
  ulonglong extraout_x1_04;
  undefined8 uVar21;
  ulonglong extraout_x1_05;
  ulonglong extraout_x1_06;
  ulonglong extraout_x1_07;
  ulonglong extraout_x1_08;
  ulonglong extraout_x1_09;
  ulonglong extraout_x1_10;
  ulonglong extraout_x1_11;
  ulonglong extraout_x1_12;
  ulonglong extraout_x1_13;
  ulonglong extraout_x1_14;
  ulonglong extraout_x1_15;
  ulonglong extraout_x1_16;
  ulonglong extraout_x1_17;
  ulonglong extraout_x1_18;
  ulonglong extraout_x1_19;
  ulonglong extraout_x1_20;
  ulonglong extraout_x1_21;
  ulonglong extraout_x1_22;
  ulonglong extraout_x1_23;
  ulonglong extraout_x1_24;
  ulonglong extraout_x1_25;
  ulonglong extraout_x1_26;
  ulonglong extraout_x1_27;
  ulonglong extraout_x1_28;
  ulonglong extraout_x1_29;
  ulonglong extraout_x1_30;
  ulonglong extraout_x1_31;
  ulonglong extraout_x1_32;
  ulonglong extraout_x1_33;
  ulonglong extraout_x1_34;
  ulonglong extraout_x1_35;
  ulonglong extraout_x1_36;
  ulonglong extraout_x1_37;
  ulonglong extraout_x1_38;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong *puVar25;
  int *piVar26;
  char *pcVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  char *pcVar31;
  longlong lVar32;
  char *pcVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  longlong *plVar37;
  undefined8 *puVar38;
  byte *pbVar39;
  byte *pbVar40;
  longlong lVar41;
  uint uVar42;
  byte *pbVar43;
  longlong *plVar44;
  uint uVar45;
  ulonglong uVar46;
  char *pcVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  longlong lVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  uint local_280 [2];
  ulonglong local_278;
  longlong local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  longlong local_240;
  longlong local_238;
  ulonglong local_230;
  longlong local_228;
  uint local_220;
  longlong local_218;
  undefined8 local_210;
  longlong lStack_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  ulonglong local_1d0;
  uint local_1c8;
  uint local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  int aiStack_1a8 [9];
  undefined1 auStack_184 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  local_270 = param_1 + 0xc000;
  local_278 = param_1 + 0x4000;
  uVar15 = (*(uint *)(param_1 + 0xf70) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0xf70) & 0x55555555) << 1;
  uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
  uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar46 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
  FUN_180039660(param_1,0);
  lVar41 = *(longlong *)(param_1 + 0xf6e0);
  lVar18 = param_1 + 0x8000;
  lVar24 = param_1 + 0xf000;
  lVar20 = param_1 + 0x7000;
  if (0xfff < *(uint *)(lVar41 + 0x1a00)) {
    local_280[0] = (uint)uVar46;
    iVar22 = 0x20;
    local_240 = param_1 + 0x8000;
    local_228 = param_1 + 0x7000;
    local_218 = param_1 + 0xf000;
    local_1d0 = param_1;
    do {
      if (DAT_180258cc0 == '\0') {
        (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&local_230);
        DAT_180258cc0 = '\x01';
        DAT_180258cc4 = (uint)(ushort)local_230;
      }
      uVar46 = 0;
      DAT_180258cc4 = DAT_18024cb2c + DAT_180258cc4 * DAT_180258cc4 & 0xffff;
      DAT_18024cb2c = DAT_18024cb2c + (DAT_180258cc4 >> 2) & 0xffff;
      lVar18 = *(longlong *)(lVar41 + 0x19f0) +
               (ulonglong)
               (uint)(int)(((float)DAT_180258cc4 / 65535.0) * (float)(*(int *)(lVar41 + 0x19fc) - 1)
                          ) * 0x18;
      plVar37 = *(longlong **)(lVar18 + 0x10);
      uVar15 = 0;
      if ((int)plVar37[1] != 0) {
        do {
          FUN_1800f1380(*(undefined8 *)(lVar41 + 0x19d8),
                        *(undefined8 *)(*plVar37 + uVar46 * 0xa8 + 0xa0),0,1);
          (**(code **)(**(longlong **)(*plVar37 + uVar46 * 0xa8 + 0xa0) + 0x10))();
          uVar15 = *(uint *)(plVar37 + 1);
          uVar45 = (int)uVar46 + 1;
          uVar46 = (ulonglong)uVar45;
        } while (uVar45 < uVar15);
      }
      *(uint *)(lVar41 + 0x1a00) = *(int *)(lVar41 + 0x1a00) - uVar15;
      uVar15 = *(uint *)(lVar41 + 0x19fc);
      if (uVar15 != 0) {
        uVar46 = *(ulonglong *)(lVar18 + 8);
        uVar45 = 0;
        uVar48 = uVar15;
        do {
          uVar36 = uVar48 + uVar45 >> 1;
          uVar34 = *(ulonglong *)(*(longlong *)(lVar41 + 0x19f0) + (ulonglong)uVar36 * 0x18);
          uVar49 = uVar36;
          if (uVar34 <= uVar46) {
            if (uVar46 <= uVar34) break;
            uVar45 = uVar36 + 1;
            uVar36 = uVar36 + 1;
            uVar49 = uVar48;
          }
          uVar48 = uVar49;
        } while (uVar48 != uVar45);
        if ((uVar36 != uVar15) &&
           (puVar25 = (ulonglong *)(*(longlong *)(lVar41 + 0x19f0) + (ulonglong)uVar36 * 0x18),
           *puVar25 == uVar46)) {
          puVar38 = (undefined8 *)puVar25[2];
          if (puVar38 != (undefined8 *)0x0) {
            thunk_FUN_180102fc0(*puVar38);
            FUN_180102fc0(puVar38,0x10);
          }
          uVar15 = *(uint *)(lVar41 + 0x19fc);
          uVar36 = uVar36 + 1;
          if (uVar36 < uVar15) {
            do {
              puVar28 = (undefined8 *)
                        (*(longlong *)(lVar41 + 0x19f0) + (ulonglong)(uVar36 - 1) * 0x18);
              puVar38 = (undefined8 *)(*(longlong *)(lVar41 + 0x19f0) + (ulonglong)uVar36 * 0x18);
              uVar36 = uVar36 + 1;
              uVar19 = *puVar38;
              puVar28[1] = puVar38[1];
              *puVar28 = uVar19;
              puVar28[2] = puVar38[2];
              uVar15 = *(uint *)(lVar41 + 0x19fc);
            } while (uVar36 < uVar15);
          }
          *(uint *)(lVar41 + 0x19fc) = uVar15 - 1;
        }
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    uVar46 = (ulonglong)local_280[0];
    param_1 = local_1d0;
    lVar18 = local_240;
    lVar24 = local_218;
    lVar20 = local_228;
  }
  lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
  uVar34 = *(ulonglong *)(lVar41 + 0xb88);
  *(ulonglong *)(lVar41 + 0xb88) = param_1;
  local_220 = (uint)(param_1 != uVar34);
  lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
  *(int *)(lVar41 + 0x684) = *(int *)(lVar41 + 0x684) + 1;
  if (param_1 != uVar34) {
    FUN_1800e8910(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
                  *(undefined8 *)(param_1 + 0xf8e8));
    FUN_1800e9780(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
                  *(undefined8 *)(param_1 + 0xf8e8));
  }
  uVar15 = FUN_180039f70(param_1,uVar46,0,local_220);
  lVar41 = local_270;
  if ((*(uint *)(local_270 + 0x3694) & 1) != 0) {
    FUN_18001eff8(param_1 + 0x7670,param_1 + 0xb670,1);
    *(undefined8 *)(param_1 + 0x6a60) = *(undefined8 *)(param_1 + 0xb670);
    *(undefined8 *)(param_1 + 0x6a68) = *(undefined8 *)(lVar18 + 0x3678);
    *(undefined8 *)(param_1 + 0x6a70) = *(undefined8 *)(lVar18 + 0x3680);
    *(undefined8 *)(param_1 + 0x6a78) = *(undefined8 *)(lVar18 + 0x3688);
    *(undefined8 *)(param_1 + 0x6a80) = *(undefined8 *)(lVar18 + 0x3690);
    *(undefined8 *)(param_1 + 0x6a88) = *(undefined8 *)(lVar18 + 0x3698);
    *(undefined8 *)(param_1 + 0x6a90) = *(undefined8 *)(lVar18 + 0x36a0);
    *(undefined8 *)(param_1 + 0x6a98) = *(undefined8 *)(lVar18 + 0x36a8);
    *(uint *)(lVar41 + 0x3694) = *(uint *)(lVar41 + 0x3694) & 0xfffffffe;
  }
  bVar10 = param_1 != uVar34;
  uVar45 = (uint)bVar10;
  cVar13 = *(char *)(lVar24 + 0x691);
  bVar12 = *(byte *)(param_1 + 0x10193) | bVar10;
  *(byte *)(param_1 + 0x10193) = bVar12;
  if ((cVar13 != '\0') || (uVar48 = 1, bVar12 != 0)) {
    uVar48 = 1;
    local_280[0] = *(uint *)(param_1 + 0x10158) | *(uint *)(param_1 + 0x10130) |
                   *(uint *)(param_1 + 0x10108);
    if ((local_280[0] & 1) != 0) {
      local_230 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x7728),param_1 + 0x6930,0xc20);
      bVar12 = *(byte *)(lVar24 + 0x691);
      bVar11 = local_230 == 0;
      *(ulonglong *)(lVar18 + 0x7988) = local_230;
      uVar48 = (uint)!bVar11;
      *(byte *)(lVar24 + 0x691) = bVar12 & bVar11;
      *(byte *)(param_1 + 0x10193) = *(byte *)(param_1 + 0x10193) & bVar11;
      if ((local_230 != 0) &&
         (lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
         local_230 != *(ulonglong *)(lVar41 + 0x68))) {
        iVar22 = *(int *)(lVar41 + 0x67c);
        *(int *)(lVar41 + 0x67c) = iVar22 + 1;
        if ((iVar22 == 0) &&
           ((*(longlong *)(lVar41 + 0xb10) != 0 && (*(int *)(lVar41 + 0xba8) != 0)))) {
          local_280[0] = (uint)!bVar11;
          uVar46 = 0;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar41 + 0xba0) + uVar46 * 8))();
            uVar36 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar36;
            uVar48 = local_280[0];
          } while (uVar36 < *(uint *)(lVar41 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x130))(*(longlong **)(lVar41 + 0x688),0);
        *(ulonglong *)(lVar41 + 0x68) = local_230;
      }
    }
  }
  uVar48 = uVar48 & uVar15 & 0xff;
  if (param_1 != uVar34) {
    lVar54 = *(longlong *)(lVar18 + 0x7990);
    lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
    if (lVar54 != *(longlong *)(lVar41 + 0x70)) {
      FUN_1800e80d8(lVar41);
      (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x130))
                (*(longlong **)(lVar41 + 0x688),1,lVar54);
      *(longlong *)(lVar41 + 0x70) = lVar54;
    }
  }
  uVar15 = 1;
  *(byte *)(param_1 + 0x10195) = *(byte *)(param_1 + 0x10195) | bVar10;
  if ((*(uint *)(local_278 + 0x2940) & 0xf800) != 0) {
    lVar41 = param_1 + 0x10000;
    if (*(char *)(lVar24 + 0x692) != '\0') {
      local_1d0 = CONCAT44(local_1d0._4_4_,uVar48);
      local_280[0] = (uint)bVar10;
      uVar46 = 0;
      local_218 = lVar24;
      local_230 = uVar34;
      local_228 = lVar20;
      local_240 = lVar18;
      local_238 = param_1 + 0x10000;
      do {
        puVar1 = (uint *)(param_1 + 0xf694 + uVar46 * 4);
        uVar15 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        lVar18 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
        if ((1 - ((uint)lVar18 >> 5) & 0xff) != 0) {
          do {
            uVar15 = (uint)lVar18;
            iVar22 = uVar15 + (int)uVar46 * 0x20;
            *(byte *)((longlong)puVar1 + (longlong)((int)uVar15 >> 3)) =
                 *(byte *)((longlong)puVar1 + (longlong)((int)uVar15 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
            if (0xff < iVar22) break;
            FUN_18001eff8(param_1 + 0x7670 + (longlong)iVar22 * 0x40,
                          param_1 + 0xb670 + (longlong)iVar22 * 0x40,1);
            uVar15 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
            uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
            lVar18 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
          } while ((1 - ((uint)lVar18 >> 5) & 0xff) != 0);
        }
        uVar15 = (int)uVar46 + 1;
        uVar46 = (ulonglong)uVar15;
      } while (uVar15 < 8);
      lVar18 = local_240;
      lVar24 = local_218;
      uVar34 = local_230;
      lVar41 = local_238;
      lVar20 = local_228;
      uVar48 = (uint)local_1d0;
      uVar45 = local_280[0];
    }
    if ((*(char *)(lVar24 + 0x692) != '\0') || (uVar15 = 1, *(char *)(lVar41 + 0x195) != '\0')) {
      lVar54 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x7738),param_1 + 0x7670,0x8000);
      bVar12 = *(byte *)(lVar41 + 0x195);
      bVar10 = lVar54 == 0;
      *(longlong *)(lVar18 + 0x7998) = lVar54;
      *(bool *)(lVar24 + 0x692) = bVar10;
      uVar15 = (uint)!bVar10;
      *(byte *)(lVar41 + 0x195) = bVar12 & bVar10;
      if ((lVar54 != 0) &&
         (lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
         lVar54 != *(longlong *)(lVar41 + 0x78))) {
        iVar22 = *(int *)(lVar41 + 0x67c);
        *(int *)(lVar41 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar41 + 0xb10) != 0)) &&
           (*(int *)(lVar41 + 0xba8) != 0)) {
          local_280[0] = (uint)!bVar10;
          uVar46 = 0;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar41 + 0xba0) + uVar46 * 8))();
            uVar36 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar36;
            uVar15 = local_280[0];
          } while (uVar36 < *(uint *)(lVar41 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x130))
                  (*(longlong **)(lVar41 + 0x688),2,lVar54);
        *(longlong *)(lVar41 + 0x78) = lVar54;
      }
    }
  }
  cVar13 = *(char *)(lVar24 + 0x6c3);
  uVar36 = *(byte *)(param_1 + 0x10194) | uVar45;
  *(char *)(param_1 + 0x10194) = (char)uVar36;
  if ((cVar13 != '\0') || (uVar49 = 1, uVar36 != 0)) {
    uVar49 = 1;
    local_280[0] = *(uint *)(param_1 + 0x10158);
    if (((byte)local_280[0] >> 3 & 1) != 0) {
      lVar41 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x7740),param_1 + 0x6460,0x4d0);
      bVar12 = *(byte *)(lVar24 + 0x6c3);
      bVar10 = lVar41 == 0;
      *(longlong *)(lVar18 + 0x79b8) = lVar41;
      uVar49 = (uint)!bVar10;
      *(byte *)(lVar24 + 0x6c3) = bVar12 & bVar10;
      *(byte *)(param_1 + 0x10194) = *(byte *)(param_1 + 0x10194) & bVar10;
      if ((lVar41 != 0) &&
         (lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
         lVar41 != *(longlong *)(lVar54 + 0x90))) {
        iVar22 = *(int *)(lVar54 + 0x67c);
        *(int *)(lVar54 + 0x67c) = iVar22 + 1;
        if ((iVar22 == 0) &&
           ((*(longlong *)(lVar54 + 0xb10) != 0 && (*(int *)(lVar54 + 0xba8) != 0)))) {
          local_280[0] = (uint)!bVar10;
          uVar46 = 0;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
            uVar36 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar36;
            uVar49 = local_280[0];
          } while (uVar36 < *(uint *)(lVar54 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x130))
                  (*(longlong **)(lVar54 + 0x688),5,lVar41);
        *(longlong *)(lVar54 + 0x90) = lVar41;
      }
    }
  }
  cVar13 = *(char *)(lVar24 + 0x6b6);
  uVar36 = *(byte *)(param_1 + 0x10196) | uVar45;
  *(char *)(param_1 + 0x10196) = (char)uVar36;
  if (((cVar13 != '\0') || (uVar50 = 1, uVar36 != 0)) &&
     (uVar50 = 1, (*(uint *)(param_1 + 0x10158) >> 4 & 1) != 0)) {
    lVar41 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x77f8),param_1 + 0x54a0,0xec0);
    bVar12 = *(byte *)(lVar24 + 0x6b6);
    bVar10 = lVar41 == 0;
    *(longlong *)(lVar18 + 0x79c0) = lVar41;
    uVar50 = (uint)!bVar10;
    *(byte *)(lVar24 + 0x6b6) = bVar12 & bVar10;
    *(byte *)(param_1 + 0x10196) = *(byte *)(param_1 + 0x10196) & bVar10;
    if ((lVar41 != 0) &&
       (lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
       lVar41 != *(longlong *)(lVar54 + 0x98))) {
      iVar22 = *(int *)(lVar54 + 0x67c);
      *(int *)(lVar54 + 0x67c) = iVar22 + 1;
      if ((iVar22 == 0) && ((*(longlong *)(lVar54 + 0xb10) != 0 && (*(int *)(lVar54 + 0xba8) != 0)))
         ) {
        local_280[0] = (uint)!bVar10;
        uVar46 = 0;
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
          uVar36 = (int)uVar46 + 1;
          uVar46 = (ulonglong)uVar36;
          uVar50 = local_280[0];
        } while (uVar36 < *(uint *)(lVar54 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x130))
                (*(longlong **)(lVar54 + 0x688),6,lVar41);
      *(longlong *)(lVar54 + 0x98) = lVar41;
    }
  }
  cVar13 = *(char *)(lVar24 + 0x6b4);
  uVar36 = *(byte *)(param_1 + 0x10197) | uVar45;
  *(char *)(param_1 + 0x10197) = (char)uVar36;
  if (((cVar13 != '\0') || (uVar51 = 1, uVar36 != 0)) &&
     (uVar51 = 1, ((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) >> 3 & 1) != 0)) {
    lVar41 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x77e8),param_1 + 0x51b0,0x2f0);
    bVar12 = *(byte *)(lVar24 + 0x6b4);
    bVar10 = lVar41 == 0;
    *(longlong *)(lVar18 + 0x79a0) = lVar41;
    uVar51 = (uint)!bVar10;
    *(byte *)(lVar24 + 0x6b4) = bVar12 & bVar10;
    *(byte *)(param_1 + 0x10197) = *(byte *)(param_1 + 0x10197) & bVar10;
    if ((lVar41 != 0) &&
       (lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
       lVar41 != *(longlong *)(lVar54 + 0x80))) {
      iVar22 = *(int *)(lVar54 + 0x67c);
      *(int *)(lVar54 + 0x67c) = iVar22 + 1;
      if ((iVar22 == 0) && ((*(longlong *)(lVar54 + 0xb10) != 0 && (*(int *)(lVar54 + 0xba8) != 0)))
         ) {
        local_280[0] = (uint)!bVar10;
        uVar46 = 0;
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
          uVar36 = (int)uVar46 + 1;
          uVar46 = (ulonglong)uVar36;
          uVar51 = local_280[0];
        } while (uVar36 < *(uint *)(lVar54 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x130))
                (*(longlong **)(lVar54 + 0x688),3,lVar41);
      *(longlong *)(lVar54 + 0x80) = lVar41;
    }
  }
  cVar13 = *(char *)(lVar24 + 0x6b5);
  uVar36 = *(byte *)(param_1 + 0x10198) | uVar45;
  *(char *)(param_1 + 0x10198) = (char)uVar36;
  if (((cVar13 != '\0') || (uVar42 = 1, uVar36 != 0)) &&
     (uVar42 = 1, ((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) >> 4 & 1) != 0)) {
    lVar41 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x77f0),param_1 + 0x1070,
                           *(undefined4 *)(param_1 + 0xa4));
    *(longlong *)(param_1 + 0xf9a8) = lVar41;
    bVar10 = lVar41 == 0;
    uVar42 = (uint)!bVar10;
    *(byte *)(lVar24 + 0x6b5) = *(byte *)(lVar24 + 0x6b5) & bVar10;
    *(byte *)(param_1 + 0x10198) = *(byte *)(param_1 + 0x10198) & bVar10;
    if (lVar41 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) == '\0') {
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0x88)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (*(int *)(lVar54 + 0xba8) != 0)) {
            local_280[0] = (uint)!bVar10;
            uVar46 = 0;
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar36 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar36;
              uVar42 = local_280[0];
            } while (uVar36 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x130))
                    (*(longlong **)(lVar54 + 0x688),4,lVar41);
          *(longlong *)(lVar54 + 0x88) = lVar41;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1018e) = 1;
      }
    }
  }
  cVar13 = *(char *)(lVar24 + 0x6b7);
  uVar36 = *(byte *)(param_1 + 0x10199) | uVar45;
  *(char *)(param_1 + 0x10199) = (char)uVar36;
  if (((cVar13 != '\0') || (uVar52 = 1, uVar36 != 0)) &&
     (uVar52 = 1, (*(uint *)(param_1 + 0x10158) >> 5 & 1) != 0)) {
    lVar41 = FUN_180038c50(param_1,*(undefined8 *)(lVar18 + 0x7800),param_1 + 0x6360,0x100);
    bVar12 = *(byte *)(lVar24 + 0x6b7);
    bVar10 = lVar41 == 0;
    *(longlong *)(lVar18 + 0x79c8) = lVar41;
    uVar52 = (uint)!bVar10;
    *(byte *)(lVar24 + 0x6b7) = bVar12 & bVar10;
    *(byte *)(param_1 + 0x10199) = *(byte *)(param_1 + 0x10199) & bVar10;
    if ((lVar41 != 0) &&
       (lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
       lVar41 != *(longlong *)(lVar54 + 0xa0))) {
      iVar22 = *(int *)(lVar54 + 0x67c);
      *(int *)(lVar54 + 0x67c) = iVar22 + 1;
      if ((iVar22 == 0) && ((*(longlong *)(lVar54 + 0xb10) != 0 && (*(int *)(lVar54 + 0xba8) != 0)))
         ) {
        local_280[0] = (uint)!bVar10;
        uVar46 = 0;
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
          uVar36 = (int)uVar46 + 1;
          uVar46 = (ulonglong)uVar36;
          uVar52 = local_280[0];
        } while (uVar36 < *(uint *)(lVar54 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x130))
                (*(longlong **)(lVar54 + 0x688),7,lVar41);
      *(longlong *)(lVar54 + 0xa0) = lVar41;
    }
  }
  uVar36 = (uint)(byte)(*(byte *)(param_1 + 0x1018c) | *(byte *)(lVar24 + 0x6c0) |
                       *(byte *)(lVar24 + 0x689));
  uVar6 = uVar36 | uVar45;
  lVar41 = 0x10150;
  bVar12 = (byte)uVar6;
  *(byte *)(param_1 + 0x1018c) = bVar12;
  if (*(int *)(param_1 + 0x10128) != 0) {
    lVar41 = 0x10128;
  }
  uVar4 = *(uint *)(param_1 + lVar41);
  if (*(char *)(lVar20 + 0x662) == '\0') {
    uVar53 = *(int *)(param_1 + 0x10178) + uVar4;
  }
  else {
    uVar53 = (uint)(*(longlong *)(param_1 + 0xfcb8) != 0);
  }
  uVar2 = uVar53;
  if (uVar36 == 0 && (uVar45 & 0xff) == 0) {
    uVar2 = 0;
  }
  uVar46 = (ulonglong)uVar2;
  if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) != '\0') {
    if ((param_1 == uVar34) ||
       (((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) >> 4 & 1) == 0)) {
      bVar14 = 0;
    }
    else {
      bVar14 = 1;
    }
    lVar41 = *(longlong *)(param_1 + 0xf700);
    bVar5 = *(byte *)(param_1 + 0x1018e);
    bVar14 = bVar5 | bVar14;
    *(byte *)(param_1 + 0x1018e) = bVar14;
    if (bVar14 != 0) {
      uVar2 = uVar2 + 1;
    }
    uVar46 = (ulonglong)uVar2;
    if ((*(uint *)(lVar41 + 0x34) <
         *(int *)(*(longlong *)(lVar41 + 0x18) + (ulonglong)*(uint *)(lVar41 + 0x28) * 0x30 + 0x18)
         + uVar2) && ((uVar6 == 0 || (bVar14 == 0)))) {
      *(byte *)(param_1 + 0x1018c) = bVar12 | 1;
      *(byte *)(param_1 + 0x1018e) = bVar5 | 1;
      uVar46 = (ulonglong)(uVar53 + 1);
    }
  }
  uVar45 = 1;
  if ((int)uVar46 == 0) {
LAB_18003b8d4:
    if (*(char *)(param_1 + 0x1018e) == '\0') {
    }
    else {
      local_260 = *(longlong *)(param_1 + 0xf9a8);
      uStack_258 = CONCAT44(uStack_258._4_4_,*(int *)(param_1 + 0xa4) + 0xff) & 0xffffffffffffff00;
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0x88))
                ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),&local_260);
      *(longlong *)(param_1 + 0xf9b0) = local_210;
      local_210 = local_210 + (local_1f8 & 0xffffffff);
      lStack_208 = lStack_208 + (local_1f8 & 0xffffffff);
      *(undefined1 *)(param_1 + 0x1019a) = 1;
      uVar46 = extraout_x1_00;
    }
    if ((*(char *)(param_1 + 0x1018c) != '\0') && (uVar53 != 0)) {
      if (*(char *)(lVar20 + 0x662) == '\0') {
        uVar36 = *(uint *)(param_1 + 0x10178);
        iVar22 = (int)local_1f8;
        if (uVar36 != 0) {
          local_280[0] = uVar36;
          (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                    ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&lStack_208,local_280,uVar36,
                     param_1 + 0xfa98,&DAT_180234300,0);
          uVar46 = extraout_x1_01;
          iVar22 = (int)local_1f8;
        }
        *(longlong *)(param_1 + 0xf9d0) = local_210;
        if (uVar4 != 0) {
          uVar36 = *(int *)(param_1 + 0x10178) * iVar22;
          local_210 = local_210 + (ulonglong)uVar36;
          lStack_208 = lStack_208 + (ulonglong)uVar36;
          local_280[0] = uVar4;
          (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                    ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&lStack_208,local_280,uVar4,
                     param_1 + 0xfbd8,&DAT_180234300,0);
          uVar46 = extraout_x1_02;
        }
        *(longlong *)(param_1 + 0xf9e8) = local_210;
      }
      else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xc0))
                  ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,lStack_208,
                   *(undefined8 *)(lVar18 + 0x7b18),0);
        *(longlong *)(param_1 + 0xf9d0) = local_210;
        uVar46 = extraout_x1_03;
      }
    }
  }
  else {
    bVar12 = FUN_1800f2c40(*(undefined8 *)(param_1 + 0xf700),uVar46,
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1500) + 0x18),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508) + 0xb78),
                           &local_210);
    uVar45 = (uint)bVar12;
    uVar46 = extraout_x1;
    if (bVar12 != 0) {
      lVar41 = *(longlong *)(param_1 + 0xff18);
      *(longlong *)(param_1 + 0xff18) = local_200;
      bVar10 = local_200 != lVar41;
      *(byte *)(param_1 + 0x1018a) = *(byte *)(param_1 + 0x1018a) | bVar10;
      *(byte *)(param_1 + 0x1018d) = *(byte *)(param_1 + 0x1018d) | bVar10;
      uVar45 = (uint)bVar12;
      if (bVar10 && uVar53 == 0) {
        *(longlong *)(param_1 + 0xf9d0) = local_210;
        *(longlong *)(param_1 + 0xf9e8) = local_210;
      }
      goto LAB_18003b8d4;
    }
  }
  bVar12 = (byte)uVar45 ^ 1;
  uVar45 = uVar45 & uVar42 & uVar51 & uVar50 & uVar49 & uVar48 & uVar15 & uVar52;
  *(byte *)(lVar24 + 0x689) = *(byte *)(lVar24 + 0x689) & bVar12;
  *(byte *)(lVar24 + 0x6c0) = *(byte *)(lVar24 + 0x6c0) & bVar12;
  if (*(char *)(lVar20 + 0x662) == '\0') {
    uVar15 = FUN_18003a400(param_1,local_220);
    uVar46 = extraout_x1_04;
    uVar45 = uVar15 & 0xff & uVar45;
  }
  local_280[0] = uVar45;
  if (*(char *)(param_1 + 0x1018a) != '\0' || param_1 != uVar34) {
    if (*(char *)(lVar20 + 0x662) == '\0') {
      bVar12 = *(longlong *)(param_1 + 0xff18) != 0 | (*(longlong *)(lVar18 + 0x7f20) != 0) << 1;
      uVar19 = *(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (bVar12 == 0) {
        lVar41 = 0;
        uVar21 = 0;
      }
      else if (bVar12 == 1) {
        lVar41 = param_1 + 0xff18;
        uVar21 = 1;
      }
      else if (bVar12 == 2) {
        lVar41 = param_1 + 0xff20;
        uVar21 = 1;
      }
      else {
        lVar41 = param_1 + 0xff18;
        uVar21 = 2;
      }
LAB_18003bb50:
      FUN_1800e96c8(uVar19,uVar21,lVar41);
      uVar46 = extraout_x1_05;
    }
    else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
      lVar41 = param_1 + 0xff18;
      uVar21 = 1;
      uVar19 = *(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      goto LAB_18003bb50;
    }
    *(undefined1 *)(param_1 + 0x1018a) = 0;
  }
  if (*(char *)(param_1 + 0x1018e) != '\0') {
    if (*(char *)(param_1 + 0x1019a) != '\0') {
      lVar41 = *(longlong *)(param_1 + 0xf9b0);
      lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (lVar41 != *(longlong *)(lVar54 + 0x88)) {
        iVar22 = *(int *)(lVar54 + 0x67c);
        *(int *)(lVar54 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
           (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar54 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                  (*(longlong **)(lVar54 + 0x688),4,lVar41);
        *(longlong *)(lVar54 + 0x88) = lVar41;
        *(undefined1 *)(lVar54 + 0x674) = 1;
        uVar46 = extraout_x1_06;
      }
    }
    *(undefined1 *)(param_1 + 0x1018e) = 0;
  }
  if (*(char *)(param_1 + 0x1018c) != '\0') {
    if (*(char *)(lVar20 + 0x662) == '\0') {
      if ((*(int *)(param_1 + 0x1016c) != 0) || (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9d0);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xa8)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),8,lVar41);
          *(longlong *)(lVar54 + 0xa8) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_07;
        }
      }
      pcVar47 = (char *)(param_1 + 0x1018d);
      if ((*(int *)(param_1 + 0x10170) != 0) || (*pcVar47 != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9d0);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xb0)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),9,lVar41);
          *(longlong *)(lVar54 + 0xb0) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_08;
        }
      }
      if ((*(int *)(param_1 + 0x10174) != 0) || (*pcVar47 != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9d0);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xb8)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),10,lVar41);
          *(longlong *)(lVar54 + 0xb8) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_09;
        }
      }
      *(undefined4 *)(local_270 + 0x3680) = 0;
      if (((*(int *)(param_1 + 0x1011c) != 0) || (*(int *)(param_1 + 0x10144) != 0)) ||
         (*pcVar47 != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9e8);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xd0)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),0xd,lVar41);
          *(longlong *)(lVar54 + 0xd0) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_10;
        }
      }
      if (((*(int *)(param_1 + 0x10120) != 0) || (*(int *)(param_1 + 0x10148) != 0)) ||
         (*pcVar47 != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9e8);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xd8)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),0xe,lVar41);
          *(longlong *)(lVar54 + 0xd8) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_11;
        }
      }
      if (((*(int *)(param_1 + 0x10124) != 0) || (*(int *)(param_1 + 0x1014c) != 0)) ||
         (*pcVar47 != '\0')) {
        lVar41 = *(longlong *)(param_1 + 0xf9e8);
        lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
        if (lVar41 != *(longlong *)(lVar54 + 0xe0)) {
          iVar22 = *(int *)(lVar54 + 0x67c);
          *(int *)(lVar54 + 0x67c) = iVar22 + 1;
          if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
             (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
              uVar15 = (int)uVar46 + 1;
              uVar46 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(lVar54 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                    (*(longlong **)(lVar54 + 0x688),0xf,lVar41);
          *(longlong *)(lVar54 + 0xe0) = lVar41;
          *(undefined1 *)(lVar54 + 0x674) = 1;
          uVar46 = extraout_x1_12;
        }
      }
      *pcVar47 = '\0';
      *(undefined4 *)(local_270 + 0x36b8) = 0;
    }
    else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
      lVar41 = *(longlong *)(param_1 + 0xf9d0);
      lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (lVar41 != *(longlong *)(lVar54 + 0xa8)) {
        iVar22 = *(int *)(lVar54 + 0x67c);
        *(int *)(lVar54 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
           (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar54 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                  (*(longlong **)(lVar54 + 0x688),8,lVar41);
        *(longlong *)(lVar54 + 0xa8) = lVar41;
        *(undefined1 *)(lVar54 + 0x674) = 1;
        uVar46 = extraout_x1_13;
      }
    }
    *(undefined1 *)(param_1 + 0x1018c) = 0;
  }
  if ((*(char *)(param_1 + 0x10192) != '\0' || param_1 != uVar34) &&
     (*(char *)(lVar20 + 0x662) == '\0')) {
    if ((*(int *)(param_1 + 0x10160) != 0) || (*(char *)(param_1 + 0x10191) != '\0')) {
      lVar41 = *(longlong *)(param_1 + 0xf9d8);
      lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (lVar41 != *(longlong *)(lVar54 + 0xc0)) {
        iVar22 = *(int *)(lVar54 + 0x67c);
        *(int *)(lVar54 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
           (*(int *)(lVar54 + 0xba8) != 0)) {
          uVar46 = 0;
          local_238 = lVar41;
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
            lVar41 = local_238;
          } while (uVar15 < *(uint *)(lVar54 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x100))
                  (*(longlong **)(lVar54 + 0x688),0xb,lVar41);
        *(longlong *)(lVar54 + 0xc0) = lVar41;
        *(undefined1 *)(lVar54 + 0x674) = 1;
        uVar46 = extraout_x1_14;
      }
    }
    if ((*(int *)(param_1 + 0x10164) != 0) || (*(char *)(param_1 + 0x10191) != '\0')) {
      lVar54 = *(longlong *)(param_1 + 0xf9d8);
      lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (lVar54 != *(longlong *)(lVar41 + 200)) {
        iVar22 = *(int *)(lVar41 + 0x67c);
        *(int *)(lVar41 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar41 + 0xb10) != 0)) &&
           (uVar46 = 0, *(int *)(lVar41 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar41 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar41 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x100))
                  (*(longlong **)(lVar41 + 0x688),0xc,lVar54);
        *(longlong *)(lVar41 + 200) = lVar54;
        *(undefined1 *)(lVar41 + 0x674) = 1;
        uVar46 = extraout_x1_15;
      }
    }
    if ((*(int *)(param_1 + 0x10110) != 0) || (*(int *)(param_1 + 0x10138) != 0)) {
      lVar54 = *(longlong *)(lVar18 + 0x79f0);
      lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (lVar54 != *(longlong *)(lVar41 + 0xe8)) {
        iVar22 = *(int *)(lVar41 + 0x67c);
        *(int *)(lVar41 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar41 + 0xb10) != 0)) &&
           (uVar46 = 0, *(int *)(lVar41 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar41 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar41 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x100))
                  (*(longlong **)(lVar41 + 0x688),0x10,lVar54);
        *(longlong *)(lVar41 + 0xe8) = lVar54;
        *(undefined1 *)(lVar41 + 0x674) = 1;
        uVar46 = extraout_x1_16;
      }
    }
    *(undefined1 *)(param_1 + 0x10192) = 0;
    *(char *)(param_1 + 0x10191) = '\0';
  }
  if (*(char *)(lVar24 + 0x68a) != '\0' || param_1 != uVar34) {
    plVar37 = (longlong *)(param_1 + 0xfcb0);
    if (*(longlong *)(param_1 + 0xfcb0) == 0) {
      plVar37 = (longlong *)0x0;
    }
    uVar45 = (uint)LZCOUNT((uint)*(byte *)(param_1 + 0x10185));
    cVar13 = *(char *)(param_1 + 0x765d);
    uVar15 = 0;
    if ((1 - (uVar45 >> 5) & 0xff) != 0) {
      uVar15 = 0x20 - uVar45;
    }
    lVar41 = 0xfc80;
    if (cVar13 == '\0') {
      lVar41 = 0xfba0;
    }
    lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
    plVar44 = plVar37;
    if (uVar15 == 0) {
      bVar10 = *(longlong *)(lVar54 + 0x4d8) == 0;
      if (!bVar10) {
        *(undefined8 *)(lVar54 + 0x4d8) = 0;
      }
      lVar35 = *(longlong *)(lVar54 + 0x4e0);
LAB_18003c4c8:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x4e0) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x4e8);
LAB_18003c4dc:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x4e8) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x4f0);
LAB_18003c4f0:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x4f0) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x4f8);
LAB_18003c504:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x4f8) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x500);
LAB_18003c518:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x500) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x508);
LAB_18003c52c:
      if (lVar35 != 0) {
        *(undefined8 *)(lVar54 + 0x508) = 0;
        bVar10 = false;
      }
      lVar35 = *(longlong *)(lVar54 + 0x510);
LAB_18003c540:
      if (lVar35 != 0) {
        if (plVar37 == (longlong *)0x0) {
          plVar44 = &DAT_180258b88;
        }
        *(undefined8 *)(lVar54 + 0x510) = 0;
        goto LAB_18003c580;
      }
LAB_18003c55c:
      if (plVar37 == (longlong *)0x0) {
        plVar44 = &DAT_180258b88;
      }
      if ((!bVar10) || (*plVar44 != *(longlong *)(lVar54 + 0x518))) goto LAB_18003c580;
    }
    else {
      bVar10 = *(longlong *)(lVar54 + 0x4d8) == *(longlong *)(lVar41 + param_1);
      if (!bVar10) {
        *(longlong *)(lVar54 + 0x4d8) = *(longlong *)(lVar41 + param_1);
      }
      lVar35 = *(longlong *)(lVar54 + 0x4e0);
      if (uVar15 < 2) goto LAB_18003c4c8;
      lVar32 = 0xfc88;
      if (cVar13 == '\0') {
        lVar32 = 0xfba8;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x4e0) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x4e8);
      if (uVar15 < 3) goto LAB_18003c4dc;
      lVar32 = 0xfc90;
      if (cVar13 == '\0') {
        lVar32 = 0xfbb0;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x4e8) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x4f0);
      if (uVar15 < 4) goto LAB_18003c4f0;
      lVar32 = 0xfc98;
      if (cVar13 == '\0') {
        lVar32 = 0xfbb8;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x4f0) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x4f8);
      if (uVar15 < 5) goto LAB_18003c504;
      lVar32 = 0xfca0;
      if (cVar13 == '\0') {
        lVar32 = 0xfbc0;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x4f8) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x500);
      if (uVar15 < 6) goto LAB_18003c518;
      lVar32 = 0xfca8;
      if (cVar13 == '\0') {
        lVar32 = 0xfbc8;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x500) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x508);
      if (uVar15 < 7) goto LAB_18003c52c;
      lVar32 = 0xfcb0;
      if (cVar13 == '\0') {
        lVar32 = 0xfbd0;
      }
      lVar32 = *(longlong *)(param_1 + lVar32);
      if (lVar35 != lVar32) {
        *(longlong *)(lVar54 + 0x508) = lVar32;
      }
      bVar10 = lVar35 == lVar32 && bVar10;
      lVar35 = *(longlong *)(lVar54 + 0x510);
      if (uVar15 < 8) goto LAB_18003c540;
      lVar32 = 0xfcb8;
      if (cVar13 == '\0') {
        lVar32 = 0xfbd8;
      }
      if (lVar35 == *(longlong *)(param_1 + lVar32)) goto LAB_18003c55c;
      if (plVar37 == (longlong *)0x0) {
        plVar44 = &DAT_180258b88;
      }
      *(longlong *)(lVar54 + 0x510) = *(longlong *)(param_1 + lVar32);
LAB_18003c580:
      iVar22 = *(int *)(lVar54 + 0x67c);
      *(int *)(lVar54 + 0x67c) = iVar22 + 1;
      if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
         (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
        do {
          local_238 = lVar41;
          (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
          uVar45 = (int)uVar46 + 1;
          uVar46 = (ulonglong)uVar45;
          lVar41 = local_238;
        } while (uVar45 < *(uint *)(lVar54 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar54 + 0x688) + 0x170))
                (*(longlong **)(lVar54 + 0x688),uVar15,lVar41 + param_1,0,plVar37);
      *(longlong *)(lVar54 + 0x518) = *plVar44;
      *(undefined1 *)(lVar54 + 0x674) = 1;
    }
    *(uint *)(local_270 + 0x3950) = uVar15;
    plVar37 = *(longlong **)(param_1 + 0xfcc0);
    if (plVar37 == (longlong *)0x0) {
      plVar37 = *(longlong **)(param_1 + 0xfce0);
    }
    uVar16 = (**(code **)(*plVar37 + 0x50))();
    *(undefined1 *)(lVar24 + 0x68a) = 0;
    *(undefined4 *)(local_270 + 0x3978) = uVar16;
    *(undefined4 *)(local_270 + 0x397c) = 0;
    *(undefined1 *)(param_1 + 0xf6c4) = 1;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    uVar46 = extraout_x1_17;
  }
  lVar41 = param_1 + 0x10000;
  if (*(char *)(lVar24 + 0x68b) != '\0') {
    if (*(char *)(lVar20 + 0x662) == '\0') {
      if ((*(longlong **)(param_1 + 0xfce0) == (longlong *)0x0) ||
         (cVar13 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x88))(), cVar13 == '\0')) {
        puVar38 = (undefined8 *)(param_1 + 0x7e4);
      }
      else if (*(char *)(param_1 + 0x766a) == '\0') {
        puVar38 = (undefined8 *)(param_1 + 0x7b0);
      }
      else {
        puVar38 = (undefined8 *)(param_1 + 0xb80);
      }
      lStack_208 = puVar38[1];
      local_1f8 = puVar38[3];
      local_200 = puVar38[2];
      uVar21 = puVar38[5];
      uVar19 = puVar38[4];
      local_1e0 = *(undefined4 *)(puVar38 + 6);
      local_210._0_4_ = (undefined4)*puVar38;
      uVar16 = 0;
      if (*(longlong *)(param_1 + 0xfce0) != 0) {
        uVar16 = (undefined4)local_210;
      }
      local_210 = CONCAT44((int)((ulonglong)*puVar38 >> 0x20),uVar16);
    }
    else {
      lStack_208 = *(longlong *)(param_1 + 0xbbc);
      local_210 = *(longlong *)(param_1 + 0xbb4);
      local_1f8 = *(ulonglong *)(param_1 + 0xbcc);
      local_200 = *(longlong *)(param_1 + 0xbc4);
      uVar21 = *(undefined8 *)(param_1 + 0xbdc);
      uVar19 = *(undefined8 *)(param_1 + 0xbd4);
      local_1e0 = *(undefined4 *)(param_1 + 0xbe4);
    }
    piVar26 = *(int **)(param_1 + 0xf938);
    uStack_1e8 = (undefined4)uVar21;
    uStack_1e4 = (undefined4)((ulonglong)uVar21 >> 0x20);
    local_1f0 = (undefined4)uVar19;
    uStack_1ec = (undefined4)((ulonglong)uVar19 >> 0x20);
    if ((piVar26 != (int *)0x0) && (*(longlong **)(param_1 + 0xfce0) != (longlong *)0x0)) {
      if ((*piVar26 == 0) || (piVar26[1] == 0)) {
        iVar22 = 0;
      }
      else {
        iVar22 = 1;
      }
      if ((*(int *)(param_1 + 0x7b0) == 0) || (*(int *)(param_1 + 0x7b4) == 0)) {
        iVar17 = 0;
      }
      else {
        iVar17 = 1;
      }
      if (iVar22 != iVar17) {
        uVar19 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x108))();
        FUN_1800395e0(param_1,uVar19);
        *(undefined1 *)(param_1 + 0x1018b) = 1;
      }
      lVar54 = 0xb8c;
      if (*(char *)(param_1 + 0x766a) == '\0') {
        lVar54 = 0x7bc;
      }
      if ((*(int *)(*(longlong *)(param_1 + 0xf938) + 0xc) != 0) !=
          (*(int *)(param_1 + lVar54) != 0)) {
        uVar19 = (**(code **)(**(longlong **)(param_1 + 0xfce0) + 0x108))();
        FUN_1800395e0(param_1,uVar19);
        *(undefined1 *)(param_1 + 0x1018b) = 1;
      }
    }
    auVar57 = FUN_180042050(*(longlong *)(lVar18 + 0x76e0) + 0x1960,&local_210);
    uVar46 = auVar57._8_8_;
    *(longlong *)(param_1 + 0xf938) = auVar57._0_8_;
    *(undefined1 *)(param_1 + 0x10189) = 1;
    *(undefined1 *)(param_1 + 0xf6c4) = 1;
  }
  if (*(char *)(lVar24 + 0x68b) != '\0' || param_1 != uVar34) {
    if ((*(longlong *)(param_1 + 0xf938) == 0) ||
       (*(int *)(*(longlong *)(param_1 + 0xf938) + 0xc) != 0)) {
      lVar35 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      lVar54 = 0x75a0;
      if (*(char *)(lVar20 + 0x662) != '\0') {
        lVar54 = 0x75a1;
      }
      bVar12 = *(byte *)(param_1 + lVar54);
      if ((uint)bVar12 != *(uint *)(lVar35 + 0x670)) {
        FUN_1800e80d8(lVar35);
        (**(code **)(**(longlong **)(lVar35 + 0x688) + 0xc0))
                  (*(longlong **)(lVar35 + 0x688),(uint)bVar12);
        *(uint *)(lVar35 + 0x670) = (uint)bVar12;
        uVar46 = extraout_x1_18;
      }
    }
    *(undefined1 *)(lVar24 + 0x68b) = 0;
  }
  if (*(char *)(lVar24 + 0x68c) != '\0') {
    lVar54 = 0;
    aiStack_1a8[2] = 0;
    aiStack_1a8[3] = 0;
    aiStack_1a8[0] = 0;
    aiStack_1a8[1] = 0;
    aiStack_1a8[6] = 0;
    aiStack_1a8[7] = 0;
    aiStack_1a8[4] = 0;
    aiStack_1a8[5] = 0;
    uStack_180 = 0;
    stack0xfffffffffffffe78 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    local_1b0 = CONCAT44(1,(uint)(*(int *)(param_1 + 0xe9c) == 1));
    local_240 = lVar18;
    local_238 = lVar41;
    local_230 = uVar34;
    local_218 = lVar24;
    do {
      plVar37 = *(longlong **)(param_1 + 0xfcc0 + lVar54 * 8);
      if (plVar37 != (longlong *)0x0) {
        if (*(char *)(lVar20 + 0x669) == '\0') {
          if (*(char *)(lVar20 + 0x662) == '\0') {
            cVar13 = (**(code **)(*plVar37 + 0x80))();
            lVar18 = 0xbe8;
            if (cVar13 == '\0') {
              lVar18 = 0xc68;
            }
            lVar18 = lVar18 + lVar54 * 0x20;
          }
          else {
            lVar18 = 0xde8;
          }
          iVar22 = *(int *)(lVar18 + param_1);
          lVar18 = lVar18 + param_1;
          aiStack_1a8[lVar54 * 10 + 8] = 0;
          aiStack_1a8[lVar54 * 10] = iVar22;
          iVar22 = *(int *)(lVar18 + 4);
          iVar17 = *(int *)(lVar18 + 8);
          aiStack_1a8[lVar54 * 10 + 1] = 0;
          aiStack_1a8[lVar54 * 10 + 2] = iVar22;
          iVar22 = *(int *)(lVar18 + 0xc);
          aiStack_1a8[lVar54 * 10 + 3] = iVar17;
          aiStack_1a8[lVar54 * 10 + 4] = iVar22;
          iVar22 = *(int *)(lVar18 + 0x10);
          aiStack_1a8[lVar54 * 10 + 6] = *(int *)(lVar18 + 0x14);
          iVar17 = *(int *)(lVar18 + 0x18);
          aiStack_1a8[lVar54 * 10 + 5] = iVar22;
          aiStack_1a8[lVar54 * 10 + 7] = iVar17;
          auStack_184[lVar54 * 0x28] = *(undefined1 *)(lVar18 + 0x1c);
        }
        else {
          if (*(char *)(lVar20 + 0x662) == '\0') {
            cVar13 = (**(code **)(*plVar37 + 0x80))();
            lVar18 = 0xce8;
            if (cVar13 == '\0') {
              lVar18 = 0xd68;
            }
            lVar18 = lVar18 + lVar54 * 0x20;
          }
          else {
            lVar18 = 0xde8;
          }
          piVar26 = (int *)(lVar18 + param_1);
          iVar22 = piVar26[1];
          aiStack_1a8[lVar54 * 10] = *piVar26;
          aiStack_1a8[lVar54 * 10 + 1] = 0;
          aiStack_1a8[lVar54 * 10 + 2] = iVar22;
          iVar22 = piVar26[3];
          aiStack_1a8[lVar54 * 10 + 3] = piVar26[2];
          aiStack_1a8[lVar54 * 10 + 4] = iVar22;
          iVar22 = piVar26[5];
          aiStack_1a8[lVar54 * 10 + 5] = piVar26[4];
          aiStack_1a8[lVar54 * 10 + 6] = iVar22;
          aiStack_1a8[lVar54 * 10 + 7] = piVar26[6];
          aiStack_1a8[lVar54 * 10 + 8] = 0;
          auStack_184[lVar54 * 0x28] = (char)piVar26[7];
        }
      }
      lVar24 = local_218;
      uVar34 = local_230;
      lVar41 = local_238;
      lVar18 = local_240;
      lVar54 = lVar54 + 1;
    } while (lVar54 != 4);
    auVar57 = FUN_180042390(*(longlong *)(local_240 + 0x76e0) + 0x1990,&local_1b0);
    uVar46 = auVar57._8_8_;
    *(longlong *)(lVar18 + 0x7920) = auVar57._0_8_;
    if (*(uint *)(param_1 + 0xe5c) < 2) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 0xe58);
    }
    *(undefined4 *)(local_270 + 0x3928) = uVar16;
    *(undefined1 *)(lVar41 + 0x189) = 1;
  }
  if (*(char *)(lVar24 + 0x68c) != '\0' || param_1 != uVar34) {
    lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
    if ((((*(int *)(param_1 + 0xe80) != *(int *)(lVar54 + 0x660)) ||
         (*(int *)(param_1 + 0xe84) != *(int *)(lVar54 + 0x664))) ||
        (*(int *)(param_1 + 0xe88) != *(int *)(lVar54 + 0x668))) ||
       (*(int *)(param_1 + 0xe8c) != *(int *)(lVar54 + 0x66c))) {
      *(undefined4 *)(lVar54 + 0x660) = *(undefined4 *)(param_1 + 0xe80);
      *(undefined4 *)(lVar54 + 0x664) = *(undefined4 *)(param_1 + 0xe84);
      *(undefined4 *)(lVar54 + 0x668) = *(undefined4 *)(param_1 + 0xe88);
      *(undefined4 *)(lVar54 + 0x66c) = *(undefined4 *)(param_1 + 0xe8c);
      FUN_1800e80d8(lVar54);
      (**(code **)(**(longlong **)(lVar54 + 0x688) + 0xb8))
                (*(longlong **)(lVar54 + 0x688),param_1 + 0xe80);
      uVar46 = extraout_x1_19;
    }
    *(undefined1 *)(lVar24 + 0x68c) = 0;
  }
  if (*(char *)(lVar24 + 0x68d) != '\0') {
    *(undefined4 *)(param_1 + 0xe3c) = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
    if (*(longlong *)(param_1 + 0xfce0) != 0) {
      if (*(uint *)(&DAT_180231470 +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xfce0) + 0x2c) * 4) == 0x20) {
        iVar22 = 0;
      }
      else {
        iVar22 = (int)((float)((1 << (ulonglong)
                                     (*(uint *)(&DAT_180231470 +
                                               (ulonglong)
                                               *(uint *)(*(longlong *)(param_1 + 0xfce0) + 0x2c) * 4
                                               ) & 0x1f)) + -1) * *(float *)(param_1 + 0xe90));
      }
      *(int *)(param_1 + 0xe3c) = iVar22;
      *(int *)(param_1 + 0xe14) = iVar22;
    }
    if (*(char *)(lVar20 + 0x662) == '\0') {
      lVar54 = 0xe30;
      if (*(char *)(lVar20 + 0x668) == '\0') {
        lVar54 = 0xe08;
      }
      plVar37 = (longlong *)(lVar54 + param_1);
    }
    else {
      plVar37 = (longlong *)&DAT_180249e48;
    }
    local_210 = *plVar37;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    iVar22 = *(int *)((longlong)plVar37 + 0x1c);
    local_200 = plVar37[2];
    lStack_208 = plVar37[1];
    local_1f0 = *(undefined4 *)((longlong)plVar37 + 0x24);
    local_1f8 = CONCAT44((int)plVar37[4],(int)plVar37[3]);
    *(byte *)(param_1 + 0xf6c1) = *(int *)(param_1 + 0xfca8) != iVar22 | *(byte *)(param_1 + 0xf6c1)
    ;
    *(int *)(param_1 + 0xfca8) = iVar22;
    auVar57 = FUN_180041d70(*(longlong *)(lVar18 + 0x76e0) + 0x19a8,&local_210);
    uVar46 = auVar57._8_8_;
    *(longlong *)(lVar18 + 0x7930) = auVar57._0_8_;
    *(undefined1 *)(lVar41 + 0x189) = 1;
    *(undefined1 *)(lVar24 + 0x68d) = 0;
  }
  if (*(char *)(lVar24 + 0x68e) == '\0' && param_1 == uVar34) goto LAB_18003cd80;
  if ((*(char *)(lVar20 + 0x662) == '\0') &&
     ((*(int *)(local_278 + 0x363c) != 0 || ((*(uint *)(local_278 + 0x3654) & 1) != 0)))) {
    local_260 = *(longlong *)(param_1 + 0xee0);
    uStack_258 = *(ulonglong *)(param_1 + 0xee8);
    local_250 = *(undefined8 *)(param_1 + 0xef0);
LAB_18003cc70:
    local_260 = CONCAT44(*(float *)(param_1 + 0xf14) + local_260._4_4_,
                         *(float *)(param_1 + 0xf10) + (float)local_260);
  }
  else {
    uStack_258 = *(ulonglong *)(param_1 + 0xf00);
    local_260 = *(longlong *)(param_1 + 0xef8);
    local_250 = *(undefined8 *)(param_1 + 0xf08);
    if (*(char *)(lVar20 + 0x662) == '\0') goto LAB_18003cc70;
  }
  if (*(int *)(local_278 + 0x363c) == 0) {
    local_250 = 0x3f80000000000000;
  }
  lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
  if (((*(int *)(lVar54 + 0x520) != (int)local_260) ||
      (*(int *)(lVar54 + 0x524) != (int)((ulonglong)local_260 >> 0x20))) ||
     ((*(int *)(lVar54 + 0x528) != (int)uStack_258 ||
      (((*(int *)(lVar54 + 0x52c) != (int)(uStack_258 >> 0x20) ||
        (*(int *)(lVar54 + 0x530) != (int)local_250)) ||
       (*(int *)(lVar54 + 0x534) != local_250._4_4_)))))) {
    *(ulonglong *)(lVar54 + 0x528) = uStack_258;
    *(longlong *)(lVar54 + 0x520) = local_260;
    *(undefined8 *)(lVar54 + 0x530) = local_250;
    iVar22 = *(int *)(lVar54 + 0x67c);
    *(int *)(lVar54 + 0x67c) = iVar22 + 1;
    if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
       (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
      do {
        (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
        uVar15 = (int)uVar46 + 1;
        uVar46 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)(lVar54 + 0xba8));
    }
    (**(code **)(**(longlong **)(lVar54 + 0x688) + 0xa8))
              (*(longlong **)(lVar54 + 0x688),1,&local_260);
    *(undefined1 *)(lVar54 + 0x674) = 1;
    uVar46 = extraout_x1_20;
  }
  *(undefined1 *)(lVar24 + 0x68e) = 0;
LAB_18003cd80:
  if ((*(char *)(lVar24 + 0x68d) != '\0') ||
     (*(char *)(param_1 + 0xf6c1) != '\0' || param_1 != uVar34)) {
    plVar37 = *(longlong **)(param_1 + 0xfcc0);
    if ((plVar37 == (longlong *)0x0) &&
       (plVar37 = *(longlong **)(param_1 + 0xfce0), plVar37 == (longlong *)0x0)) {
      fVar56 = 1.0;
      fVar55 = 1.0;
    }
    else {
      uVar15 = *(uint *)((longlong)plVar37 + 0x24);
      uVar48 = (**(code **)(*plVar37 + 0x40))(plVar37,0);
      uVar45 = *(uint *)(plVar37 + 5);
      fVar55 = (float)uVar48 / (float)uVar15;
      uVar15 = (**(code **)(*plVar37 + 0x48))(plVar37,0);
      fVar56 = (float)uVar15 / (float)uVar45;
    }
    *(int *)(param_1 + 0xe70) = (int)((float)*(int *)(param_1 + 0xe60) * fVar55);
    *(int *)(param_1 + 0xe74) = (int)((float)*(int *)(param_1 + 0xe64) * fVar56);
    *(int *)(param_1 + 0xe78) = (int)((float)*(int *)(param_1 + 0xe68) * fVar55);
    *(int *)(param_1 + 0xe7c) = (int)((float)*(int *)(param_1 + 0xe6c) * fVar56);
    if (*(int *)(param_1 + 0xfca8) == 0) {
      plVar37 = *(longlong **)(param_1 + 0xfcc0);
      if (plVar37 == (longlong *)0x0) {
        plVar37 = *(longlong **)(param_1 + 0xfce0);
      }
      iVar22 = (**(code **)(*plVar37 + 0x40))(plVar37,0);
      plVar37 = *(longlong **)(param_1 + 0xfcc0);
      if (plVar37 == (longlong *)0x0) {
        plVar37 = *(longlong **)(param_1 + 0xfce0);
      }
      iVar17 = (**(code **)(*plVar37 + 0x48))(plVar37,0);
      local_260 = 0;
      uStack_258 = CONCAT44(iVar17,iVar22);
      lVar54 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if ((((*(int *)(lVar54 + 0x5e0) != 0) || (*(int *)(lVar54 + 0x5e4) != 0)) ||
          (*(int *)(lVar54 + 0x5e8) != iVar22)) ||
         (uVar46 = extraout_x1_22, *(int *)(lVar54 + 0x5ec) != iVar17)) {
        *(ulonglong *)(lVar54 + 0x5e8) = uStack_258;
        *(undefined8 *)(lVar54 + 0x5e0) = 0;
        iVar22 = *(int *)(lVar54 + 0x67c);
        *(int *)(lVar54 + 0x67c) = iVar22 + 1;
        if (((iVar22 == 0) && (*(longlong *)(lVar54 + 0xb10) != 0)) &&
           (uVar46 = 0, *(int *)(lVar54 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar54 + 0xba0) + uVar46 * 8))();
            uVar15 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(lVar54 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar54 + 0x688) + 0xb0))
                  (*(longlong **)(lVar54 + 0x688),1,&local_260);
        *(undefined1 *)(lVar54 + 0x674) = 1;
        uVar46 = extraout_x1_23;
      }
    }
    else {
      FUN_1800ea1e0(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),1,param_1 + 0xe70);
      uVar46 = extraout_x1_21;
    }
    *(undefined1 *)(param_1 + 0xf6c1) = 0;
  }
  if (*(char *)(lVar41 + 0x189) != '\0') {
    lVar54 = 0xfca0;
    if (*(char *)(param_1 + 0x765d) != '\0') {
      lVar54 = 0xfca4;
    }
    *(undefined4 *)(local_270 + 0x3954) = *(undefined4 *)(param_1 + lVar54);
    auVar57 = FUN_1800ede18(*(longlong *)(lVar18 + 0x76e0) + 0x19d8,param_1 + 0xf8e8);
    uVar46 = auVar57._8_8_;
    *(longlong *)(param_1 + 0xff10) = auVar57._0_8_;
  }
  if (*(char *)(lVar41 + 0x189) != '\0' || param_1 != uVar34) {
    lVar54 = *(longlong *)(param_1 + 0xff10);
    lVar35 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
    if (lVar54 != *(longlong *)(lVar35 + 0x30)) {
      FUN_1800e80d8(lVar35);
      (**(code **)(**(longlong **)(lVar35 + 0x688) + 200))(*(longlong **)(lVar35 + 0x688),lVar54);
      *(longlong *)(lVar35 + 0x30) = lVar54;
      *(undefined8 *)(lVar35 + 0x38) = 0;
      *(undefined1 *)(lVar35 + 0x674) = 1;
    }
    FUN_1800e8910(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),
                  *(undefined8 *)(param_1 + 0xff10));
    *(undefined1 *)(lVar41 + 0x189) = 0;
    uVar46 = extraout_x1_24;
  }
  if (*(char *)(param_1 + 0x10188) != '\0' || param_1 != uVar34) {
    iVar22 = *(int *)(local_270 + 0x3fc4);
    lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
    if (iVar22 != *(int *)(lVar41 + 0x40)) {
      FUN_1800e80d8(lVar41);
      (**(code **)(**(longlong **)(lVar41 + 0x688) + 0xa0))(*(longlong **)(lVar41 + 0x688),iVar22);
      *(int *)(lVar41 + 0x40) = iVar22;
      uVar46 = extraout_x1_25;
    }
    *(undefined1 *)(param_1 + 0x10188) = 0;
  }
  lVar41 = local_270;
  if (*(char *)(param_1 + 0x1018b) != '\0' || param_1 != uVar34) {
    if ((*(int *)(param_1 + 0x7b0) == 0) || (*(int *)(param_1 + 0x7b4) == 0)) {
      uVar16 = 0x20;
    }
    else {
      uVar16 = 0x10;
    }
    lVar54 = 0xb8c;
    if (*(char *)(param_1 + 0x766a) == '\0') {
      lVar54 = 0x7bc;
    }
    uVar23 = 0x10;
    if (*(int *)(param_1 + lVar54) == 0) {
      uVar23 = 0x20;
    }
    uVar15 = *(uint *)(local_270 + 0x3a10);
    lVar54 = param_1 + 0x10000;
    if (uVar15 != 0) {
      local_230 = uVar34;
      local_228 = lVar20;
      local_278 = CONCAT44(local_278._4_4_,uVar16);
      local_1b8 = param_1 + 0xf7d0;
      uVar45 = 0;
      local_1d0 = CONCAT44(local_1d0._4_4_,uVar23);
      local_260 = param_1 + 0x10000;
      local_218 = lVar24;
      do {
        uVar34 = local_278;
        *(undefined4 *)(lVar41 + 0x37d8) = 0;
        if (uVar45 < uVar15) {
          lVar24 = *(longlong *)(lVar18 + 0x7a08) + (ulonglong)uVar45 * 0x18;
          plVar37 = (longlong *)(lVar24 + 8);
          pcVar47 = (char *)(lVar24 + 0x17);
          pcVar27 = (char *)(lVar24 + 0x10);
          pcVar33 = (char *)(lVar24 + 0x11);
          pcVar31 = (char *)(lVar24 + 0x16);
          pbVar29 = (byte *)(lVar24 + 0x12);
          pbVar40 = (byte *)(lVar24 + 0x13);
          pbVar39 = (byte *)(lVar24 + 0x14);
          pbVar43 = (byte *)(lVar24 + 0x15);
        }
        else {
          plVar37 = (longlong *)0x0;
          pcVar47 = &DAT_0000000f;
          pcVar27 = &DAT_00000008;
          pcVar33 = &DAT_00000009;
          pcVar31 = &DAT_0000000e;
          pbVar29 = &DAT_0000000a;
          pbVar40 = &DAT_0000000b;
          pbVar39 = &DAT_0000000c;
          pbVar43 = &DAT_0000000d;
        }
        if (*pcVar47 != '\0' || param_1 != local_230) {
          uVar15 = 0x80;
          if (*pcVar27 == '\0') {
            uVar15 = 0;
          }
          iVar22 = (uint)local_278;
          if (uVar15 == 0 && *pcVar33 == '\0') {
LAB_18003d578:
            uVar15 = (uint)*pbVar29;
            if (*pcVar31 == '\0') {
              if (uVar15 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if (*(longlong *)(lVar24 + 0xb10) != 0) {
                  local_238 = *plVar37;
                  uVar46 = 0;
                  if (local_238 != 0) {
                    local_240 = CONCAT44(local_240._4_4_,uVar15);
                    iVar22 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),local_238,uVar15 - 1,0,
                                           *(longlong *)(lVar24 + 0xb10),lVar24,4,
                                           *(undefined8 *)(lVar24 + 0xb78));
                    uVar46 = extraout_x1_30;
                    if (*(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar22 != 4) {
                      FUN_1800e7f80(lVar24,local_238,(int)local_240 + -1,iVar22,4);
                      uVar46 = extraout_x1_31;
                    }
                  }
                }
              }
              bVar12 = *pbVar40;
              if (bVar12 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if ((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar20 = *plVar37, lVar20 != 0)) {
                  local_240 = CONCAT44(local_240._4_4_,(uint)bVar12);
                  iVar22 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar20,bVar12 - 1,0,
                                         *(longlong *)(lVar24 + 0xb10),lVar24,4,
                                         *(undefined8 *)(lVar24 + 0xb78));
                  uVar46 = extraout_x1_32;
                  if (*(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar22 != 4) {
                    FUN_1800e7f80(lVar24,lVar20,(int)local_240 + -1,iVar22,4);
                    uVar46 = extraout_x1_33;
                  }
                }
              }
              bVar12 = *pbVar39;
              if (bVar12 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if (((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar20 = *plVar37, lVar20 != 0)) &&
                   (iVar22 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar20,bVar12 - 1,0,
                                           *(longlong *)(lVar24 + 0xb10),lVar24,4,
                                           *(undefined8 *)(lVar24 + 0xb78)), uVar46 = extraout_x1_34
                   , *(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar22 != 4)) {
                  FUN_1800e7f80(lVar24,lVar20,bVar12 - 1,iVar22,4);
                  uVar46 = extraout_x1_35;
                }
              }
              bVar12 = *pbVar43;
              if (bVar12 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if (((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar20 = *plVar37, lVar20 != 0)) &&
                   (iVar22 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar20,bVar12 - 1,0,
                                           *(longlong *)(lVar24 + 0xb10),lVar24,4,
                                           *(undefined8 *)(lVar24 + 0xb78)), uVar46 = extraout_x1_36
                   , *(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar22 != 4)) {
                  uVar34 = 4;
LAB_18003d834:
                  FUN_1800e7f80(lVar24,lVar20,bVar12 - 1,iVar22,uVar34);
                  uVar46 = extraout_x1_37;
                }
              }
            }
            else {
              if (uVar15 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if ((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar20 = *plVar37, lVar20 != 0)) {
                  local_240 = CONCAT44(local_240._4_4_,uVar15);
                  iVar17 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar20,uVar15 - 1,0,
                                         *(longlong *)(lVar24 + 0xb10),lVar24,local_278 & 0xffffffff
                                         ,*(undefined8 *)(lVar24 + 0xb78));
                  uVar46 = extraout_x1_27;
                  if (*(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar17 != iVar22) {
                    if (iVar17 == 0) {
                      iVar3 = 0;
                      if ((uVar34 & 0xfffff33f) != 0) {
                        iVar3 = iVar22;
                      }
                      if (iVar3 == 0) goto LAB_18003d60c;
                    }
                    FUN_1800e7f80(lVar24,lVar20,(int)local_240 + -1,iVar17,local_278 & 0xffffffff);
                    uVar46 = extraout_x1_28;
                  }
                }
              }
LAB_18003d60c:
              uVar34 = local_1d0;
              bVar12 = *pbVar40;
              if (bVar12 != 0) {
                lVar24 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
                if ((*(longlong *)(lVar24 + 0xb10) != 0) && (lVar20 = *plVar37, lVar20 != 0)) {
                  iVar17 = (uint)local_1d0;
                  iVar22 = FUN_1800f1b78(*(undefined8 *)(lVar24 + 0xb18),lVar20,bVar12 - 1,0,
                                         *(longlong *)(lVar24 + 0xb10),lVar24,local_1d0 & 0xffffffff
                                         ,*(undefined8 *)(lVar24 + 0xb78));
                  uVar46 = extraout_x1_29;
                  if (*(int *)(*(longlong *)(lVar24 + 0xb10) + 0x30) != 3 && iVar22 != iVar17) {
                    uVar34 = uVar34 & 0xffffffff;
                    goto LAB_18003d834;
                  }
                }
              }
            }
          }
          else {
            if (*(char *)(local_228 + 0x662) == '\0') {
              bVar10 = true;
            }
            else {
              bVar10 = *plVar37 == *(longlong *)(lVar18 + 0x7e90);
            }
            if (!bVar10) goto LAB_18003d578;
            if (*pcVar31 == '\0') {
              local_240 = CONCAT44(local_240._4_4_,(uint)*pbVar29);
              if (*pbVar29 != 0) {
                if (*(int *)(param_1 + 0xf7dc) == 0) {
                  local_238 = thunk_FUN_180102f80(0x80);
                  if (local_238 == 0) goto LAB_18003d36c;
                  thunk_FUN_180001218(local_238,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(undefined4 *)(param_1 + 0xf7dc) = 0x10;
                  *(longlong *)(lVar18 + 0x77d0) = local_238;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                *puVar30 = 4;
                puVar30[1] = (int)local_240 + -1;
                *(int *)(lVar41 + 0x37d8) = *(int *)(lVar41 + 0x37d8) + 1;
              }
LAB_18003d36c:
              bVar12 = *pbVar40;
              if (bVar12 != 0) {
                iVar22 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(lVar41 + 0x37d8) == iVar22) {
                  local_1c8 = iVar22 << 1;
                  if (iVar22 == 0) {
                    local_1c8 = 0x10;
                  }
                  lVar24 = CONCAT44(0,local_1c8) << 3;
                  auVar57._8_8_ = 0;
                  auVar57._0_8_ = CONCAT44(0,local_1c8);
                  if (SUB168(auVar57 * ZEXT816(8),8) != 0) {
                    lVar24 = -1;
                  }
                  local_238 = thunk_FUN_180102f80(lVar24);
                  if (local_238 == 0) goto LAB_18003d414;
                  thunk_FUN_180001218(local_238,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(longlong *)(lVar18 + 0x77d0) = local_238;
                  *(uint *)(param_1 + 0xf7dc) = local_1c8;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                *puVar30 = 4;
                puVar30[1] = bVar12 - 1;
                *(int *)(lVar41 + 0x37d8) = *(int *)(lVar41 + 0x37d8) + 1;
              }
LAB_18003d414:
              bVar12 = *pbVar39;
              if (bVar12 != 0) {
                iVar22 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(lVar41 + 0x37d8) == iVar22) {
                  local_1c0 = iVar22 << 1;
                  if (iVar22 == 0) {
                    local_1c0 = 0x10;
                  }
                  lVar24 = CONCAT44(0,local_1c0) << 3;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = CONCAT44(0,local_1c0);
                  if (SUB168(auVar8 * ZEXT816(8),8) != 0) {
                    lVar24 = -1;
                  }
                  lVar24 = thunk_FUN_180102f80(lVar24);
                  if (lVar24 == 0) goto LAB_18003d4b8;
                  thunk_FUN_180001218(lVar24,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(longlong *)(lVar18 + 0x77d0) = lVar24;
                  *(uint *)(param_1 + 0xf7dc) = local_1c0;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                *puVar30 = 4;
                puVar30[1] = bVar12 - 1;
                *(int *)(lVar41 + 0x37d8) = *(int *)(lVar41 + 0x37d8) + 1;
              }
LAB_18003d4b8:
              bVar12 = *pbVar43;
              if (bVar12 != 0) {
                iVar22 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(lVar41 + 0x37d8) == iVar22) {
                  uVar15 = iVar22 << 1;
                  if (iVar22 == 0) {
                    uVar15 = 0x10;
                  }
                  lVar24 = CONCAT44(0,uVar15) << 3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = CONCAT44(0,uVar15);
                  if (SUB168(auVar9 * ZEXT816(8),8) != 0) {
                    lVar24 = -1;
                  }
                  lVar24 = thunk_FUN_180102f80(lVar24);
                  if (lVar24 == 0) goto LAB_18003d550;
                  thunk_FUN_180001218(lVar24,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(longlong *)(lVar18 + 0x77d0) = lVar24;
                  *(uint *)(param_1 + 0xf7dc) = uVar15;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                uVar16 = 4;
                goto LAB_18003d53c;
              }
            }
            else {
              if ((uint)local_278 == 0x20) {
                uVar48 = 0x60;
                if (*pcVar33 == '\0') {
                  uVar48 = 0x20;
                }
                local_278 = CONCAT44(local_278._4_4_,uVar15 | uVar48);
              }
              bVar12 = *pbVar29;
              if (bVar12 != 0) {
                if (*(int *)(param_1 + 0xf7dc) == 0) {
                  lVar24 = thunk_FUN_180102f80(0x80);
                  if (lVar24 == 0) goto LAB_18003d264;
                  thunk_FUN_180001218(lVar24,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(longlong *)(lVar18 + 0x77d0) = lVar24;
                  *(undefined4 *)(param_1 + 0xf7dc) = 0x10;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                *puVar30 = (uint)local_278;
                puVar30[1] = bVar12 - 1;
                *(int *)(lVar41 + 0x37d8) = *(int *)(lVar41 + 0x37d8) + 1;
              }
LAB_18003d264:
              bVar12 = *pbVar40;
              if (bVar12 != 0) {
                iVar22 = *(int *)(param_1 + 0xf7dc);
                if (*(int *)(lVar41 + 0x37d8) == iVar22) {
                  uVar15 = iVar22 << 1;
                  if (iVar22 == 0) {
                    uVar15 = 0x10;
                  }
                  lVar24 = CONCAT44(0,uVar15) << 3;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = CONCAT44(0,uVar15);
                  if (SUB168(auVar7 * ZEXT816(8),8) != 0) {
                    lVar24 = -1;
                  }
                  lVar24 = thunk_FUN_180102f80(lVar24);
                  if (lVar24 == 0) goto LAB_18003d550;
                  thunk_FUN_180001218(lVar24,*(undefined8 *)(lVar18 + 0x77d0),
                                      (ulonglong)*(uint *)(param_1 + 0xf7dc) << 3);
                  thunk_FUN_180102fc0(*(undefined8 *)(lVar18 + 0x77d0));
                  *(longlong *)(lVar18 + 0x77d0) = lVar24;
                  *(uint *)(param_1 + 0xf7dc) = uVar15;
                }
                puVar30 = (undefined4 *)
                          (*(longlong *)(lVar18 + 0x77d0) +
                          (ulonglong)*(uint *)(lVar41 + 0x37d8) * 8);
                uVar16 = (uint)local_1d0;
LAB_18003d53c:
                *puVar30 = uVar16;
                puVar30[1] = bVar12 - 1;
                *(int *)(lVar41 + 0x37d8) = *(int *)(lVar41 + 0x37d8) + 1;
              }
            }
LAB_18003d550:
            FUN_1800e8c50(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),*plVar37);
            uVar46 = extraout_x1_26;
          }
          *pcVar47 = '\0';
        }
        uVar15 = *(uint *)(lVar41 + 0x3a10);
        uVar45 = uVar45 + 1;
        lVar54 = local_260;
        lVar24 = local_218;
        uVar34 = local_230;
        lVar20 = local_228;
      } while (uVar45 < uVar15);
    }
    *(undefined1 *)(lVar54 + 0x18b) = 0;
  }
  uVar15 = *(uint *)(param_1 + 0x10180);
  local_278 = CONCAT44(local_278._4_4_,uVar15);
  uVar15 = (uVar15 & 0xaaaaaaaa) >> 1 | (uVar15 & 0x55555555) << 1;
  uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
  uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
  uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
  uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
  if (*(char *)(lVar24 + 0x68f) == '\0' && param_1 == uVar34) {
    lVar41 = LZCOUNT(uVar15);
    uVar15 = (uint)lVar41;
    if ((1 - (uVar15 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) =
           *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
      while( true ) {
        lVar54 = *(longlong *)(param_1 + 0xff38 + lVar41 * 8);
        if (lVar54 != 0) {
          *(undefined8 *)(lVar54 + 0x28) = *(undefined8 *)(param_1 + 0xffd8);
          FUN_180001590(*(longlong *)(param_1 + 0xff38 + lVar41 * 8) + 0x38);
        }
        uVar15 = ((uint)local_278 & 0xaaaaaaaa) >> 1 | ((uint)local_278 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        lVar41 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
        uVar15 = (uint)lVar41;
        if ((1 - (uVar15 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) =
             *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
      }
    }
  }
  else {
    lVar41 = LZCOUNT(uVar15);
    uVar15 = (uint)lVar41;
    iVar22 = 0;
    aiStack_1a8[0] = 0;
    aiStack_1a8[1] = 0;
    local_1b0 = 0;
    aiStack_1a8[4] = 0;
    aiStack_1a8[5] = 0;
    aiStack_1a8[2] = 0;
    aiStack_1a8[3] = 0;
    stack0xfffffffffffffe78 = 0;
    aiStack_1a8[6] = 0;
    aiStack_1a8[7] = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    local_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    local_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    local_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    if ((1 - (uVar15 >> 5) & 0xff) != 0) {
      local_228 = lVar20;
      *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) =
           *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
      lVar54 = param_1 + 0xff38;
      while( true ) {
        plVar37 = *(longlong **)(lVar54 + lVar41 * 8);
        if (plVar37 != (longlong *)0x0) {
          lVar20 = (**(code **)(*plVar37 + 8))(plVar37,uVar46,iVar22);
          if (lVar20 != 0) {
            uVar45 = *(uint *)(param_1 + 0x102c + lVar41 * 4);
            (&local_1b0)[lVar41 * 2] = lVar20 + (ulonglong)uVar45;
            uVar15 = *(uint *)(*(longlong *)(lVar54 + lVar41 * 8) + 0x30);
            iVar22 = uVar15 - uVar45;
            if (uVar15 < uVar45) {
              iVar22 = 0;
            }
            aiStack_1a8[lVar41 * 4] = iVar22;
            aiStack_1a8[lVar41 * 4 + 1] = *(int *)(param_1 + 0xfe8 + lVar41 * 4);
          }
          lVar20 = *(longlong *)(lVar54 + lVar41 * 8);
          (**(code **)(*(longlong *)(lVar20 + 0x40) + 0x10))(lVar20 + 0x40,lVar41);
          uVar19 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508) + 0xb78);
          lVar20 = *(longlong *)(lVar54 + lVar41 * 8);
          *(undefined8 *)(lVar20 + 0x18) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1500) + 0x18);
          *(undefined8 *)(lVar20 + 0x20) = uVar19;
          lVar20 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
          FUN_1800f18d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6d8) + 0x1b500),
                        *(undefined8 *)(lVar54 + lVar41 * 8),
                        *(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1500),lVar20,
                        *(undefined8 *)(lVar20 + 0xb78));
          *(undefined8 *)(*(longlong *)(lVar54 + lVar41 * 8) + 0x28) =
               *(undefined8 *)(param_1 + 0xffd8);
          FUN_180001590(*(longlong *)(lVar54 + lVar41 * 8) + 0x38);
          uVar46 = extraout_x1_38;
        }
        iVar22 = (int)lVar41 + 1;
        uVar15 = ((uint)local_278 & 0xaaaaaaaa) >> 1 | ((uint)local_278 & 0x55555555) << 1;
        uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
        lVar41 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
        uVar15 = (uint)lVar41;
        lVar20 = local_228;
        if ((1 - (uVar15 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) =
             *(byte *)((longlong)&local_278 + (longlong)((int)uVar15 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
      }
    }
    FUN_1800e9d68(*(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508),0,iVar22,&local_1b0);
    *(undefined1 *)(lVar24 + 0x68f) = 0;
  }
  bVar12 = *(byte *)(lVar24 + 0x690);
  if (*(char *)(param_1 + 0x10184) == '\0') {
    *(byte *)(lVar24 + 0x690) = (byte)local_220 | bVar12;
  }
  else {
    bVar14 = (*(code *)**(undefined8 **)(*(longlong *)(lVar18 + 0x7fb8) + 0x40))
                       (*(longlong *)(lVar18 + 0x7fb8) + 0x40);
    *(byte *)(lVar24 + 0x690) = bVar14 | bVar12;
    if ((bVar14 == 0 && bVar12 == 0) && param_1 == uVar34) {
      *(undefined8 *)(*(longlong *)(lVar18 + 0x7fb8) + 0x28) = *(undefined8 *)(param_1 + 0xffd8);
      FUN_180001590(*(longlong *)(lVar18 + 0x7fb8) + 0x38);
    }
    else {
      local_260 = (**(code **)(**(longlong **)(lVar18 + 0x7fb8) + 8))();
      iVar22 = *(int *)(*(longlong *)(lVar18 + 0x7fb8) + 0x30);
      if (*(longlong *)(lVar18 + 0x7fb8) == *(longlong *)(lVar18 + 0x7710)) {
        iVar17 = 0x2a;
      }
      else {
        iVar17 = *(int *)(local_270 + 0x3fc0);
      }
      uStack_258 = CONCAT44(iVar17,iVar22);
      lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      if (((*(longlong *)(lVar41 + 0x468) != local_260) || (*(int *)(lVar41 + 0x474) != iVar17)) ||
         (*(int *)(lVar41 + 0x470) != iVar22)) {
        FUN_1800e80d8(lVar41);
        (**(code **)(**(longlong **)(lVar41 + 0x688) + 0x158))
                  (*(longlong **)(lVar41 + 0x688),&local_260);
        *(undefined1 *)(lVar41 + 0x674) = 1;
        *(ulonglong *)(lVar41 + 0x470) = uStack_258;
        *(longlong *)(lVar41 + 0x468) = local_260;
      }
      uVar19 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508) + 0xb78);
      lVar41 = *(longlong *)(lVar18 + 0x7fb8);
      *(undefined8 *)(lVar41 + 0x18) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1500) + 0x18);
      *(undefined8 *)(lVar41 + 0x20) = uVar19;
      lVar41 = *(longlong *)(*(longlong *)(lVar18 + 0x76e0) + 0x1508);
      FUN_1800f18d0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6d8) + 0x1b500),
                    *(undefined8 *)(lVar18 + 0x7fb8),
                    *(undefined8 *)(*(longlong *)(lVar18 + 0x76e0) + 0x1500),lVar41,
                    *(undefined8 *)(lVar41 + 0xb78));
      (**(code **)(*(longlong *)(*(longlong *)(lVar18 + 0x7fb8) + 0x40) + 8))
                (*(longlong *)(lVar18 + 0x7fb8) + 0x40);
      *(undefined1 *)(lVar24 + 0x690) = 0;
      *(undefined8 *)(*(longlong *)(lVar18 + 0x7fb8) + 0x28) = *(undefined8 *)(param_1 + 0xffd8);
      FUN_180001590(*(longlong *)(lVar18 + 0x7fb8) + 0x38);
    }
  }
  if (*(char *)(param_1 + 0xf6c4) != '\0') {
    plVar37 = *(longlong **)(param_1 + 0xfcc0);
    if (plVar37 != (longlong *)0x0) {
      local_260 = 0;
      uVar45 = *(uint *)(local_270 + 0x3ce8);
      uVar15 = *(uint *)((longlong)plVar37 + 0x24) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uVar48 = *(uint *)(plVar37 + 5) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar48 == 0) {
        uVar48 = 1;
      }
      uStack_258 = CONCAT44(uVar48,uVar15);
      (**(code **)(*plVar37 + 0x18))
                (plVar37,uVar45 + *(int *)((longlong)plVar37 + 0x3c) * *(int *)(local_270 + 0x3cf8),
                 &local_260);
    }
    plVar37 = *(longlong **)(lVar18 + 0x7cc8);
    if (plVar37 != (longlong *)0x0) {
      local_260 = 0;
      uVar45 = *(uint *)(local_270 + 0x3cec);
      uVar15 = *(uint *)((longlong)plVar37 + 0x24) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uVar48 = *(uint *)(plVar37 + 5) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar48 == 0) {
        uVar48 = 1;
      }
      uStack_258 = CONCAT44(uVar48,uVar15);
      (**(code **)(*plVar37 + 0x18))
                (plVar37,uVar45 + *(int *)((longlong)plVar37 + 0x3c) * *(int *)(local_270 + 0x3cfc),
                 &local_260);
    }
    plVar37 = *(longlong **)(lVar18 + 0x7cd0);
    if (plVar37 != (longlong *)0x0) {
      local_260 = 0;
      uVar45 = *(uint *)(local_270 + 0x3cf0);
      uVar15 = *(uint *)((longlong)plVar37 + 0x24) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uVar48 = *(uint *)(plVar37 + 5) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar48 == 0) {
        uVar48 = 1;
      }
      uStack_258 = CONCAT44(uVar48,uVar15);
      (**(code **)(*plVar37 + 0x18))
                (plVar37,uVar45 + *(int *)((longlong)plVar37 + 0x3c) * *(int *)(local_270 + 0x3d00),
                 &local_260);
    }
    plVar37 = *(longlong **)(lVar18 + 0x7cd8);
    if (plVar37 != (longlong *)0x0) {
      local_260 = 0;
      uVar45 = *(uint *)(local_270 + 0x3cf4);
      uVar15 = *(uint *)((longlong)plVar37 + 0x24) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uVar48 = *(uint *)(plVar37 + 5) >> (ulonglong)(uVar45 & 0x1f);
      if (uVar48 == 0) {
        uVar48 = 1;
      }
      uStack_258 = CONCAT44(uVar48,uVar15);
      (**(code **)(*plVar37 + 0x18))
                (plVar37,uVar45 + *(int *)((longlong)plVar37 + 0x3c) * *(int *)(local_270 + 0x3d04),
                 &local_260);
    }
    lVar18 = 0xbb4;
    if (*(char *)(lVar20 + 0x662) == '\0') {
      lVar18 = 0x7b0;
    }
    plVar37 = *(longlong **)(param_1 + 0xfce0);
    if ((plVar37 != (longlong *)0x0) && (*(int *)(param_1 + lVar18) != 0)) {
      lVar18 = 3000;
      if (*(char *)(lVar20 + 0x662) == '\0') {
        lVar18 = 0x7b4;
      }
      if (*(int *)(param_1 + lVar18) != 0) {
        local_260 = 0;
        uVar45 = *(uint *)(local_270 + 0x3d08);
        uVar15 = *(uint *)((longlong)plVar37 + 0x24) >> (ulonglong)(uVar45 & 0x1f);
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        uVar48 = *(uint *)(plVar37 + 5) >> (ulonglong)(uVar45 & 0x1f);
        if (uVar48 == 0) {
          uVar48 = 1;
        }
        uStack_258 = CONCAT44(uVar48,uVar15);
        (**(code **)(*plVar37 + 0x18))
                  (plVar37,uVar45 + *(int *)((longlong)plVar37 + 0x3c) *
                                    *(int *)(local_270 + 0x3d0c),&local_260);
      }
    }
    *(undefined1 *)(param_1 + 0xf6c4) = 0;
  }
  return local_280[0];
}

