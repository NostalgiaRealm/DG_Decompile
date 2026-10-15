/*
 * FUN_10073568 at 10073568
 * undefined FUN_10073568(void)
 * Address ranges: 10073568-1007375f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10073568(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auStack_a4 [4];
  undefined8 local_a0;
  int local_98 [6];
  undefined1 auStack_80 [64];
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar2 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar3 = (*extraout_w11)(param_2,local_98,auStack_a4);
  if (-1 < iVar3) {
    (*pcVar1)();
    iVar3 = (*extraout_w11_00)(param_2,auStack_80);
    if ((local_98[0] == 4) && (1 < *(int *)(iVar3 + 0x20) - 0x2cU)) {
      local_a0 = 0;
      (*pcVar1)();
      iVar3 = (*extraout_w11_01)(param_2,param_3,&local_a0,0);
      if (-1 < iVar3) {
        bVar2 = FUN_100785b8(*(undefined4 *)(param_1 + 0x8e4),param_2);
        if ((bVar2 & 1) != 0) {
          (*pcVar1)();
          (*extraout_w11_02)(param_2,param_3,param_5,param_6,param_7,0);
        }
        (*pcVar1)();
        (*extraout_w11_03)(param_2,param_3,0);
        if ((bVar2 & 1) != 0) {
          return bVar2;
        }
      }
      bVar2 = FUN_10073108(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      bVar2 = FUN_10073108(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return bVar2;
}

