/*
 * FUN_180145540 at 180145540
 * undefined FUN_180145540(void)
 * Address ranges: 180145540-180145b93;180145bb4-180145d67;18014604c-18014610b;180146304-18014633f;18014644c-180146453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180145540(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  longlong lVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  longlong local_90;
  
  uVar12 = DAT_180258908;
  puVar6 = PTR_s_DGD3D12ROOT_18024c680;
  plVar16 = (longlong *)(param_1 + 0x8000);
  local_d8 = param_2;
  uVar8 = thunk_FUN_1802239b4(0);
  iVar7 = thunk_FUN_180223ff4(uVar8,puVar6,auStack_98);
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  if ((iVar7 == 0) || (local_90 == 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_90 = (*extraout_x11)(uVar12,0);
    if (local_90 == 0) {
      plVar14 = (longlong *)(param_1 + 0xf6d8);
      goto LAB_180146454;
    }
  }
  FUN_1801042e0(local_90 + 8);
  *(longlong *)(param_1 + 0xf6d8) = local_90;
  plVar14 = (longlong *)(param_1 + 0xf6d8);
  lVar9 = FUN_1802229a8(0x20000);
  *(longlong *)(param_1 + 0x20) = lVar9;
  if (lVar9 != 0) {
    lVar9 = FUN_1802229a8(0x2000);
    *(longlong *)(param_1 + 0x28) = lVar9;
    if (lVar9 != 0) {
      *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)((longlong)local_d8 + 4);
      *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((longlong)local_d8 + 5);
      *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)((longlong)local_d8 + 6);
      *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)((longlong)local_d8 + 7);
      lVar9 = *local_d8;
      *(int *)(param_1 + 0xa0) = (int)lVar9;
      *(int *)(param_1 + 0xa4) = (int)lVar9 * 0x10 + 0x140;
      *(char *)(param_1 + 0xae) = (char)local_d8[1];
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)((longlong)local_d8 + 9);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      lVar9 = *(longlong *)(param_1 + 0xf6d8) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x1ac0;
      *(longlong *)(param_1 + 0xf6e0) = lVar9 + 0x900;
      *(ulonglong *)(param_1 + 0xf6e8) =
           *(longlong *)(param_1 + 0xf6d8) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + 0x6d0;
      FUN_180221ec0(lVar9 + 0x1bc0);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      lVar13 = *(longlong *)(param_1 + 0xf6d8);
      *(undefined4 *)(param_1 + 0xf750) = uVar2;
      *(longlong *)(param_1 + 0xf748) = lVar13;
      *(longlong *)(param_1 + 0xf790) = lVar13;
      *(undefined4 *)(param_1 + 0xf798) = uVar2;
      *(undefined1 *)(param_1 + 0xf79c) = *(undefined1 *)(param_1 + 0x10);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x1a0);
      *(longlong *)(param_1 + 0xf6f0) = lVar9;
      if (lVar9 == 0) goto LAB_1801463e8;
      lVar9 = 0;
      if (lVar13 != 0) {
        lVar9 = lVar13 + 0x6d0;
      }
      lVar9 = FUN_1802113d8(lVar9,uVar2,0,0x200,1);
      *(longlong *)(param_1 + 0xf700) = lVar9;
      if (lVar9 != 0) {
        lVar9 = 0;
        if (*(longlong *)(param_1 + 0xf6d8) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
        }
        lVar9 = FUN_1802113d8(lVar9,*(undefined4 *)(param_1 + 0x18),1,0x200,1);
        *(longlong *)(param_1 + 0xf708) = lVar9;
        if (lVar9 != 0) {
          lVar13 = *(longlong *)(param_1 + 0xf6d8);
          iVar7 = *(int *)(param_1 + 0x9c) << 0xc;
          *(int *)(param_1 + 0xf720) = iVar7;
          lVar9 = 0;
          if (lVar13 != 0) {
            lVar9 = lVar13 + 0x6a8;
          }
          lVar1 = 0;
          if (lVar13 != 0) {
            lVar1 = lVar13 + 0x6d0;
          }
          lVar9 = FUN_1802109e8(lVar1,*(undefined4 *)(param_1 + 0x18),
                                *(longlong *)(param_1 + 0xf6e0) + 0x15b0,iVar7,lVar9);
          *(longlong *)(param_1 + 0xf718) = lVar9;
          if (lVar9 != 0) {
            lVar13 = *(longlong *)(param_1 + 0xf6d8);
            lVar9 = 0;
            if (lVar13 != 0) {
              lVar9 = lVar13 + 0x6a8;
            }
            lVar1 = 0;
            if (lVar13 != 0) {
              lVar1 = lVar13 + 0x6d0;
            }
            lVar9 = FUN_1802109e8(lVar1,*(undefined4 *)(param_1 + 0x18),
                                  *(longlong *)(param_1 + 0xf6e0) + 0x1640,0x4000,lVar9);
            *(longlong *)(param_1 + 0xf710) = lVar9;
            if (lVar9 != 0) {
              lVar9 = 0;
              if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                lVar9 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
              }
              lVar9 = FUN_1802109e8(lVar9,*(undefined4 *)(param_1 + 0x18),0,0xc20,0);
              *(longlong *)(param_1 + 0xf728) = lVar9;
              if (lVar9 != 0) {
                lVar9 = 0;
                if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                  lVar9 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                }
                lVar9 = FUN_1802109e8(lVar9,*(undefined4 *)(param_1 + 0x18),
                                      *(longlong *)(param_1 + 0xf6e0) + 0x1520,0x8000,0);
                *(longlong *)(param_1 + 0xf738) = lVar9;
                if (lVar9 != 0) {
                  lVar9 = FUN_18020d430(*(longlong *)(param_1 + 0xf6d8) + 0x6d0,
                                        *(undefined4 *)(param_1 + 0x18),0x960,0,0);
                  *(longlong *)(param_1 + 0xf730) = lVar9;
                  if (lVar9 != 0) {
                    uVar10 = FUN_18020b0b8(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1518)
                                           ,lVar9,*(longlong *)(param_1 + 0xf6e0) + 0x16d0,0,0x960,
                                           &DAT_1802475d0,0,0);
                    if ((uVar10 & 1) != 0) {
                      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1518),
                                    *(undefined8 *)(param_1 + 0xf730),0,1,0);
                      FUN_180207cd0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
                                    *(undefined8 *)(param_1 + 0xf730),0,1,0xc0);
                      local_d8 = (longlong *)0x0;
                      if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                        local_d8 = (longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x6d0);
                      }
                      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_1 + 0x18));
                      puVar11 = (undefined8 *)FUN_1802229a8(0x90);
                      if (puVar11 == (undefined8 *)0x0) {
                        *(undefined8 *)(param_1 + 0xf7e8) = 0;
                      }
                      else {
                        puVar11[0xb] = 0;
                        puVar11[0xc] = 0;
                        puVar11[3] = 0;
                        puVar11[4] = 0;
                        *(undefined4 *)(puVar11 + 7) = 0;
                        puVar11[1] = local_d8;
                        *(undefined1 *)((longlong)puVar11 + 0x3c) = 0;
                        puVar11[9] = 0;
                        puVar11[10] = 0;
                        *(undefined4 *)(puVar11 + 2) = (undefined4)local_e0;
                        puVar11[5] = 0;
                        puVar11[6] = 0x2f0;
                        puVar11[0xd] = 0xffffffff00000000;
                        puVar11[0xf] = 0;
                        puVar11[0xe] = 0;
                        puVar11[0x11] = 0;
                        puVar11[0x10] = 0;
                        *puVar11 = &PTR_FUN_1802390c0;
                        puVar11[8] = &PTR_FUN_1802390f8;
                        local_d0 = (longlong *)(param_1 + 0xf7e8);
                        *(undefined8 **)(param_1 + 0xf7e8) = puVar11;
                        local_d8 = (longlong *)0x0;
                        if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                          local_d8 = (longlong *)(*(longlong *)(param_1 + 0xf6d8) + 0x6d0);
                        }
                        local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_1 + 0x18));
                        puVar11 = (undefined8 *)FUN_1802229a8(0x90);
                        if (puVar11 == (undefined8 *)0x0) {
                          *(undefined8 *)(param_1 + 0xf740) = 0;
                          plVar15 = local_d0;
                        }
                        else {
                          puVar11[0xb] = 0;
                          puVar11[0xc] = 0;
                          puVar11[3] = 0;
                          puVar11[4] = 0;
                          *(undefined4 *)(puVar11 + 7) = 0;
                          puVar11[1] = local_d8;
                          *(undefined1 *)((longlong)puVar11 + 0x3c) = 0;
                          puVar11[9] = 0;
                          puVar11[10] = 0;
                          *(undefined4 *)(puVar11 + 2) = (undefined4)local_e0;
                          puVar11[5] = 0;
                          puVar11[6] = 0x4d0;
                          puVar11[0xd] = 0xffffffff00000000;
                          puVar11[0xf] = 0;
                          puVar11[0xe] = 0;
                          puVar11[0x11] = 0;
                          puVar11[0x10] = 0;
                          *puVar11 = &PTR_FUN_1802390c0;
                          puVar11[8] = &PTR_FUN_1802390f8;
                          local_d8 = (longlong *)(param_1 + 0xf740);
                          *(undefined8 **)(param_1 + 0xf740) = puVar11;
                          local_c0 = 0;
                          if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                            local_c0 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                          }
                          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(param_1 + 0x18));
                          puVar11 = (undefined8 *)FUN_1802229a8(0x90);
                          if (puVar11 == (undefined8 *)0x0) {
                            *(undefined8 *)(param_1 + 0xf7f8) = 0;
                          }
                          else {
                            puVar11[0xb] = 0;
                            puVar11[0xc] = 0;
                            puVar11[3] = 0;
                            puVar11[4] = 0;
                            *(undefined4 *)(puVar11 + 7) = 0;
                            puVar11[1] = local_c0;
                            *(undefined1 *)((longlong)puVar11 + 0x3c) = 0;
                            puVar11[9] = 0;
                            puVar11[10] = 0;
                            *(undefined4 *)(puVar11 + 2) = (undefined4)local_e0;
                            puVar11[5] = 0;
                            puVar11[6] = 0xec0;
                            puVar11[0xd] = 0xffffffff00000000;
                            puVar11[0xf] = 0;
                            puVar11[0xe] = 0;
                            puVar11[0x11] = 0;
                            puVar11[0x10] = 0;
                            *puVar11 = &PTR_FUN_1802390c0;
                            puVar11[8] = &PTR_FUN_1802390f8;
                            *(undefined8 **)(param_1 + 0xf7f8) = puVar11;
                            lVar9 = 0;
                            if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                              lVar9 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                            }
                            lVar9 = FUN_1802109e8(lVar9,*(undefined4 *)(param_1 + 0x18),0,
                                                  *(int *)(param_1 + 0xa4) + 0xffU & 0xffffff00,0);
                            *(longlong *)(param_1 + 0xf7f0) = lVar9;
                            if (lVar9 != 0) {
                              lVar9 = 0;
                              if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                                lVar9 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                              }
                              lVar9 = FUN_1802109e8(lVar9,*(undefined4 *)(param_1 + 0x18),0,0x100,0)
                              ;
                              *(longlong *)(param_1 + 0xf800) = lVar9;
                              if (lVar9 != 0) {
                                local_b8 = *(longlong *)(param_1 + 0xf6d8);
                                local_d8 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x18);
                                *(longlong *)(param_1 + 0xf810) =
                                     local_b8 + (longlong)local_d8 * 0x1ac0 + 0x900;
                                lVar9 = 0;
                                if (local_b8 != 0) {
                                  lVar9 = local_b8 + 0x6d0;
                                }
                                lVar13 = FUN_180212750(lVar9,local_d8,0);
                                *(longlong *)(param_1 + 0xf820) = lVar13;
                                if (lVar13 != 0) {
                                  lVar9 = FUN_180212750(lVar9,(ulonglong)local_d8 & 0xffffffff,1);
                                  *(longlong *)(param_1 + 0xf828) = lVar9;
                                  if (lVar9 != 0) {
                                    lVar9 = thunk_FUN_180223888(0,0,0,0);
                                    *(longlong *)(param_1 + 0xf8b8) = lVar9;
                                    if (lVar9 != 0) {
                                      lVar9 = param_1 + 0xf808;
                                      lVar13 = thunk_FUN_18022389c(0,0,FUN_180160420,lVar9,0,0);
                                      *(longlong *)(param_1 + 0xf8b0) = lVar13;
                                      if (lVar13 != 0) {
                                        thunk_FUN_18022384c(param_1 + 0xf888);
                                        local_e0 = *(longlong *)
                                                    (*(longlong *)(param_1 + 0xf810) + 0x1508);
                                        iVar7 = *(int *)(local_e0 + 0xbac);
                                        if (*(int *)(local_e0 + 0xba8) == iVar7) {
                                          uVar4 = iVar7 << 1;
                                          if (iVar7 == 0) {
                                            uVar4 = 0x10;
                                          }
                                          local_d0 = (longlong *)CONCAT44(local_d0._4_4_,uVar4);
                                          lVar13 = CONCAT44(0,uVar4) << 3;
                                          auVar5._8_8_ = 0;
                                          auVar5._0_8_ = CONCAT44(0,uVar4);
                                          if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
                                            lVar13 = -1;
                                          }
                                          local_c0 = FUN_1802229a8(lVar13);
                                          if (local_c0 != 0) {
                    /* WARNING: Subroutine does not return */
                                            thunk_FUN_180104c48(local_c0,*(undefined8 *)
                                                                          (local_e0 + 0xba0),
                                                                (ulonglong)
                                                                *(uint *)(local_e0 + 0xbac) << 3);
                                          }
                                        }
                                        else {
                                          *(longlong *)
                                           (*(longlong *)(local_e0 + 0xba0) +
                                           (ulonglong)*(uint *)(local_e0 + 0xba8) * 8) = lVar9;
                                          *(int *)(local_e0 + 0xba8) =
                                               *(int *)(local_e0 + 0xba8) + 1;
                                        }
                                        if ((*(uint *)(local_b8 + (longlong)local_d8 * 0x20 + 0x6e4)
                                            & 1) == 0) {
                                          *(undefined8 *)(param_1 + 0xf818) = 0;
                                        }
                                        else {
                                          FUN_1802086c8(*(undefined8 *)
                                                         (*(longlong *)(param_1 + 0xf810) + 0x1508),
                                                        &DAT_180229418,param_1 + 0xf818);
                                        }
                                        iVar7 = FUN_18020c7c8(*(undefined8 *)
                                                               (*(longlong *)(param_1 + 0xf6e0) +
                                                               0x1938),1);
                                        local_e0 = CONCAT44(local_e0._4_4_,iVar7);
                                        *(int *)(param_1 + 0xf8c8) = iVar7;
                                        if (iVar7 != -1) {
                                          local_b0 = 0x50000001c;
                                          local_a8 = 0;
                                          uStack_a0 = 1;
                                          lVar9 = *(longlong *)
                                                   (*(longlong *)(param_1 + 0xf6e0) + 0x1938);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_00)(uVar12,&local_d8);
                                          local_d8 = (longlong *)
                                                     ((longlong)local_d8 +
                                                     (ulonglong)
                                                     ((uint)(ushort)local_e0 *
                                                     *(int *)(lVar9 + 0x20)));
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_01)(uVar12,0,&local_b0);
                                          FUN_180207560(*(longlong *)
                                                         (*(longlong *)(param_1 + 0xf6e0) + 0x1518)
                                                        + 8,0);
                                          FUN_180163980(param_1);
                                          *(undefined8 *)(param_1 + 0xf8f8) = 0;
                                          *(undefined8 *)(param_1 + 0xf8f0) = 0;
                                          *(undefined8 *)(param_1 + 0xf908) = 0;
                                          *(undefined8 *)(param_1 + 0xf900) = 0;
                                          *(undefined8 *)(param_1 + 0xf918) = 0;
                                          *(undefined8 *)(param_1 + 0xf910) = 0;
                                          *(undefined8 *)(param_1 + 0xf928) = 0;
                                          *(undefined8 *)(param_1 + 0xf920) = 0;
                                          *(undefined8 *)(param_1 + 0xf938) = 0;
                                          *(undefined8 *)(param_1 + 0xf930) = 0;
                                          *(undefined8 *)(param_1 + 0xf940) = 0;
                                          FUN_180222c50(param_1 + 0xf94c,0,0x854);
                                          *(undefined8 *)(param_1 + 0xf8e8) =
                                               *(undefined8 *)(param_1 + 0xf6f0);
                                          *(undefined4 *)(param_1 + 0xf948) = 2;
                                          (*(code *)puVar6)(0x180224000);
                                          uVar12 = (*extraout_x11_02)();
                                          *(undefined8 *)(param_1 + 0xf990) = uVar12;
                                          uVar3 = *(uint *)(*(longlong *)(param_1 + 0xf6f8) + 0x180)
                                          ;
                                          local_b8 = param_1 + 0xfa18;
                                          local_d0 = (longlong *)((ulonglong)(uVar3 >> 0x10) * 0x10)
                                          ;
                                          local_c0 = param_1 + 0xfa98;
                                          uVar4 = uVar3 & 0xffff;
                                          lVar9 = 0;
                                          local_e0 = param_1;
                                          local_c8 = param_1 + 0xc000;
                                          do {
                                            *(uint *)(local_b8 + lVar9 * 4) = uVar3;
                                            lVar17 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            uVar12 = (*(code *)puVar6)(0x180224000);
                                            (*extraout_x11_03)(uVar12,&local_d8);
                                            lVar1 = local_c8;
                                            lVar13 = local_e0;
                                            local_d8 = (longlong *)
                                                       ((longlong)local_d8 +
                                                       (ulonglong)(*(int *)(lVar17 + 0x20) * uVar4))
                                            ;
                                            *(longlong **)(local_c0 + lVar9 * 8) = local_d8;
                                            lVar9 = lVar9 + 1;
                                          } while (lVar9 != 0x10);
                                          *(uint *)(local_c8 + 0x3bc0) = uVar3;
                                          local_c8 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_04)(uVar12,&local_e0);
                                          local_e0 = local_e0 +
                                                     (ulonglong)(*(int *)(local_c8 + 0x20) * uVar4);
                                          *(longlong *)(param_1 + 0xfbd8) = local_e0;
                                          *(uint *)(lVar1 + 0x3bc4) = uVar3;
                                          local_c8 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_05)(uVar12,&local_e0);
                                          local_e0 = local_e0 +
                                                     (ulonglong)(*(int *)(local_c8 + 0x20) * uVar4);
                                          *(longlong *)(param_1 + 0xfbe0) = local_e0;
                                          *(uint *)(lVar1 + 0x3bc8) = uVar3;
                                          local_c8 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_06)(uVar12,&local_e0);
                                          local_e0 = local_e0 +
                                                     (ulonglong)(*(int *)(local_c8 + 0x20) * uVar4);
                                          *(longlong *)(param_1 + 0xfbe8) = local_e0;
                                          *(uint *)(lVar1 + 0x3bcc) = uVar3;
                                          local_c8 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_07)(uVar12,&local_e0);
                                          local_e0 = local_e0 +
                                                     (ulonglong)(*(int *)(local_c8 + 0x20) * uVar4);
                                          *(longlong *)(param_1 + 0xfbf0) = local_e0;
                                          *(uint *)(lVar1 + 0x3bd0) = uVar3;
                                          lVar9 = *(longlong *)
                                                   (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_08)(uVar12,&local_e0);
                                          *(ulonglong *)(param_1 + 0xfbf8) =
                                               local_e0 +
                                               (ulonglong)(*(int *)(lVar9 + 0x20) * uVar4);
                                          *(undefined4 *)(lVar1 + 0x3950) = 1;
                                          *(undefined8 *)(param_1 + 0xf958) = 0;
                                          *(undefined8 *)(param_1 + 0xf960) = 0;
                                          *(undefined8 *)(param_1 + 0xf968) = 0;
                                          *(undefined8 *)(param_1 + 0xf970) = 0;
                                          lVar9 = *(longlong *)(param_1 + 0xf718);
                                          *(undefined4 *)(lVar1 + 0x3fc4) = 0;
                                          *(longlong *)(param_1 + 0xff38) = lVar9;
                                          *(undefined8 *)(param_1 + 0xffb8) =
                                               *(undefined8 *)(param_1 + 0xf710);
                                          *(undefined8 *)(param_1 + 0xf788) =
                                               *(undefined8 *)(param_1 + 0xf6e0);
                                          FUN_180210af8(lVar9 + 0x40,&local_b0,2,0,0);
                                          lVar9 = local_a8;
                                          if (local_a8 != 0) {
                                            FUN_180210af8(*(longlong *)(param_1 + 0xf710) + 0x40,
                                                          &local_b0,2,0,0);
                                            if (local_a8 != 0) {
                                              *(longlong *)(lVar13 + 0x68) = lVar9;
                                              *(undefined8 *)(lVar13 + 0x70) = 0;
                                              *(undefined4 *)(lVar13 + 0x78) = 0;
                                              *(undefined4 *)(lVar13 + 0x7c) = 0;
                                              *(longlong *)(lVar13 + 0x58) = lVar9;
                                              *(longlong *)(lVar13 + 0x60) = lVar9;
                                              *(longlong *)(lVar13 + 0x88) = local_a8;
                                              *(undefined8 *)(lVar13 + 0x90) = 0;
                                              return 1;
                                            }
                                            if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) !=
                                                0) {
                                              *(undefined4 *)
                                               (*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
                                            }
                                          }
                                          return 1;
                                        }
                                        FUN_1801602e8(lVar9);
                                        FUN_1801517e0(param_1);
                                        goto LAB_180146340;
                                      }
                                      thunk_FUN_180223824(*(undefined8 *)(param_1 + 0xf8b8));
                                    }
                                    lVar9 = *(longlong *)(param_1 + 0xf828);
                                    if (lVar9 != 0) {
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        uVar4 = *(uint *)(lVar9 + 0x20);
                                        local_c8 = *(longlong *)(lVar9 + 0x10) +
                                                   (ulonglong)uVar4 * 0x30;
                                        if (*(longlong *)(local_c8 + 0x20) != 0) {
                                          (*(code *)puVar6)(0x180224000);
                                          uVar10 = (*extraout_x11_09)();
                                          if (uVar10 < *(ulonglong *)(local_c8 + 0x28)) {
                                            lVar13 = *(longlong *)(lVar9 + 0x10) +
                                                     (ulonglong)uVar4 * 0x30;
                                            uVar12 = (*(code *)puVar6)(0x180224000);
                                            (*extraout_x11_10)(uVar12,*(undefined8 *)(lVar13 + 0x28)
                                                               ,*(undefined8 *)(lVar9 + 0x30));
                                            thunk_FUN_1802238ec(*(undefined8 *)(lVar9 + 0x30),
                                                                0xffffffff);
                                          }
                                        }
                                        uVar10 = 0;
                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                          uVar12 = 0x180224000;
                                          local_e0 = param_1;
                                          local_d8 = plVar14;
                                          local_d0 = plVar16;
                                          do {
                                            (*(code *)puVar6)(*(undefined8 *)
                                                               (uVar10 * 0x30 +
                                                                *(longlong *)(lVar9 + 0x10) + 8),
                                                              uVar12);
                                            (*extraout_x11_11)();
                                            (*(code *)puVar6)();
                                            (*extraout_x11_12)();
                                            uVar4 = (int)uVar10 + 1;
                                            uVar10 = (ulonglong)uVar4;
                                            uVar12 = extraout_x1;
                                            param_1 = local_e0;
                                            plVar14 = local_d8;
                                            plVar16 = local_d0;
                                          } while (uVar4 < *(uint *)(lVar9 + 0x18));
                                        }
                                        FUN_1802229d8(*(undefined8 *)(lVar9 + 0x10));
                                        *(undefined8 *)(lVar9 + 0x10) = 0;
                                        *(undefined8 *)(lVar9 + 0x18) = 0;
                                        thunk_FUN_180223824(*(undefined8 *)(lVar9 + 0x30));
                                        *(undefined8 *)(lVar9 + 0x30) = 0;
                                      }
                                      FUN_1802229d8(*(undefined8 *)(lVar9 + 0x10));
                                      FUN_1802229d8(lVar9,0x38);
                                    }
                                    plVar16[0xf05] = 0;
                                  }
                                  lVar9 = plVar16[0xf04];
                                  if (lVar9 != 0) {
                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                      uVar4 = *(uint *)(lVar9 + 0x20);
                                      local_c8 = *(longlong *)(lVar9 + 0x10) +
                                                 (ulonglong)uVar4 * 0x30;
                                      if (*(longlong *)(local_c8 + 0x20) != 0) {
                                        (*(code *)puVar6)(0x180224000);
                                        uVar10 = (*extraout_x11_13)();
                                        if (uVar10 < *(ulonglong *)(local_c8 + 0x28)) {
                                          lVar13 = *(longlong *)(lVar9 + 0x10) +
                                                   (ulonglong)uVar4 * 0x30;
                                          uVar12 = (*(code *)puVar6)(0x180224000);
                                          (*extraout_x11_14)(uVar12,*(undefined8 *)(lVar13 + 0x28),
                                                             *(undefined8 *)(lVar9 + 0x30));
                                          thunk_FUN_1802238ec(*(undefined8 *)(lVar9 + 0x30),
                                                              0xffffffff);
                                        }
                                      }
                                      uVar10 = 0;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        uVar12 = 0x180224000;
                                        local_e0 = param_1;
                                        local_d8 = plVar14;
                                        local_d0 = plVar16;
                                        do {
                                          (*(code *)puVar6)(*(undefined8 *)
                                                             (uVar10 * 0x30 +
                                                              *(longlong *)(lVar9 + 0x10) + 8),
                                                            uVar12);
                                          (*extraout_x11_15)();
                                          (*(code *)puVar6)();
                                          (*extraout_x11_16)();
                                          uVar4 = (int)uVar10 + 1;
                                          uVar10 = (ulonglong)uVar4;
                                          uVar12 = extraout_x1_00;
                                          param_1 = local_e0;
                                          plVar14 = local_d8;
                                          plVar16 = local_d0;
                                        } while (uVar4 < *(uint *)(lVar9 + 0x18));
                                      }
                                      FUN_1802229d8(*(undefined8 *)(lVar9 + 0x10));
                                      *(undefined8 *)(lVar9 + 0x10) = 0;
                                      *(undefined8 *)(lVar9 + 0x18) = 0;
                                      thunk_FUN_180223824(*(undefined8 *)(lVar9 + 0x30));
                                      *(undefined8 *)(lVar9 + 0x30) = 0;
                                    }
                                    FUN_1802229d8(*(undefined8 *)(lVar9 + 0x10));
                                    FUN_1802229d8(lVar9,0x38);
                                  }
                                  plVar16[0xf04] = 0;
                                }
                                FUN_1801517e0(param_1);
                                goto LAB_180146340;
                              }
                              if (*(longlong *)(param_1 + 0xf7f0) != 0) {
                                FUN_180146480(*(longlong *)(param_1 + 0xf7f0),1);
                              }
                            }
                            if (*(longlong *)(param_1 + 0xf7f8) != 0) {
                              FUN_180146480(*(longlong *)(param_1 + 0xf7f8),1);
                            }
                          }
                          plVar15 = local_d0;
                          if (*local_d8 != 0) {
                            FUN_180146480(*local_d8,1);
                          }
                        }
                        if (*plVar15 != 0) {
                          FUN_180146480(*plVar15,1);
                        }
                      }
                    }
