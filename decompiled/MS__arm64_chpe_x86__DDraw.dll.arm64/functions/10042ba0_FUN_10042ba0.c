/*
 * FUN_10042ba0 at 10042ba0
 * undefined FUN_10042ba0(void)
 * Address ranges: 10042ba0-10042bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10042ba0(void)

{
  undefined4 uVar1;
  code *extraout_w11;
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,&DAT_100b1a30,local_10,0);
  return local_10[0];
}

