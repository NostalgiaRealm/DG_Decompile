/*
 * FUN_1001ce70 at 1001ce70
 * undefined FUN_1001ce70(void)
 * Address ranges: 1001ce70-1001d48b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1001ce70(int param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong extraout_x1;
  undefined4 *puVar19;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  undefined4 *extraout_w8_01;
  undefined4 uVar20;
  uint uVar21;
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
  uint *local_68;
  int *local_64;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  piVar1 = (int *)(param_1 + 4);
  iVar14 = *piVar1;
  if (iVar14 == 0) {
    return '\0';
  }
  uVar17 = FUN_1001e768(param_1);
  local_68 = (uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x40);
  puVar3 = (uint *)(param_1 + 0x44);
  uVar21 = *puVar2;
  uVar13 = (undefined4)uVar17;
  uVar8 = *puVar3;
  puVar4 = (uint *)(param_1 + 0x58);
  uVar7 = *local_68 & 3;
  puVar5 = (uint *)(param_1 + 0x54);
  *puVar5 = uVar21;
  *puVar4 = uVar8;
  uVar18 = uVar17;
  if (uVar7 != 0) {
    uVar18 = FUN_1000e140(*(undefined4 *)(param_1 + 0x18),&local_80);
    if (param_2 != (undefined8 *)0x0) {
      uStack_78 = param_2[1];
      local_80 = *param_2;
    }
    if (local_80._4_4_ == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x1001cf24);
      (*(code *)uVar11)();
    }
    uVar9 = 0;
    if (local_80._4_4_ != 0) {
      uVar9 = (uVar21 * (int)local_80) / local_80._4_4_;
    }
    *puVar5 = uVar9;
    if (uStack_78._4_4_ == 0) {
                    /* WARNING: Does not return */
      uVar11 = SoftwareBreakpoint(0xf004,0x1001cf40);
      (*(code *)uVar11)();
    }
    uVar21 = 0;
    if (uStack_78._4_4_ != 0) {
      uVar21 = (uVar8 * (int)uStack_78) / uStack_78._4_4_;
    }
    *puVar4 = uVar21;
  }
  local_64 = (int *)(param_1 + 0x28);
  piVar6 = (int *)(param_1 + 0x34);
  if ((*local_64 - 0x14U < 6 || *local_64 == 0x20) && (*piVar6 != 1)) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = 0;
  }
  *(undefined4 *)(iVar14 + 0xb4) = uVar20;
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_70 = *piVar1;
  uVar20 = *(undefined4 *)(local_70 + 0x4c);
  iVar14 = *piVar6;
  if (iVar14 == 3) {
    FUN_1001e6a8(param_1);
    iVar14 = (uint)*(ushort *)(*piVar1 + 0xe) * *(int *)(*piVar1 + 0x10);
    iVar16 = FUN_101321c0(iVar14 + 0x24);
    uVar21 = iVar16 + 0x23U & 0xffffffe0;
    *(int *)(uVar21 - 4) = iVar16;
    *(uint *)(param_1 + 0x24) = uVar21;
    FUN_101325d0(uVar21,0,iVar14);
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
      if (uVar7 == 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar15 = (*extraout_w11_01)(uVar20,*puVar2,*puVar3,*extraout_w8,1,uVar17 & 0xffffffff,uVar15
                                   );
        *(undefined4 *)(*piVar1 + 0x50) = uVar15;
      }
      else {
        local_6c = (int *)(param_1 + 0x38);
        local_9c = FUN_10004ca8(uVar18,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0xdf0),
                                *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xdc8),*local_6c,
                                *(undefined4 *)(param_1 + 0x3c));
        if (((*(char *)(DAT_10170ad0 + 0x958) == '\0') &&
            (uVar18 = FUN_1003b850(*puVar2), (uVar18 & 1) != 0)) &&
           (uVar18 = FUN_1003b850(*puVar3), (uVar18 & 1) != 0)) {
          uVar21 = 0;
        }
        else {
          uVar21 = 1;
        }
        *(uint *)(local_70 + 0xb8) = *(uint *)(local_70 + 0xb8) & 0xfffffffe | uVar21;
        if ((*(uint *)(*piVar1 + 0xb8) & 1) == 0) {
          *puVar5 = *puVar2;
          *puVar4 = *puVar3;
          local_9c = *local_6c;
          if (local_9c == 0) {
            local_9c = 1;
          }
        }
        puVar19 = (undefined4 *)(param_1 + 0x50);
        (*pcVar10)();
        iVar14 = (*extraout_w11)(uVar20,*puVar5,*puVar4,*puVar2,*puVar3,local_9c,*puVar19,1,uVar13);
        *(int *)(*piVar1 + 0x50) = iVar14;
        if ((iVar14 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
          uVar15 = (*pcVar10)();
          (*extraout_w11_00)(uVar15);
        }
      }
    }
    if (*(int *)(*piVar1 + 0x50) == 0) goto LAB_1001d444;
    FUN_1001e6a8(param_1);
    iVar14 = *piVar1;
    cVar12 = '\x01';
    if (((*(uint *)(iVar14 + 0xb8) >> 10 & 1) != 0) && (*piVar6 != 1)) {
      if ((*piVar6 == 0) && (*(int *)(*(int *)(param_1 + 0x18) + 0xdc8) == 1)) {
        uVar18 = FUN_1003efb0(iVar14);
        if ((uVar18 & 1) != 0) goto LAB_1001d214;
        iVar14 = *piVar1;
      }
      cVar12 = FUN_10040d80(iVar14);
    }
