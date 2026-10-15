/*
 * FUN_10010ea8 at 10010ea8
 * undefined FUN_10010ea8(void)
 * Address ranges: 10010ea8-10010fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10010ea8(int param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong extraout_x11;
  int local_c0 [12];
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined1 auStack_60 [32];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar4 = '\0';
  if (param_2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar6 = (*extraout_w11)(param_2,auStack_90);
    FUN_10010b98(uVar6,auStack_60);
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[6] = 0;
    local_c0[7] = 5;
    local_c0[1] = 4;
    local_c0[2] = 0;
    piVar1 = local_c0;
    if (param_5 == 0) {
      piVar1 = (int *)0x0;
    }
    local_c0[8] = 0;
    puVar2 = auStack_60;
    local_c0[9] = 0;
    local_c0[10] = 0;
    if (param_3 == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    local_c0[3] = 0;
    *(int *)(param_1 + 0xc) = param_2;
    local_c0[0] = param_5;
    cVar4 = FUN_10010838(param_1,puVar2,0,piVar1,local_88,extraout_x11 & 0xffffffff,0);
    if (cVar4 == '\0') {
      *(int *)(param_1 + 0xc) = 0;
    }
    else {
      uVar5 = (*pcVar3)();
      (*extraout_w11_00)(uVar5);
    }
  }
  return cVar4;
}