LAB_180146340:
                    (*(code *)puVar6)(0x180224000);
                    (*extraout_x11_17)();
                    plVar16[0xee6] = 0;
                  }
                  if (plVar16[0xee7] != 0) {
                    FUN_180146480(plVar16[0xee7],1);
                  }
                  plVar16[0xee7] = 0;
                }
                if (plVar16[0xee5] != 0) {
                  FUN_180146480(plVar16[0xee5],1);
                }
                plVar16[0xee5] = 0;
              }
              if (plVar16[0xee2] != 0) {
                FUN_180146480(plVar16[0xee2],1);
              }
              plVar16[0xee2] = 0;
            }
            if (plVar16[0xee3] != 0) {
              FUN_180146480(plVar16[0xee3],1);
            }
            plVar16[0xee3] = 0;
          }
          if (plVar16[0xee1] != 0) {
            FUN_180146600();
          }
          plVar16[0xee1] = 0;
        }
        if (plVar16[0xee0] != 0) {
          FUN_180146600();
        }
        plVar16[0xee0] = 0;
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_1801463e8:
  lVar9 = *plVar14;
  if ((lVar9 != 0) && (iVar7 = FUN_1801042d0(lVar9 + 8), iVar7 == 0)) {
    if (*(short *)(lVar9 + 0xc) != 0) {
      uVar12 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar9 + 0xc),uVar12);
      if (*(longlong *)(lVar9 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar9 + 0x10) = 0;
      }
    }
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_18)(lVar9);
  }
LAB_180146454:
  *plVar14 = 0;
  return 0;
}

