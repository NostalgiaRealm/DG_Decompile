/*
 * FUN_100887c8 at 100887c8
 * undefined FUN_100887c8(void)
 * Address ranges: 100887c8-10088923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100887c8(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 uVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  *(undefined8 *)(*param_1 + param_2 * 0x20) = param_3;
  uVar4 = *param_4;
  iVar1 = *param_1 + param_2 * 0x20;
  *(undefined8 *)(iVar1 + 0x10) = param_4[1];
  *(undefined8 *)(iVar1 + 8) = uVar4;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_58 = *(undefined4 *)param_4;
  if (*(int *)((int)param_4 + 4) == 0) {
    local_54 = 0;
  }
  else {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_54 = (*extraout_w11)(uVar3);
  }
  if (*(int *)((int)param_4 + 4) == 0) {
    local_50 = 0;
  }
  else {
    uVar3 = (*pcVar2)();
    local_50 = (*extraout_w11_00)(uVar3);
  }
  local_48 = 0;
  local_4c = *(undefined4 *)(param_4 + 1);
  local_60[0] = 0;
  local_40 = *(undefined4 *)((int)param_4 + 0xc);
  uVar3 = (*pcVar2)();
  (*extraout_w11_01)(uVar3,&local_58,&DAT_100b5db0,local_60);
  *(undefined4 *)(*param_1 + param_2 * 0x20 + 0x18) = local_60[0];
  return;
}

