/*
 * FUN_180026a80 at 180026a80
 * undefined FUN_180026a80(void)
 * Address ranges: 180026a80-18002979b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180026a80(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong extraout_x1;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulonglong *puVar23;
  longlong lVar24;
  uint uVar25;
  undefined4 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined4 *puVar34;
  int iVar35;
  longlong lVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  int iVar40;
  uint uVar41;
  undefined8 uVar42;
  ulonglong uVar43;
  undefined8 uVar44;
  float fVar45;
  uint local_120 [2];
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100 [2];
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0 [8];
  
  local_118 = param_1 + 0xc000;
  uVar28 = param_1 + 0xf000;
  local_f8 = param_1 + 0x7000;
  local_c8 = param_1 + 0x4000;
  uVar43 = param_1 + 0x8000;
  uVar16 = (*(uint *)(param_1 + 0xf70) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0xf70) & 0x55555555) << 1;
  uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
  uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
  uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
  uVar16 = (uint)LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
  if (*(char *)(param_1 + 0x7662) == '\0') {
    if (*(char *)(param_1 + 0xf6c2) != '\0') {
      lVar27 = *(longlong *)(param_1 + 0xf7a8);
      if (lVar27 == 0) {
        uVar26 = 0;
        uVar22 = 0;
      }
      else {
        uVar26 = *(undefined4 *)(lVar27 + 0x58);
        uVar22 = *(undefined8 *)(lVar27 + 8);
      }
      lVar27 = 0;
      if (*(longlong *)(param_1 + 0xf7d0) != 0) {
        lVar27 = *(longlong *)(param_1 + 0xf7d0) + 0x30;
      }
      FUN_18005c298(param_1,lVar27,uVar22,uVar26);
      *(undefined1 *)(param_1 + 0xf6c2) = 0;
    }
    local_120[0] = *(uint *)(local_118 + 0x36b8);
    uVar41 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
    uVar41 = (uVar41 & 0xcccccccc) >> 2 | (uVar41 & 0x33333333) << 2;
    uVar41 = (uVar41 & 0xf0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f) << 4;
    uVar41 = (uVar41 & 0xff00ff00) >> 8 | (uVar41 & 0xff00ff) << 8;
    lVar27 = LZCOUNT(uVar41 >> 0x10 | uVar41 << 0x10);
    uVar41 = (uint)lVar27;
    if ((1 - (uVar41 >> 5) & 0xff) != 0) {
      local_110 = (uint *)CONCAT44(local_110._4_4_,uVar16);
      local_d0 = uVar43;
      local_f0 = uVar28;
      *(byte *)((longlong)local_120 + (longlong)((int)uVar41 >> 3)) =
           *(byte *)((longlong)local_120 + (longlong)((int)uVar41 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar41 & 7)) ^ 0xff);
      while( true ) {
        plVar17 = *(longlong **)(param_1 + 0xfc18 + lVar27 * 8);
        lVar30 = *(longlong *)(param_1 + 0xf6e0);
        uVar22 = *(undefined8 *)(lVar30 + 0x238);
        uVar18 = *(undefined8 *)(lVar30 + 0x240);
        local_100[0] = *(uint *)(param_1 + 0xe98);
        uVar42 = *(undefined8 *)(lVar30 + 0x248);
        bVar12 = (*(byte *)((longlong)local_100 + (longlong)((int)(uint)lVar27 >> 3)) >>
                  (ulonglong)((uint)lVar27 & 7) & 1) != 0;
        if (plVar17 == (longlong *)0x0) {
          lVar30 = *(longlong *)(param_1 + 0xfc40 + lVar27 * 8);
          if (lVar30 != 0) {
            uVar42 = FUN_180089830(lVar30,bVar12);
          }
        }
        else if (((((plVar17 != *(longlong **)(param_1 + 0xf9b0)) &&
                   (plVar17 != *(longlong **)(param_1 + 0xf9b8))) &&
                  (plVar17 != *(longlong **)(param_1 + 0xf9c0))) &&
                 ((plVar17 != *(longlong **)(param_1 + 0xf9c8) &&
                  (plVar17 != *(longlong **)(param_1 + 0xf9d0))))) ||
                (cVar13 = (**(code **)(*plVar17 + 0x100))(), cVar13 != '\0')) {
          plVar17 = *(longlong **)(param_1 + 0xfc18 + lVar27 * 8);
          if (*(int *)((longlong)plVar17 + 0x44) == 2 || *(int *)((longlong)plVar17 + 0x44) == 5) {
            uVar18 = (**(code **)(*plVar17 + 0xc0))(plVar17,bVar12);
          }
          else {
            uVar22 = (**(code **)(*plVar17 + 0xc0))();
          }
        }
        *(undefined8 *)(param_1 + 0xfba0 + lVar27 * 8) = uVar22;
        *(undefined8 *)(param_1 + 0xfbc8 + lVar27 * 8) = uVar18;
        *(undefined8 *)(param_1 + 0xfbf0 + lVar27 * 8) = uVar42;
        uVar16 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
        uVar16 = (uint)lVar27;
        if ((1 - (uVar16 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_120 + (longlong)((int)uVar16 >> 3)) =
             *(byte *)((longlong)local_120 + (longlong)((int)uVar16 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      }
      uVar28 = local_f0;
      uVar43 = local_d0;
      uVar16 = (uint)(float)local_110;
    }
    *(undefined4 *)(local_118 + 0x36b8) = 0;
    local_120[0] = *(uint *)(local_118 + 0x3680);
    uVar41 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
    uVar41 = (uVar41 & 0xcccccccc) >> 2 | (uVar41 & 0x33333333) << 2;
    uVar41 = (uVar41 & 0xf0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f) << 4;
    uVar41 = (uVar41 & 0xff00ff00) >> 8 | (uVar41 & 0xff00ff) << 8;
    lVar27 = LZCOUNT(uVar41 >> 0x10 | uVar41 << 0x10);
    uVar41 = (uint)lVar27;
    if ((1 - (uVar41 >> 5) & 0xff) != 0) {
      local_110 = (uint *)CONCAT44(local_110._4_4_,uVar16);
      local_d0 = uVar43;
      local_f0 = uVar28;
      *(byte *)((longlong)local_120 + (longlong)((int)uVar41 >> 3)) =
           *(byte *)((longlong)local_120 + (longlong)((int)uVar41 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar41 & 7)) ^ 0xff);
      while( true ) {
        plVar17 = *(longlong **)(param_1 + 64000 + lVar27 * 8);
        lVar30 = *(longlong *)(param_1 + 0xf6e0);
        uVar16 = (uint)lVar27;
        uVar22 = *(undefined8 *)(lVar30 + 0x238);
        uVar18 = *(undefined8 *)(lVar30 + 0x240);
        local_100[0] = *(uint *)(param_1 + 0xe94);
        uVar42 = *(undefined8 *)(lVar30 + 0x248);
        bVar12 = (*(byte *)((longlong)local_100 + (longlong)((int)uVar16 >> 3)) >>
                  (ulonglong)(uVar16 & 7) & 1) != 0;
        if (plVar17 == (longlong *)0x0) {
          lVar30 = *(longlong *)(param_1 + 0xfa80 + lVar27 * 8);
          if (lVar30 != 0) {
            uVar42 = FUN_180089830(lVar30,bVar12);
          }
        }
        else if ((((plVar17 != *(longlong **)(param_1 + 0xf9b0)) &&
                  (plVar17 != *(longlong **)(param_1 + 0xf9b8))) &&
                 ((plVar17 != *(longlong **)(param_1 + 0xf9c0) &&
                  ((plVar17 != *(longlong **)(param_1 + 0xf9c8) &&
                   (plVar17 != *(longlong **)(param_1 + 0xf9d0))))))) ||
                (cVar13 = (**(code **)(*plVar17 + 0x100))(), cVar13 != '\0')) {
          plVar17 = *(longlong **)(param_1 + 64000 + lVar27 * 8);
          if (*(int *)((longlong)plVar17 + 0x44) == 2 || *(int *)((longlong)plVar17 + 0x44) == 5) {
            uVar18 = (**(code **)(*plVar17 + 0xc0))(plVar17,bVar12);
          }
          else {
            uVar22 = (**(code **)(*plVar17 + 0xc0))();
          }
        }
        if (uVar16 < 8) {
          *(undefined8 *)(param_1 + 0xf7e8 + lVar27 * 8) = 0;
        }
        *(undefined8 *)(param_1 + 0xf828 + lVar27 * 8) = uVar22;
        *(undefined8 *)(param_1 + 0xf8a8 + lVar27 * 8) = uVar18;
        *(undefined8 *)(param_1 + 0xf928 + lVar27 * 8) = uVar42;
        uVar16 = (local_120[0] & 0xaaaaaaaa) >> 1 | (local_120[0] & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
        uVar16 = (uint)lVar27;
        if ((1 - (uVar16 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_120 + (longlong)((int)uVar16 >> 3)) =
             *(byte *)((longlong)local_120 + (longlong)((int)uVar16 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      }
      uVar28 = local_f0;
      uVar43 = local_d0;
      uVar16 = (uint)(float)local_110;
    }
    *(undefined4 *)(local_118 + 0x3680) = 0;
  }
  lVar27 = *(longlong *)(param_1 + 0xf6d0);
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar27 + 0x620);
  local_108 = *(longlong *)(lVar27 + 0x618);
  *(longlong *)(lVar27 + 0x618) = param_1;
  if ((*(char *)(param_1 + 0xf688) != '\0') || (uVar41 = 1, local_108 != param_1)) {
    if (*(char *)(local_f8 + 0x662) == '\0') {
      lVar27 = *(longlong *)(param_1 + 0xf7a8);
      if (lVar27 == 0) {
        local_120[0] = uVar16;
        if ((*(int *)(local_c8 + 0x3650) == 0) || (*(int *)(local_118 + 0x3d84) != 0)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        uVar41 = (1 << (ulonglong)(uVar16 & 0x1f)) - 1;
        uVar32 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
        if ((*(uint *)(local_c8 + 0x3590) & uVar41) == 0) {
          uVar32 = 0;
        }
        uVar38 = (*(ulonglong *)(param_1 + 0xfe0) ^ uVar32 << 0x3d) & 0xdfffffffffffffff ^
                 uVar32 << 0x3d;
        uVar32 = uVar38 >> 0x3e;
        if ((*(uint *)(local_c8 + 0x3594) & uVar41) == 0) {
          uVar32 = 0;
        }
        uVar38 = (uVar38 ^ uVar32 << 0x3e) & 0xbfffffffffffffff ^ uVar32 << 0x3e;
        uVar32 = uVar38 >> 0x34;
        if (*(char *)(local_f8 + 0x65e) == '\0') {
          uVar32 = 7;
        }
        uVar38 = (uVar38 ^ uVar32 << 0x34) & 0xff8fffffffffffff ^ uVar32 << 0x34;
        uVar32 = uVar38 >> 0x38;
        if (!bVar12) {
          uVar32 = 0;
        }
        uVar38 = (uVar38 ^ uVar32 << 0x38) & 0xfeffffffffffffff ^ uVar32 << 0x38;
        uVar32 = uVar38 >> 0x3c;
        if (*(char *)(local_f8 + 0x66e) == '\0') {
          uVar32 = 0;
        }
        local_e8 = (undefined8 *)((uVar38 ^ uVar32 << 0x3c) & 0xefffffffffffffff ^ uVar32 << 0x3c);
        if ((uVar38 >> 0x39 & 1) == 0) {
          local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xf3ffffffffffffff);
        }
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 400)
            ) || (*(longlong *)(param_1 + 0xfcc0) ==
                  *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1d0))) goto LAB_18002782c;
        uVar41 = *(uint *)(&DAT_18022af50 + (ulonglong)uVar16 * 4);
        lVar27 = (ulonglong)(uVar16 << 3) * 4;
        local_110 = (uint *)(param_1 + 0xf18);
        uVar32 = CONCAT44(*(uint *)(&DAT_180233fc4 + lVar27) & *(uint *)(param_1 + 0xf1c),
                          *(uint *)(param_1 + 0xf18) &
                          *(uint *)(&DAT_180233fc0 + (ulonglong)(uVar16 << 3) * 4));
        local_f0 = CONCAT44(*(uint *)(&DAT_180233fcc + lVar27) & *(uint *)(param_1 + 0xf24),
                            *(uint *)(&DAT_180233fc8 + lVar27) & *(uint *)(param_1 + 0xf20));
        local_a0[0] = uVar32;
        local_a0[1] = local_f0;
        local_d0 = CONCAT44(*(uint *)(&DAT_180233fd4 + lVar27) & *(uint *)(param_1 + 0xf2c),
                            *(uint *)(&DAT_180233fd0 + lVar27) & *(uint *)(param_1 + 0xf28));
        uVar38 = CONCAT44(*(uint *)(&DAT_180233fdc + lVar27) & *(uint *)(param_1 + 0xf34),
                          *(uint *)(&DAT_180233fd8 + lVar27) & *(uint *)(param_1 + 0xf30));
        local_a0[2] = local_d0;
        local_a0[3] = uVar38;
        uVar33 = CONCAT44(*(uint *)(param_1 + 0xf3c) & uVar41,*(uint *)(param_1 + 0xf38) & uVar41);
        uVar6 = CONCAT44(*(uint *)(param_1 + 0xf44) & uVar41,*(uint *)(param_1 + 0xf40) & uVar41);
        local_a0[4] = uVar33;
        local_a0[5] = uVar6;
        uVar7 = CONCAT44(*(uint *)(param_1 + 0xf4c) & uVar41,*(uint *)(param_1 + 0xf48) & uVar41);
        local_a0[6] = uVar7;
        uVar16 = *(uint *)(local_118 + 0x3748);
        if (uVar16 == 0) {
LAB_1800273ec:
          uVar9 = *(undefined1 *)(param_1 + 0xab);
          puVar21 = (undefined8 *)FUN_180102f80(0x88);
          if (puVar21 == (undefined8 *)0x0) goto LAB_18002782c;
          lVar27 = *(longlong *)(uVar43 + 0x7728);
          uVar16 = *(uint *)(local_118 + 0x3730);
          *puVar21 = &PTR_D3DPERF_GetStatus_180233fa0;
          puVar21[1] = 0;
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          puVar21[5] = lVar27;
          *(uint *)(puVar21 + 6) = uVar16;
          *(undefined4 *)((longlong)puVar21 + 0x3c) = 0;
          *(undefined1 *)((longlong)puVar21 + 0x44) = 0;
          *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(lVar27 + (ulonglong)uVar16 * 0x28 + 0x38);
          uVar42 = *(undefined8 *)local_110;
          uVar18 = *(undefined8 *)(local_110 + 6);
          uVar22 = *(undefined8 *)(local_110 + 4);
          puVar21[10] = *(undefined8 *)(local_110 + 2);
          puVar21[9] = uVar42;
          puVar21[0xc] = uVar18;
          puVar21[0xb] = uVar22;
          uVar22 = *(undefined8 *)(local_110 + 8);
          puVar21[0xe] = *(undefined8 *)(local_110 + 10);
          puVar21[0xd] = uVar22;
          uVar22 = *(undefined8 *)(local_110 + 0xc);
          *(undefined1 *)(puVar21 + 0x10) = uVar9;
          puVar21[0xf] = uVar22;
          *puVar21 = &PTR_FUN_180233fb0;
          uVar16 = FUN_18005c720(puVar21 + 9,0xffff000000000000);
          lVar27 = local_118;
          local_110 = (uint *)(CONCAT44(local_110._4_4_,uVar16) & 0xffffffff0000ffff);
          uVar16 = (uVar16 & 0xaaaa) >> 1 | (uVar16 & 0x5555) << 1;
          uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
          lVar30 = LZCOUNT((uVar16 >> 8 | (uVar16 & 0xff00ff) << 8) << 0x10);
          uVar16 = (uint)lVar30;
          uVar19 = extraout_x1;
          if ((1 - (uVar16 >> 5) & 0xff) != 0) {
            *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
                 *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
            while( true ) {
              uVar19 = 7L << ((ulonglong)(uint)((int)lVar30 * 3) & 0x3f) | uVar19;
              uVar16 = ((uint)(float)local_110 & 0xaaaaaaaa) >> 1 |
                       ((uint)(float)local_110 & 0x55555555) << 1;
              uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
              lVar30 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
              uVar16 = (uint)lVar30;
              if ((1 - (uVar16 >> 5) & 0xff) == 0) break;
              *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
                   *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
            }
          }
          puVar21[1] = uVar19;
          uVar19 = 0;
          uVar16 = *(uint *)(local_118 + 0x3748);
          if (uVar16 != 0) {
            lVar30 = *(longlong *)(param_1 + 0xf740);
            uVar41 = 0;
            uVar25 = uVar16;
            do {
              uVar15 = uVar25 + uVar41 >> 1;
              uVar19 = (ulonglong)uVar15;
              uVar39 = uVar19 * 0x40;
              lVar20 = uVar39 + lVar30;
              lVar31 = 0;
              if (((*(ulonglong *)(uVar39 + lVar30) == uVar32) &&
                  (lVar31 = 1, *(ulonglong *)(lVar20 + 8) == local_f0)) &&
                 ((((lVar31 = 2, *(ulonglong *)(lVar20 + 0x10) == local_d0 &&
                    ((lVar31 = 3, *(ulonglong *)(lVar20 + 0x18) == uVar38 &&
                     (lVar31 = 4, *(ulonglong *)(lVar20 + 0x20) == uVar33)))) &&
                   (lVar31 = 5, *(ulonglong *)(lVar20 + 0x28) == uVar6)) &&
                  (lVar31 = 6, *(ulonglong *)(lVar20 + 0x30) == uVar7)))) {
                puVar23 = (ulonglong *)(lVar20 + 8);
LAB_1800275e0:
                lVar31 = 0;
                if ((((((*(ulonglong *)(uVar39 + lVar30) == uVar32) &&
                       (lVar31 = 1, *puVar23 == local_f0)) &&
                      (lVar31 = 2, *(ulonglong *)(lVar30 + 0x10 + uVar39) == local_d0)) &&
                     ((lVar31 = 3, *(ulonglong *)(lVar30 + 0x18 + uVar39) == uVar38 &&
                      (lVar31 = 4, *(ulonglong *)(lVar30 + 0x20 + uVar39) == uVar33)))) &&
                    ((lVar31 = 5, *(ulonglong *)(lVar20 + 0x28) == uVar6 &&
                     (lVar31 = 6, *(ulonglong *)(lVar20 + 0x30) == uVar7)))) ||
                   (local_a0[lVar31] <= *(ulonglong *)(lVar20 + lVar31 * 8))) break;
                uVar41 = uVar15 + 1;
                uVar19 = (ulonglong)(uVar15 + 1);
                uVar15 = uVar25;
              }
              else if (*(ulonglong *)(lVar20 + lVar31 * 8) <= local_a0[lVar31]) {
                puVar23 = (ulonglong *)((uVar39 | 8) + lVar30);
                goto LAB_1800275e0;
              }
              uVar25 = uVar15;
            } while (uVar25 != uVar41);
          }
          if (((((uint)uVar19 == uVar16) ||
               (puVar23 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40),
               *puVar23 != uVar32)) ||
              ((puVar23[1] != local_f0 ||
               (((puVar23[2] != local_d0 || (puVar23[3] != uVar38)) || (puVar23[4] != uVar33))))))
             || ((puVar23[5] != uVar6 || (puVar23[6] != uVar7)))) {
            uVar41 = *(uint *)(local_118 + 0x374c);
            if (uVar41 == uVar16) {
              uVar16 = 0x10;
              if (uVar41 != 0) {
                uVar16 = uVar41 << 1;
              }
              lVar30 = thunk_FUN_180102f80((ulonglong)uVar16 << 6);
              if (lVar30 != 0) {
                uVar32 = 0;
                if (*(int *)(lVar27 + 0x3748) != 0) {
                  do {
                    uVar41 = (int)uVar32 + 1;
                    puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + uVar32 * 0x40);
                    puVar3 = (undefined8 *)(lVar30 + uVar32 * 0x40);
                    uVar42 = *puVar29;
                    uVar18 = puVar29[3];
                    uVar22 = puVar29[2];
                    puVar3[1] = puVar29[1];
                    *puVar3 = uVar42;
                    puVar3[3] = uVar18;
                    puVar3[2] = uVar22;
                    uVar42 = puVar29[4];
                    uVar18 = puVar29[7];
                    uVar22 = puVar29[6];
                    puVar3[5] = puVar29[5];
                    puVar3[4] = uVar42;
                    puVar3[7] = uVar18;
                    puVar3[6] = uVar22;
                    uVar32 = (ulonglong)uVar41;
                  } while (uVar41 < *(uint *)(lVar27 + 0x3748));
                }
                thunk_FUN_180102fc0(*(undefined8 *)(uVar43 + 0x7738));
                *(longlong *)(uVar43 + 0x7738) = lVar30;
                *(longlong *)(param_1 + 0xf740) = lVar30;
                *(uint *)(local_118 + 0x374c) = uVar16;
              }
            }
            uVar16 = *(uint *)(local_118 + 0x3748);
            uVar32 = (ulonglong)uVar16;
            if (*(uint *)(local_118 + 0x374c) != uVar16) {
              while ((uint)uVar19 < uVar16) {
                uVar16 = (int)uVar32 - 1;
                puVar29 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + uVar32 * 0x40);
                puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xf740) + (ulonglong)uVar16 * 0x40);
                uVar42 = *puVar3;
                uVar18 = puVar3[3];
                uVar22 = puVar3[2];
                puVar29[1] = puVar3[1];
                *puVar29 = uVar42;
                puVar29[3] = uVar18;
                puVar29[2] = uVar22;
                uVar42 = puVar3[4];
                uVar18 = puVar3[7];
                uVar22 = puVar3[6];
                puVar29[5] = puVar3[5];
                puVar29[4] = uVar42;
                puVar29[7] = uVar18;
                puVar29[6] = uVar22;
                uVar32 = (ulonglong)uVar16;
              }
              *(int *)(local_118 + 0x3748) = *(int *)(local_118 + 0x3748) + 1;
              puVar23 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40);
              puVar23[1] = local_a0[1];
              *puVar23 = local_a0[0];
              puVar23[3] = local_a0[3];
              puVar23[2] = local_a0[2];
              puVar23[5] = local_a0[5];
              puVar23[4] = local_a0[4];
              puVar23[6] = local_a0[6];
              *(undefined8 **)(*(longlong *)(param_1 + 0xf740) + uVar19 * 0x40 + 0x38) = puVar21;
            }
          }
          else {
            puVar23[7] = (ulonglong)puVar21;
          }
        }
        else {
          local_100[0] = uVar16;
          lVar27 = *(longlong *)(param_1 + 0xf740);
          uVar41 = 0;
          uVar25 = uVar16;
          do {
            uVar15 = uVar25 + uVar41 >> 1;
            uVar39 = (ulonglong)uVar15;
            uVar19 = uVar39 * 0x40;
            lVar30 = uVar19 + lVar27;
            lVar20 = 0;
            if ((((*(ulonglong *)(uVar19 + lVar27) == uVar32) &&
                 (lVar20 = 1, *(ulonglong *)(lVar30 + 8) == local_f0)) &&
                (lVar20 = 2, *(ulonglong *)(lVar30 + 0x10) == local_d0)) &&
               (((lVar20 = 3, *(ulonglong *)(lVar30 + 0x18) == uVar38 &&
                 (lVar20 = 4, *(ulonglong *)(lVar30 + 0x20) == uVar33)) &&
                ((lVar20 = 5, *(ulonglong *)(lVar30 + 0x28) == uVar6 &&
                 (lVar20 = 6, *(ulonglong *)(lVar30 + 0x30) == uVar7)))))) {
              puVar23 = (ulonglong *)(lVar30 + 8);
LAB_1800272e0:
              lVar20 = 1;
              if (((*puVar23 == local_f0) &&
                  (lVar20 = 2, *(ulonglong *)(lVar27 + 0x10 + uVar19) == local_d0)) &&
                 ((lVar20 = 3, *(ulonglong *)(lVar27 + 0x18 + uVar19) == uVar38 &&
                  (((lVar20 = 4, *(ulonglong *)(lVar27 + 0x20 + uVar19) == uVar33 &&
                    (lVar20 = 5, *(ulonglong *)(lVar30 + 0x28) == uVar6)) &&
                   (lVar20 = 6, *(ulonglong *)(lVar30 + 0x30) == uVar7)))))) break;
LAB_180027340:
              if (local_a0[lVar20] <= *(ulonglong *)(lVar30 + lVar20 * 8)) break;
              uVar41 = uVar15 + 1;
              uVar39 = (ulonglong)(uVar15 + 1);
              uVar15 = uVar25;
            }
            else if (*(ulonglong *)(lVar30 + lVar20 * 8) <= local_a0[lVar20]) {
              puVar23 = (ulonglong *)((uVar19 | 8) + lVar27);
              lVar20 = 0;
              if (*(ulonglong *)(uVar19 + lVar27) == uVar32) goto LAB_1800272e0;
              goto LAB_180027340;
            }
            uVar25 = uVar15;
          } while (uVar25 != uVar41);
          if ((((((uint)uVar39 == uVar16) ||
                (puVar23 = (ulonglong *)(*(longlong *)(param_1 + 0xf740) + uVar39 * 0x40),
                *puVar23 != uVar32)) ||
               ((puVar23[1] != local_f0 || ((puVar23[2] != local_d0 || (puVar23[3] != uVar38))))))
              || (puVar23[4] != uVar33)) ||
             (((puVar23[5] != uVar6 || (puVar23[6] != uVar7)) || (puVar23 + 7 == (ulonglong *)0x0)))
             ) goto LAB_1800273ec;
          puVar21 = (undefined8 *)puVar23[7];
        }
        lVar27 = FUN_180031d98(puVar21,local_e8,0);
        if (lVar27 == 0) goto LAB_18002782c;
        goto LAB_1800278f4;
      }
      if ((*(int *)(local_c8 + 0x3650) == 0) || (*(int *)(local_118 + 0x3d84) != 0)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      uVar16 = *(uint *)(*(longlong *)(lVar27 + 8) + 0x1214);
      uVar32 = *(ulonglong *)(param_1 + 0xfe0) >> 0x3d;
      if ((*(uint *)(local_c8 + 0x3590) & uVar16) == 0) {
        uVar32 = 0;
      }
      uVar38 = (*(ulonglong *)(param_1 + 0xfe0) ^ uVar32 << 0x3d) & 0xdfffffffffffffff ^
               uVar32 << 0x3d;
      uVar32 = uVar38 >> 0x3e;
      if ((*(uint *)(local_c8 + 0x3594) & uVar16) == 0) {
        uVar32 = 0;
      }
      uVar38 = (uVar38 ^ uVar32 << 0x3e) & 0xbfffffffffffffff ^ uVar32 << 0x3e;
      uVar32 = uVar38 >> 0x34;
      if (*(char *)(local_f8 + 0x65e) == '\0') {
        uVar32 = 7;
      }
      uVar38 = (uVar38 ^ uVar32 << 0x34) & 0xff8fffffffffffff ^ uVar32 << 0x34;
      uVar32 = uVar38 >> 0x38;
      if (!bVar12) {
        uVar32 = 0;
      }
      uVar38 = (uVar38 ^ uVar32 << 0x38) & 0xfeffffffffffffff ^ uVar32 << 0x38;
      uVar32 = uVar38 >> 0x39;
      if (*(char *)(*(longlong *)(lVar27 + 8) + 0x126d) == '\x03') {
        uVar32 = 0;
      }
      uVar33 = (uVar38 ^ uVar32 << 0x39) & 0xfdffffffffffffff ^ uVar32 << 0x39;
      uVar38 = uVar33 >> 0x3c;
      if (*(char *)(local_f8 + 0x66e) == '\0') {
        uVar38 = 0;
      }
      uVar38 = (uVar33 ^ uVar38 << 0x3c) & 0xefffffffffffffff ^ uVar38 << 0x3c;
      if ((uVar32 & 1) == 0) {
        uVar38 = uVar38 & 0xf3ffffffffffffff;
      }
      lVar27 = FUN_180031d98(lVar27 + 0x10,uVar38,*(undefined8 *)(param_1 + 0xea0));
      uVar41 = (uint)(lVar27 != 0);
    }
    else {
      local_120[0] = uVar16;
LAB_18002782c:
      if (*(char *)(local_f8 + 0x662) == '\0') {
        uVar16 = local_120[0];
        if (4 < local_120[0]) {
          uVar16 = 4;
        }
        lVar27 = *(longlong *)(param_1 + 0xf6e0);
        if ((*(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar27 + 400)) ||
           (bVar12 = false, *(longlong *)(param_1 + 0xfcc0) == *(longlong *)(lVar27 + 0x1d0))) {
          bVar12 = true;
        }
        iVar14 = 10;
        if (!bVar12) {
          iVar14 = 0;
        }
        iVar35 = 5;
        if (*(char *)(local_f8 + 0x660) == '\0') {
          iVar35 = iVar14;
        }
        lVar27 = *(longlong *)
                  (lVar27 + (ulonglong)
                            (uint)(iVar35 + *(int *)(&DAT_18022aa28 + (ulonglong)uVar16 * 4)) * 8 +
                  0xd8);
      }
      else if (((*(longlong *)(param_1 + 0xf9b8) == 0) && (*(longlong *)(param_1 + 0xf9c0) == 0)) &&
              (*(longlong *)(param_1 + 0xf9c8) == 0)) {
        lVar27 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x150);
      }
      else {
        lVar27 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x160);
      }
LAB_1800278f4:
      uVar41 = 1;
    }
    *(undefined1 *)(param_1 + 0xf688) = 0;
    if (*(longlong *)(param_1 + 0xfcc8) != lVar27) {
      *(longlong *)(param_1 + 0xfcc8) = lVar27;
      *(undefined1 *)(param_1 + 0x10588) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xf694) & 1) != 0) {
    FUN_18001eff8(param_1 + 0x7670,param_1 + 0xb670,1);
    *(undefined8 *)(param_1 + 0x6a60) = *(undefined8 *)(param_1 + 0xb670);
    *(undefined8 *)(param_1 + 0x6a68) = *(undefined8 *)(uVar43 + 0x3678);
    *(undefined8 *)(param_1 + 0x6a70) = *(undefined8 *)(uVar43 + 0x3680);
    *(undefined8 *)(param_1 + 0x6a78) = *(undefined8 *)(uVar43 + 0x3688);
    *(undefined8 *)(param_1 + 0x6a80) = *(undefined8 *)(uVar43 + 0x3690);
    *(undefined8 *)(param_1 + 0x6a88) = *(undefined8 *)(uVar43 + 0x3698);
    *(undefined8 *)(param_1 + 0x6a90) = *(undefined8 *)(uVar43 + 0x36a0);
    *(undefined8 *)(param_1 + 0x6a98) = *(undefined8 *)(uVar43 + 0x36a8);
    *(uint *)(param_1 + 0xf694) = *(uint *)(param_1 + 0xf694) & 0xfffffffe;
  }
  if (*(char *)(uVar28 + 0x691) != '\0') {
    uVar22 = *(undefined8 *)(param_1 + 0xf6f8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      thunk_FUN_180001218(local_e8,param_1 + 0x6930,0xc20);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x691) = 0;
  }
  if (((*(uint *)(local_c8 + 0x2940) & 0xf800) != 0) && (*(char *)(uVar28 + 0x692) != '\0')) {
    uVar32 = 0;
    local_120[0] = uVar41;
    local_f0 = uVar28;
    do {
      puVar1 = (uint *)(param_1 + 0xf694 + uVar32 * 4);
      uVar16 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
      uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
      if ((1 - ((uint)lVar27 >> 5) & 0xff) != 0) {
        do {
          uVar16 = (uint)lVar27;
          iVar14 = uVar16 + (int)uVar32 * 0x20;
          *(byte *)((longlong)puVar1 + (longlong)((int)uVar16 >> 3)) =
               *(byte *)((longlong)puVar1 + (longlong)((int)uVar16 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
          if (0xff < iVar14) break;
          FUN_18001eff8(param_1 + 0x7670 + (longlong)iVar14 * 0x40,
                        param_1 + 0xb670 + (longlong)iVar14 * 0x40,1);
          uVar16 = (*puVar1 & 0xaaaaaaaa) >> 1 | (*puVar1 & 0x55555555) << 1;
          uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
          lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
        } while ((1 - ((uint)lVar27 >> 5) & 0xff) != 0);
      }
      uVar28 = local_f0;
      uVar41 = local_120[0];
      uVar16 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar16;
    } while (uVar16 < 8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    (**(code **)(*plVar17 + 0x180))
              (plVar17,*(undefined8 *)(param_1 + 0xf708),0,0,param_1 + 0x7670,0,0);
    *(undefined1 *)(uVar28 + 0x692) = 0;
  }
  if (*(char *)(uVar28 + 0x6c3) != '\0') {
    uVar22 = *(undefined8 *)(param_1 + 0xf7d8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      thunk_FUN_180001218(local_e8,param_1 + 0x6460,0x4d0);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x6c3) = 0;
  }
  if (*(char *)(uVar28 + 0x6b6) != '\0') {
    uVar22 = *(undefined8 *)(param_1 + 0xf7c0);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      thunk_FUN_180001218(local_e8,param_1 + 0x54a0,0xec0);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x6b6) = 0;
  }
  if (*(char *)(uVar28 + 0x6b4) != '\0') {
    uVar22 = *(undefined8 *)(uVar43 + 0x77b0);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      thunk_FUN_180001218(local_e8,param_1 + 0x51b0,0x2f0);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x6b4) = 0;
  }
  if (*(char *)(uVar28 + 0x6b5) != '\0') {
    uVar22 = *(undefined8 *)(uVar43 + 0x77b8);
    uVar26 = *(undefined4 *)(param_1 + 0xa4);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      thunk_FUN_180001218(local_e8,param_1 + 0x1070,uVar26);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x6b5) = 0;
  }
  if (local_108 != param_1) {
    local_e8 = *(undefined8 **)(uVar43 + 0x77b0);
    uStack_e0 = *(undefined8 *)(uVar43 + 0x77b8);
    local_b8 = *(longlong *)(param_1 + 0xf7c0);
    local_c0 = *(longlong *)(param_1 + 0xf7d8);
    local_b0 = *(longlong *)(uVar43 + 0x77c8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    (**(code **)(*plVar17 + 0x38))(plVar17,3,2,&local_e8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    (**(code **)(*plVar17 + 0x80))(plVar17,3,3,&local_c0);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    (**(code **)(*plVar17 + 0xb0))(plVar17,3,2,&local_e8);
  }
  if (*(char *)(uVar28 + 0x6b7) != '\0') {
    uVar22 = *(undefined8 *)(uVar43 + 0x77c8);
    plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
    iVar14 = (**(code **)(*plVar17 + 0x70))(plVar17,uVar22,0,4,0,&local_e8);
    if (-1 < iVar14) {
      uVar44 = *(undefined8 *)(param_1 + 0x6360);
      uVar42 = *(undefined8 *)(param_1 + 0x6378);
      uVar18 = *(undefined8 *)(param_1 + 0x6370);
      local_e8[1] = *(undefined8 *)(param_1 + 0x6368);
      *local_e8 = uVar44;
      local_e8[3] = uVar42;
      local_e8[2] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x6380);
      uVar42 = *(undefined8 *)(param_1 + 0x6398);
      uVar18 = *(undefined8 *)(param_1 + 0x6390);
      local_e8[5] = *(undefined8 *)(param_1 + 0x6388);
      local_e8[4] = uVar44;
      local_e8[7] = uVar42;
      local_e8[6] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x63a0);
      uVar42 = *(undefined8 *)(param_1 + 0x63b8);
      uVar18 = *(undefined8 *)(param_1 + 0x63b0);
      local_e8[9] = *(undefined8 *)(param_1 + 0x63a8);
      local_e8[8] = uVar44;
      local_e8[0xb] = uVar42;
      local_e8[10] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x63c0);
      uVar42 = *(undefined8 *)(param_1 + 0x63d8);
      uVar18 = *(undefined8 *)(param_1 + 0x63d0);
      local_e8[0xd] = *(undefined8 *)(param_1 + 0x63c8);
      local_e8[0xc] = uVar44;
      local_e8[0xf] = uVar42;
      local_e8[0xe] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x63e0);
      uVar42 = *(undefined8 *)(param_1 + 0x63f8);
      uVar18 = *(undefined8 *)(param_1 + 0x63f0);
      local_e8[0x11] = *(undefined8 *)(param_1 + 0x63e8);
      local_e8[0x10] = uVar44;
      local_e8[0x13] = uVar42;
      local_e8[0x12] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x6400);
      uVar42 = *(undefined8 *)(param_1 + 0x6418);
      uVar18 = *(undefined8 *)(param_1 + 0x6410);
      local_e8[0x15] = *(undefined8 *)(param_1 + 0x6408);
      local_e8[0x14] = uVar44;
      local_e8[0x17] = uVar42;
      local_e8[0x16] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x6420);
      uVar42 = *(undefined8 *)(param_1 + 0x6438);
      uVar18 = *(undefined8 *)(param_1 + 0x6430);
      local_e8[0x19] = *(undefined8 *)(param_1 + 0x6428);
      local_e8[0x18] = uVar44;
      local_e8[0x1b] = uVar42;
      local_e8[0x1a] = uVar18;
      uVar44 = *(undefined8 *)(param_1 + 0x6440);
      uVar42 = *(undefined8 *)(param_1 + 0x6458);
      uVar18 = *(undefined8 *)(param_1 + 0x6450);
      local_e8[0x1d] = *(undefined8 *)(param_1 + 0x6448);
      local_e8[0x1c] = uVar44;
      local_e8[0x1f] = uVar42;
      local_e8[0x1e] = uVar18;
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x78))(plVar17,uVar22,0);
    }
    *(undefined1 *)(uVar28 + 0x6b7) = 0;
  }
  if (*(char *)(uVar28 + 0x6c1) != '\0' || local_108 != param_1) {
    plVar17 = *(longlong **)(param_1 + 0xf9b0);
    if ((plVar17 == (longlong *)0x0) &&
       (plVar17 = *(longlong **)(param_1 + 0xf9d0), plVar17 == (longlong *)0x0)) {
      fVar45 = 1.0;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x3f800000);
    }
    else {
      uVar16 = *(uint *)((longlong)plVar17 + 0x24);
      uVar15 = (**(code **)(*plVar17 + 0x40))(plVar17,0);
      uVar25 = *(uint *)(plVar17 + 5);
      local_110 = (uint *)CONCAT44(local_110._4_4_,(float)uVar15 / (float)uVar16);
      uVar16 = (**(code **)(*plVar17 + 0x48))(plVar17,0);
      fVar45 = (float)uVar16 / (float)uVar25;
    }
    iVar40 = (int)((float)*(int *)(param_1 + 0xe60) * (float)local_110);
    iVar37 = (int)((float)*(int *)(param_1 + 0xe64) * fVar45);
    iVar35 = (int)((float)*(int *)(param_1 + 0xe68) * (float)local_110);
    *(int *)(param_1 + 0xe70) = iVar40;
    *(int *)(param_1 + 0xe74) = iVar37;
    iVar14 = (int)((float)*(int *)(param_1 + 0xe6c) * fVar45);
    *(int *)(param_1 + 0xe78) = iVar35;
    *(int *)(param_1 + 0xe7c) = iVar14;
    lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if ((((iVar40 != *(int *)(lVar27 + 0xbe8)) || (iVar37 != *(int *)(lVar27 + 0xbec))) ||
        (iVar35 != *(int *)(lVar27 + 0xbf0))) || (iVar14 != *(int *)(lVar27 + 0xbf4))) {
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x168))
                (*(longlong **)(lVar27 + 0x6b8),1,param_1 + 0xe70);
      uVar22 = *(undefined8 *)(param_1 + 0xe70);
      *(undefined8 *)(lVar27 + 0xbf0) = *(undefined8 *)(param_1 + 0xe78);
      *(undefined8 *)(lVar27 + 0xbe8) = uVar22;
    }
    *(undefined1 *)(uVar28 + 0x6c1) = 0;
    if (local_108 != param_1) {
      local_e8 = *(undefined8 **)(param_1 + 0xf6f8);
      uStack_e0 = *(undefined8 *)(uVar43 + 0x7700);
      local_d8 = *(undefined8 *)(param_1 + 0xf708);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x38))(plVar17,0,3,&local_e8);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0x80))(plVar17,0,2,&local_e8);
      plVar17 = *(longlong **)(*(longlong *)(uVar43 + 0x76d8) + 8);
      (**(code **)(*plVar17 + 0xb0))(plVar17,0,3,&local_e8);
    }
  }
  if (*(char *)(uVar28 + 0x68a) != '\0' || local_108 != param_1) {
    uVar16 = *(uint *)(param_1 + 0x18);
    lVar30 = *(longlong *)(param_1 + 0xf6d0);
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    lVar27 = lVar30 + (ulonglong)uVar16 * 0x18c0;
    cVar13 = *(longlong *)(lVar27 + 0xbc0) != 0;
    if ((bool)cVar13) {
      *(undefined8 *)(lVar27 + 0xbc0) = 0;
    }
    if (*(longlong *)(lVar27 + 0xbc8) != 0) {
      *(undefined8 *)(lVar27 + 0xbc8) = 0;
      cVar13 = cVar13 + '\x01';
    }
    if (*(longlong *)(lVar27 + 0xbd0) != 0) {
      *(undefined8 *)(lVar27 + 0xbd0) = 0;
      cVar13 = cVar13 + '\x01';
    }
    if (*(longlong *)(lVar27 + 0xbd8) != 0) {
      *(undefined8 *)(lVar27 + 0xbd8) = 0;
      cVar13 = cVar13 + '\x01';
    }
    if ((cVar13 != '\0') || (*(longlong *)(lVar27 + 0xbe0) != 0)) {
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x108))
                (*(longlong **)(lVar27 + 0x6b8),4,&local_c0,0);
      *(undefined8 *)(lVar30 + (ulonglong)uVar16 * 0x18c0 + 0xbe0) = 0;
    }
  }
  if (*(char *)(uVar28 + 0x689) != '\0' || local_108 != param_1) {
    lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (*(char *)(local_f8 + 0x662) == '\0') {
      if (*(longlong *)(lVar27 + 0x9f0) != *(longlong *)(param_1 + 0xf7e8)) {
        *(longlong *)(lVar27 + 0x9f0) = *(longlong *)(param_1 + 0xf7e8);
        (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar27 + 0x6b8),0x30,1,lVar27 + 0x9f0);
      }
      lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar12 = *(longlong *)(lVar27 + 0x870) != *(longlong *)(param_1 + 0xf828);
      if (bVar12) {
        *(longlong *)(lVar27 + 0x870) = *(longlong *)(param_1 + 0xf828);
      }
      uVar16 = (uint)bVar12;
      if (*(longlong *)(lVar27 + 0x878) == *(longlong *)(uVar43 + 0x7830)) {
LAB_180028140:
        uVar25 = 3;
        lVar30 = 0;
      }
      else {
        *(longlong *)(lVar27 + 0x878) = *(longlong *)(uVar43 + 0x7830);
        if (bVar12) {
          uVar16 = 2;
          goto LAB_180028140;
        }
        lVar30 = 1;
        uVar16 = 1;
        uVar25 = 2;
      }
      uVar15 = uVar16;
      if ((*(longlong *)(lVar27 + 0x880) != *(longlong *)(uVar43 + 0x7838)) &&
         (*(longlong *)(lVar27 + 0x880) = *(longlong *)(uVar43 + 0x7838), uVar15 = uVar25,
         uVar16 == 0)) {
        lVar30 = 2;
        uVar15 = 1;
      }
      if (*(longlong *)(lVar27 + 0x888) != *(longlong *)(uVar43 + 0x7840)) {
        *(longlong *)(lVar27 + 0x888) = *(longlong *)(uVar43 + 0x7840);
        if (uVar15 == 0) {
          lVar30 = 3;
          uVar15 = 1;
        }
        else {
          uVar15 = 4 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x890) != *(longlong *)(uVar43 + 0x7848)) {
        *(longlong *)(lVar27 + 0x890) = *(longlong *)(uVar43 + 0x7848);
        if (uVar15 == 0) {
          lVar30 = 4;
          uVar15 = 1;
        }
        else {
          uVar15 = 5 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x898) != *(longlong *)(uVar43 + 0x7850)) {
        *(longlong *)(lVar27 + 0x898) = *(longlong *)(uVar43 + 0x7850);
        if (uVar15 == 0) {
          lVar30 = 5;
          uVar15 = 1;
        }
        else {
          uVar15 = 6 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8a0) != *(longlong *)(uVar43 + 0x7858)) {
        *(longlong *)(lVar27 + 0x8a0) = *(longlong *)(uVar43 + 0x7858);
        if (uVar15 == 0) {
          lVar30 = 6;
          uVar15 = 1;
        }
        else {
          uVar15 = 7 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8a8) != *(longlong *)(uVar43 + 0x7860)) {
        *(longlong *)(lVar27 + 0x8a8) = *(longlong *)(uVar43 + 0x7860);
        if (uVar15 == 0) {
          lVar30 = 7;
          uVar15 = 1;
        }
        else {
          uVar15 = 8 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8b0) != *(longlong *)(uVar43 + 0x7868)) {
        *(longlong *)(lVar27 + 0x8b0) = *(longlong *)(uVar43 + 0x7868);
        if (uVar15 == 0) {
          lVar30 = 8;
          uVar15 = 1;
        }
        else {
          uVar15 = 9 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8b8) != *(longlong *)(uVar43 + 0x7870)) {
        *(longlong *)(lVar27 + 0x8b8) = *(longlong *)(uVar43 + 0x7870);
        if (uVar15 == 0) {
          lVar30 = 9;
          uVar15 = 1;
        }
        else {
          uVar15 = 10 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8c0) != *(longlong *)(uVar43 + 0x7878)) {
        *(longlong *)(lVar27 + 0x8c0) = *(longlong *)(uVar43 + 0x7878);
        if (uVar15 == 0) {
          lVar30 = 10;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xb - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8c8) != *(longlong *)(uVar43 + 0x7880)) {
        *(longlong *)(lVar27 + 0x8c8) = *(longlong *)(uVar43 + 0x7880);
        if (uVar15 == 0) {
          lVar30 = 0xb;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xc - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8d0) != *(longlong *)(uVar43 + 0x7888)) {
        *(longlong *)(lVar27 + 0x8d0) = *(longlong *)(uVar43 + 0x7888);
        if (uVar15 == 0) {
          lVar30 = 0xc;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xd - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8d8) != *(longlong *)(uVar43 + 0x7890)) {
        *(longlong *)(lVar27 + 0x8d8) = *(longlong *)(uVar43 + 0x7890);
        if (uVar15 == 0) {
          lVar30 = 0xd;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xe - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8e0) != *(longlong *)(uVar43 + 0x7898)) {
        *(longlong *)(lVar27 + 0x8e0) = *(longlong *)(uVar43 + 0x7898);
        if (uVar15 == 0) {
          lVar30 = 0xe;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xf - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8e8) == *(longlong *)(uVar43 + 0x78a0)) {
LAB_1800283ac:
        if (uVar15 != 0) goto LAB_1800283b0;
      }
      else {
        *(longlong *)(lVar27 + 0x8e8) = *(longlong *)(uVar43 + 0x78a0);
        if (uVar15 != 0) {
          uVar15 = 0x10 - (int)lVar30;
          goto LAB_1800283ac;
        }
        lVar30 = 0xf;
        uVar15 = 1;
LAB_1800283b0:
        (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x870);
      }
      lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar12 = *(longlong *)(lVar27 + 0x8f0) != *(longlong *)(param_1 + 0xf8a8);
      if (bVar12) {
        *(longlong *)(lVar27 + 0x8f0) = *(longlong *)(param_1 + 0xf8a8);
      }
      uVar16 = (uint)bVar12;
      if (*(longlong *)(lVar27 + 0x8f8) == *(longlong *)(uVar43 + 0x78b0)) {
LAB_180028428:
        uVar25 = 3;
        lVar30 = 0x10;
      }
      else {
        *(longlong *)(lVar27 + 0x8f8) = *(longlong *)(uVar43 + 0x78b0);
        if (bVar12) {
          uVar16 = 2;
          goto LAB_180028428;
        }
        lVar30 = 0x11;
        uVar16 = 1;
        uVar25 = 2;
      }
      uVar15 = uVar16;
      if ((*(longlong *)(lVar27 + 0x900) != *(longlong *)(uVar43 + 0x78b8)) &&
         (*(longlong *)(lVar27 + 0x900) = *(longlong *)(uVar43 + 0x78b8), uVar15 = uVar25,
         uVar16 == 0)) {
        lVar30 = 0x12;
        uVar15 = 1;
      }
      if (*(longlong *)(lVar27 + 0x908) != *(longlong *)(uVar43 + 0x78c0)) {
        *(longlong *)(lVar27 + 0x908) = *(longlong *)(uVar43 + 0x78c0);
        if (uVar15 == 0) {
          lVar30 = 0x13;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x14 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x910) != *(longlong *)(uVar43 + 0x78c8)) {
        *(longlong *)(lVar27 + 0x910) = *(longlong *)(uVar43 + 0x78c8);
        if (uVar15 == 0) {
          lVar30 = 0x14;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x15 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x918) != *(longlong *)(uVar43 + 0x78d0)) {
        *(longlong *)(lVar27 + 0x918) = *(longlong *)(uVar43 + 0x78d0);
        if (uVar15 == 0) {
          lVar30 = 0x15;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x16 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x920) != *(longlong *)(uVar43 + 0x78d8)) {
        *(longlong *)(lVar27 + 0x920) = *(longlong *)(uVar43 + 0x78d8);
        if (uVar15 == 0) {
          lVar30 = 0x16;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x17 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x928) != *(longlong *)(uVar43 + 0x78e0)) {
        *(longlong *)(lVar27 + 0x928) = *(longlong *)(uVar43 + 0x78e0);
        if (uVar15 == 0) {
          lVar30 = 0x17;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x18 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x930) != *(longlong *)(uVar43 + 0x78e8)) {
        *(longlong *)(lVar27 + 0x930) = *(longlong *)(uVar43 + 0x78e8);
        if (uVar15 == 0) {
          lVar30 = 0x18;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x19 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x938) != *(longlong *)(uVar43 + 0x78f0)) {
        *(longlong *)(lVar27 + 0x938) = *(longlong *)(uVar43 + 0x78f0);
        if (uVar15 == 0) {
          lVar30 = 0x19;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1a - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x940) != *(longlong *)(uVar43 + 0x78f8)) {
        *(longlong *)(lVar27 + 0x940) = *(longlong *)(uVar43 + 0x78f8);
        if (uVar15 == 0) {
          lVar30 = 0x1a;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1b - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x948) != *(longlong *)(uVar43 + 0x7900)) {
        *(longlong *)(lVar27 + 0x948) = *(longlong *)(uVar43 + 0x7900);
        if (uVar15 == 0) {
          lVar30 = 0x1b;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1c - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x950) != *(longlong *)(uVar43 + 0x7908)) {
        *(longlong *)(lVar27 + 0x950) = *(longlong *)(uVar43 + 0x7908);
        if (uVar15 == 0) {
          lVar30 = 0x1c;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1d - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x958) != *(longlong *)(uVar43 + 0x7910)) {
        *(longlong *)(lVar27 + 0x958) = *(longlong *)(uVar43 + 0x7910);
        if (uVar15 == 0) {
          lVar30 = 0x1d;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1e - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x960) != *(longlong *)(uVar43 + 31000)) {
        *(longlong *)(lVar27 + 0x960) = *(longlong *)(uVar43 + 31000);
        if (uVar15 == 0) {
          lVar30 = 0x1e;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1f - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x968) == *(longlong *)(uVar43 + 0x7920)) {
LAB_180028694:
        if (uVar15 != 0) goto LAB_180028698;
      }
      else {
        *(longlong *)(lVar27 + 0x968) = *(longlong *)(uVar43 + 0x7920);
        if (uVar15 != 0) {
          uVar15 = 0x20 - (int)lVar30;
          goto LAB_180028694;
        }
        lVar30 = 0x1f;
        uVar15 = 1;
LAB_180028698:
        (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x870);
      }
      lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar12 = *(longlong *)(lVar27 + 0x970) != *(longlong *)(param_1 + 0xf928);
      if (bVar12) {
        *(longlong *)(lVar27 + 0x970) = *(longlong *)(param_1 + 0xf928);
      }
      uVar16 = (uint)bVar12;
      if (*(longlong *)(lVar27 + 0x978) == *(longlong *)(uVar43 + 0x7930)) {
LAB_180028710:
        uVar25 = 3;
        lVar30 = 0x20;
      }
      else {
        *(longlong *)(lVar27 + 0x978) = *(longlong *)(uVar43 + 0x7930);
        if (bVar12) {
          uVar16 = 2;
          goto LAB_180028710;
        }
        lVar30 = 0x21;
        uVar16 = 1;
        uVar25 = 2;
      }
      uVar15 = uVar16;
      if ((*(longlong *)(lVar27 + 0x980) != *(longlong *)(uVar43 + 0x7938)) &&
         (*(longlong *)(lVar27 + 0x980) = *(longlong *)(uVar43 + 0x7938), uVar15 = uVar25,
         uVar16 == 0)) {
        lVar30 = 0x22;
        uVar15 = 1;
      }
      if (*(longlong *)(lVar27 + 0x988) != *(longlong *)(uVar43 + 0x7940)) {
        *(longlong *)(lVar27 + 0x988) = *(longlong *)(uVar43 + 0x7940);
        if (uVar15 == 0) {
          lVar30 = 0x23;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x24 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x990) != *(longlong *)(uVar43 + 0x7948)) {
        *(longlong *)(lVar27 + 0x990) = *(longlong *)(uVar43 + 0x7948);
        if (uVar15 == 0) {
          lVar30 = 0x24;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x25 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x998) != *(longlong *)(uVar43 + 0x7950)) {
        *(longlong *)(lVar27 + 0x998) = *(longlong *)(uVar43 + 0x7950);
        if (uVar15 == 0) {
          lVar30 = 0x25;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x26 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9a0) != *(longlong *)(uVar43 + 0x7958)) {
        *(longlong *)(lVar27 + 0x9a0) = *(longlong *)(uVar43 + 0x7958);
        if (uVar15 == 0) {
          lVar30 = 0x26;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x27 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9a8) != *(longlong *)(uVar43 + 0x7960)) {
        *(longlong *)(lVar27 + 0x9a8) = *(longlong *)(uVar43 + 0x7960);
        if (uVar15 == 0) {
          lVar30 = 0x27;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x28 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9b0) != *(longlong *)(uVar43 + 0x7968)) {
        *(longlong *)(lVar27 + 0x9b0) = *(longlong *)(uVar43 + 0x7968);
        if (uVar15 == 0) {
          lVar30 = 0x28;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x29 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9b8) != *(longlong *)(uVar43 + 0x7970)) {
        *(longlong *)(lVar27 + 0x9b8) = *(longlong *)(uVar43 + 0x7970);
        if (uVar15 == 0) {
          lVar30 = 0x29;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2a - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9c0) != *(longlong *)(uVar43 + 0x7978)) {
        *(longlong *)(lVar27 + 0x9c0) = *(longlong *)(uVar43 + 0x7978);
        if (uVar15 == 0) {
          lVar30 = 0x2a;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2b - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9c8) != *(longlong *)(uVar43 + 0x7980)) {
        *(longlong *)(lVar27 + 0x9c8) = *(longlong *)(uVar43 + 0x7980);
        if (uVar15 == 0) {
          lVar30 = 0x2b;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2c - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9d0) != *(longlong *)(uVar43 + 0x7988)) {
        *(longlong *)(lVar27 + 0x9d0) = *(longlong *)(uVar43 + 0x7988);
        if (uVar15 == 0) {
          lVar30 = 0x2c;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2d - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9d8) != *(longlong *)(uVar43 + 0x7990)) {
        *(longlong *)(lVar27 + 0x9d8) = *(longlong *)(uVar43 + 0x7990);
        if (uVar15 == 0) {
          lVar30 = 0x2d;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2e - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9e0) != *(longlong *)(uVar43 + 0x7998)) {
        *(longlong *)(lVar27 + 0x9e0) = *(longlong *)(uVar43 + 0x7998);
        if (uVar15 == 0) {
          lVar30 = 0x2e;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x2f - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x9e8) != *(longlong *)(uVar43 + 0x79a0)) {
        *(longlong *)(lVar27 + 0x9e8) = *(longlong *)(uVar43 + 0x79a0);
        if (uVar15 == 0) {
          lVar30 = 0x2f;
          uVar15 = 1;
          goto LAB_180028e24;
        }
        iVar14 = 0x30;
LAB_180028e1c:
        uVar15 = iVar14 - (int)lVar30;
      }
LAB_180028e20:
      if (uVar15 != 0) goto LAB_180028e24;
    }
    else {
      bVar12 = *(longlong *)(lVar27 + 0x8f0) != 0;
      if (bVar12) {
        *(undefined8 *)(lVar27 + 0x8f0) = 0;
      }
      uVar16 = (uint)bVar12;
      if (*(longlong *)(lVar27 + 0x8f8) == 0) {
LAB_1800289b4:
        uVar25 = 3;
        lVar30 = 0x10;
      }
      else {
        *(undefined8 *)(lVar27 + 0x8f8) = 0;
        if (bVar12) {
          uVar16 = 2;
          goto LAB_1800289b4;
        }
        lVar30 = 0x11;
        uVar16 = 1;
        uVar25 = 2;
      }
      uVar15 = uVar16;
      if ((*(longlong *)(lVar27 + 0x900) != 0) &&
         (*(undefined8 *)(lVar27 + 0x900) = 0, uVar15 = uVar25, uVar16 == 0)) {
        lVar30 = 0x12;
        uVar15 = 1;
      }
      if (*(longlong *)(lVar27 + 0x908) != 0) {
        *(undefined8 *)(lVar27 + 0x908) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x13;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x14 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x910) != 0) {
        *(undefined8 *)(lVar27 + 0x910) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x14;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x15 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x918) != 0) {
        *(undefined8 *)(lVar27 + 0x918) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x15;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x16 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x920) != 0) {
        *(undefined8 *)(lVar27 + 0x920) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x16;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x17 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x928) != 0) {
        *(undefined8 *)(lVar27 + 0x928) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x17;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x18 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x930) != 0) {
        *(undefined8 *)(lVar27 + 0x930) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x18;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x19 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x938) != 0) {
        *(undefined8 *)(lVar27 + 0x938) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x19;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1a - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x940) != 0) {
        *(undefined8 *)(lVar27 + 0x940) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x1a;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1b - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x948) != 0) {
        *(undefined8 *)(lVar27 + 0x948) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x1b;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1c - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x950) != 0) {
        *(undefined8 *)(lVar27 + 0x950) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x1c;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1d - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x958) != 0) {
        *(undefined8 *)(lVar27 + 0x958) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x1d;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1e - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x960) != 0) {
        *(undefined8 *)(lVar27 + 0x960) = 0;
        if (uVar15 == 0) {
          lVar30 = 0x1e;
          uVar15 = 1;
        }
        else {
          uVar15 = 0x1f - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x968) == 0) {
LAB_180028bb0:
        if (uVar15 != 0) goto LAB_180028bb4;
      }
      else {
        *(undefined8 *)(lVar27 + 0x968) = 0;
        if (uVar15 != 0) {
          uVar15 = 0x20 - (int)lVar30;
          goto LAB_180028bb0;
        }
        lVar30 = 0x1f;
        uVar15 = 1;
LAB_180028bb4:
        (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x40))
                  (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x870);
      }
      lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      bVar12 = *(longlong *)(lVar27 + 0x870) != *(longlong *)(param_1 + 0xf9a8);
      if (bVar12) {
        *(longlong *)(lVar27 + 0x870) = *(longlong *)(param_1 + 0xf9a8);
      }
      uVar16 = (uint)bVar12;
      if (*(longlong *)(lVar27 + 0x878) == 0) {
LAB_180028c24:
        uVar25 = 3;
        lVar30 = 0;
      }
      else {
        *(undefined8 *)(lVar27 + 0x878) = 0;
        if (bVar12) {
          uVar16 = 2;
          goto LAB_180028c24;
        }
        lVar30 = 1;
        uVar16 = 1;
        uVar25 = 2;
      }
      uVar15 = uVar16;
      if ((*(longlong *)(lVar27 + 0x880) != 0) &&
         (*(undefined8 *)(lVar27 + 0x880) = 0, uVar15 = uVar25, uVar16 == 0)) {
        lVar30 = 2;
        uVar15 = 1;
      }
      if (*(longlong *)(lVar27 + 0x888) != 0) {
        *(undefined8 *)(lVar27 + 0x888) = 0;
        if (uVar15 == 0) {
          lVar30 = 3;
          uVar15 = 1;
        }
        else {
          uVar15 = 4 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x890) != 0) {
        *(undefined8 *)(lVar27 + 0x890) = 0;
        if (uVar15 == 0) {
          lVar30 = 4;
          uVar15 = 1;
        }
        else {
          uVar15 = 5 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x898) != 0) {
        *(undefined8 *)(lVar27 + 0x898) = 0;
        if (uVar15 == 0) {
          lVar30 = 5;
          uVar15 = 1;
        }
        else {
          uVar15 = 6 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8a0) != 0) {
        *(undefined8 *)(lVar27 + 0x8a0) = 0;
        if (uVar15 == 0) {
          lVar30 = 6;
          uVar15 = 1;
        }
        else {
          uVar15 = 7 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8a8) != 0) {
        *(undefined8 *)(lVar27 + 0x8a8) = 0;
        if (uVar15 == 0) {
          lVar30 = 7;
          uVar15 = 1;
        }
        else {
          uVar15 = 8 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8b0) != 0) {
        *(undefined8 *)(lVar27 + 0x8b0) = 0;
        if (uVar15 == 0) {
          lVar30 = 8;
          uVar15 = 1;
        }
        else {
          uVar15 = 9 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8b8) != 0) {
        *(undefined8 *)(lVar27 + 0x8b8) = 0;
        if (uVar15 == 0) {
          lVar30 = 9;
          uVar15 = 1;
        }
        else {
          uVar15 = 10 - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8c0) != 0) {
        *(undefined8 *)(lVar27 + 0x8c0) = 0;
        if (uVar15 == 0) {
          lVar30 = 10;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xb - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8c8) != 0) {
        *(undefined8 *)(lVar27 + 0x8c8) = 0;
        if (uVar15 == 0) {
          lVar30 = 0xb;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xc - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8d0) != 0) {
        *(undefined8 *)(lVar27 + 0x8d0) = 0;
        if (uVar15 == 0) {
          lVar30 = 0xc;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xd - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8d8) != 0) {
        *(undefined8 *)(lVar27 + 0x8d8) = 0;
        if (uVar15 == 0) {
          lVar30 = 0xd;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xe - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8e0) != 0) {
        *(undefined8 *)(lVar27 + 0x8e0) = 0;
        if (uVar15 == 0) {
          lVar30 = 0xe;
          uVar15 = 1;
        }
        else {
          uVar15 = 0xf - (int)lVar30;
        }
      }
      if (*(longlong *)(lVar27 + 0x8e8) == 0) goto LAB_180028e20;
      *(undefined8 *)(lVar27 + 0x8e8) = 0;
      if (uVar15 != 0) {
        iVar14 = 0x10;
        goto LAB_180028e1c;
      }
      lVar30 = 0xf;
      uVar15 = 1;
LAB_180028e24:
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x40))
                (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x870);
    }
    *(undefined1 *)(uVar28 + 0x689) = 0;
  }
  if ((*(char *)(uVar28 + 0x6c0) != '\0' || local_108 != param_1) &&
     (*(char *)(local_f8 + 0x662) == '\0')) {
    uVar32 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    lVar30 = *(longlong *)(param_1 + 0xf6d0);
    lVar27 = uVar32 + lVar30;
    bVar12 = *(longlong *)(lVar27 + 0x810) != *(longlong *)(param_1 + 0xfba0);
    if (bVar12) {
      *(longlong *)(lVar27 + 0x810) = *(longlong *)(param_1 + 0xfba0);
    }
    uVar16 = (uint)bVar12;
    if (*(longlong *)(lVar27 + 0x818) == *(longlong *)(uVar43 + 0x7ba8)) {
LAB_180028ec4:
      uVar25 = 3;
      lVar20 = 0;
    }
    else {
      *(longlong *)(lVar27 + 0x818) = *(longlong *)(uVar43 + 0x7ba8);
      if (bVar12) {
        uVar16 = 2;
        goto LAB_180028ec4;
      }
      lVar20 = 1;
      uVar16 = 1;
      uVar25 = 2;
    }
    uVar15 = uVar16;
    if ((*(longlong *)(lVar27 + 0x820) != *(longlong *)(uVar43 + 0x7bb0)) &&
       (*(longlong *)(lVar27 + 0x820) = *(longlong *)(uVar43 + 0x7bb0), uVar15 = uVar25, uVar16 == 0
       )) {
      lVar20 = 2;
      uVar15 = 1;
    }
    if (*(longlong *)(lVar27 + 0x828) == *(longlong *)(uVar43 + 0x7bb8)) {
LAB_180028f20:
      if (uVar15 != 0) goto LAB_180028f24;
    }
    else {
      *(longlong *)(lVar27 + 0x828) = *(longlong *)(uVar43 + 0x7bb8);
      if (uVar15 != 0) {
        uVar15 = 4 - (int)lVar20;
        goto LAB_180028f20;
      }
      lVar20 = 3;
      uVar15 = 1;
LAB_180028f24:
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 200))
                (*(longlong **)(lVar27 + 0x6b8),lVar20,uVar15,
                 (uVar32 | lVar20 << 3) + lVar30 + 0x810);
    }
    lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    bVar12 = *(longlong *)(lVar27 + 0x838) != *(longlong *)(param_1 + 0xfbc8);
    if (bVar12) {
      *(longlong *)(lVar27 + 0x838) = *(longlong *)(param_1 + 0xfbc8);
    }
    uVar16 = (uint)bVar12;
    if (*(longlong *)(lVar27 + 0x840) == *(longlong *)(uVar43 + 0x7bd0)) {
LAB_180028fa4:
      uVar25 = 3;
      lVar30 = 5;
    }
    else {
      *(longlong *)(lVar27 + 0x840) = *(longlong *)(uVar43 + 0x7bd0);
      if (bVar12) {
        uVar16 = 2;
        goto LAB_180028fa4;
      }
      lVar30 = 6;
      uVar16 = 1;
      uVar25 = 2;
    }
    uVar15 = uVar16;
    if ((*(longlong *)(lVar27 + 0x848) != *(longlong *)(uVar43 + 0x7bd8)) &&
       (*(longlong *)(lVar27 + 0x848) = *(longlong *)(uVar43 + 0x7bd8), uVar15 = uVar25, uVar16 == 0
       )) {
      lVar30 = 7;
      uVar15 = 1;
    }
    if (*(longlong *)(lVar27 + 0x850) == *(longlong *)(uVar43 + 0x7be0)) {
LAB_180029000:
      if (uVar15 != 0) goto LAB_180029004;
    }
    else {
      *(longlong *)(lVar27 + 0x850) = *(longlong *)(uVar43 + 0x7be0);
      if (uVar15 != 0) {
        uVar15 = 9 - (int)lVar30;
        goto LAB_180029000;
      }
      lVar30 = 8;
      uVar15 = 1;
LAB_180029004:
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 200))
                (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x810);
    }
    lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    bVar12 = *(longlong *)(lVar27 + 0x860) != *(longlong *)(param_1 + 0xfbf0);
    if (bVar12) {
      *(longlong *)(lVar27 + 0x860) = *(longlong *)(param_1 + 0xfbf0);
    }
    uVar16 = (uint)bVar12;
    if (*(longlong *)(lVar27 + 0x868) == *(longlong *)(uVar43 + 0x7bf8)) {
LAB_18002907c:
      uVar25 = 3;
      lVar30 = 10;
    }
    else {
      *(longlong *)(lVar27 + 0x868) = *(longlong *)(uVar43 + 0x7bf8);
      if (bVar12) {
        uVar16 = 2;
        goto LAB_18002907c;
      }
      lVar30 = 0xb;
      uVar16 = 1;
      uVar25 = 2;
    }
    uVar15 = uVar16;
    if ((*(longlong *)(lVar27 + 0x870) != *(longlong *)(uVar43 + 0x7c00)) &&
       (*(longlong *)(lVar27 + 0x870) = *(longlong *)(uVar43 + 0x7c00), uVar15 = uVar25, uVar16 == 0
       )) {
      lVar30 = 0xc;
      uVar15 = 1;
    }
    if (*(longlong *)(lVar27 + 0x878) == *(longlong *)(uVar43 + 0x7c08)) {
LAB_1800290d8:
      if (uVar15 != 0) goto LAB_1800290dc;
    }
    else {
      *(longlong *)(lVar27 + 0x878) = *(longlong *)(uVar43 + 0x7c08);
      if (uVar15 != 0) {
        uVar15 = 0xe - (int)lVar30;
        goto LAB_1800290d8;
      }
      lVar30 = 0xd;
      uVar15 = 1;
LAB_1800290dc:
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 200))
                (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x810);
    }
    *(undefined1 *)(uVar28 + 0x6c0) = 0;
  }
  if ((*(char *)(uVar28 + 0x68a) != '\0') || (local_108 != param_1)) {
    uVar16 = *(uint *)(param_1 + 0x18);
    lVar20 = *(longlong *)(param_1 + 0xf6d0);
    lVar30 = *(longlong *)(uVar43 + 0x7cb0);
    bVar12 = *(char *)(local_f8 + 0x65d) == '\0';
    lVar27 = 0xfc68;
    if (bVar12) {
      lVar27 = 0xfb00;
    }
    local_c0 = *(longlong *)(param_1 + lVar27);
    lVar27 = 0xfc70;
    if (bVar12) {
      lVar27 = 0xfb08;
    }
    local_b8 = *(longlong *)(param_1 + lVar27);
    lVar27 = 0xfc78;
    if (bVar12) {
      lVar27 = 0xfb10;
    }
    local_b0 = *(longlong *)(param_1 + lVar27);
    lVar27 = 0xfc80;
    if (bVar12) {
      lVar27 = 0xfb18;
    }
    lVar31 = lVar20 + (ulonglong)uVar16 * 0x18c0;
    local_a8 = *(longlong *)(param_1 + lVar27);
    cVar13 = *(longlong *)(lVar31 + 0xbc0) != local_c0;
    if ((bool)cVar13) {
      *(longlong *)(lVar31 + 0xbc0) = local_c0;
    }
    if (*(longlong *)(lVar31 + 0xbc8) != local_b8) {
      *(longlong *)(lVar31 + 0xbc8) = local_b8;
      cVar13 = cVar13 + '\x01';
    }
    if (*(longlong *)(lVar31 + 0xbd0) != local_b0) {
      *(longlong *)(lVar31 + 0xbd0) = local_b0;
      cVar13 = cVar13 + '\x01';
    }
    if (*(longlong *)(lVar31 + 0xbd8) != local_a8) {
      *(longlong *)(lVar31 + 0xbd8) = local_a8;
      cVar13 = cVar13 + '\x01';
    }
    if ((cVar13 != '\0') || (lVar30 != *(longlong *)(lVar31 + 0xbe0))) {
      (**(code **)(**(longlong **)(lVar31 + 0x6b8) + 0x108))
                (*(longlong **)(lVar31 + 0x6b8),4,&local_c0,lVar30);
      *(longlong *)(lVar20 + (ulonglong)uVar16 * 0x18c0 + 0xbe0) = lVar30;
    }
    *(undefined1 *)(uVar28 + 0x68a) = 0;
  }
  if (*(char *)(uVar28 + 0x68b) != '\0' || local_108 != param_1) {
    puVar21 = (undefined8 *)(param_1 + 0x10420);
    if (*(char *)(local_f8 + 0x662) == '\0') {
      if (*(char *)(local_f8 + 0x66a) == '\0') {
        puVar29 = (undefined8 *)(param_1 + 0x7b0);
      }
      else {
        puVar29 = (undefined8 *)(param_1 + 0xb80);
      }
      uVar42 = *puVar29;
      uVar18 = puVar29[3];
      uVar22 = puVar29[2];
      *(undefined8 *)(param_1 + 0x10428) = puVar29[1];
      *puVar21 = uVar42;
      *(undefined8 *)(param_1 + 0x10438) = uVar18;
      *(undefined8 *)(param_1 + 0x10430) = uVar22;
      uVar22 = puVar29[4];
      *(undefined8 *)(param_1 + 0x10448) = puVar29[5];
      *(undefined8 *)(param_1 + 0x10440) = uVar22;
      *(undefined4 *)(param_1 + 0x10450) = *(undefined4 *)(puVar29 + 6);
      bVar8 = *(byte *)(local_f8 + 0x5a2);
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & bVar8;
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & bVar8;
      uVar9 = *(undefined1 *)(local_f8 + 0x5a0);
    }
    else {
      *(undefined8 *)(param_1 + 0x10428) = *(undefined8 *)(param_1 + 0xbbc);
      *puVar21 = *(undefined8 *)(param_1 + 0xbb4);
      *(undefined8 *)(param_1 + 0x10438) = *(undefined8 *)(param_1 + 0xbcc);
      *(undefined8 *)(param_1 + 0x10430) = *(undefined8 *)(param_1 + 0xbc4);
      *(undefined8 *)(param_1 + 0x10448) = *(undefined8 *)(param_1 + 0xbdc);
      *(undefined8 *)(param_1 + 0x10440) = *(undefined8 *)(param_1 + 0xbd4);
      *(undefined4 *)(param_1 + 0x10450) = *(undefined4 *)(param_1 + 0xbe4);
      bVar8 = *(byte *)(local_f8 + 0x5a2);
      *(byte *)(param_1 + 0x10430) = *(byte *)(param_1 + 0x10430) & bVar8;
      *(byte *)(param_1 + 0x10431) = *(byte *)(param_1 + 0x10431) & bVar8;
      uVar9 = *(undefined1 *)(local_f8 + 0x5a1);
    }
    FUN_1800e1fe8(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),puVar21,uVar9);
    *(undefined1 *)(uVar28 + 0x68b) = 0;
  }
  lVar27 = local_f8;
  if (*(char *)(uVar28 + 0x68c) != '\0' || local_108 != param_1) {
    if (*(uint *)(param_1 + 0xe5c) < 2) {
      local_100[0] = 0xffffffff;
    }
    else {
      local_100[0] = *(uint *)(param_1 + 0xe58);
    }
    lVar30 = 0;
    *(uint *)(param_1 + 0x10454) = (uint)(*(int *)(param_1 + 0xe9c) == 1);
    do {
      plVar17 = *(longlong **)(param_1 + 0xf9b0 + lVar30 * 8);
      if (plVar17 != (longlong *)0x0) {
        cVar13 = *(char *)(lVar27 + 0x662);
        if (*(char *)(lVar27 + 0x669) == '\0') {
          if (cVar13 == '\0') {
            cVar13 = (**(code **)(*plVar17 + 0x80))();
            lVar20 = 0xbe8;
            lVar31 = 0xc68;
            goto LAB_1800293a0;
          }
          lVar20 = 0xde8;
        }
        else if (cVar13 == '\0') {
          cVar13 = (**(code **)(*plVar17 + 0x80))();
          lVar20 = 0xce8;
          lVar31 = 0xd68;
LAB_1800293a0:
          if (cVar13 == '\0') {
            lVar20 = lVar31;
          }
          lVar20 = lVar20 + lVar30 * 0x20;
        }
        else {
          lVar20 = 0xde8;
        }
        puVar34 = (undefined4 *)(lVar20 + param_1);
        lVar20 = lVar30 * 0x20 + param_1;
        *(undefined4 *)(lVar20 + 0x1045c) = *puVar34;
        *(undefined4 *)(param_1 + lVar30 * 0x20 + 0x10460) = puVar34[1];
        *(undefined4 *)(lVar20 + 0x10464) = puVar34[2];
        *(undefined4 *)(lVar20 + 0x10468) = puVar34[3];
        *(undefined4 *)(lVar20 + 0x1046c) = puVar34[4];
        *(undefined4 *)(lVar20 + 0x10470) = puVar34[5];
        *(undefined4 *)(lVar20 + 0x10474) = puVar34[6];
        *(undefined1 *)(lVar20 + 0x10478) = *(undefined1 *)(puVar34 + 7);
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 != 4);
    FUN_1800e1940(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  param_1 + 0x10454,param_1 + 0xe80,local_100[0],1);
    *(undefined1 *)(uVar28 + 0x68c) = 0;
  }
  if (*(char *)(uVar28 + 0x68d) != '\0' || local_108 != param_1) {
    *(undefined4 *)(param_1 + 0xe3c) = 0;
    *(undefined4 *)(param_1 + 0xe14) = 0;
    if (*(longlong *)(param_1 + 0xf9d0) != 0) {
      if (*(uint *)(&DAT_180231470 +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4) == 0x20) {
        iVar14 = 0;
      }
      else {
        iVar14 = (int)((float)((1 << (ulonglong)
                                     (*(uint *)(&DAT_180231470 +
                                               (ulonglong)
                                               *(uint *)(*(longlong *)(param_1 + 0xf9d0) + 0x2c) * 4
                                               ) & 0x1f)) + -1) * *(float *)(param_1 + 0xe90));
      }
      *(int *)(param_1 + 0xe3c) = iVar14;
      *(int *)(param_1 + 0xe14) = iVar14;
    }
    if (*(char *)(local_f8 + 0x662) == '\0') {
      lVar27 = 0xe30;
      if (*(char *)(local_f8 + 0x668) == '\0') {
        lVar27 = 0xe08;
      }
      puVar34 = (undefined4 *)(lVar27 + param_1);
    }
    else {
      puVar34 = &DAT_180249e48;
    }
    *(undefined4 *)(param_1 + 0x1055c) = *puVar34;
    *(undefined4 *)(param_1 + 0x10560) = puVar34[1];
    *(undefined4 *)(param_1 + 0x10564) = puVar34[2];
    *(undefined4 *)(param_1 + 0x10568) = puVar34[3];
    *(undefined4 *)(param_1 + 0x1056c) = puVar34[4];
    *(undefined4 *)(param_1 + 0x10570) = puVar34[5];
    *(undefined4 *)(param_1 + 0x10574) = puVar34[6];
    *(undefined4 *)(param_1 + 0x10578) = puVar34[7];
    *(undefined4 *)(param_1 + 0x1057c) = puVar34[8];
    *(undefined4 *)(param_1 + 0x10580) = puVar34[9];
    FUN_1800e22c0(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  param_1 + 0x1055c);
    *(undefined1 *)(uVar28 + 0x68d) = 0;
  }
  if (*(char *)(uVar28 + 0x68e) != '\0' || local_108 != param_1) {
    iVar14 = *(int *)(local_c8 + 0x363c);
    if ((*(char *)(local_f8 + 0x662) == '\0') &&
       ((iVar14 != 0 || ((*(uint *)(local_c8 + 0x3654) & 1) != 0)))) {
      lVar27 = 0xee0;
    }
    else {
      lVar27 = 0xef8;
    }
    uVar22 = *(undefined8 *)(lVar27 + param_1);
    puVar21 = (undefined8 *)(param_1 + 0xfd88);
    iVar35 = *(int *)(local_118 + 0x37e0);
    *(undefined8 *)(param_1 + 0xfd90) = ((undefined8 *)(lVar27 + param_1))[1];
    *puVar21 = uVar22;
    *(undefined8 *)(param_1 + 0xfd98) = *(undefined8 *)(lVar27 + param_1 + 0x10);
    if (0xafff < iVar35) {
      *(float *)(local_118 + 0x3d88) = *(float *)(param_1 + 0xf10) + *(float *)(local_118 + 0x3d88);
      *(float *)(local_118 + 0x3d8c) = *(float *)(local_118 + 0x3d8c) + *(float *)(param_1 + 0xf14);
    }
    if (iVar14 == 0) {
      *(undefined4 *)(local_118 + 0x3d98) = 0;
      *(undefined4 *)(param_1 + 0xfd9c) = 0x3f800000;
    }
    lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (((((*(float *)(local_118 + 0x3d88) != *(float *)(lVar27 + 0xb80)) ||
          (*(float *)(local_118 + 0x3d8c) != *(float *)(lVar27 + 0xb84))) ||
         (*(float *)(local_118 + 0x3d90) != *(float *)(lVar27 + 0xb88))) ||
        ((*(float *)(local_118 + 0x3d94) != *(float *)(lVar27 + 0xb8c) ||
         (*(float *)(local_118 + 0x3d98) != *(float *)(lVar27 + 0xb90))))) ||
       (*(float *)(param_1 + 0xfd9c) != *(float *)(lVar27 + 0xb94))) {
      (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x160))
                (*(longlong **)(lVar27 + 0x6b8),1,puVar21);
      uVar22 = *puVar21;
      *(undefined8 *)(lVar27 + 0xb88) = *(undefined8 *)(param_1 + 0xfd90);
      *(undefined8 *)(lVar27 + 0xb80) = uVar22;
      *(undefined8 *)(lVar27 + 0xb90) = *(undefined8 *)(param_1 + 0xfd98);
    }
    *(undefined1 *)(uVar28 + 0x68e) = 0;
  }
  if (*(char *)(param_1 + 0x10588) != '\0' || local_108 != param_1) {
    FUN_1800e2ac8(*(undefined8 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(local_118 + 0x3d80),*(undefined8 *)(uVar43 + 0x7cb8),
                  *(undefined8 *)(param_1 + 0xfcc0),*(undefined8 *)(param_1 + 0xfcc8),
                  *(undefined8 *)(uVar43 + 0x7cd0));
    *(undefined1 *)(param_1 + 0x10588) = 0;
  }
  uVar16 = *(uint *)(local_118 + 0x3684);
  if (uVar16 != 0 || local_108 != param_1) {
    if (*(char *)(local_f8 + 0x662) == '\0') {
      uVar25 = (uVar16 & 0xaaaaaaaa) >> 1 | (uVar16 & 0x55555555) << 1;
      uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
      uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4;
      uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      local_110 = (uint *)CONCAT44(local_110._4_4_,uVar16);
      lVar27 = LZCOUNT(uVar25 >> 0x10 | uVar25 << 0x10);
      uVar16 = (uint)lVar27;
      if ((1 - (uVar16 >> 5) & 0xff) == 0) {
        uVar28 = FUN_18002995c(0xfb20);
        return uVar28;
      }
      *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
           *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      plVar17 = (longlong *)(param_1 + 0xfb20);
      local_120[0] = uVar41;
      local_f0 = uVar28;
      do {
        lVar30 = param_1 + lVar27 * 8;
        if (*(uint *)(lVar30 + 0x734) < (uint)*(byte *)(lVar30 + 0x733)) {
          fVar45 = (float)*(byte *)(lVar30 + 0x733);
        }
        else {
          fVar45 = (float)*(uint *)(lVar30 + 0x734);
        }
        lVar31 = lVar27 * 0x34;
        lVar20 = param_1 + lVar31;
        *(float *)(lVar20 + 0xdc) = fVar45;
        bVar8 = *(byte *)(lVar30 + 0x731);
        bVar10 = *(byte *)(lVar30 + 0x732);
        uVar28 = (ulonglong)bVar10;
        uVar16 = (uint)*(byte *)(lVar30 + 0x730);
        bVar12 = uVar16 == 2;
        if (bVar12) {
          uVar16 = 0;
        }
        if (!bVar12) {
          fVar45 = 3.4028235e+38;
        }
        uVar41 = (uint)bVar10;
        *(float *)(lVar20 + 0xe0) = fVar45;
        *(float *)(lVar20 + 0x420) = fVar45;
        if (bVar8 == 2 || uVar41 == 2) {
          *(undefined4 *)(lVar20 + 0xb0) = 0x55;
          if (bVar8 != 2 && bVar10 != 2) goto LAB_18002985c;
          uVar26 = 0xd5;
        }
        else {
          uVar28 = (ulonglong)uVar41;
          *(undefined4 *)(lVar20 + 0xb0) =
               *(undefined4 *)
                (&DAT_1802310b0 +
                ((ulonglong)uVar16 | ((ulonglong)(uint)bVar8 | (ulonglong)uVar41 << 1) << 1) * 4);
LAB_18002985c:
          uVar26 = *(undefined4 *)
                    (&DAT_1802310d0 +
                    ((ulonglong)uVar16 | ((ulonglong)bVar8 | uVar28 << 1) << 1) * 4);
        }
        *(undefined4 *)(param_1 + 0x3f0 + lVar31) = uVar26;
        puVar21 = (undefined8 *)(lVar31 + param_1 + 0xfda0);
        lVar30 = 0x3f0;
        if (1 < (*(int *)(param_1 + 0x7550 + lVar27 * 4) + 0xfbU & 0xff)) {
          lVar30 = 0xb0;
        }
        puVar29 = (undefined8 *)(lVar20 + lVar30);
        uVar42 = *puVar29;
        uVar18 = puVar29[3];
        uVar22 = puVar29[2];
        puVar21[1] = puVar29[1];
        *puVar21 = uVar42;
        puVar21[3] = uVar18;
        puVar21[2] = uVar22;
        uVar22 = puVar29[4];
        puVar21[5] = puVar29[5];
        puVar21[4] = uVar22;
        *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(puVar29 + 6);
        lVar30 = FUN_1800e3830(*(longlong *)(uVar43 + 0x76d8) + 0x628);
        if (lVar30 != plVar17[lVar27]) {
          FUN_1800e3bf8(*(longlong *)(uVar43 + 0x76d8) + 0x628);
          plVar17[lVar27] = lVar30;
        }
        uVar28 = local_f0;
        uVar41 = local_120[0];
        iVar14 = (int)(uint)lVar27 >> 3;
        *(byte *)(param_1 + 0xf684 + (longlong)iVar14) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar14) &
             ((byte)(1 << (ulonglong)((uint)lVar27 & 7)) ^ 0xff);
        uVar16 = ((uint)(float)local_110 & 0xaaaaaaaa) >> 1 |
                 ((uint)(float)local_110 & 0x55555555) << 1;
        uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
        uVar16 = (uint)lVar27;
        if ((1 - (uVar16 >> 5) & 0xff) == 0) goto FUN_180029950;
        *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
             *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
      } while( true );
    }
    if (*(longlong *)(param_1 + 0xf9a8) != 0) {
      lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
      if (*(longlong *)(lVar27 + 0x790) != *(longlong *)(uVar43 + 0x7720)) {
        *(longlong *)(lVar27 + 0x790) = *(longlong *)(uVar43 + 0x7720);
        (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x50))
                  (*(longlong **)(lVar27 + 0x6b8),0,1,lVar27 + 0x790);
      }
      *(byte *)(uVar28 + 0x684) = *(byte *)(uVar28 + 0x684) & 0xfe;
    }
  }
LAB_180029ca4:
  uVar16 = *(uint *)(local_118 + 0x36bc);
  if (uVar16 == 0 && local_108 == param_1) goto LAB_180029f1c;
  local_110 = (uint *)(CONCAT44(local_110._4_4_,uVar16) & 0xffffffff0000000f);
  uVar16 = (uVar16 & 10) >> 1 | (uVar16 & 5) << 1;
  lVar27 = LZCOUNT((uVar16 >> 2 | (uVar16 & 0x33333333) << 2) << 0x1c);
  uVar16 = (uint)lVar27;
  if ((1 - (uVar16 >> 5) & 0xff) == 0) {
    uVar28 = FUN_180029e34(0xfc88);
    return uVar28;
  }
  *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
       *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
       ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
  plVar17 = (longlong *)(param_1 + 0xfc88);
  local_120[0] = uVar41;
  local_f0 = uVar28;
  while( true ) {
    lVar30 = param_1 + lVar27 * 8;
    if (*(uint *)(lVar30 + 0x81c) < (uint)*(byte *)(lVar30 + 0x81b)) {
      fVar45 = (float)*(byte *)(lVar30 + 0x81b);
    }
    else {
      fVar45 = (float)*(uint *)(lVar30 + 0x81c);
    }
    lVar20 = param_1 + lVar27 * 0x34;
    *(float *)(lVar20 + 0x86c) = fVar45;
    bVar8 = *(byte *)(lVar30 + 0x819);
    bVar10 = *(byte *)(lVar30 + 0x81a);
    bVar11 = *(byte *)(lVar30 + 0x818);
    *(undefined4 *)(lVar20 + 0x870) = 0x7f7fffff;
    if (bVar8 == 2 || bVar10 == 2) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(undefined4 *)
                (&DAT_1802310b0 +
                ((ulonglong)bVar11 | ((ulonglong)(uint)bVar8 | (ulonglong)(uint)bVar10 << 1) << 1) *
                4);
    }
    puVar21 = (undefined8 *)(param_1 + 0x100e0 + lVar27 * 0x34);
    *(undefined4 *)(lVar20 + 0x840) = uVar26;
    puVar29 = (undefined8 *)(param_1 + 0x840 + lVar27 * 0x34);
    uVar42 = *puVar29;
    uVar18 = puVar29[3];
    uVar22 = puVar29[2];
    puVar21[1] = puVar29[1];
    *puVar21 = uVar42;
    puVar21[3] = uVar18;
    puVar21[2] = uVar22;
    uVar22 = puVar29[4];
    uVar26 = *(undefined4 *)(puVar29 + 6);
    puVar21[5] = puVar29[5];
    puVar21[4] = uVar22;
    *(undefined4 *)(puVar21 + 6) = uVar26;
    lVar30 = FUN_1800e3830(*(longlong *)(uVar43 + 0x76d8) + 0x628);
    if (lVar30 != plVar17[lVar27]) {
      FUN_1800e3bf8(*(longlong *)(uVar43 + 0x76d8) + 0x628);
      plVar17[lVar27] = lVar30;
    }
    uVar28 = local_f0;
    uVar41 = local_120[0];
    uVar16 = ((uint)(float)local_110 & 0xaaaaaaaa) >> 1 | ((uint)(float)local_110 & 0x55555555) << 1
    ;
    uVar16 = (uVar16 & 0xcccccccc) >> 2 | (uVar16 & 0x33333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    lVar27 = LZCOUNT(uVar16 >> 0x10 | uVar16 << 0x10);
    uVar16 = (uint)lVar27;
    if ((1 - (uVar16 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) =
         *(byte *)((longlong)&local_110 + (longlong)((int)uVar16 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar16 & 7)) ^ 0xff);
  }
  uVar32 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  lVar30 = *(longlong *)(param_1 + 0xf6d0);
  lVar27 = uVar32 + lVar30;
  bVar12 = *(longlong *)(lVar27 + 0x710) != *plVar17;
  if (bVar12) {
    *(longlong *)(lVar27 + 0x710) = *plVar17;
  }
  uVar16 = (uint)bVar12;
  if (*(longlong *)(lVar27 + 0x718) == *(longlong *)(uVar43 + 0x7c90)) {
LAB_180029e94:
    uVar25 = 3;
    lVar20 = 0;
  }
  else {
    *(longlong *)(lVar27 + 0x718) = *(longlong *)(uVar43 + 0x7c90);
    if (bVar12) {
      uVar16 = 2;
      goto LAB_180029e94;
    }
    lVar20 = 1;
    uVar16 = 1;
    uVar25 = 2;
  }
  uVar15 = uVar16;
  if ((*(longlong *)(lVar27 + 0x720) != *(longlong *)(uVar43 + 0x7c98)) &&
     (*(longlong *)(lVar27 + 0x720) = *(longlong *)(uVar43 + 0x7c98), uVar15 = uVar25, uVar16 == 0))
  {
    lVar20 = 2;
    uVar15 = 1;
  }
  if (*(longlong *)(lVar27 + 0x728) == *(longlong *)(uVar43 + 0x7ca0)) {
LAB_180029ef0:
    if (uVar15 != 0) goto LAB_180029ef4;
  }
  else {
    *(longlong *)(lVar27 + 0x728) = *(longlong *)(uVar43 + 0x7ca0);
    if (uVar15 != 0) {
      uVar15 = 4 - (int)lVar20;
      goto LAB_180029ef0;
    }
    lVar20 = 3;
    uVar15 = 1;
LAB_180029ef4:
    (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0xd0))
              (*(longlong **)(lVar27 + 0x6b8),lVar20,uVar15,(uVar32 | lVar20 << 3) + lVar30 + 0x710)
    ;
  }
  *(undefined4 *)(local_118 + 0x36bc) = 0;
LAB_180029f1c:
  if (*(char *)(uVar28 + 0x68f) != '\0' || local_108 != param_1) {
    lVar4 = param_1 + 0xfcd8;
    uVar25 = 0;
    iVar14 = 0;
    lVar36 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    uVar16 = 0;
    lVar31 = 0;
    lVar27 = lVar36 + 0xaf0;
    lVar30 = lVar36 + 0xb30;
    lVar20 = lVar36 + 0xa70;
    do {
      lVar24 = *(longlong *)(lVar4 + lVar31 * 8);
      if (((*(longlong *)(lVar20 + lVar31 * 8) != lVar24) ||
          (lVar5 = param_1 + lVar31 * 4, *(int *)(lVar27 + lVar31 * 4) != *(int *)(lVar5 + 0xfe8)))
         || (*(int *)(lVar30 + lVar31 * 4) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + lVar31 * 4;
        *(longlong *)(lVar20 + lVar31 * 8) = lVar24;
        *(undefined4 *)(lVar27 + lVar31 * 4) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar30 + lVar31 * 4) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar16;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 1;
        }
      }
      uVar15 = uVar16 + 1;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar27 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar36 + (ulonglong)uVar15 * 4 + 0xb30) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        lVar24 = lVar36 + (ulonglong)uVar15 * 4;
        *(undefined4 *)(lVar24 + 0xaf0) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar24 + 0xb30) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 2;
        }
      }
      uVar15 = uVar16 + 2;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar36 + (ulonglong)uVar15 * 4 + 0xaf0) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar30 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        *(undefined4 *)(lVar36 + (ulonglong)uVar15 * 4 + 0xaf0) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar30 + (ulonglong)uVar15 * 4) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 3;
        }
      }
      uVar15 = uVar16 + 3;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar27 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar36 + (ulonglong)uVar15 * 4 + 0xb30) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        *(undefined4 *)(lVar27 + (ulonglong)uVar15 * 4) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar36 + (ulonglong)uVar15 * 4 + 0xb30) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 4;
        }
      }
      uVar15 = uVar16 + 4;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar27 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar30 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        *(undefined4 *)(lVar36 + (ulonglong)uVar15 * 4 + 0xaf0) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar30 + (ulonglong)uVar15 * 4) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 5;
        }
      }
      uVar15 = uVar16 + 5;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) == lVar24) {
        lVar5 = lVar36 + (ulonglong)uVar15 * 4;
        lVar2 = param_1 + (ulonglong)uVar15 * 4;
        if ((*(int *)(lVar5 + 0xaf0) != *(int *)(lVar2 + 0xfe8)) ||
           (*(int *)(lVar5 + 0xb30) != *(int *)(lVar2 + 0x102c))) goto LAB_18002a1c4;
      }
      else {
LAB_18002a1c4:
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        lVar24 = lVar36 + (ulonglong)uVar15 * 4;
        *(undefined4 *)(lVar24 + 0xaf0) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar24 + 0xb30) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 6;
        }
      }
      uVar15 = uVar16 + 6;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar27 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar30 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        *(undefined4 *)(lVar27 + (ulonglong)uVar15 * 4) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar30 + (ulonglong)uVar15 * 4) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 7;
        }
      }
      uVar15 = uVar16 + 7;
      lVar24 = *(longlong *)(lVar4 + (ulonglong)uVar15 * 8);
      if (((*(longlong *)(lVar20 + (ulonglong)uVar15 * 8) != lVar24) ||
          (lVar5 = param_1 + (ulonglong)uVar15 * 4,
          *(int *)(lVar27 + (ulonglong)uVar15 * 4) != *(int *)(lVar5 + 0xfe8))) ||
         (*(int *)(lVar36 + (ulonglong)uVar15 * 4 + 0xb30) != *(int *)(lVar5 + 0x102c))) {
        lVar5 = param_1 + (ulonglong)uVar15 * 4;
        *(longlong *)(lVar20 + (ulonglong)uVar15 * 8) = lVar24;
        lVar24 = lVar36 + (ulonglong)uVar15 * 4;
        *(undefined4 *)(lVar24 + 0xaf0) = *(undefined4 *)(lVar5 + 0xfe8);
        *(undefined4 *)(lVar24 + 0xb30) = *(undefined4 *)(lVar5 + 0x102c);
        if (iVar14 == 0) {
          iVar14 = 1;
          uVar25 = uVar15;
        }
        else {
          iVar14 = (uVar16 - uVar25) + 8;
        }
      }
      uVar16 = uVar16 + 8;
      lVar31 = lVar31 + 8;
    } while (uVar16 < 0x10);
    if (iVar14 != 0) {
      (**(code **)(**(longlong **)(lVar36 + 0x6b8) + 0x90))();
    }
    *(undefined1 *)(uVar28 + 0x68f) = 0;
  }
  if (*(char *)(uVar28 + 0x690) != '\0' || local_108 != param_1) {
    lVar27 = *(longlong *)(uVar43 + 0x7d58);
    if (lVar27 == *(longlong *)(uVar43 + 0x7710)) {
      iVar14 = 0x2a;
    }
    else {
      iVar14 = *(int *)(local_118 + 0x3d70);
    }
    lVar30 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
    if (((lVar27 != *(longlong *)(lVar30 + 0xb70)) || (iVar14 != *(int *)(lVar30 + 0xb78))) ||
       (*(int *)(lVar30 + 0xb7c) != 0)) {
      *(longlong *)(lVar30 + 0xb70) = lVar27;
      *(int *)(lVar30 + 0xb78) = iVar14;
      *(undefined4 *)(lVar30 + 0xb7c) = 0;
      (**(code **)(**(longlong **)(lVar30 + 0x6b8) + 0x98))();
    }
    *(undefined1 *)(uVar28 + 0x690) = 0;
  }
  plVar17 = *(longlong **)(param_1 + 0xf9b0);
  if (plVar17 != (longlong *)0x0) {
    local_e8 = (undefined8 *)0x0;
    uVar25 = *(uint *)(local_118 + 0x39d8);
    uVar16 = *(uint *)((longlong)plVar17 + 0x24) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar15 = *(uint *)(plVar17 + 5) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    uStack_e0 = CONCAT44(uVar15,uVar16);
    (**(code **)(*plVar17 + 0x18))
              (plVar17,uVar25 + *(int *)((longlong)plVar17 + 0x3c) * *(int *)(local_118 + 0x39e8),
               &local_e8);
  }
  plVar17 = *(longlong **)(param_1 + 0xf9b8);
  if (plVar17 != (longlong *)0x0) {
    local_e8 = (undefined8 *)0x0;
    uVar25 = *(uint *)(local_118 + 0x39dc);
    uVar16 = *(uint *)((longlong)plVar17 + 0x24) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar15 = *(uint *)(plVar17 + 5) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    uStack_e0 = CONCAT44(uVar15,uVar16);
    (**(code **)(*plVar17 + 0x18))
              (plVar17,uVar25 + *(int *)((longlong)plVar17 + 0x3c) * *(int *)(local_118 + 0x39ec),
               &local_e8);
  }
  plVar17 = *(longlong **)(param_1 + 0xf9c0);
  if (plVar17 != (longlong *)0x0) {
    local_e8 = (undefined8 *)0x0;
    uVar25 = *(uint *)(local_118 + 0x39e0);
    uVar16 = *(uint *)((longlong)plVar17 + 0x24) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar15 = *(uint *)(plVar17 + 5) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    uStack_e0 = CONCAT44(uVar15,uVar16);
    (**(code **)(*plVar17 + 0x18))
              (plVar17,uVar25 + *(int *)((longlong)plVar17 + 0x3c) * *(int *)(local_118 + 0x39f0),
               &local_e8);
  }
  plVar17 = *(longlong **)(param_1 + 0xf9c8);
  if (plVar17 != (longlong *)0x0) {
    local_e8 = (undefined8 *)0x0;
    uVar25 = *(uint *)(local_118 + 0x39e4);
    uVar16 = *(uint *)((longlong)plVar17 + 0x24) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar15 = *(uint *)(plVar17 + 5) >> (ulonglong)(uVar25 & 0x1f);
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    uStack_e0 = CONCAT44(uVar15,uVar16);
    (**(code **)(*plVar17 + 0x18))
              (plVar17,uVar25 + *(int *)((longlong)plVar17 + 0x3c) * *(int *)(local_118 + 0x39f4),
               &local_e8);
  }
  lVar27 = 0xbb4;
  if (*(char *)(local_f8 + 0x662) == '\0') {
    lVar27 = 0x7b0;
  }
  plVar17 = *(longlong **)(param_1 + 0xf9d0);
  if ((plVar17 != (longlong *)0x0) && (*(int *)(param_1 + lVar27) != 0)) {
    lVar27 = 3000;
    if (*(char *)(local_f8 + 0x662) == '\0') {
      lVar27 = 0x7b4;
    }
    if (*(int *)(param_1 + lVar27) != 0) {
      uVar25 = *(uint *)(local_118 + 0x39f8);
      local_e8 = (undefined8 *)0x0;
      uVar16 = *(uint *)((longlong)plVar17 + 0x24) >> (ulonglong)(uVar25 & 0x1f);
      if (uVar16 == 0) {
        uVar16 = 1;
      }
      uVar15 = *(uint *)(plVar17 + 5) >> (ulonglong)(uVar25 & 0x1f);
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      uStack_e0 = CONCAT44(uVar15,uVar16);
      (**(code **)(*plVar17 + 0x18))
                (plVar17,uVar25 + *(int *)(local_118 + 0x39fc) * *(int *)((longlong)plVar17 + 0x3c),
                 &local_e8);
    }
  }
  return (ulonglong)uVar41;
FUN_180029950:
  lVar27 = *(longlong *)(param_1 + 0xf6d0) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  bVar12 = *(longlong *)(lVar27 + 0x790) != *plVar17;
  if (bVar12) {
    *(longlong *)(lVar27 + 0x790) = *plVar17;
  }
  uVar16 = (uint)bVar12;
  if (*(longlong *)(lVar27 + 0x798) == *(longlong *)(uVar43 + 0x7b28)) {
LAB_1800299b8:
    uVar25 = 3;
    lVar30 = 0;
  }
  else {
    *(longlong *)(lVar27 + 0x798) = *(longlong *)(uVar43 + 0x7b28);
    if (bVar12) {
      uVar16 = 2;
      goto LAB_1800299b8;
    }
    lVar30 = 1;
    uVar16 = 1;
    uVar25 = 2;
  }
  uVar15 = uVar16;
  if ((*(longlong *)(lVar27 + 0x7a0) != *(longlong *)(uVar43 + 0x7b30)) &&
     (*(longlong *)(lVar27 + 0x7a0) = *(longlong *)(uVar43 + 0x7b30), uVar15 = uVar25, uVar16 == 0))
  {
    lVar30 = 2;
    uVar15 = 1;
  }
  if (*(longlong *)(lVar27 + 0x7a8) != *(longlong *)(uVar43 + 0x7b38)) {
    *(longlong *)(lVar27 + 0x7a8) = *(longlong *)(uVar43 + 0x7b38);
    if (uVar15 == 0) {
      lVar30 = 3;
      uVar15 = 1;
    }
    else {
      uVar15 = 4 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7b0) != *(longlong *)(uVar43 + 0x7b40)) {
    *(longlong *)(lVar27 + 0x7b0) = *(longlong *)(uVar43 + 0x7b40);
    if (uVar15 == 0) {
      lVar30 = 4;
      uVar15 = 1;
    }
    else {
      uVar15 = 5 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7b8) != *(longlong *)(uVar43 + 0x7b48)) {
    *(longlong *)(lVar27 + 0x7b8) = *(longlong *)(uVar43 + 0x7b48);
    if (uVar15 == 0) {
      lVar30 = 5;
      uVar15 = 1;
    }
    else {
      uVar15 = 6 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7c0) != *(longlong *)(uVar43 + 0x7b50)) {
    *(longlong *)(lVar27 + 0x7c0) = *(longlong *)(uVar43 + 0x7b50);
    if (uVar15 == 0) {
      lVar30 = 6;
      uVar15 = 1;
    }
    else {
      uVar15 = 7 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7c8) != *(longlong *)(uVar43 + 0x7b58)) {
    *(longlong *)(lVar27 + 0x7c8) = *(longlong *)(uVar43 + 0x7b58);
    if (uVar15 == 0) {
      lVar30 = 7;
      uVar15 = 1;
    }
    else {
      uVar15 = 8 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 2000) != *(longlong *)(uVar43 + 0x7b60)) {
    *(longlong *)(lVar27 + 2000) = *(longlong *)(uVar43 + 0x7b60);
    if (uVar15 == 0) {
      lVar30 = 8;
      uVar15 = 1;
    }
    else {
      uVar15 = 9 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7d8) != *(longlong *)(uVar43 + 0x7b68)) {
    *(longlong *)(lVar27 + 0x7d8) = *(longlong *)(uVar43 + 0x7b68);
    if (uVar15 == 0) {
      lVar30 = 9;
      uVar15 = 1;
    }
    else {
      uVar15 = 10 - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7e0) != *(longlong *)(uVar43 + 0x7b70)) {
    *(longlong *)(lVar27 + 0x7e0) = *(longlong *)(uVar43 + 0x7b70);
    if (uVar15 == 0) {
      lVar30 = 10;
      uVar15 = 1;
    }
    else {
      uVar15 = 0xb - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7e8) != *(longlong *)(uVar43 + 0x7b78)) {
    *(longlong *)(lVar27 + 0x7e8) = *(longlong *)(uVar43 + 0x7b78);
    if (uVar15 == 0) {
      lVar30 = 0xb;
      uVar15 = 1;
    }
    else {
      uVar15 = 0xc - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7f0) != *(longlong *)(uVar43 + 0x7b80)) {
    *(longlong *)(lVar27 + 0x7f0) = *(longlong *)(uVar43 + 0x7b80);
    if (uVar15 == 0) {
      lVar30 = 0xc;
      uVar15 = 1;
    }
    else {
      uVar15 = 0xd - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x7f8) != *(longlong *)(uVar43 + 0x7b88)) {
    *(longlong *)(lVar27 + 0x7f8) = *(longlong *)(uVar43 + 0x7b88);
    if (uVar15 == 0) {
      lVar30 = 0xd;
      uVar15 = 1;
    }
    else {
      uVar15 = 0xe - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x800) != *(longlong *)(uVar43 + 0x7b90)) {
    *(longlong *)(lVar27 + 0x800) = *(longlong *)(uVar43 + 0x7b90);
    if (uVar15 == 0) {
      lVar30 = 0xe;
      uVar15 = 1;
    }
    else {
      uVar15 = 0xf - (int)lVar30;
    }
  }
  if (*(longlong *)(lVar27 + 0x808) == *(longlong *)(uVar43 + 0x7b98)) {
LAB_180029c24:
    if (uVar15 == 0) goto LAB_180029ca4;
  }
  else {
    *(longlong *)(lVar27 + 0x808) = *(longlong *)(uVar43 + 0x7b98);
    if (uVar15 != 0) {
      uVar15 = 0x10 - (int)lVar30;
      goto LAB_180029c24;
    }
    lVar30 = 0xf;
    uVar15 = 1;
  }
  (**(code **)(**(longlong **)(lVar27 + 0x6b8) + 0x50))
            (*(longlong **)(lVar27 + 0x6b8),lVar30,uVar15,lVar27 + lVar30 * 8 + 0x790);
  goto LAB_180029ca4;
}

