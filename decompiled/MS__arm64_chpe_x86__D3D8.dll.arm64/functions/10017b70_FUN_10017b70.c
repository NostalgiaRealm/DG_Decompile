/*
 * FUN_10017b70 at 10017b70
 * undefined FUN_10017b70(void)
 * Address ranges: 10017b70-10018113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10017b70(int param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong extraout_x1;
  undefined4 *puVar18;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  undefined4 *extraout_w8_02;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int local_9c;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  piVar1 = (int *)(param_1 + 4);
  iVar14 = *piVar1;
  if (iVar14 == 0) {
    return '\0';
  }
  uVar13 = FUN_10019410(param_1);
  puVar2 = (uint *)(param_1 + 0x40);
  uVar19 = *puVar2;
  puVar3 = (uint *)(param_1 + 0x44);
  uVar7 = *puVar3;
  uVar6 = *(uint *)(param_1 + 0x30) & 3;
  puVar4 = (uint *)(param_1 + 0x54);
  *puVar4 = uVar19;
  puVar5 = (uint *)(param_1 + 0x58);
  *puVar5 = uVar7;
  if (uVar6 != 0) {
    FUN_1000ce50(*(undefined4 *)(param_1 + 0x18),&local_80);
    if (param_2 != (undefined8 *)0x0) {
      uStack_78 = param_2[1];
      local_80 = *param_2;
    }
    if (local_80._4_4_ == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x10017c20);
      (*(code *)uVar11)();
    }
    uVar9 = 0;
    if (local_80._4_4_ != 0) {
      uVar9 = (uVar19 * (int)local_80) / local_80._4_4_;
    }
    *puVar4 = uVar9;
    if (uStack_78._4_4_ == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x10017c3c);
      (*(code *)uVar11)();
    }
    uVar19 = 0;
    if (uStack_78._4_4_ != 0) {
      uVar19 = (uVar7 * (int)uStack_78) / uStack_78._4_4_;
    }
    *puVar5 = uVar19;
  }
  *(undefined4 *)(iVar14 + 0xb4) = 0;
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_70 = *piVar1;
  uVar8 = *(undefined4 *)(local_70 + 0x4c);
  local_68 = (int *)(param_1 + 0x34);
  iVar14 = *local_68;
  if (iVar14 == 3) {
    FUN_100192f8(param_1);
    iVar14 = (uint)*(ushort *)(*piVar1 + 0xe) * *(int *)(*piVar1 + 0x10);
    iVar16 = FUN_100febf0(iVar14 + 0x24);
    uVar19 = iVar16 + 0x23U & 0xffffffe0;
    *(int *)(uVar19 - 4) = iVar16;
    *(uint *)(param_1 + 0x24) = uVar19;
    FUN_100ff690(uVar19,0,iVar14);
    cVar12 = *(uint *)(param_1 + 0x24) != 0;
  }
  else {
    cVar12 = '\0';
    if (*(int *)(local_70 + 0x50) == 0) {
      if (iVar14 == 1) {
        uVar15 = 2;
      }
      else {
        uVar15 = 0;
        if (iVar14 == 2) {
          uVar15 = 1;
        }
      }
      if (uVar6 == 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar15 = (*extraout_w11_01)(uVar8,*puVar2,*puVar3,*extraout_w8_00,1,uVar13,uVar15);
        *(undefined4 *)(*piVar1 + 0x50) = uVar15;
      }
      else {
        local_6c = (int *)(param_1 + 0x3c);
        local_9c = *local_6c;
        if (local_9c == 0) {
          local_9c = 1;
        }
        if (*(int *)(DAT_1013ceec + 2000) != 0) {
          local_9c = *(int *)(DAT_1013ceec + 2000);
        }
        if (((*(char *)(DAT_1013ceec + 0x958) == '\0') &&
            (uVar17 = FUN_10031980(*puVar2), (uVar17 & 1) != 0)) &&
           (uVar17 = FUN_10031980(*puVar3), (uVar17 & 1) != 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = 1;
        }
        *(uint *)(local_70 + 0xb8) = *(uint *)(local_70 + 0xb8) & 0xfffffffe | uVar19;
        if ((*(uint *)(*piVar1 + 0xb8) & 1) == 0) {
          *puVar4 = *puVar2;
          *puVar5 = *puVar3;
          local_9c = *local_6c;
          if (local_9c == 0) {
            local_9c = 1;
          }
        }
        (*pcVar10)();
        iVar14 = (*extraout_w11)(uVar8,*puVar4,*puVar5,*puVar2,*puVar3,local_9c,*extraout_w8,1,
                                 uVar13);
        *(int *)(*piVar1 + 0x50) = iVar14;
        if ((iVar14 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
          uVar15 = (*pcVar10)();
          (*extraout_w11_00)(uVar15);
        }
      }
    }
    if (*(int *)(*piVar1 + 0x50) == 0) goto LAB_100180cc;
    FUN_100192f8(param_1);
    iVar14 = *piVar1;
    cVar12 = '\x01';
    if (((*(uint *)(iVar14 + 0xb8) >> 10 & 1) != 0) && (*local_68 != 1)) {
      if ((*local_68 == 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0xb04) == 1)) {
        uVar17 = FUN_10035170(iVar14);
        if ((uVar17 & 1) != 0) goto LAB_10017ec8;
        iVar14 = *piVar1;
      }
      cVar12 = FUN_10036e80(iVar14);
    }
LAB_10017ec8:
    if (*(int *)(*piVar1 + 0x18) == 0) {
      puVar18 = (undefined4 *)(*piVar1 + 0x50);
      (*pcVar10)();
      (*extraout_w11_02)(0,0,uVar8,extraout_x1 & 0xffffffff,*extraout_w8_01,*puVar18,0);
    }
    iVar14 = *piVar1;
    if (*(char *)(iVar14 + 0x48) != '\0') {
      *(undefined8 *)(iVar14 + 0x38) = 0x300000102;
      *(undefined8 *)(iVar14 + 0x40) = 0x400000102;
    }
  }
  if (cVar12 != '\0') {
    local_48 = (uint)local_48._3_1_ << 0x18;
    local_50 = *(int *)(param_1 + 0x3c);
    uVar11 = *(undefined8 *)puVar2;
    if (local_50 == 0) {
      local_50 = 1;
    }
    local_48._0_2_ = CONCAT11(*(int *)(param_1 + 0x50) - 0x19U < 2,uVar6 != 0);
    iVar14 = *(int *)(param_1 + 4);
    *(undefined8 *)(iVar14 + 0x6c) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(iVar14 + 100) = uVar11;
    *(ulonglong *)(iVar14 + 0x74) = CONCAT44(uVar13,local_50);
    *(int *)(iVar14 + 0x7c) = local_48;
    uStack_4c = uVar13;
    (*pcVar10)();
    (*extraout_w11_03)(uVar8,&local_80,*extraout_w8_02);
    iVar14 = *piVar1;
    *(uint *)(iVar14 + 0x80) = (uint)*(byte *)(iVar14 + 0x1e) << 3;
    *(int *)(iVar14 + 0x84) = (int)local_80;
    *(uint *)(iVar14 + 0x88) = local_80._4_4_;
    *(int *)(iVar14 + 0x8c) = (int)uStack_78;
  }
LAB_100180cc:
  if (cVar12 != '\0') {
    *(int *)(*piVar1 + 0xbc) = *(int *)(*piVar1 + 0xbc) + 1;
  }
  return cVar12;
}

