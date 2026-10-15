/*
 * FUN_10065470 at 10065470
 * undefined FUN_10065470(void)
 * Address ranges: 10065470-10065777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065470(undefined4 param_1,int param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_2 + 0xd70) == 0) goto LAB_1006554c;
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar8,&local_a0);
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x100654ec);
    (*(code *)uVar6)();
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = *(uint *)(param_2 + 0x10) / uVar3;
  }
  if (local_a0 == uVar4) {
    uVar3 = *(uint *)(param_2 + 0x1c);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x10065514);
      (*(code *)uVar6)();
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(uint *)(param_2 + 0x14) / uVar3;
    }
    if (local_9c != uVar4) goto LAB_10065538;
    bVar7 = *(uint *)(param_2 + 0x20) < param_3;
  }
  else {
LAB_10065538:
    bVar7 = true;
    FUN_10065778(param_1,param_2);
  }
  if (!bVar7) {
    return;
  }
LAB_1006554c:
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x10065578);
    (*(code *)uVar6)();
  }
  local_a0 = 0;
  if (uVar3 != 0) {
    local_a0 = *(uint *)(param_2 + 0x10) / uVar3;
  }
  uVar3 = *(uint *)(param_2 + 0x1c);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x10065598);
    (*(code *)uVar6)();
  }
  local_9c = 0;
  if (uVar3 != 0) {
    local_9c = *(uint *)(param_2 + 0x14) / uVar3;
  }
  local_7c = 0;
  local_98 = 0x100000001;
  puVar1 = (uint *)(param_2 + 0x20);
  local_4c = 0;
  local_60 = 0;
  uVar3 = *puVar1;
  local_90 = *(undefined4 *)(&DAT_10097918 + *(int *)(param_2 + 0x2c) * 4);
  local_8c = 1;
  local_84 = 0x2800000000;
  local_70 = *(undefined4 *)(&DAT_10097908 + *(int *)(param_2 + 0x2c) * 4);
  local_54 = 4;
  local_6c = 4;
  local_64 = 0xffffffff;
  local_58 = local_70;
  while( true ) {
    if (param_3 <= uVar3) {
      return;
    }
    uVar8 = (*pcVar5)();
    iVar9 = (*extraout_w11_00)(uVar8,&local_a0,0);
    if (iVar9 < 0) {
      return;
    }
    iVar9 = param_2 + uVar3 * 4;
    puVar2 = (undefined4 *)(iVar9 + 0xd70);
    uVar8 = (*pcVar5)();
    iVar9 = (*extraout_w11_01)(uVar8,*puVar2,&local_58,iVar9 + 0xd78);
    if (iVar9 < 0) break;
    uVar8 = (*pcVar5)();
    iVar9 = (*extraout_w11_02)(uVar8,*puVar2,&local_70);
    if (iVar9 < 0) {
      uVar8 = (*pcVar5)();
      (*extraout_w11_03)(uVar8);
      break;
    }
    uVar3 = uVar3 + 1;
    *puVar1 = *puVar1 + 1;
  }
  uVar8 = (*pcVar5)();
  (*extraout_w11_04)(uVar8);
  return;
}