LAB_1001d214:
    if (((((*local_68 >> 10 & 1) == 0) || (*(int *)(param_1 + 0x48) == 0)) &&
        (*(int *)(*piVar1 + 0x18) == 0)) && (*local_64 != 0x51)) {
      puVar19 = (undefined4 *)(*piVar1 + 0x50);
      (*pcVar10)();
      (*extraout_w11_02)(0,0,uVar20,extraout_x1 & 0xffffffff,*extraout_w8_00,*puVar19,0);
    }
    iVar14 = *piVar1;
    if (*(char *)(iVar14 + 0x48) != '\0') {
      *(undefined8 *)(iVar14 + 0x38) = 0x300000102;
      *(undefined8 *)(iVar14 + 0x40) = 0x400000102;
    }
  }
  if (cVar12 != '\0') {
    local_48 = (uint)local_48._3_1_ << 0x18;
    local_50 = *(int *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)puVar2;
    if (local_50 == 0) {
      local_50 = 1;
    }
    local_48._0_2_ = CONCAT11((*(int *)(param_1 + 0x50) - 0x24U & 0xfffffffa) == 0,uVar7 != 0);
    iVar14 = *piVar1;
    *(undefined8 *)(iVar14 + 0x6c) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(iVar14 + 100) = uVar11;
    *(ulonglong *)(iVar14 + 0x74) = CONCAT44(uVar13,local_50);
    *(int *)(iVar14 + 0x7c) = local_48;
    uStack_4c = uVar13;
    (*pcVar10)();
    (*extraout_w11_03)(uVar20,&local_80,*extraout_w8_01);
    iVar14 = *piVar1;
    *(uint *)(iVar14 + 0x80) = (uint)*(byte *)(iVar14 + 0x1e) << 3;
    *(int *)(iVar14 + 0x84) = (int)local_80;
    *(uint *)(iVar14 + 0x88) = local_80._4_4_;
    *(int *)(iVar14 + 0x8c) = (int)uStack_78;
  }
LAB_1001d444:
  if (cVar12 != '\0') {
    *(int *)(*piVar1 + 0xbc) = *(int *)(*piVar1 + 0xbc) + 1;
  }
  return cVar12;
}

