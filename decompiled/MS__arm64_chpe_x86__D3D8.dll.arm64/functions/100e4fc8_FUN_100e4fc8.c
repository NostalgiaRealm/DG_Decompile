/*
 * FUN_100e4fc8 at 100e4fc8
 * undefined FUN_100e4fc8(void)
 * Address ranges: 100e4fc8-100e50c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100e4fc8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  FUN_100eb418(param_3,*(undefined4 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 8),
               *(undefined8 *)(param_4 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x8e0) + 0xc),
               *(undefined8 *)(param_1 + 0x938));
  FUN_100e1588(param_1,param_2,0,1,0x400);
  FUN_100e0818(param_1);
  FUN_100e09c8(param_1);
  puVar2 = (undefined4 *)(param_4 + 4);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1,param_2,param_5,*puVar2);
  FUN_100e0960(param_1);
  return 1;
}

