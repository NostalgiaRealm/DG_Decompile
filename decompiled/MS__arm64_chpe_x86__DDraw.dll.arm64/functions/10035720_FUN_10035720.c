/*
 * FUN_10035720 at 10035720
 * undefined FUN_10035720(void)
 * Address ranges: 10035720-10035c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035720(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined4 local_140;
  undefined1 auStack_138 [4];
  undefined4 local_134;
  undefined4 uStack_130;
  int local_12c;
  int local_128;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint local_108;
  int iStack_104;
  undefined4 local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [4];
  uint local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int local_dc;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [4];
  int local_9c;
  int iStack_98;
  undefined1 auStack_88 [12];
  int local_7c;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  iVar9 = FUN_10038010(param_1 + -0x10,0);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar9 != 0) {
    auVar18 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar9 = (*extraout_w11)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff,0,0,4,2,2,0,0);
    if (iVar9 != 0) {
      uVar13 = FUN_10039430(param_1 + -0x10);
      if ((uVar13 & 1) == 0) {
        if (param_2 == 0) {
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 1;
          uStack_58 = 0;
          local_50 = 0;
          (*pcVar7)();
          (*extraout_w11_01)(iVar9,&local_70);
        }
        else {
          bVar6 = false;
          bVar2 = false;
          iVar10 = (*(code *)PTR_FUN_100ba208)(param_2,auStack_138);
          if (iVar10 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = local_12c;
            if (local_128 != 0) {
              iVar10 = local_128;
            }
            (*(code *)PTR_FUN_100ba034)(iVar10,0x18,auStack_a0);
            iVar17 = iStack_98;
            if (local_128 == 0) {
              iVar17 = iStack_98 >> 1;
            }
            iStack_d4 = local_9c << 1;
            local_c4 = 0;
            local_bc = 0;
            local_d8 = 0x28;
            local_d0 = -iVar17;
            local_cc = 0x200001;
            local_b4 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_120 = 0;
            iVar10 = (*(code *)PTR_FUN_100ba010)(0,&local_d8,0,&local_120,0,0);
            bVar2 = bVar6;
            if (((iVar10 != 0) &&
                (iVar11 = (*(code *)PTR_FUN_100ba034)(iVar10,0x18,auStack_88), iVar11 != 0)) &&
               (iVar11 = (*(code *)PTR_FUN_100ba008)(0), iVar11 != 0)) {
              local_11c = (*(code *)PTR_FUN_100ba058)(iVar11,iVar10);
              iVar10 = (*(code *)PTR_FUN_100ba008)(0);
              if (iVar10 != 0) {
                bVar2 = local_128 == 0;
                if (bVar2) {
                  local_140 = (*(code *)PTR_FUN_100ba058)(iVar10,local_12c);
                  (*(code *)__hybrid_CompilerIAT)
                            (iVar11,0,0,local_9c,iVar17,iVar10,0,iVar17,0xcc0020);
                }
                else {
                  local_140 = (*(code *)PTR_FUN_100ba058)(iVar10,local_128);
                  (*(code *)__hybrid_CompilerIAT)(iVar11,0,0,local_9c,iVar17,iVar10,0,0,0xcc0020);
                }
                (*(code *)PTR_FUN_100ba058)(iVar10,local_140);
                uVar12 = (*(code *)PTR_FUN_100ba058)(iVar10,local_12c);
                (*(code *)__hybrid_CompilerIAT)
                          (iVar11,local_9c,0,local_9c,iVar17,iVar10,0,0,0xcc0020);
                (*(code *)PTR_FUN_100ba058)(iVar10,uVar12);
                if (!bVar2) {
                  iVar15 = 0;
                  iVar14 = local_74 + local_9c * 4;
                  if (0 < iVar17) {
                    do {
                      iVar16 = 0;
                      if (0 < local_9c) {
                        do {
                          if (*(int *)(iVar14 + iVar16 * 4) == 0) {
                            *(undefined1 *)(local_74 + iVar16 * 4 + 3) = 0xff;
                          }
                          iVar16 = iVar16 + 1;
                        } while (iVar16 < local_9c);
                      }
                      iVar15 = iVar15 + 1;
                      iVar14 = local_7c + iVar14;
                      local_74 = local_7c + local_74;
                    } while (iVar15 < iVar17);
                  }
                }
                (*(code *)PTR_FUN_100ba01c)(iVar10);
              }
              iVar10 = (*(code *)PTR_FUN_100ba058)(iVar11,local_11c);
              (*(code *)PTR_FUN_100ba01c)(iVar11);
            }
            (*(code *)PTR_FUN_100ba020)(local_128);
            (*(code *)PTR_FUN_100ba020)(local_12c);
          }
          if (iVar10 != 0) {
            (*(code *)PTR_FUN_100ba034)(iVar10,0x18,auStack_f0);
            if (bVar2) {
              iStack_fc = local_dc + ((int)(local_ec * 4 + ((local_ec & 0x3fffffff) >> 0x1d)) >> 1);
            }
            else {
              iStack_fc = 0;
            }
            iVar17 = *(int *)(param_1 + 0x10c) * 0x228;
            uVar3 = *(uint *)(&DAT_100be2cc + *(int *)(param_1 + 0x10c) * 0x45);
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              uVar8 = SoftwareBreakpoint(0xf004,0x10035b34);
              (*(code *)uVar8)();
            }
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = *(uint *)(&DAT_100be2e8 + iVar17) / uVar3;
            }
            uVar3 = *(uint *)((int)&DAT_100be2cc + iVar17 + 4);
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              uVar8 = SoftwareBreakpoint(0xf004,0x10035b50);
              (*(code *)uVar8)();
            }
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = *(uint *)(&DAT_100be2ec + iVar17) / uVar3;
            }
            uVar3 = uVar4 * *(int *)(&DAT_100be2f8 + iVar17);
            if (uVar5 * *(int *)(&DAT_100be2fc + iVar17) <= uVar4 * *(int *)(&DAT_100be2f8 + iVar17)
               ) {
              uVar3 = uVar5 * *(int *)(&DAT_100be2fc + iVar17);
            }
            local_108 = *(uint *)(DAT_100be0c0 + 0x80e);
            if (*(uint *)(DAT_100be0c0 + 0x80e) == 0) {
              local_108 = uVar3;
            }
            local_118 = (int)local_ec / 2;
            uStack_114 = local_e8;
            local_100 = uStack_e4;
            local_110 = local_134;
            uStack_10c = uStack_130;
            if (0x10 < local_108) {
              local_108 = 0x10;
            }
            if (!bVar2) {
              uStack_e4 = 0;
            }
            iStack_104 = local_dc;
            local_f8 = uStack_e4;
            (*pcVar7)();
            (*extraout_w11_00)(iVar9,&local_118);
            (*(code *)PTR_FUN_100ba020)(iVar10);
          }
        }
        if (*(int *)(param_1 + 0xe4) != 0) {
          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 200);
          *puVar1 = *puVar1 | 0x40;
        }
      }
      (*pcVar7)();
      (*extraout_w11_02)(iVar9);
    }
  }
  return;
}

