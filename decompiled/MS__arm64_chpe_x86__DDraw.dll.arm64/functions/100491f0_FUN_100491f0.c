/*
 * FUN_100491f0 at 100491f0
 * undefined FUN_100491f0(void)
 * Address ranges: 100491f0-10049993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_100491f0(int param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8,char param_9,undefined4 param_10,char param_11,
            undefined4 param_12,undefined1 *param_13)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar18;
  int iVar19;
  int iVar21;
  int iVar22;
  undefined1 auVar20 [16];
  int iVar23;
  byte bVar24;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  uint local_110;
  int *local_10c;
  int *piStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  
  uStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_104 = param_6;
  local_100 = param_8;
  uVar8 = FUN_10046fc0(param_1,param_5,param_6);
  iVar18 = 0;
  piVar1 = (int *)(param_1 + 4);
  if ((uVar8 & 1) == 0) {
    FUN_100470a0(param_1,param_4,param_2,*(undefined4 *)(*piVar1 + 0x50),param_3,param_5,param_6,
                 &local_f0);
    iVar18 = *(int *)(*(int *)(param_3 + 4) + 0x50);
  }
  if (param_13 != (undefined1 *)0x0) {
    *param_13 = 0;
  }
  uVar11 = 1;
  if ((iVar18 == 0) && (uVar9 = 0x80004005, (uVar8 & 1) == 0)) goto LAB_10049968;
  FUN_10047270(param_1,param_3,param_1);
  iVar2 = *piVar1;
  uVar3 = *(uint *)(param_1 + 0x19c);
  local_110 = *(uint *)(param_1 + 0x1bc);
  piStack_108 = (int *)(param_1 + 0x158);
  local_10c = (int *)(param_1 + 0x15c);
  if (((uint)(*piStack_108 * *local_10c) < 0x9001) ||
     (uVar12 = FUN_1004d790(param_1 + 0x150), (uVar12 & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(iVar2 + 0x34) & 1) == 0) {
    puVar16 = (undefined4 *)(iVar2 + 0x70);
    puVar17 = (undefined4 *)(iVar2 + 0x6c);
    uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar7 = (*extraout_w11)(uVar9,*puVar17,*puVar16);
    if ((cVar7 == '\0') && (bVar4)) goto LAB_10049398;
    bVar4 = false;
  }
  else {
LAB_10049398:
    bVar4 = true;
  }
  if ((((*(int *)(iVar2 + 0x30) == 0) && ((local_110 & 0x14) == 0)) || (!bVar4)) ||
     (*(char *)(*piVar1 + 0x48) != '\0')) {
    bVar4 = false;
LAB_10049458:
    bVar5 = false;
  }
  else {
    bVar4 = true;
    if ((param_3 == 0) || (uStack_e8._4_4_ == 3)) goto LAB_10049458;
    puVar16 = (undefined4 *)(*(int *)(param_3 + 4) + 0x70);
    puVar17 = (undefined4 *)(*(int *)(param_3 + 4) + 0x6c);
    uVar9 = (*pcVar6)();
    cVar7 = (*extraout_w11_00)(uVar9,*puVar17,*puVar16);
    if ((cVar7 != '\0') ||
       ((*(int *)(iVar2 + 0x20) == 0 && ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0))))
    goto LAB_10049458;
    bVar5 = true;
  }
  local_a0 = 0;
  local_98 = *local_10c;
  iStack_94 = *piStack_108;
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_10047010(param_1,param_5,local_104);
  }
  if (((param_11 == '\0') && (*(int *)(param_1 + 0x104) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x104) + 0x4c) != 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x104);
  }
  FUN_10046b60(auStack_90,param_4,param_2,uVar9,&local_a0,param_7,local_100,local_f0._4_1_,
               local_f0._5_1_);
  do {
    uVar12 = FUN_10046d60(auStack_90,&local_130);
    uVar9 = 0x80004005;
    if ((uVar12 & 1) == 0) break;
    if ((uVar3 >> 2 & 1) == 0) {
      iVar2 = *piVar1;
      if ((uVar8 & 1) == 0) {
        if (bVar5) {
          if ((*(uint *)(iVar2 + 200) >> 4 & 1) == 0) {
            uVar9 = (*pcVar6)();
            (*extraout_w11_03)(uVar9,0);
            *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) | 0x10;
          }
          uVar11 = FUN_10048de0(param_1,param_3,&local_130,(int)local_120,(int)fStack_11c,&local_f0)
          ;
          goto LAB_1004966c;
        }
        auVar20._0_4_ = (int)fStack_114;
        auVar20._4_4_ = (int)local_118;
        auVar20._8_4_ = (int)fStack_11c;
        auVar20._12_4_ = (int)local_120;
        auVar20 = NEON_scvtf(auVar20,4);
        iVar19 = -(uint)(fStack_114 == auVar20._0_4_);
        iVar21 = -(uint)(local_118 == auVar20._4_4_);
        iVar22 = -(uint)(fStack_11c == auVar20._8_4_);
        iVar23 = -(uint)(local_120 == auVar20._12_4_);
        bVar24 = (byte)((ulonglong)_DAT_100b3d20 >> 0x20);
        if (((CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((ulonglong)uRam100b3d28 >> 0x38) |
                       (byte)((uint)iVar21 >> 0x18) & (byte)((ulonglong)_DAT_100b3d20 >> 0x38),
                       CONCAT12((byte)((uint)iVar23 >> 0x10) &
                                (byte)((ulonglong)uRam100b3d28 >> 0x30) |
                                (byte)((uint)iVar21 >> 0x10) &
                                (byte)((ulonglong)_DAT_100b3d20 >> 0x30),
                                CONCAT11((byte)((uint)iVar23 >> 8) &
                                         (byte)((ulonglong)uRam100b3d28 >> 0x28) |
                                         (byte)((uint)iVar21 >> 8) &
                                         (byte)((ulonglong)_DAT_100b3d20 >> 0x28),
                                         (byte)iVar23 & (byte)((ulonglong)uRam100b3d28 >> 0x20) |
                                         (byte)iVar21 & bVar24))) |
             CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((ulonglong)uRam100b3d28 >> 0x18) |
                      (byte)((uint)iVar19 >> 0x18) & (byte)((ulonglong)_DAT_100b3d20 >> 0x18),
                      CONCAT12((byte)((uint)iVar22 >> 0x10) &
                               (byte)((ulonglong)uRam100b3d28 >> 0x10) |
                               (byte)((uint)iVar19 >> 0x10) &
                               (byte)((ulonglong)_DAT_100b3d20 >> 0x10),
                               CONCAT11((byte)((uint)iVar22 >> 8) &
                                        (byte)((ulonglong)uRam100b3d28 >> 8) |
                                        (byte)((uint)iVar19 >> 8) &
                                        (byte)((ulonglong)_DAT_100b3d20 >> 8),
                                        (byte)iVar22 & (byte)uRam100b3d28 |
                                        (byte)iVar19 & (byte)_DAT_100b3d20)))) != 0xf) ||
           (local_a4 = true,
           ((-(local_120 < local_118) & bVar24 | -(fStack_11c < fStack_114) & (byte)_DAT_100b3d20) &
           3) != 3)) {
          local_a4 = false;
        }
        local_b0 = 0;
        local_a8 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        if ((bool)local_a4) {
          (*(code *)PTR_FUN_100ba2b8)
                    (&local_c0,(int)local_120,(int)fStack_11c,(int)local_118,(int)fStack_114);
          uStack_c8 = CONCAT44(iStack_124,iStack_128);
          local_d0 = CONCAT44(iStack_12c,local_130);
        }
        else {
          local_d0 = CONCAT44((float)iStack_12c,(float)local_130);
          uStack_c8 = CONCAT44((float)iStack_124,(float)iStack_128);
          local_c0 = CONCAT44(fStack_11c,local_120);
          local_b8 = CONCAT44(fStack_114,local_118);
        }
        puVar16 = (undefined4 *)(iVar2 + 0x70);
        local_b0 = CONCAT44(*(undefined4 *)(param_3 + 0x1d0),(int)local_f0);
        puVar17 = (undefined4 *)(*piVar1 + 0x50);
        local_a8 = (uint)CONCAT12(local_f0._7_1_,CONCAT11(local_f0._6_1_,(undefined1)uStack_e8));
        puVar14 = (undefined4 *)(*(int *)(param_3 + 4) + 0x70);
        puVar13 = (undefined4 *)(*(int *)(param_3 + 4) + 0x6c);
        uVar9 = (*pcVar6)();
        uVar11 = (*extraout_w11_04)(uVar9,*extraout_w8_00,*puVar16,*puVar13,*puVar14,*puVar17,iVar18
                                    ,&local_d0);
      }
      else {
        if (bVar4) {
          if ((*(uint *)(iVar2 + 200) >> 4 & 1) == 0) {
            uVar9 = (*pcVar6)();
            (*extraout_w11_01)(uVar9,0);
            *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) | 0x10;
          }
          uVar11 = FUN_100480d0(param_1,&local_130,uVar10,&local_f0);
LAB_1004966c:
          uVar11 = uVar11 & 0xff;
          if (param_13 != (undefined1 *)0x0) {
            *param_13 = 0;
          }
          *(undefined1 *)(*piVar1 + 0xae) = 0;
          goto LAB_100498f0;
        }
        puVar16 = (undefined4 *)(iVar2 + 0x50);
        puVar17 = (undefined4 *)(iVar2 + 0x70);
        uVar9 = (*pcVar6)();
        uVar11 = (*extraout_w11_02)(uVar9,*extraout_w8,*puVar17,*puVar16,uVar10);
      }
      uVar11 = uVar11 & 0xff;
      FUN_1004c930(param_1);
      if (param_13 != (undefined1 *)0x0) {
        *param_13 = 1;
      }
    }
    else {
      uVar11 = 0;
      uVar9 = 0x80004001;
      if (((uVar8 & 1) != 0) || (uVar12 = FUN_1004d420(param_1), (uVar12 & 1) == 0)) break;
      uVar12 = FUN_100473d0(param_3);
      if (((uVar12 & 1) != 0) && (uVar12 = FUN_10047360(param_1), (uVar12 & 1) != 0)) {
        uVar11 = 0;
        uVar9 = 0x80070057;
        break;
      }
      if ((param_4[2] - *param_4 != param_2[2] - *param_2) ||
         (uVar15 = 0, param_4[3] - param_4[1] != param_2[3] - param_2[1])) {
        uVar15 = 1;
      }
      uVar11 = FUN_10047810(local_120,fStack_11c,local_118,fStack_114,param_1,&local_130,param_3,
                            &local_f0,uStack_e8._4_4_ == 0,uVar15);
      uVar11 = uVar11 & 0xff;
      if (param_13 != (undefined1 *)0x0) {
        *param_13 = 1;
      }
    }
LAB_100498f0:
    uVar9 = 0x80004005;
  } while (uVar11 != 0);
  if ((int)local_e0 != 0) {
    uVar8 = FUN_1004e9d0(param_1);
    uVar11 = uVar11 & ~uVar8 >> 0x1f;
  }
  if ((int)local_d8 != 0) {
    uVar8 = FUN_1004e9d0(param_3);
    uVar11 = uVar11 & ~uVar8 >> 0x1f;
  }
  piVar1 = (int *)(param_1 + 0x1dc);
  do {
    cVar7 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  if ((uVar11 != 0) && (param_9 != '\0')) {
    FUN_1004fc90(param_1,0);
  }
  FUN_100914d0(local_60);
LAB_10049968:
  uVar10 = 0;
  if (uVar11 == 0) {
    uVar10 = uVar9;
  }
  return uVar10;
}

