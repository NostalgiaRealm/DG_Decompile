/*
 * FUN_100aab08 at 100aab08
 * undefined FUN_100aab08(void)
 * Address ranges: 100aab08-100aac67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aab08(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_50 = 0;
  *(undefined8 *)(*param_1 + param_2 * 0x40) = param_3;
  uVar6 = *param_4;
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  iVar1 = *param_1 + param_2 * 0x40;
  *(undefined8 *)(iVar1 + 0x10) = param_4[1];
  *(undefined8 *)(iVar1 + 8) = uVar6;
  *(undefined8 *)(iVar1 + 0x20) = uVar5;
  *(undefined8 *)(iVar1 + 0x18) = uVar4;
  *(undefined8 *)(iVar1 + 0x28) = param_4[4];
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 5);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,param_4,0,&local_50);
  if (((int)local_50 != 0) && ((*(uint *)(param_4 + 4) >> 3 & 1) != 0)) {
    local_48 = *(undefined4 *)(param_4 + 2);
    local_44 = 5;
    local_3c = 0xffffffff;
    local_34 = 1;
    auVar7 = (*pcVar2)();
    (*extraout_w11_00)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,&local_48,
                       (int)&local_50 + 4);
    if (local_50._4_4_ == 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11_01)(uVar3);
      local_50 = local_50 & 0xffffffff00000000;
    }
  }
  *(ulonglong *)(*param_1 + param_2 * 0x40 + 0x34) = local_50;
  return;
}

