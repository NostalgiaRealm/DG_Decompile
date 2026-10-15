/*
 * FUN_10072a48 at 10072a48
 * undefined FUN_10072a48(void)
 * Address ranges: 10072a48-10072bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072a48(undefined8 param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  puVar1 = (uint *)(param_2 + 0x18);
  puVar2 = (uint *)(param_2 + 0x10);
  uVar5 = *puVar1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10072a80);
    (*(code *)uVar8)();
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = *puVar2 / uVar5;
  }
  puVar3 = (uint *)(param_2 + 0x1c);
  *param_3 = uVar7;
  puVar4 = (uint *)(param_2 + 0x14);
  uVar5 = *puVar3;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10072aa0);
    (*(code *)uVar8)();
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = *puVar4 / uVar5;
  }
  param_3[1] = uVar7;
  uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar8 = (*extraout_w11)(uVar9,&local_70);
  FUN_10069b98(uVar8,&local_80,*(undefined4 *)(param_2 + 0x24),*puVar2,*puVar4,*puVar1,*puVar3,
               local_70,uStack_6c);
  uVar7 = local_78 - local_80;
  param_3[2] = uVar7;
  uVar6 = iStack_74 - iStack_7c;
  param_3[3] = uVar6;
  param_3[4] = *(uint *)(&DAT_10097908 + *(int *)(param_2 + 0x2c) * 4);
  uVar5 = *puVar1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar8 = SoftwareBreakpoint(0xf004,0x10072b58);
    (*(code *)uVar8)();
  }
  uVar10 = 0;
  if (uVar5 != 0) {
    uVar10 = *puVar2 / uVar5;
  }
  if (uVar7 <= uVar10) {
    uVar5 = *puVar3;
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10072b74);
      (*(code *)uVar8)();
    }
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = *puVar4 / uVar5;
    }
    if (uVar6 <= uVar11) {
      uVar11 = uVar11 << 1;
      uVar10 = uVar10 << 1;
      goto LAB_10072b9c;
    }
  }
  uVar11 = uVar6 * 2 - 1;
  uVar10 = uVar7 * 2 - 1;
LAB_10072b9c:
  param_3[5] = uVar10;
  param_3[6] = uVar11;
  return;
}

