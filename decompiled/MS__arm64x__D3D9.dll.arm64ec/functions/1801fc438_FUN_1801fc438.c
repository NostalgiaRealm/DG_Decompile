/*
 * FUN_1801fc438 at 1801fc438
 * undefined FUN_1801fc438(void)
 * Address ranges: 1801fc438-1801fcaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801fc438(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  longlong extraout_x12;
  ulonglong extraout_x15;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  code *local_1f0;
  uint local_1e8;
  uint local_1e0 [2];
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  uint local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar15 = (ulonglong)param_2;
  local_1b8 = param_1;
  local_1c0 = FUN_1801faba0(param_1,uVar15);
  uVar7 = extraout_x15;
  if (local_1c0 == 0xffffffff) goto LAB_1801fca58;
  lVar8 = extraout_x12 + (ulonglong)local_1c0 * 4;
  if (*(int *)(lVar8 + 0x434) == -1) {
    *(undefined4 *)(lVar8 + 0x434) = 0;
    pcVar13 = (code *)__hybrid_os_arm64x_dispatch_icall;
    lVar12 = *(longlong *)(extraout_x12 + 0x480);
    lVar1 = lVar12 + uVar15 * 0x28;
    lVar11 = lVar12 + uVar15 * 0x18c0;
    if (*(char *)(lVar1 + 0x2c) != '\0') {
      iVar2 = *(int *)(lVar1 + 0x28);
      iVar4 = *(int *)(extraout_x12 + 0x488);
      local_1e8 = *(uint *)(extraout_x12 + 0x48c);
      local_1c8 = *(longlong *)(extraout_x12 + 0x490);
      local_1e0[0] = (uint)*(byte *)(extraout_x12 + 0x498);
      *(int *)(lVar1 + 0x28) = iVar2 + 1;
      local_1f0 = (code *)CONCAT44(local_1f0._4_4_,iVar4);
      if (iVar2 == 0) {
        if (iVar4 == 5) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar1 + 0x18);
        }
        local_1d8 = (undefined8 *)(lVar11 + 0x6b8);
        *(undefined4 *)(lVar11 + 0x6d0) = 0;
        local_1b0 = *(undefined8 *)(lVar12 + 0x2e0);
        local_1d0 = lVar11 + 0x6cc;
        (*pcVar13)(0x180225000);
        iVar4 = (*extraout_x11)(lVar14,(ulonglong)local_1f0 & 0xffffffff,0,0,local_1c8,local_1e8,7,
                                lVar11 + 0x6b0,local_1d0,local_1d8);
        if (iVar4 < 0) {
          if (local_1e0[0] != 0) {
            (*pcVar13)(0x180225000);
            iVar4 = (*extraout_x11_02)(0,5,0,0,local_1c8,local_1e8,7,lVar11 + 0x6b0,local_1d0,
                                       local_1d8);
            if (-1 < iVar4) {
              uVar6 = (*pcVar13)(0x180224000);
              (*extraout_x11_03)(uVar6,&DAT_1802387f8,lVar11 + 0x6c0);
              *(undefined4 *)(lVar11 + 0x6c8) = 5;
              goto LAB_1801fc664;
            }
          }
          *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
        }
        else {
          uVar6 = (*pcVar13)(0x180224000);
          (*extraout_x11_00)(uVar6,&DAT_1802387f8,lVar11 + 0x6c0);
          *(int *)(lVar11 + 0x6c8) = (int)local_1f0;
          if (lVar14 != 0) {
            (*pcVar13)(0x180224000);
            (*extraout_x11_01)(lVar14,auStack_178);
            *(undefined4 *)(lVar11 + 0x6d0) = local_78;
            *(undefined4 *)(lVar11 + 0x6d4) = uStack_74;
          }
          if ((*(longlong *)(lVar12 + 0x2d8) == 0) ||
             (uVar7 = FUN_180215108(FUN_180215228), (uVar7 & 1) == 0)) {
            *(undefined8 *)(lVar1 + 0x30) = 0;
          }
        }
      }
    }
LAB_1801fc664:
    if (*(int *)(lVar1 + 0x28) != 0) {
      if (*(int *)(lVar1 + 0x28) == 1) {
        (*pcVar13)(0x180224000);
        (*extraout_x11_04)();
        (*pcVar13)(0x180224000);
        (*extraout_x11_05)();
        local_1a8 = 0x200001050;
        uStack_1a0 = 0x1000000000004;
        local_198 = 0x105000000000;
        uVar6 = (*pcVar13)(0x180224000);
        iVar4 = (*extraout_x11_06)(uVar6,&local_1a8,0,lVar11 + 0xea8);
        if (-1 < iVar4) {
          uVar6 = (*pcVar13)(0x180224000);
          (*extraout_x11_07)(uVar6,4,local_1e0,4);
          *(bool *)(lVar12 + 0x67c) = local_1e0[0] != 0;
          if (local_1e0[0] == 0) {
LAB_1801fc7f0:
            param_2 = (uint)uVar15;
            uVar7 = FUN_1801fe590(lVar12,uVar15,*(undefined8 *)(lVar12 + 0x298),0x2b,&DAT_18024c5b0,
                                  lVar11 + 0xd18);
            if ((uVar7 & 1) != 0) {
              auVar16 = FUN_1801fe720(lVar12,uVar15,*(undefined8 *)(lVar12 + 0x298),2,&DAT_18024c678
                                      ,&PTR_PTR_18024c610,lVar11 + 0xe70,lVar11 + 0xe80);
              if ((auVar16._0_8_ & 1) != 0) {
                local_190 = 0x200004000;
                uStack_188 = 0x1000000000001;
                local_180 = 0x1000000000;
                uVar6 = (*pcVar13)(0x180224000);
                auVar16 = (*extraout_x11_09)(uVar6,&local_190,0,lVar11 + 0xe98);
                if (-1 < auVar16._0_4_) {
                  uVar6 = (*pcVar13)(0x180224000);
                  iVar4 = (*extraout_x11_10)(uVar6,&DAT_1802385e8,lVar11 + 0xe90);
                  if (-1 < iVar4) {
                    *(undefined8 *)(lVar11 + 0x708) = 0;
                    *(undefined8 *)(lVar11 + 0x6e0) = 0;
                    *(undefined8 *)(lVar11 + 0x6e8) = 0;
                    *(undefined8 *)(lVar11 + 0x6f0) = 0xffffffff;
                    *(undefined8 *)(lVar11 + 0xbc8) = 0;
                    *(undefined8 *)(lVar11 + 0xbc0) = 0;
                    *(undefined8 *)(lVar11 + 0xbd8) = 0;
                    *(undefined8 *)(lVar11 + 0xbd0) = 0;
                    *(undefined8 *)(lVar11 + 0x798) = 0;
                    *(undefined8 *)(lVar11 + 0x790) = 0;
                    *(undefined8 *)(lVar11 + 0x7a8) = 0;
                    *(undefined8 *)(lVar11 + 0x7a0) = 0;
                    *(undefined8 *)(lVar11 + 0x7b8) = 0;
                    *(undefined8 *)(lVar11 + 0x7b0) = 0;
                    *(undefined8 *)(lVar11 + 0x7c8) = 0;
                    *(undefined8 *)(lVar11 + 0x7c0) = 0;
                    *(undefined8 *)(lVar11 + 0x7d8) = 0;
                    *(undefined8 *)(lVar11 + 2000) = 0;
                    *(undefined8 *)(lVar11 + 0x7e8) = 0;
                    *(undefined8 *)(lVar11 + 0x7e0) = 0;
                    *(undefined8 *)(lVar11 + 0x7f8) = 0;
                    *(undefined8 *)(lVar11 + 0x7f0) = 0;
                    *(undefined8 *)(lVar11 + 0x808) = 0;
                    *(undefined8 *)(lVar11 + 0x800) = 0;
                    *(undefined8 *)(lVar11 + 0x878) = 0;
                    *(undefined8 *)(lVar11 + 0x870) = 0;
                    *(undefined8 *)(lVar11 + 0x888) = 0;
                    *(undefined8 *)(lVar11 + 0x880) = 0;
                    *(undefined8 *)(lVar11 + 0x898) = 0;
                    *(undefined8 *)(lVar11 + 0x890) = 0;
                    *(undefined8 *)(lVar11 + 0x8a8) = 0;
                    *(undefined8 *)(lVar11 + 0x8a0) = 0;
                    *(undefined8 *)(lVar11 + 0x8b8) = 0;
                    *(undefined8 *)(lVar11 + 0x8b0) = 0;
                    *(undefined8 *)(lVar11 + 0x8c8) = 0;
                    *(undefined8 *)(lVar11 + 0x8c0) = 0;
                    *(undefined8 *)(lVar11 + 0x8d8) = 0;
                    *(undefined8 *)(lVar11 + 0x8d0) = 0;
                    *(undefined8 *)(lVar11 + 0x8e8) = 0;
                    *(undefined8 *)(lVar11 + 0x8e0) = 0;
                    *(undefined8 *)(lVar11 + 0x8f8) = 0;
                    *(undefined8 *)(lVar11 + 0x8f0) = 0;
                    *(undefined8 *)(lVar11 + 0x908) = 0;
                    *(undefined8 *)(lVar11 + 0x900) = 0;
                    *(undefined8 *)(lVar11 + 0x918) = 0;
                    *(undefined8 *)(lVar11 + 0x910) = 0;
                    *(undefined8 *)(lVar11 + 0x928) = 0;
                    *(undefined8 *)(lVar11 + 0x920) = 0;
                    *(undefined8 *)(lVar11 + 0x938) = 0;
                    *(undefined8 *)(lVar11 + 0x930) = 0;
                    *(undefined8 *)(lVar11 + 0x948) = 0;
                    *(undefined8 *)(lVar11 + 0x940) = 0;
                    *(undefined8 *)(lVar11 + 0x958) = 0;
                    *(undefined8 *)(lVar11 + 0x950) = 0;
                    *(undefined8 *)(lVar11 + 0x968) = 0;
                    *(undefined8 *)(lVar11 + 0x960) = 0;
                    *(undefined8 *)(lVar11 + 0x978) = 0;
                    *(undefined8 *)(lVar11 + 0x970) = 0;
                    *(undefined8 *)(lVar11 + 0x988) = 0;
                    *(undefined8 *)(lVar11 + 0x980) = 0;
                    *(undefined8 *)(lVar11 + 0x998) = 0;
                    *(undefined8 *)(lVar11 + 0x990) = 0;
                    *(undefined8 *)(lVar11 + 0x9a8) = 0;
                    *(undefined8 *)(lVar11 + 0x9a0) = 0;
                    *(undefined8 *)(lVar11 + 0x9b8) = 0;
                    *(undefined8 *)(lVar11 + 0x9b0) = 0;
                    *(undefined8 *)(lVar11 + 0x9c8) = 0;
                    *(undefined8 *)(lVar11 + 0x9c0) = 0;
                    *(undefined8 *)(lVar11 + 0x9d8) = 0;
                    *(undefined8 *)(lVar11 + 0x9d0) = 0;
                    *(undefined8 *)(lVar11 + 0x9e8) = 0;
                    *(undefined8 *)(lVar11 + 0x9e0) = 0;
                    *(undefined8 *)(lVar11 + 0x9f8) = 0;
                    *(undefined8 *)(lVar11 + 0x9f0) = 0;
                    *(undefined8 *)(lVar11 + 0xa08) = 0;
                    *(undefined8 *)(lVar11 + 0xa00) = 0;
                    *(undefined8 *)(lVar11 + 0xa18) = 0;
                    *(undefined8 *)(lVar11 + 0xa10) = 0;
                    *(undefined8 *)(lVar11 + 0xa28) = 0;
                    *(undefined8 *)(lVar11 + 0xa20) = 0;
                    *(undefined8 *)(lVar11 + 0xa38) = 0;
                    *(undefined8 *)(lVar11 + 0xa30) = 0;
                    *(undefined8 *)(lVar11 + 0xa48) = 0;
                    *(undefined8 *)(lVar11 + 0xa40) = 0;
                    *(undefined8 *)(lVar11 + 0xa58) = 0;
                    *(undefined8 *)(lVar11 + 0xa50) = 0;
                    *(undefined8 *)(lVar11 + 0xa68) = 0;
                    *(undefined8 *)(lVar11 + 0xa60) = 0;
                    *(undefined8 *)(lVar11 + 0xb88) = 0;
                    *(undefined8 *)(lVar11 + 0xb80) = 0;
                    *(undefined8 *)(lVar11 + 0xb90) = 0;
                    *(undefined4 *)(lVar11 + 0xb98) = 0;
                    *(undefined8 *)(lVar11 + 0xba0) = 0;
                    *(undefined8 *)(lVar11 + 0xba8) = 0;
                    *(undefined8 *)(lVar11 + 0xbb0) = 0;
                    *(undefined8 *)(lVar11 + 3000) = 0;
                    *(undefined8 *)(lVar11 + 0xbe0) = 0;
                    *(undefined4 *)(lVar11 + 0xea0) = 0;
                    *(longlong *)(lVar11 + 0xc08) = lVar12;
                    *(uint *)(lVar11 + 0xc10) = param_2;
                    *(longlong *)(lVar11 + 0xc28) = lVar12;
                    *(uint *)(lVar11 + 0xc30) = param_2;
                    *(longlong *)(lVar11 + 0xc48) = lVar12;
                    *(uint *)(lVar11 + 0xc50) = param_2;
                    *(longlong *)(lVar11 + 0xc68) = lVar12;
                    *(uint *)(lVar11 + 0xc70) = param_2;
                    *(longlong *)(lVar11 + 0xc88) = lVar12;
                    *(uint *)(lVar11 + 0xc90) = param_2;
                    *(longlong *)(lVar11 + 0xca8) = lVar12;
                    *(uint *)(lVar11 + 0xcb0) = param_2;
                    *(longlong *)(lVar11 + 0xcc8) = lVar12;
                    *(uint *)(lVar11 + 0xcd0) = param_2;
                    *(longlong *)(lVar11 + 0xce8) = lVar12;
                    *(uint *)(lVar11 + 0xcf0) = param_2;
                    goto LAB_1801fc994;
                  }
                  auVar16 = FUN_1801febb8(lVar12,uVar15,*(undefined8 *)(lVar11 + 0xe98));
                  *(undefined8 *)(lVar11 + 0xe98) = 0;
                }
                auVar16 = FUN_1801fe898(auVar16._0_8_,auVar16._8_8_,2,lVar11 + 0xe70,lVar11 + 0xe80)
                ;
              }
              FUN_1801fe6b0(auVar16._0_8_,auVar16._8_8_,0x2b,lVar11 + 0xd18);
            }
          }
          else {
            local_1d8 = (undefined8 *)(lVar11 + 0xcf8);
            uVar6 = *(undefined8 *)(lVar12 + 0x298);
            bVar3 = true;
            local_1f0 = pcVar13;
            uVar15 = 0;
            *(undefined8 *)(lVar11 + 0xd00) = 0;
            *local_1d8 = 0;
            *(undefined8 *)(lVar11 + 0xd10) = 0;
            *(undefined8 *)(lVar11 + 0xd08) = 0;
            local_1e8 = param_2;
            local_1d0 = lVar12;
            local_1c8 = lVar8;
            do {
              if (!bVar3) {
                uVar15 = (ulonglong)local_1e8;
                lVar12 = local_1d0;
                pcVar13 = local_1f0;
                lVar8 = local_1c8;
                goto LAB_1801fcac0;
              }
              uVar5 = FUN_180222950(uVar6,(&DAT_18024c670)[uVar15],u_RT_CUSTOM_1802381f0);
              lVar8 = FUN_1802227d0(uVar6,(&DAT_18024c670)[uVar15],u_RT_CUSTOM_1802381f0);
              if (lVar8 == 0) {
LAB_1801fc7c8:
                bVar3 = false;
              }
              else {
                uVar9 = (*local_1f0)();
                iVar4 = (*extraout_x11_08)(uVar9,lVar8,uVar5,0,local_1d8 + uVar15);
                if (iVar4 < 0) goto LAB_1801fc7c8;
              }
              FUN_1802229d8(lVar8);
              uVar10 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar10;
            } while (uVar10 < 4);
            uVar15 = (ulonglong)local_1e8;
            lVar12 = local_1d0;
            pcVar13 = local_1f0;
            lVar8 = local_1c8;
            if (bVar3) goto LAB_1801fc7f0;
          }
LAB_1801fcac0:
          FUN_1801fe9f8();
          (*pcVar13)(0x180224000);
          (*extraout_x11_13)();
        }
        FUN_1802002e0(lVar12,uVar15);
      }
      else {
LAB_1801fc994:
        uVar10 = 2;
        lVar1 = local_1b8 + (ulonglong)local_1c0;
        local_1e8 = param_2;
        do {
          uVar6 = (*pcVar13)();
          iVar4 = (*extraout_x11_11)(uVar6,0x1c,uVar10,&local_1f0);
          if ((iVar4 == 0) && ((int)local_1f0 != 0)) {
            uVar6 = (*pcVar13)();
            iVar4 = (*extraout_x11_12)(uVar6,0x39,uVar10,&local_1f0);
            if ((iVar4 == 0) && ((int)local_1f0 != 0)) {
              *(char *)(lVar1 + (ulonglong)*(uint *)(lVar8 + 0x434) * 0x10 + 0x334) = (char)uVar10;
              *(int *)(lVar8 + 0x434) = *(int *)(lVar8 + 0x434) + 1;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x21);
        FUN_1802003a0(*(undefined8 *)(local_1b8 + 0x480),local_1e8);
      }
    }
  }
  uVar7 = (ulonglong)*(uint *)(lVar8 + 0x434);
LAB_1801fca58:
  return uVar7 & 0xffffffff;
}

