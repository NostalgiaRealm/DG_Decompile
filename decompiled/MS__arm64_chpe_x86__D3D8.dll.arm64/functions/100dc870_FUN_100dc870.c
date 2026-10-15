/*
 * FUN_100dc870 at 100dc870
 * undefined FUN_100dc870(void)
 * Address ranges: 100dc870-100dcadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dc870(undefined4 param_1,undefined4 *param_2,int param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  int local_e0 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_90;
  int iStack_8c;
  int local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,&local_80);
  local_b8 = local_68;
  uStack_a8 = uStack_78;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  if ((param_2[0xd] == 1) || ((param_2[0xd] - 2 < 2 && (param_2[10] - 1 < 2)))) {
    local_e0[0] = param_3;
    if (param_3 == 0) {
      uVar3 = (*pcVar1)();
      (*extraout_w11_00)(uVar3,local_e0);
    }
    iVar2 = local_e0[0];
    if (local_e0[0] != 0) {
      (*pcVar1)();
      (*extraout_w11_01)(iVar2);
    }
    FUN_100dbff8(param_1,iVar2,&local_90);
    local_c0 = local_70;
    local_b8 = 0;
    local_b0 = CONCAT44(iStack_8c,local_90);
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    if (local_e0[0] != param_3) {
      uVar3 = (*pcVar1)();
      (*extraout_w11_02)(uVar3);
    }
  }
  else {
    local_90 = param_2[4];
    iStack_8c = param_2[5];
    local_d0 = *(undefined8 *)(param_2 + 4);
  }
  if ((local_80 != local_90) || (iStack_7c != iStack_8c || param_4 != '\0')) {
    (*pcVar1)();
    uVar4 = (*extraout_w11_03)(param_1,param_2);
    uVar5 = FUN_100dc570(uVar4,param_2);
    FUN_100dc628(uVar5,param_2,&local_d0,uVar5 & 0xff);
    (*pcVar1)();
    (*extraout_w11_04)(param_1,param_2,0);
    uVar3 = (*pcVar1)();
    (*extraout_w11_05)(uVar3,*param_2,1);
  }
  return;
}

