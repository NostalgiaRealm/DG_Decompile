/*
 * FUN_10049780 at 10049780
 * undefined FUN_10049780(void)
 * Address ranges: 10049780-100498d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10049780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
            undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_60 = 0x100000001;
  local_40 = 0;
  cVar1 = param_5;
  if (*(int *)(param_1 + 0x10) == 5) {
    cVar1 = '\0';
  }
  local_58 = 0x35;
  if (cVar1 == '\0') {
    local_58 = 0x2c;
  }
  local_50 = 0;
  uStack_48 = 0x40;
  local_68 = param_2;
  uStack_64 = param_3;
  uStack_54 = param_4;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,&local_68,0,param_6);
  if (-1 < iVar4) {
    local_74 = 0;
    local_70 = 0;
    if (*(int *)(param_1 + 0x10) == 5) {
      param_5 = '\0';
    }
    local_80 = 0x37;
    if (param_5 == '\0') {
      local_80 = 0x2d;
    }
    local_7c = 5;
    uVar3 = (*pcVar2)();
    iVar4 = (*extraout_w11_00)(uVar3,*param_6,&local_80,param_7);
    if (-1 < iVar4) {
      return 1;
    }
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *param_6 = 0;
  }
  return 0;
}

