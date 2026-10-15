/*
 * FUN_100499b0 at 100499b0
 * undefined FUN_100499b0(void)
 * Address ranges: 100499b0-1004a187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_100499b0(int param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,undefined4 param_6
            )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  uint in_stack_fffffe30;
  undefined8 local_180;
  undefined8 uStack_178;
  int *local_170;
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  code *local_158;
  int local_154;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  
  piVar1 = (int *)(param_1 + 0xfc);
  iVar10 = FUN_10038010(*piVar1,1);
  bVar9 = FUN_10046fc0(param_1,param_5,param_6);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (((param_3 != 0) || (uVar12 = 0x80004005, bVar9 != 0)) && (uVar12 = 0, iVar10 != 0)) {
    iVar11 = *(int *)(*piVar1 + 0x11c) * 0x228;
    uStack_e8 = *(undefined8 *)(iVar11 + 0x100be318);
    local_f0 = *(undefined8 *)(&DAT_100be310 + iVar11);
    uStack_178 = *(undefined8 *)(param_2 + 2);
    local_180 = *(undefined8 *)param_2;
    local_170 = piVar1;
    (*(code *)PTR_FUN_100ba244)(&local_180,&local_180,&local_f0);
    iVar11 = (*(code *)PTR_FUN_100ba248)(&local_180);
    if (iVar11 == 0) {
      iVar11 = *param_4;
      iVar21 = *param_2;
      iVar22 = param_2[2] - iVar21;
      if (iVar22 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x10049ad4);
        (*(code *)uVar8)();
      }
      local_d0 = 0;
      if (iVar22 != 0) {
        local_d0 = (((int)local_180 - iVar21) * (param_4[2] - iVar11)) / iVar22;
      }
      local_d0 = local_d0 + iVar11;
      iVar23 = param_4[1];
      iVar24 = param_2[1];
      iVar3 = param_2[3] - iVar24;
      if (iVar3 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x10049b1c);
        (*(code *)uVar8)();
      }
      local_cc = 0;
      if (iVar3 != 0) {
        local_cc = ((local_180._4_4_ - iVar24) * (param_4[3] - iVar23)) / iVar3;
      }
      local_cc = local_cc + iVar23;
      local_c8 = 0;
      if (iVar22 != 0) {
        local_c8 = (((int)uStack_178 - iVar21) * (param_4[2] - iVar11)) / iVar22;
      }
      local_c8 = local_c8 + iVar11;
      local_c4 = 0;
      if (iVar3 != 0) {
        local_c4 = ((uStack_178._4_4_ - iVar24) * (param_4[3] - iVar23)) / iVar3;
      }
      local_c4 = local_c4 + iVar23;
      (*(code *)PTR_FUN_100ba26c)(&local_180,-(int)local_f0,-local_f0._4_4_);
      uVar12 = FUN_100491f0(param_1,&local_180,param_3,&local_d0,param_5,param_6,-(int)local_f0,
                            -local_f0._4_4_,in_stack_fffffe30 & 0xffffff00);
    }
    (*(code *)PTR_FUN_100ba1ec)(iVar10,&local_168);
    (*(code *)PTR_FUN_100ba1ac)(iVar10,&local_168);
    (*(code *)PTR_FUN_100ba1ac)(iVar10,&local_160);
    (*(code *)PTR_FUN_100ba244)(&local_180,&local_168,param_2);
    iVar11 = (*(code *)PTR_FUN_100ba248)(&local_180);
    if (iVar11 == 0) {
      iVar11 = (*(code *)PTR_FUN_100ba1d8)(&local_180,&local_168);
      if (((iVar11 == 0) ||
          ((*(int *)(param_1 + 0x104) != 0 && (*(int *)(*(int *)(param_1 + 0x104) + 0x4c) == 0))))
         || (uVar14 = FUN_10047060(param_1,param_5,param_3), (uVar14 & 1) != 0)) {
        FUN_1004f930(param_1,0,0,0);
      }
      else {
        piVar2 = (int *)(param_1 + 4);
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0;
        iVar11 = *(int *)(*piVar2 + 0x4c);
        iVar21 = *(int *)(*piVar1 + 0x11c);
        auVar26 = FUN_1008e100(iVar11 + 4);
        local_158 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                  (auVar26._0_8_,auVar26._8_8_,local_160 - local_168,iStack_15c - iStack_164,
                   auVar26._0_8_ & 0xffffffff);
        uVar13 = *(undefined4 *)(&DAT_100be2f4 + iVar21 * 0x228);
        iVar11 = (*extraout_w11)(iVar11,iVar10);
        if (iVar11 != 0) {
          if (bVar9 == 0) {
            FUN_100470a0(param_1,param_4,param_2,iVar11,param_3,param_5,param_6,&local_c0,uVar13);
          }
          local_154 = *piVar2;
          FUN_10046b60(auStack_90,param_4,param_2,0,&local_168,0,0,local_c0._4_1_,local_c0._5_1_);
          uVar14 = FUN_10046d60(auStack_90,&local_110);
          pcVar4 = local_158;
          if ((uVar14 & 1) != 0) {
            uVar5 = local_c0._6_1_;
            uVar7 = (undefined1)uStack_b8;
            uVar6 = local_c0._7_1_;
            local_150 = (undefined4)local_c0;
            do {
              (*(code *)PTR_FUN_100ba294)(iVar10,&local_110);
              (*(code *)PTR_FUN_100ba294)(iVar10,&iStack_108);
              fVar17 = (float)local_110;
              fVar18 = (float)iStack_10c;
              fVar19 = (float)iStack_108;
              fVar20 = (float)iStack_104;
              if ((bVar9 & 1) == 0) {
                FUN_10047270(param_1,param_3,param_1);
                auVar26._0_4_ = (int)fStack_f4;
                auVar26._4_4_ = (int)local_f8;
                auVar26._8_4_ = (int)fStack_fc;
                auVar26._12_4_ = (int)local_100;
                auVar26 = NEON_scvtf(auVar26,4);
                iVar21 = -(uint)(fStack_f4 == auVar26._0_4_);
                iVar22 = -(uint)(local_f8 == auVar26._4_4_);
                iVar23 = -(uint)(fStack_fc == auVar26._8_4_);
                iVar24 = -(uint)(local_100 == auVar26._12_4_);
                bVar25 = (byte)((ulonglong)_DAT_100b3d20 >> 0x20);
                if (((CONCAT13((byte)((uint)iVar24 >> 0x18) &
                               (byte)((ulonglong)uRam100b3d28 >> 0x38) |
                               (byte)((uint)iVar22 >> 0x18) &
                               (byte)((ulonglong)_DAT_100b3d20 >> 0x38),
                               CONCAT12((byte)((uint)iVar24 >> 0x10) &
                                        (byte)((ulonglong)uRam100b3d28 >> 0x30) |
                                        (byte)((uint)iVar22 >> 0x10) &
                                        (byte)((ulonglong)_DAT_100b3d20 >> 0x30),
                                        CONCAT11((byte)((uint)iVar24 >> 8) &
                                                 (byte)((ulonglong)uRam100b3d28 >> 0x28) |
                                                 (byte)((uint)iVar22 >> 8) &
                                                 (byte)((ulonglong)_DAT_100b3d20 >> 0x28),
                                                 (byte)iVar24 &
                                                 (byte)((ulonglong)uRam100b3d28 >> 0x20) |
                                                 (byte)iVar22 & bVar25))) |
                     CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((ulonglong)uRam100b3d28 >> 0x18)
                              | (byte)((uint)iVar21 >> 0x18) &
                                (byte)((ulonglong)_DAT_100b3d20 >> 0x18),
                              CONCAT12((byte)((uint)iVar23 >> 0x10) &
                                       (byte)((ulonglong)uRam100b3d28 >> 0x10) |
                                       (byte)((uint)iVar21 >> 0x10) &
                                       (byte)((ulonglong)_DAT_100b3d20 >> 0x10),
                                       CONCAT11((byte)((uint)iVar23 >> 8) &
                                                (byte)((ulonglong)uRam100b3d28 >> 8) |
                                                (byte)((uint)iVar21 >> 8) &
                                                (byte)((ulonglong)_DAT_100b3d20 >> 8),
                                                (byte)iVar23 & (byte)uRam100b3d28 |
                                                (byte)iVar21 & (byte)_DAT_100b3d20)))) != 0xf) ||
                   (local_114 = true,
                   ((-(local_100 < local_f8) & bVar25 |
                    -(fStack_fc < fStack_f4) & (byte)_DAT_100b3d20) & 3) != 3)) {
                  local_114 = false;
                }
                local_120 = 0;
                local_118 = 0;
                uStack_138 = 0;
                local_140 = 0;
                local_128 = 0;
                local_130 = 0;
                if ((bool)local_114) {
                  (*(code *)PTR_FUN_100ba2b8)
                            (&local_130,(int)local_100,(int)fStack_fc,(int)local_f8,(int)fStack_f4);
                  uStack_138 = CONCAT44(iStack_104,iStack_108);
                  local_140 = CONCAT44(iStack_10c,local_110);
                }
                else {
                  local_130 = CONCAT44(fStack_fc,local_100);
                  local_128 = CONCAT44(fStack_f4,local_f8);
                  local_140 = CONCAT44(fVar18,fVar17);
                  uStack_138 = CONCAT44(fVar20,fVar19);
                }
                local_120 = CONCAT44(*(undefined4 *)(param_3 + 0x1d0),local_150);
                local_118 = (uint)CONCAT12(uVar6,CONCAT11(uVar5,uVar7));
                puVar16 = (undefined4 *)(*(int *)(param_3 + 4) + 0x50);
                puVar15 = (undefined4 *)(*(int *)(param_3 + 4) + 0x70);
                uVar13 = (*pcVar4)();
                (*extraout_w11_01)(uVar13,0,0,*extraout_w8_00,*puVar15,iVar11,*puVar16,&local_140);
              }
              else {
                FUN_10047010(param_1,param_5,param_6);
                puVar16 = (undefined4 *)(local_154 + 0x70);
                uVar13 = (*pcVar4)();
                (*extraout_w11_00)(fVar17,fVar18,fVar19,fVar20,uVar13,*extraout_w8,*puVar16,iVar11);
              }
              uVar14 = FUN_10046d60(auStack_90,&local_110);
            } while ((uVar14 & 1) != 0);
          }
          iVar10 = 0;
          if (*piVar2 != 0) {
            iVar10 = *piVar2 + 0x4c;
          }
          FUN_10006960(*local_170 + 0x10,iVar11,iVar10,0,0);
          FUN_100914d0(local_60);
        }
      }
    }
    else {
      (*(code *)PTR_FUN_100ba1ec)(iVar10,&local_e0);
      iVar11 = (*(code *)PTR_FUN_100ba248)(&local_e0);
      piVar1 = local_170;
      if (iVar11 == 0) {
        iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x4c);
        auVar26 = FUN_1008e100(iVar11 + 4);
        pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                  (auVar26._0_8_,auVar26._8_8_,local_d8 - local_e0,iStack_d4 - iStack_dc,
                   auVar26._0_8_ & 0xffffffff);
        iVar10 = (*extraout_w11_02)(iVar11,iVar10);
        if (iVar10 != 0) {
          FUN_100068a0(*piVar1 + 0x10,iVar10);
          (*pcVar4)();
          (*extraout_w11_03)(iVar10);
        }
      }
    }
  }
  return uVar12;
}

