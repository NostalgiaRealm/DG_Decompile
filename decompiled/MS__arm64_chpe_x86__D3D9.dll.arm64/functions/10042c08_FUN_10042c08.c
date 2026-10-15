/*
 * FUN_10042c08 at 10042c08
 * undefined FUN_10042c08(void)
 * Address ranges: 10042c08-10042c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10042c08(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  undefined4 local_20 [2];
  uint local_18 [6];
  
  local_20[0] = 0;
  local_18[0] = param_2 + 0xfU & 0xfffffff0;
  local_18[1] = 2;
  local_18[2] = 4;
  local_18[3] = 0x10000;
  local_18[4] = 0;
  local_18[5] = local_18[0];
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1,local_18,0,local_20);
  if (iVar2 < 0) {
    local_20[0] = 0;
  }
  return local_20[0];
}

