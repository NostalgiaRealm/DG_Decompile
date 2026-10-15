/*
 * FUN_100418a8 at 100418a8
 * undefined FUN_100418a8(void)
 * Address ranges: 100418a8-10041947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100418a8(int param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  uint local_20 [4];
  undefined8 local_10;
  
  if (param_4 != 0) {
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[0] = param_3 & 0xfffffffc;
    local_20[3] = ((param_3 & 3) + param_4 + 3 & 0xfffffffc) + local_20[0];
    local_10 = 0x100000001;
    puVar1 = (undefined4 *)(param_1 + 0x31ac);
    auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar2._0_8_ & 0xffffffff,*puVar1,0,local_20,auVar2._8_8_ & 0xffffffff,0,0);
  }
  return;
}

