/*
 * FUN_1801c6340 at 1801c6340
 * undefined FUN_1801c6340(void)
 * Address ranges: 1801c6340-1801c6993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c6340(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 extraout_x1;
  uint uVar13;
  uint uVar14;
  int extraout_w11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  int extraout_w12;
  int extraout_w12_00;
  ulonglong extraout_x12;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_c4 = 0x8876086c;
  if (param_2 == 0) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    local_9c = 0;
  }
  else {
    iVar6 = thunk_FUN_1802236e4(DAT_180258900);
    local_9c = 1;
    if (iVar6 == 0) {
      FUN_1801085c8();
      local_9c = 1;
    }
  }
  pcVar18 = (code *)__hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar6 = (*extraout_x11)(param_2);
  (*pcVar18)(0x180224000);
  iVar7 = (*extraout_x11_00)(param_3);
  uVar4 = local_c4;
  if (iVar6 != iVar7) goto LAB_1801c6440;
  if (iVar7 != 3) {
    if (iVar7 == 4) {
      if (((*(int *)(param_3 + -0x20) == *(int *)(param_2 + -0x20)) &&
          (*(int *)(param_3 + -0x18) == 0)) && (*(int *)(param_2 + -0x18) == 2)) {
        uVar2 = *(ushort *)(param_2 + -0xdc);
        local_e0 = 0;
        local_dc = 0;
        local_d0 = 0;
        local_cc = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_c0 = (uint)*(ushort *)(param_3 + -0xdc);
        uVar16 = (uint)uVar2;
        uVar8 = uVar16 - local_c0;
        if (uVar16 < local_c0) {
          uVar8 = 0;
        }
        uVar17 = (uint)uVar2;
        local_a0 = *(ushort *)(param_3 + -0xdc) - uVar17;
        if (uVar16 >= local_c0) {
          local_a0 = 0;
        }
        FUN_18011ad48(param_2 + -0x118,uVar8,&local_d0,&local_d4,&local_d8);
        FUN_18011ad48(param_3 + -0x118,extraout_x12 & 0xffffffff,&local_e0,&local_dc,&local_cc);
        if (((local_d0 != local_e0 || local_d4 != local_dc) || local_d8 != local_cc) &&
           ((uVar8 != 0 || (extraout_w12 != 0)))) {
          local_a0 = 0;
          uVar8 = 0;
          FUN_18011ad48(param_2 + -0x118,0,&local_d0,&local_d4,&local_d8);
          FUN_18011ad48(param_3 + -0x118,extraout_x1,&local_e0,&local_dc,&local_cc);
        }
        uStack_4c = *(undefined4 *)(param_3 + -0x30);
        local_48 = *(undefined4 *)(param_3 + -0x2c);
        local_58 = 0;
        uVar16 = 1;
        local_50 = 0;
        uStack_44 = *(undefined4 *)(param_3 + -0x28);
        local_88 = *(undefined4 *)(param_2 + -0x58);
        uStack_84 = *(undefined4 *)(param_2 + -0x54);
        local_80 = *(undefined4 *)(param_2 + -0x50);
        uStack_7c = *(undefined4 *)(param_2 + -0x4c);
        local_78 = *(undefined4 *)(param_2 + -0x48);
        uStack_74 = *(undefined4 *)(param_2 + -0x44);
        FUN_18011ab00(&local_58,&local_70,&local_88);
        bVar3 = false;
        uVar12 = local_c0;
        if (uVar17 < local_c0) {
          uVar12 = uVar17;
        }
        if (uVar12 != 0) {
          uVar13 = (1 << (ulonglong)(uVar8 & 0x1f)) - 1;
          uVar17 = 0;
          local_90 = pcVar18;
          local_c0 = uVar8;
          local_bc = uStack_5c;
          local_98 = local_60;
          local_94 = uStack_5c & uVar13;
          local_d0 = uStack_64 & uVar13;
          local_cc = local_68;
          local_d8 = local_60 & uVar13;
          local_d4 = uStack_64;
          local_e0 = local_70;
          local_dc = uStack_6c;
          local_c8 = uVar12;
          do {
            pcVar18 = local_90;
            if (uVar16 == 0) break;
            uVar8 = uVar17 + local_c0;
            local_b8 = (int)local_e0 >> (uVar8 & 0x1f);
            uStack_b4 = (int)local_dc >> (uVar8 & 0x1f);
            local_b0 = (int)local_cc >> (uVar8 & 0x1f);
            local_ac = (int)local_d4 >> (uVar8 & 0x1f);
            if (local_d0 != 0) {
              local_ac = local_ac + 1;
            }
            local_a8 = (int)local_98 >> (uVar8 & 0x1f);
            if (local_d8 != 0) {
              local_a8 = local_a8 + 1;
            }
            iStack_a4 = (int)local_bc >> (uVar8 & 0x1f);
            if (local_94 != 0) {
              iStack_a4 = iStack_a4 + 1;
            }
            if (((int)local_b8 < (int)local_ac && (int)uStack_b4 < (int)local_a8) &&
                local_b0 < iStack_a4) {
              uVar12 = uVar17 + local_a0;
              lVar9 = *(longlong *)(param_2 + (ulonglong)uVar8 * 8 + -0xd8);
              lVar15 = *(longlong *)(param_3 + (ulonglong)uVar12 * 8 + -0xd8);
              if (lVar9 != 0) {
                FUN_18012ffe8(lVar9,*(undefined1 *)(lVar9 + 0x60));
              }
              if (*(longlong *)(*(longlong *)(lVar15 + 0x88) + 0xe0) != 0) {
                FUN_18012ffe8(lVar15,*(undefined1 *)(lVar15 + 0x60));
              }
              uVar13 = local_b8;
              uVar14 = uStack_b4;
              uVar10 = FUN_180107328(*(undefined4 *)(param_3 + -0x20));
              if ((uVar10 & 1) != 0) {
                local_ac = extraout_w12_00 + 3U & 0xfffffffc;
                local_a8 = extraout_w11 + 3U & 0xfffffffc;
                local_b8 = uVar13 & 0xfffffffc;
                uStack_b4 = uVar14 & 0xfffffffc;
              }
              uVar11 = (*local_90)();
              uVar8 = (*extraout_x11_01)(uVar11,uVar12,uVar8,*(undefined8 *)(param_3 + -0x38),
                                         *(undefined8 *)(param_2 + -0x38),&local_b8);
              uVar16 = uVar8 & 0xff & uVar16;
              bVar3 = true;
            }
            uVar17 = uVar17 + 1;
            pcVar18 = local_90;
          } while (uVar17 < local_c8);
        }
        *(undefined8 *)(param_2 + -0x58) = 0;
        *(undefined8 *)(param_2 + -0x50) = 0;
        *(undefined8 *)(param_2 + -0x48) = 0;
        if (bVar3) {
          uVar17 = *(uint *)(param_3 + -0xe0);
          *(undefined1 *)(param_3 + -0xda) = 1;
          lVar9 = *(longlong *)(param_3 + -0x100);
          uVar8 = uVar17 & 0xffff;
          if (uVar8 != 0) {
            uVar12 = (uVar17 & 0xaaaa) >> 1 | (uVar17 & 0x5555) << 1;
            uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
            local_e0 = uVar8;
            uVar12 = (uint)LZCOUNT((uVar12 >> 8 | (uVar12 & 0xff00ff) << 8) << 0x10);
            if ((1 - (uVar12 >> 5) & 0xff) != 0) {
              local_bc = uVar8;
              local_dc = uVar16;
              local_c8 = uVar17;
              *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
                   *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
              while( true ) {
                auVar19 = (*pcVar18)();
                (*extraout_x11_02)(auVar19._0_8_,auVar19._8_8_,0,*(undefined8 *)(param_3 + -0x38),0,
                                   0,0,0);
                uVar8 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
                uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
                uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                uVar12 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
                uVar16 = local_dc;
                uVar17 = local_c8;
                uVar8 = local_bc;
                if ((1 - (uVar12 >> 5) & 0xff) == 0) break;
                *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
                     *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
              }
            }
            puVar1 = (uint *)&DAT_00000d18;
            if (lVar9 != 0) {
              puVar1 = (uint *)(lVar9 + -0x5b20);
            }
            *puVar1 = *puVar1 | uVar8;
          }
          uVar17 = uVar17 >> 0x10;
          if (uVar17 != 0) {
            uVar8 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
            uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
            local_e0 = uVar17;
            uVar8 = (uint)LZCOUNT((uVar8 >> 8 | (uVar8 & 0xff00ff) << 8) << 0x10);
            if ((1 - (uVar8 >> 5) & 0xff) != 0) {
              local_c8 = uVar17;
              local_dc = uVar16;
              *(byte *)((longlong)&local_e0 + (longlong)((int)uVar8 >> 3)) =
                   *(byte *)((longlong)&local_e0 + (longlong)((int)uVar8 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
              while( true ) {
                auVar19 = (*pcVar18)();
                (*extraout_x11_03)(auVar19._0_8_,auVar19._8_8_,0,*(undefined8 *)(param_3 + -0x38),0)
                ;
                uVar8 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
                uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
                uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
                uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                uVar8 = (uint)LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
                uVar16 = local_dc;
                uVar17 = local_c8;
                if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
                *(byte *)((longlong)&local_e0 + (longlong)((int)uVar8 >> 3)) =
                     *(byte *)((longlong)&local_e0 + (longlong)((int)uVar8 >> 3)) &
                     ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
              }
            }
            puVar1 = (uint *)&DAT_000067fc;
            if (lVar9 != 0) {
              puVar1 = (uint *)(lVar9 + -0x3c);
            }
            *puVar1 = *puVar1 | uVar17;
          }
        }
        uVar4 = local_c4;
        if (uVar16 != 0) {
          local_c4 = 0;
          uVar4 = local_c4;
        }
      }
      goto LAB_1801c6440;
    }
    if (iVar7 != 5) goto LAB_1801c6440;
  }
  uVar4 = 0x8876086c;
  if ((((*(uint *)(*(longlong *)(param_2 + 0x18) + 0x50) >> 10 & 1) == 0) ||
      ((*(uint *)(*(longlong *)(param_3 + 0x18) + 0x50) >> 10 & 1) != 0)) &&
     (cVar5 = FUN_180119ee8(param_3 + -0x98,param_2 + -0x98), cVar5 != '\0')) {
    uVar4 = 0;
  }
LAB_1801c6440:
  local_c4 = uVar4;
  if (local_9c == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return local_c4;
}

