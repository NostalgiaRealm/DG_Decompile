/*
 * FUN_18021f2d0 at 18021f2d0
 * undefined FUN_18021f2d0(void)
 * Address ranges: 18021f2d0-18021f4e7;18021f4ec-18021f95b;18021f96c-18021fa23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18021f2d0(void)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  undefined ***local_1020;
  undefined1 *local_1018;
  undefined4 local_1010;
  undefined8 local_1008;
  undefined8 *puStack_1000;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  char *pcStack_fc8;
  undefined8 local_fc0;
  undefined **local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  char *local_fa0;
  undefined4 local_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined1 local_f68;
  undefined4 local_f64;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined4 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined4 local_f18;
  undefined1 auStack_eb0 [8];
  undefined8 *local_ea8;
  undefined1 auStack_e60 [520];
  undefined1 auStack_c58 [520];
  undefined1 auStack_a50 [520];
  undefined1 auStack_848 [520];
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [1024];
  
  uVar10 = thunk_FUN_1802239b4(0);
  iVar8 = thunk_FUN_180223ff4(uVar10,s_DGDRIVERROOT_180239eb0,auStack_eb0);
  if ((iVar8 != 0) && (local_ea8 != (undefined8 *)0x0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar8 = (*extraout_x11)(local_ea8);
    puVar11 = local_ea8;
    if (iVar8 != 0x287) {
      puVar11 = (undefined8 *)0x0;
    }
    goto LAB_18021f9f8;
  }
  puVar11 = (undefined8 *)FUN_1802229a8(0xa10);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[0x1c] = &DAT_180229fac;
    *(undefined4 *)(puVar11 + 0xd) = 0;
    *puVar11 = &PTR_FUN_180239f08;
    puVar11[1] = 0;
    *(undefined2 *)((longlong)puVar11 + 0x6c) = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x1a] = 0;
    *(undefined4 *)(puVar11 + 0x1b) = 1;
    *(undefined4 *)(puVar11 + 0x1d) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0x1e] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x26] = 0;
    puVar11[0x27] = 0;
    puVar11[0x28] = 0;
    puVar11[0x29] = 0;
    *(undefined4 *)(puVar11 + 0x23) = 0x287;
    *(undefined4 *)(puVar11 + 4) = 0;
    puVar11[0x20] = 0;
    puVar11[0x21] = 0;
    puVar11[0x22] = 0;
    puVar11[0x24] = 0;
    *(undefined4 *)(puVar11 + 0x25) = 0;
    puVar11[0x2a] = 0;
    puVar11[0x2b] = 0;
    *(undefined4 *)(puVar11 + 0x2c) = 0;
    FUN_1801ed0b8(puVar11 + 0x7a);
    FUN_1801ed0b8((longlong)puVar11 + 0x5dc);
    FUN_1801ed0b8(puVar11 + 0x100);
    *(undefined2 *)((longlong)puVar11 + 0xa0c) = 0x101;
    FUN_180222c50((longlong)puVar11 + 0x164,0,0x20c);
    lVar12 = DAT_180258b70;
    puStack_1000 = puVar11;
    if (puVar11 == (undefined8 *)0xffffffffffffff98) {
      puStack_1000 = (undefined8 *)0x0;
    }
    local_ff8 = 0;
    puVar11[0xff] = 0;
    puVar11[0xfe] = 0;
    local_1008 = 0x50;
    local_ff0 = thunk_FUN_1802239b4(0);
    local_fe0 = 0;
    uStack_fd8 = 0;
    uStack_fe8 = 0;
    local_fd0 = 0;
    pcStack_fc8 = s_DGDRIVERROOT_180239eb0;
    local_fc0 = 0;
    sVar7 = thunk_FUN_180223fcc(&local_1008);
    *(short *)((longlong)puVar11 + 0x6c) = sVar7;
    if (sVar7 == 0) {
      lVar12 = 0;
    }
    puVar11[0xe] = lVar12;
    if (lVar12 != 0) {
      thunk_FUN_180223964(lVar12,auStack_440,0x400);
      lVar12 = thunk_FUN_18022398c(auStack_440);
      if (lVar12 == 0) {
        puVar11[0xe] = 0;
      }
    }
    if (*(short *)((longlong)puVar11 + 0x6c) != 0) {
      puVar11[0x24] = 0;
      FUN_180222c50(puVar11 + 0x6e,0,0x480);
      cVar6 = DAT_180258b78;
      *(undefined4 *)(puVar11 + 0x1b) = 1;
      puVar11[0x1c] = s__dgVoodoo__18022e1c0;
      puVar1 = (uint *)(puVar11 + 0x1a);
      *(undefined4 *)(puVar11 + 0x1d) = 0;
      puVar11[0x1e] = 0;
      puVar5 = __hybrid_os_arm64x_dispatch_icall;
      puVar1[0] = 1;
      puVar1[1] = 1;
      if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(puVar11 + 0x100,&DAT_180258350,0x20c);
      }
      if (DAT_180258b70 == 0) {
LAB_18021f530:
        thunk_FUN_180223a18(0,auStack_a50,0x104);
        thunk_FUN_180223694(auStack_a50);
        thunk_FUN_18022366c(auStack_a50,u_dgVoodoo_conf_180239e90);
        iVar8 = thunk_FUN_1802236a8(auStack_a50,auStack_c58);
        if (iVar8 != 0) {
          puVar3 = (uint *)0x0;
          if (puVar11 != (undefined8 *)0x0) {
            puVar3 = puVar1;
          }
          uVar13 = FUN_1801ed228(puVar11 + 0x100,auStack_a50,puVar3);
          if ((uVar13 & 1) != 0) goto LAB_18021f73c;
        }
        iVar8 = thunk_FUN_1802243f0(0,0x1a,0,0,auStack_e60);
        if (-1 < iVar8) {
          thunk_FUN_18022366c(auStack_e60,u_dgVoodoo_180239ec0);
          local_fa0 = s__dgVoodoo_IniParser__180236e40;
          local_fa8 = 1;
          local_fb8 = &PTR_FUN_180237d20;
          uStack_fb0 = 0x100000001;
          local_f98 = 0;
          local_f90 = 0;
          uStack_f88 = 0;
          local_f80 = 0;
          uStack_f78 = 0;
          local_f70 = 0;
          local_f68 = 1;
          local_f64 = 0;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f50 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f38 = 0;
          local_f30 = 0;
          local_f28 = 0;
          uStack_f20 = 0;
          local_f18 = 0;
          FUN_180223210(auStack_848,auStack_e60);
          thunk_FUN_18022366c(auStack_848,u_dgVoodooSettings_ini_180237df8);
          thunk_FUN_1802236d0(0,0x200,auStack_848,0xffffffff,auStack_440,0x30a,0,0);
          (*(code *)puVar5)(0x180224000);
          cVar6 = (*extraout_x11_00)(&local_fb8,auStack_848,1);
          if (cVar6 != '\0') {
            local_1020 = &local_fb8;
            local_1018 = auStack_e60;
            local_1010 = 0x104;
            uVar17 = 0;
            (*(code *)puVar5)(0x180224000);
            iVar8 = (*extraout_x11_01)(&local_fb8);
            if (iVar8 != 0) {
              do {
                (*(code *)puVar5)();
                lVar12 = (*extraout_x11_02)(&local_fb8,uVar17);
                if (lVar12 == 0) {
                  FUN_1801fa548(&local_1020,uVar17);
                  break;
                }
                uVar17 = uVar17 + 1;
                (*(code *)puVar5)();
                uVar9 = (*extraout_x11_03)(&local_fb8);
              } while (uVar17 < uVar9);
            }
          }
          thunk_FUN_18022366c(auStack_e60,u_dgVoodoo_conf_180239e90);
          puVar3 = (uint *)0x0;
          if (puVar11 != (undefined8 *)0x0) {
            puVar3 = puVar1;
          }
          FUN_1801ed228(puVar11 + 0x100,auStack_e60,puVar3);
          FUN_1801f36f8(&local_fb8);
        }
      }
      else {
        thunk_FUN_180223a18(DAT_180258b70,auStack_c58,0x104);
        thunk_FUN_180223694(auStack_c58);
        thunk_FUN_18022366c(auStack_c58,u_dgVoodoo_conf_180239e90);
        puVar3 = (uint *)0x0;
        if (puVar11 != (undefined8 *)0x0) {
          puVar3 = puVar1;
        }
        uVar13 = FUN_1801ed228(puVar11 + 0x100,auStack_c58,puVar3);
        if ((uVar13 & 1) == 0) goto LAB_18021f530;
      }
LAB_18021f73c:
      thunk_FUN_180223964(0,auStack_640,0x200);
      puVar14 = (undefined1 *)thunk_FUN_180223680(auStack_640);
      if (puVar14 != auStack_640) {
        FUN_180222b58();
        if ((*(int *)((longlong)puVar11 + 0x8be) == 0) &&
           (lVar12 = FUN_180222d30(puVar14,s_dosbox_180237b74), lVar12 != 0)) {
          *(int *)((longlong)puVar11 + 0x8be) = 1;
        }
      }
      puVar11[0x1c] = s__dgVoodoo__18022e1c0;
      puVar11[0x1e] = 0;
      uVar17 = (uint)(*(int *)((longlong)puVar11 + 0x9fb) == 1);
      if (*(int *)((longlong)puVar11 + 0x9fb) == 2) {
        uVar17 = 2;
      }
      *puVar1 = uVar17;
      uVar17 = (uint)(*(int *)((longlong)puVar11 + 0x9ff) == 1);
      if (*(int *)((longlong)puVar11 + 0x9ff) == 2) {
        uVar17 = 2;
      }
      uVar9 = (uint)(*(int *)((longlong)puVar11 + 0xa03) == 1);
      if (*(int *)((longlong)puVar11 + 0xa03) == 2) {
        uVar9 = 2;
      }
      *(uint *)((longlong)puVar11 + 0xd4) = uVar17;
      *(uint *)(puVar11 + 0x1b) = uVar9;
      *(undefined4 *)(puVar11 + 0x1d) = *(undefined4 *)((longlong)puVar11 + 0xa07);
      lVar12 = thunk_FUN_18022398c(s_USER32_DLL_180239ee8);
      if (lVar12 != 0) {
        lVar15 = thunk_FUN_180223928(lVar12,s_CallWindowProcA_180239ed8);
        puVar11[0x1f] = lVar15;
        if (lVar15 != 0) {
          lVar12 = thunk_FUN_180223928(lVar12,s_CallWindowProcW_180239ef8);
          puVar11[0x20] = lVar12;
          if (lVar12 != 0) {
            lVar12 = thunk_FUN_180223734(0,0x1000,0x1000,0x40);
            puVar11[0x21] = lVar12;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_180223734(0,0x2000,0x1000,0x40);
              puVar11[0x22] = lVar12;
              if (lVar12 != 0) {
                lVar12 = thunk_FUN_180223734(0,0x2700,0x1000,0x40);
                puVar11[0x15] = lVar12;
                if (lVar12 != 0) {
                  puVar3 = (uint *)0x0;
                  if (puVar11 != (undefined8 *)0x0) {
                    puVar3 = puVar1;
                  }
                  puVar11[3] = puVar3;
                  *(undefined4 *)(puVar11 + 4) = 0x287;
                  lVar12 = thunk_FUN_18022398c(s_SampleAddon_dll_180239fb8);
                  if (lVar12 != 0) {
                    thunk_FUN_180223964(lVar12,&local_fb8,0x104);
                    lVar15 = thunk_FUN_180223928(lVar12,s_AddOnInit_180239fd8);
                    lVar16 = thunk_FUN_180223928(lVar12,s_AddOnExit_180239fc8);
                    if ((lVar15 != 0) && (lVar16 != 0)) {
                      (*(code *)puVar5)(0x180224000);
                      cVar6 = (*extraout_x11_04)(puVar11);
                      if (cVar6 != '\0') {
                        iVar8 = *(int *)((longlong)puVar11 + 0x14);
                        if (*(int *)(puVar11 + 2) == iVar8) {
                          uVar17 = iVar8 << 1;
                          if (iVar8 == 0) {
                            uVar17 = 0x10;
                          }
                          lVar12 = CONCAT44(0,uVar17) * 0x18;
                          auVar4._8_8_ = 0;
                          auVar4._0_8_ = CONCAT44(0,uVar17);
                          if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
                            lVar12 = -1;
                          }
                          lVar12 = FUN_1802229a8(lVar12);
                          if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
                            thunk_FUN_180104c48(lVar12,puVar11[1],
                                                (ulonglong)*(uint *)((longlong)puVar11 + 0x14) *
                                                0x18);
                          }
                        }
                        else {
                          plVar2 = (longlong *)
                                   (puVar11[1] + (ulonglong)*(uint *)(puVar11 + 2) * 0x18);
                          *plVar2 = lVar12;
                          plVar2[1] = lVar15;
                          plVar2[2] = lVar16;
                          *(int *)(puVar11 + 2) = *(int *)(puVar11 + 2) + 1;
                        }
                        goto LAB_18021f99c;
                      }
                    }
                    thunk_FUN_1802236bc(lVar12);
                  }
LAB_18021f99c:
                  puVar11[0x17] = 0;
                  puVar11[0x16] = 0;
                  puVar11[0x19] = 0;
                  puVar11[0x18] = 0;
                  FUN_1802229d8(puVar11[0x11]);
                  puVar11[0x11] = 0;
                  puVar11[0x12] = 0;
                  goto LAB_18021f9f8;
                }
              }
            }
          }
        }
      }
      if (*(short *)((longlong)puVar11 + 0x6c) != 0) {
        uVar10 = thunk_FUN_1802239b4(0);
        thunk_FUN_180224008(*(undefined2 *)((longlong)puVar11 + 0x6c),uVar10);
        if (puVar11[0xe] != 0) {
          thunk_FUN_1802236bc();
          puVar11[0xe] = 0;
        }
      }
    }
    FUN_18021f268(puVar11);
    FUN_1802229d8(puVar11,0xa10);
  }
  puVar11 = (undefined8 *)0x0;
LAB_18021f9f8:
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1801042e0(puVar11 + 0xd);
  }
  return puVar11;
}

