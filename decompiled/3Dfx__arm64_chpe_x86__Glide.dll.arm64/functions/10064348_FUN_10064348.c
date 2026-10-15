/*
 * FUN_10064348 at 10064348
 * undefined FUN_10064348(void)
 * Address ranges: 10064348-1006454b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10064348(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  int local_90 [6];
  undefined1 auStack_78 [56];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,local_90,auStack_a0);
  if (-1 < iVar3) {
    (*pcVar1)();
    iVar3 = (*extraout_w11_00)(param_2,auStack_78);
    if ((local_90[0] == 4) && (1 < *(int *)(iVar3 + 0x20) - 0x2cU)) {
      local_98 = 0;
      (*pcVar1)();
      iVar3 = (*extraout_w11_01)(param_2,param_3,&local_98,0);
      if (-1 < iVar3) {
        bVar2 = FUN_10059f58(*(undefined4 *)(param_1 + 0x8e4),param_2);
        if ((bVar2 & 1) != 0) {
          (*pcVar1)();
          (*extraout_w11_02)(param_2,param_3,param_5,param_6,param_7,param_8);
        }
        (*pcVar1)();
        (*extraout_w11_03)(param_2,param_3,0);
        if ((bVar2 & 1) != 0) {
          return bVar2;
        }
      }
      bVar2 = FUN_10063eb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      bVar2 = FUN_10063eb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  return bVar2;
}

