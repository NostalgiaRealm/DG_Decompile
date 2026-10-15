/*
 * FUN_180037210 at 180037210
 * undefined FUN_180037210(void)
 * Address ranges: 180037210-180037a0b;180037cb8-180037d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180037210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined1 auStack_a0 [8];
  longlong local_98;
  
  uVar14 = DAT_18024e2d0;
  puVar6 = PTR_s_DGD3D12ROOT_18024b1a0;
  local_d0 = param_1 + 0xc000;
  local_e8 = param_2;
  uVar9 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
  iVar7 = (*__imp_USER32_dll_GetClassInfoExA)(uVar9,puVar6,auStack_a0);
  if (((iVar7 == 0) || (local_98 == 0)) &&
     (local_98 = (*(code *)PTR_FUN_18024b1a8)(uVar14,0), local_98 == 0)) {
    plVar13 = (longlong *)(param_1 + 0xf6d8);
    goto LAB_1800380c0;
  }
  FUN_1800015a0(local_98 + 8);
  *(longlong *)(param_1 + 0xf6d8) = local_98;
  local_f0 = (longlong *)(param_1 + 0xf6d8);
  local_e0 = local_f0;
  lVar10 = thunk_FUN_180102f80(0x20000);
  *(longlong *)(param_1 + 0x20) = lVar10;
  plVar13 = local_e0;
  if (lVar10 != 0) {
    lVar10 = thunk_FUN_180102f80(0x2000);
    *(longlong *)(param_1 + 0x28) = lVar10;
    if (lVar10 == 0) {
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      plVar13 = local_e0;
    }
    else {
      *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)((longlong)local_e8 + 4);
      *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((longlong)local_e8 + 5);
      *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)((longlong)local_e8 + 6);
      *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)((longlong)local_e8 + 7);
      lVar10 = *local_e8;
      *(int *)(param_1 + 0xa0) = (int)lVar10;
      *(int *)(param_1 + 0xa4) = (int)lVar10 * 0x10 + 0x140;
      *(char *)(param_1 + 0xae) = (char)local_e8[1];
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)((longlong)local_e8 + 9);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      lVar10 = *(longlong *)(param_1 + 0xf6d8) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x1ac0;
      *(longlong *)(param_1 + 0xf6e0) = lVar10 + 0x900;
      *(ulonglong *)(param_1 + 0xf6e8) =
           *(longlong *)(param_1 + 0xf6d8) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + 0x6d0;
      FUN_180101df0(lVar10 + 0x1bc0);
      lVar10 = local_d0;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      lVar16 = *(longlong *)(param_1 + 0xf6d8);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
      *(longlong *)(param_1 + 0xf748) = lVar16;
      *(undefined4 *)(local_d0 + 0x3750) = uVar2;
      *(longlong *)(param_1 + 0xf790) = lVar16;
      *(undefined4 *)(local_d0 + 0x3798) = uVar2;
      *(undefined1 *)(param_1 + 0xf79c) = uVar3;
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x1a0);
      *(longlong *)(param_1 + 0xf6f0) = lVar15;
      plVar13 = local_f0;
      if (lVar15 != 0) {
        lVar15 = 0;
        if (lVar16 != 0) {
          lVar15 = lVar16 + 0x6d0;
        }
        lVar15 = FUN_1800f2970(lVar15,uVar2,0,0x200,1);
        *(longlong *)(param_1 + 0xf700) = lVar15;
        plVar13 = local_f0;
        if (lVar15 != 0) {
          lVar15 = 0;
          if (*(longlong *)(param_1 + 0xf6d8) != 0) {
            lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
          }
          lVar15 = FUN_1800f2970(lVar15,*(undefined4 *)(param_1 + 0x18),1,0x200,1);
          *(longlong *)(param_1 + 0xf708) = lVar15;
          plVar13 = local_f0;
          if (lVar15 != 0) {
            lVar16 = *(longlong *)(param_1 + 0xf6d8);
            lVar15 = *(longlong *)(param_1 + 0xf6e0);
            uVar2 = *(undefined4 *)(param_1 + 0x18);
            iVar7 = *(int *)(param_1 + 0x9c) << 0xc;
            *(int *)(lVar10 + 0x3720) = iVar7;
            lVar10 = 0;
            if (lVar16 != 0) {
              lVar10 = lVar16 + 0x6a8;
            }
            lVar1 = 0;
            if (lVar16 != 0) {
              lVar1 = lVar16 + 0x6d0;
            }
            lVar10 = FUN_1800eeec0(lVar1,uVar2,lVar15 + 0x15b0,iVar7,lVar10);
            *(longlong *)(param_1 + 0xf718) = lVar10;
            plVar13 = local_f0;
            if (lVar10 != 0) {
              lVar15 = *(longlong *)(param_1 + 0xf6d8);
              lVar10 = 0;
              if (lVar15 != 0) {
                lVar10 = lVar15 + 0x6a8;
              }
              lVar16 = 0;
              if (lVar15 != 0) {
                lVar16 = lVar15 + 0x6d0;
              }
              lVar10 = FUN_1800eeec0(lVar16,*(undefined4 *)(param_1 + 0x18),
                                     *(longlong *)(param_1 + 0xf6e0) + 0x1640,0x4000,lVar10);
              *(longlong *)(param_1 + 0xf710) = lVar10;
              plVar13 = local_f0;
              if (lVar10 != 0) {
                lVar10 = 0;
                if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                  lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                }
                lVar10 = FUN_1800eeec0(lVar10,*(undefined4 *)(param_1 + 0x18),0,0xc20,0);
                *(longlong *)(param_1 + 0xf728) = lVar10;
                plVar13 = local_f0;
                if (lVar10 != 0) {
                  lVar10 = 0;
                  if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                    lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                  }
                  lVar10 = FUN_1800eeec0(lVar10,*(undefined4 *)(param_1 + 0x18),
                                         *(longlong *)(param_1 + 0xf6e0) + 0x1520,0x8000,0);
                  *(longlong *)(param_1 + 0xf738) = lVar10;
                  plVar13 = local_f0;
                  if (lVar10 != 0) {
                    lVar10 = FUN_1800e7bb8(*(longlong *)(param_1 + 0xf6d8) + 0x6d0,
                                           *(undefined4 *)(param_1 + 0x18),0x960,0,0);
                    *(longlong *)(param_1 + 0xf730) = lVar10;
                    plVar13 = local_f0;
                    if (lVar10 != 0) {
                      uVar11 = FUN_1800eb698(*(undefined8 *)
                                              (*(longlong *)(param_1 + 0xf6e0) + 0x1518),lVar10,
                                             *(longlong *)(param_1 + 0xf6e0) + 0x16d0,0,0x960,
                                             &DAT_180249e70,0,0);
                      plVar13 = local_f0;
                      if ((uVar11 & 1) != 0) {
                        FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1518),
                                      *(undefined8 *)(param_1 + 0xf730),0,1,0);
                        FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),
                                      *(undefined8 *)(param_1 + 0xf730),0,1,0xc0);
                        uVar2 = *(undefined4 *)(param_1 + 0x18);
                        lVar10 = 0;
                        if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                          lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                        }
                        puVar12 = (undefined8 *)FUN_180102f80(0x90);
                        if (puVar12 == (undefined8 *)0x0) {
                          *(undefined8 *)(param_1 + 0xf7e8) = 0;
                          plVar13 = local_f0;
                        }
                        else {
                          puVar12[5] = 0;
                          puVar12[6] = 0x2f0;
                          puVar12[0xd] = 0xffffffff00000000;
                          puVar12[0xb] = 0;
                          puVar12[0xc] = 0;
                          puVar12[1] = lVar10;
                          *(undefined4 *)(puVar12 + 2) = uVar2;
                          puVar12[3] = 0;
                          puVar12[4] = 0;
                          *(undefined4 *)(puVar12 + 7) = 0;
                          *(undefined1 *)((longlong)puVar12 + 0x3c) = 0;
                          puVar12[9] = 0;
                          puVar12[10] = 0;
                          puVar12[0xf] = 0;
                          puVar12[0xe] = 0;
                          puVar12[0x11] = 0;
                          puVar12[0x10] = 0;
                          *puVar12 = &PTR_FUN_18023bf00;
                          puVar12[8] = &PTR_DAT_18023bf68;
                          uVar2 = *(undefined4 *)(param_1 + 0x18);
                          local_e8 = (longlong *)(param_1 + 0xf7e8);
                          *(undefined8 **)(param_1 + 0xf7e8) = puVar12;
                          lVar10 = 0;
                          if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                            lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                          }
                          puVar12 = (undefined8 *)FUN_180102f80(0x90);
                          if (puVar12 == (undefined8 *)0x0) {
                            *(undefined8 *)(param_1 + 0xf740) = 0;
                            plVar13 = local_e0;
                          }
                          else {
                            puVar12[5] = 0;
                            puVar12[6] = 0x4d0;
                            puVar12[0xd] = 0xffffffff00000000;
                            puVar12[0xb] = 0;
                            puVar12[0xc] = 0;
                            puVar12[1] = lVar10;
                            *(undefined4 *)(puVar12 + 2) = uVar2;
                            puVar12[3] = 0;
                            puVar12[4] = 0;
                            *(undefined4 *)(puVar12 + 7) = 0;
                            *(undefined1 *)((longlong)puVar12 + 0x3c) = 0;
                            puVar12[9] = 0;
                            puVar12[10] = 0;
                            puVar12[0xf] = 0;
                            puVar12[0xe] = 0;
                            puVar12[0x11] = 0;
                            puVar12[0x10] = 0;
                            *puVar12 = &PTR_FUN_18023bf00;
                            puVar12[8] = &PTR_DAT_18023bf68;
                            local_f0 = (longlong *)(param_1 + 0xf740);
                            *(undefined8 **)(param_1 + 0xf740) = puVar12;
                            uVar2 = *(undefined4 *)(param_1 + 0x18);
                            lVar10 = 0;
                            if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                              lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                            }
                            puVar12 = (undefined8 *)FUN_180102f80(0x90);
                            if (puVar12 == (undefined8 *)0x0) {
                              *(undefined8 *)(param_1 + 0xf7f8) = 0;
                            }
                            else {
                              puVar12[5] = 0;
                              puVar12[6] = 0xec0;
                              puVar12[0xd] = 0xffffffff00000000;
                              puVar12[0xb] = 0;
                              puVar12[0xc] = 0;
                              puVar12[1] = lVar10;
                              *(undefined4 *)(puVar12 + 2) = uVar2;
                              puVar12[3] = 0;
                              puVar12[4] = 0;
                              *(undefined4 *)(puVar12 + 7) = 0;
                              *(undefined1 *)((longlong)puVar12 + 0x3c) = 0;
                              puVar12[9] = 0;
                              puVar12[10] = 0;
                              puVar12[0xf] = 0;
                              puVar12[0xe] = 0;
                              puVar12[0x11] = 0;
                              puVar12[0x10] = 0;
                              *puVar12 = &PTR_FUN_18023bf00;
                              puVar12[8] = &PTR_DAT_18023bf68;
                              *(undefined8 **)(param_1 + 0xf7f8) = puVar12;
                              lVar10 = 0;
                              if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                                lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                              }
                              lVar10 = FUN_1800eeec0(lVar10,*(undefined4 *)(param_1 + 0x18),0,
                                                     *(int *)(param_1 + 0xa4) + 0xffU & 0xffffff00,0
                                                    );
                              *(longlong *)(param_1 + 0xf7f0) = lVar10;
                              if (lVar10 != 0) {
                                lVar10 = 0;
                                if (*(longlong *)(param_1 + 0xf6d8) != 0) {
                                  lVar10 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                                }
                                lVar10 = FUN_1800eeec0(lVar10,*(undefined4 *)(param_1 + 0x18),0,
                                                       0x100,0);
                                *(longlong *)(param_1 + 0xf800) = lVar10;
                                if (lVar10 != 0) {
                                  local_c8 = *(longlong *)(param_1 + 0xf6d8);
                                  uVar11 = (ulonglong)*(uint *)(param_1 + 0x18);
                                  *(ulonglong *)(param_1 + 0xf810) =
                                       local_c8 + uVar11 * 0x1ac0 + 0x900;
                                  lVar10 = 0;
                                  if (local_c8 != 0) {
                                    lVar10 = local_c8 + 0x6d0;
                                  }
                                  local_d8 = uVar11;
                                  lVar15 = FUN_1800f3bf0(lVar10,uVar11,0);
                                  *(longlong *)(param_1 + 0xf820) = lVar15;
                                  if (lVar15 != 0) {
                                    lVar10 = FUN_1800f3bf0(lVar10,uVar11,1);
                                    *(longlong *)(param_1 + 0xf828) = lVar10;
                                    if (lVar10 != 0) {
                                      lVar10 = (*__imp_KERNEL32_dll_CreateEventA)(0,0,0,0);
                                      *(longlong *)(param_1 + 0xf8b8) = lVar10;
                                      if (lVar10 != 0) {
                                        local_e8 = (longlong *)(param_1 + 0xf808);
                                        lVar10 = (*__imp_KERNEL32_dll_CreateThread)
                                                           (0,0,FUN_180050770,local_e8,0,0);
                                        *(longlong *)(param_1 + 0xf8b0) = lVar10;
                                        if (lVar10 != 0) {
                                          (*__imp_KERNEL32_dll_InitializeCriticalSection)
                                                    (param_1 + 0xf888);
                                          lVar10 = *(longlong *)
                                                    (*(longlong *)(param_1 + 0xf810) + 0x1508);
                                          iVar7 = *(int *)(lVar10 + 0xbac);
                                          local_a8 = lVar10;
                                          if (*(int *)(lVar10 + 0xba8) == iVar7) {
                                            uVar8 = iVar7 << 1;
                                            if (iVar7 == 0) {
                                              uVar8 = 0x10;
                                            }
                                            local_f0 = (longlong *)CONCAT44(local_f0._4_4_,uVar8);
                                            lVar15 = CONCAT44(0,uVar8) << 3;
                                            auVar4._8_8_ = 0;
                                            auVar4._0_8_ = CONCAT44(0,uVar8);
                                            if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
                                              lVar15 = -1;
                                            }
                                            lVar15 = thunk_FUN_180102f80(lVar15);
                                            if (lVar15 != 0) {
                                              thunk_FUN_180001218(lVar15,*(undefined8 *)
                                                                          (lVar10 + 0xba0),
                                                                  (ulonglong)
                                                                  *(uint *)(lVar10 + 0xbac) << 3);
                                              thunk_FUN_180102fc0(*(undefined8 *)(lVar10 + 0xba0));
                                              *(longlong *)(lVar10 + 0xba0) = lVar15;
                                              *(undefined4 *)(lVar10 + 0xbac) = local_f0._0_4_;
                                              goto LAB_18003786c;
                                            }
                                          }
                                          else {
LAB_18003786c:
                                            *(longlong **)
                                             (*(longlong *)(local_a8 + 0xba0) +
                                             (ulonglong)*(uint *)(local_a8 + 0xba8) * 8) = local_e8;
                                            *(int *)(local_a8 + 0xba8) =
                                                 *(int *)(local_a8 + 0xba8) + 1;
                                          }
                                          if ((*(uint *)(local_c8 + local_d8 * 0x20 + 0x6e4) & 1) ==
                                              0) {
                                            *(undefined8 *)(param_1 + 0xf818) = 0;
                                          }
                                          else {
                                            FUN_1800e9490(*(undefined8 *)
                                                           (*(longlong *)(param_1 + 0xf810) + 0x1508
                                                           ),&DAT_180229648,param_1 + 0xf818);
                                          }
                                          uVar8 = FUN_1800e7220(*(undefined8 *)
                                                                 (*(longlong *)(param_1 + 0xf6e0) +
                                                                 0x1938),1);
                                          lVar10 = local_d0;
                                          *(uint *)(local_d0 + 0x38c8) = uVar8;
                                          if (uVar8 != 0xffffffff) {
                                            local_c0 = 0x50000001c;
                                            local_b8 = 0;
                                            uStack_b0 = 1;
                                            local_d8 = *(longlong *)
                                                        (*(longlong *)(param_1 + 0xf6e0) + 0x1938);
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(local_d8 + 0x50) +
                                                       (ulonglong)(uVar8 >> 0x10) * 0x10);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_e8);
                                            local_e8 = (longlong *)
                                                       ((longlong)local_e8 +
                                                       (ulonglong)
                                                       ((uVar8 & 0xffff) * *(int *)(local_d8 + 0x20)
                                                       ));
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(param_1 + 0xf6d8) +
                                                        (ulonglong)*(uint *)(param_1 + 0x18) * 0x20
                                                       + 0x6d0);
                                            (**(code **)(*plVar13 + 0xa0))(plVar13,0,&local_c0);
                                            FUN_1800e8548(*(longlong *)
                                                           (*(longlong *)(param_1 + 0xf6e0) + 0x1518
                                                           ) + 8,0);
                                            FUN_180053b10(param_1);
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
                                            func_0x000180222c50(param_1 + 0xf94c,0,0x854);
                                            plVar13 = *(longlong **)(param_1 + 0xf730);
                                            *(undefined8 *)(param_1 + 0xf8e8) =
                                                 *(undefined8 *)(param_1 + 0xf6f0);
                                            *(undefined4 *)(lVar10 + 0x3948) = 2;
                                            uVar14 = (**(code **)(*plVar13 + 0x58))();
                                            lVar10 = 0;
                                            *(undefined8 *)(param_1 + 0xf990) = uVar14;
                                            uVar8 = *(uint *)(*(longlong *)(param_1 + 0xf6f8) +
                                                             0x180);
                                            plVar13 = (longlong *)
                                                      ((ulonglong)(uVar8 >> 0x10) * 0x10);
                                            local_e0 = (longlong *)
                                                       (CONCAT44(local_e0._4_4_,uVar8) &
                                                       0xffffffff0000ffff);
                                            local_f0 = plVar13;
                                            do {
                                              *(uint *)(param_1 + 0xfa18 + lVar10 * 4) = uVar8;
                                              lVar16 = *(longlong *)
                                                        (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                              plVar17 = *(longlong **)
                                                         (*(longlong *)(lVar16 + 0x50) +
                                                         (longlong)plVar13);
                                              (**(code **)(*plVar17 + 0x48))(plVar17,&local_e8);
                                              lVar15 = local_d0;
                                              local_e8 = (longlong *)
                                                         ((longlong)local_e8 +
                                                         (ulonglong)
                                                         (*(int *)(lVar16 + 0x20) * (uVar8 & 0xffff)
                                                         ));
                                              *(longlong **)(param_1 + 0xfa98 + lVar10 * 8) =
                                                   local_e8;
                                              lVar10 = lVar10 + 1;
                                            } while (lVar10 != 0x10);
                                            local_c8 = local_d0;
                                            *(uint *)(local_d0 + 0x3bc0) = uVar8;
                                            local_d8 = *(longlong *)
                                                        (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            local_e8 = local_f0;
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(local_d8 + 0x50) +
                                                       (longlong)local_f0);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_f0);
                                            local_f0 = (longlong *)
                                                       ((longlong)local_f0 +
                                                       (ulonglong)
                                                       (uint)(*(int *)(local_d8 + 0x20) *
                                                             (int)local_e0));
                                            *(longlong **)(param_1 + 0xfbd8) = local_f0;
                                            *(uint *)(lVar15 + 0x3bc4) = uVar8;
                                            local_d8 = *(longlong *)
                                                        (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(local_d8 + 0x50) +
                                                       (longlong)local_e8);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_f0);
                                            local_f0 = (longlong *)
                                                       ((longlong)local_f0 +
                                                       (ulonglong)
                                                       (uint)(*(int *)(local_d8 + 0x20) *
                                                             (int)local_e0));
                                            *(longlong **)(param_1 + 0xfbe0) = local_f0;
                                            *(uint *)(lVar15 + 0x3bc8) = uVar8;
                                            local_d8 = *(longlong *)
                                                        (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(local_d8 + 0x50) +
                                                       (longlong)local_e8);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_f0);
                                            local_f0 = (longlong *)
                                                       ((longlong)local_f0 +
                                                       (ulonglong)
                                                       (uint)(*(int *)(local_d8 + 0x20) *
                                                             (int)local_e0));
                                            *(longlong **)(param_1 + 0xfbe8) = local_f0;
                                            *(uint *)(lVar15 + 0x3bcc) = uVar8;
                                            lVar15 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(lVar15 + 0x50) +
                                                       (longlong)local_e8);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_f0);
                                            lVar10 = local_c8;
                                            local_f0 = (longlong *)
                                                       ((longlong)local_f0 +
                                                       (ulonglong)
                                                       (uint)(*(int *)(lVar15 + 0x20) *
                                                             (int)local_e0));
                                            *(longlong **)(param_1 + 0xfbf0) = local_f0;
                                            *(uint *)(local_c8 + 0x3bd0) = uVar8;
                                            lVar15 = *(longlong *)
                                                      (*(longlong *)(param_1 + 0xf6e0) + 0x1930);
                                            plVar13 = *(longlong **)
                                                       (*(longlong *)(lVar15 + 0x50) +
                                                       (longlong)local_e8);
                                            (**(code **)(*plVar13 + 0x48))(plVar13,&local_f0);
                                            *(ulonglong *)(param_1 + 0xfbf8) =
                                                 (longlong)local_f0 +
                                                 (ulonglong)
                                                 (uint)(*(int *)(lVar15 + 0x20) * (int)local_e0);
                                            *(undefined4 *)(lVar10 + 0x3950) = 1;
                                            *(undefined8 *)(param_1 + 0xf958) = 0;
                                            *(undefined8 *)(param_1 + 0xf960) = 0;
                                            *(undefined8 *)(param_1 + 0xf968) = 0;
                                            *(undefined8 *)(param_1 + 0xf970) = 0;
                                            lVar15 = *(longlong *)(param_1 + 0xf718);
                                            *(undefined4 *)(lVar10 + 0x3fc4) = 0;
                                            *(longlong *)(param_1 + 0xff38) = lVar15;
                                            *(undefined8 *)(param_1 + 0xffb8) =
                                                 *(undefined8 *)(param_1 + 0xf710);
                                            *(undefined8 *)(param_1 + 0xf788) =
                                                 *(undefined8 *)(param_1 + 0xf6e0);
                                            FUN_1800eef60(lVar15 + 0x40,&local_c0,2,0,0);
                                            lVar10 = local_b8;
                                            if (local_b8 != 0) {
                                              FUN_1800eef60(*(longlong *)(param_1 + 0xf710) + 0x40,
                                                            &local_c0,2,0,0);
                                              if (local_b8 != 0) {
                                                *(longlong *)(param_1 + 0x68) = lVar10;
                                                *(undefined8 *)(param_1 + 0x70) = 0;
                                                *(undefined4 *)(param_1 + 0x78) = 0;
                                                *(undefined4 *)(param_1 + 0x7c) = 0;
                                                *(longlong *)(param_1 + 0x58) = lVar10;
                                                *(longlong *)(param_1 + 0x60) = lVar10;
                                                *(longlong *)(param_1 + 0x88) = local_b8;
                                                *(undefined8 *)(param_1 + 0x90) = 0;
                                                return 1;
                                              }
                                              if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34)
                                                  != 0) {
                                                *(undefined4 *)
                                                 (*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
                                              }
                                            }
                                            return 1;
                                          }
                                          FUN_180050638(local_e8);
                                          FUN_180042958(param_1);
                                          plVar13 = local_e0;
                                          goto LAB_180037f58;
                                        }
                                        (*__imp_KERNEL32_dll_CloseHandle)
                                                  (*(undefined8 *)(param_1 + 0xf8b8));
                                      }
                                      lVar10 = *(longlong *)(param_1 + 0xf828);
                                      if (lVar10 != 0) {
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          uVar8 = *(uint *)(lVar10 + 0x20);
                                          local_d8 = *(longlong *)(lVar10 + 0x10) +
                                                     (ulonglong)uVar8 * 0x30;
                                          if ((*(longlong **)(local_d8 + 0x20) != (longlong *)0x0)
                                             && (uVar11 = (**(code **)(**(longlong **)
                                                                         (local_d8 + 0x20) + 0x40))
                                                                    (),
                                                uVar11 < *(ulonglong *)(local_d8 + 0x28))) {
                                            lVar15 = *(longlong *)(lVar10 + 0x10) +
                                                     (ulonglong)uVar8 * 0x30;
                                            plVar13 = *(longlong **)(lVar15 + 0x20);
                                            (**(code **)(*plVar13 + 0x48))
                                                      (plVar13,*(undefined8 *)(lVar15 + 0x28),
                                                       *(undefined8 *)(lVar10 + 0x30));
                                            (*__imp_KERNEL32_dll_WaitForSingleObject)
                                                      (*(undefined8 *)(lVar10 + 0x30),0xffffffff);
                                          }
                                          uVar11 = 0;
                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                            do {
                                              (**(code **)(**(longlong **)
                                                             (uVar11 * 0x30 +
                                                              *(longlong *)(lVar10 + 0x10) + 8) +
                                                          0x10))();
                                              (**(code **)(**(longlong **)
                                                             (*(longlong *)(lVar10 + 0x10) +
                                                             uVar11 * 0x30) + 0x10))();
                                              uVar8 = (int)uVar11 + 1;
                                              uVar11 = (ulonglong)uVar8;
                                            } while (uVar8 < *(uint *)(lVar10 + 0x18));
                                          }
                                          thunk_FUN_180102fc0(*(undefined8 *)(lVar10 + 0x10));
                                          pcVar5 = __imp_KERNEL32_dll_CloseHandle;
                                          *(undefined8 *)(lVar10 + 0x10) = 0;
                                          *(undefined8 *)(lVar10 + 0x18) = 0;
                                          (*pcVar5)(*(undefined8 *)(lVar10 + 0x30));
                                          *(undefined8 *)(lVar10 + 0x30) = 0;
                                        }
                                        thunk_FUN_180102fc0(*(undefined8 *)(lVar10 + 0x10));
                                        FUN_180102fc0(lVar10,0x38);
                                      }
                                      *(undefined8 *)(param_1 + 0xf828) = 0;
                                    }
                                    lVar10 = *(longlong *)(param_1 + 0xf820);
                                    if (lVar10 != 0) {
                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                        uVar8 = *(uint *)(lVar10 + 0x20);
                                        local_d8 = *(longlong *)(lVar10 + 0x10) +
                                                   (ulonglong)uVar8 * 0x30;
                                        if ((*(longlong **)(local_d8 + 0x20) != (longlong *)0x0) &&
                                           (uVar11 = (**(code **)(**(longlong **)(local_d8 + 0x20) +
                                                                 0x40))(),
                                           uVar11 < *(ulonglong *)(local_d8 + 0x28))) {
                                          lVar15 = *(longlong *)(lVar10 + 0x10) +
                                                   (ulonglong)uVar8 * 0x30;
                                          plVar13 = *(longlong **)(lVar15 + 0x20);
                                          (**(code **)(*plVar13 + 0x48))
                                                    (plVar13,*(undefined8 *)(lVar15 + 0x28),
                                                     *(undefined8 *)(lVar10 + 0x30));
                                          (*__imp_KERNEL32_dll_WaitForSingleObject)
                                                    (*(undefined8 *)(lVar10 + 0x30),0xffffffff);
                                        }
                                        uVar11 = 0;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          do {
                                            (**(code **)(**(longlong **)
                                                           (uVar11 * 0x30 +
                                                            *(longlong *)(lVar10 + 0x10) + 8) + 0x10
                                                        ))();
                                            (**(code **)(**(longlong **)
                                                           (*(longlong *)(lVar10 + 0x10) +
                                                           uVar11 * 0x30) + 0x10))();
                                            uVar8 = (int)uVar11 + 1;
                                            uVar11 = (ulonglong)uVar8;
                                          } while (uVar8 < *(uint *)(lVar10 + 0x18));
                                        }
                                        thunk_FUN_180102fc0(*(undefined8 *)(lVar10 + 0x10));
                                        pcVar5 = __imp_KERNEL32_dll_CloseHandle;
                                        *(undefined8 *)(lVar10 + 0x10) = 0;
                                        *(undefined8 *)(lVar10 + 0x18) = 0;
                                        (*pcVar5)(*(undefined8 *)(lVar10 + 0x30));
                                        *(undefined8 *)(lVar10 + 0x30) = 0;
                                      }
                                      thunk_FUN_180102fc0(*(undefined8 *)(lVar10 + 0x10));
                                      FUN_180102fc0(lVar10,0x38);
                                    }
                                    *(undefined8 *)(param_1 + 0xf820) = 0;
                                  }
                                  FUN_180042958(param_1);
                                  plVar13 = local_e0;
                                  goto LAB_180037f58;
                                }
                                if (*(longlong *)(param_1 + 0xf7f0) != 0) {
                                  FUN_1800380e0(*(longlong *)(param_1 + 0xf7f0),1);
                                }
                              }
                              if (*(longlong *)(param_1 + 0xf7f8) != 0) {
                                FUN_1800380e0(*(longlong *)(param_1 + 0xf7f8),1);
                              }
                            }
                            plVar13 = local_e0;
                            if (*local_f0 != 0) {
                              FUN_1800380e0(*local_f0,1);
                            }
                          }
                          if (*local_e8 != 0) {
                            FUN_1800380e0(*local_e8,1);
                          }
                        }
                      }
LAB_180037f58:
                      (**(code **)(**(longlong **)(param_1 + 0xf730) + 0x10))();
                      *(undefined8 *)(param_1 + 0xf730) = 0;
                    }
                    if (*(longlong *)(param_1 + 0xf738) != 0) {
                      FUN_1800380e0(*(longlong *)(param_1 + 0xf738),1);
                    }
                    *(undefined8 *)(param_1 + 0xf738) = 0;
                  }
                  if (*(longlong *)(param_1 + 0xf728) != 0) {
                    FUN_1800380e0(*(longlong *)(param_1 + 0xf728),1);
                  }
                  *(undefined8 *)(param_1 + 0xf728) = 0;
                }
                if (*(longlong *)(param_1 + 0xf710) != 0) {
                  FUN_1800380e0(*(longlong *)(param_1 + 0xf710),1);
                }
                *(undefined8 *)(param_1 + 0xf710) = 0;
              }
              if (*(longlong *)(param_1 + 0xf718) != 0) {
                FUN_1800380e0(*(longlong *)(param_1 + 0xf718),1);
              }
              *(undefined8 *)(param_1 + 0xf718) = 0;
            }
            if (*(longlong *)(param_1 + 0xf708) != 0) {
              FUN_180038230();
            }
            *(undefined8 *)(param_1 + 0xf708) = 0;
          }
          if (*(longlong *)(param_1 + 0xf700) != 0) {
            FUN_180038230();
          }
          *(undefined8 *)(param_1 + 0xf700) = 0;
        }
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
    }
  }
  plVar17 = (longlong *)*plVar13;
  if ((plVar17 != (longlong *)0x0) && (iVar7 = FUN_180001590(plVar17 + 1), iVar7 == 0)) {
    if (*(short *)((longlong)plVar17 + 0xc) != 0) {
      uVar14 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar17 + 0xc),uVar14);
      if (plVar17[2] != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        plVar17[2] = 0;
      }
    }
    (**(code **)(*plVar17 + 0x88))(plVar17);
  }
LAB_1800380c0:
  *plVar13 = 0;
  return 0;
}

