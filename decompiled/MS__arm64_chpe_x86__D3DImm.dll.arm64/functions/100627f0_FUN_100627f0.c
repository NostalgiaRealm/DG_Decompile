/*
 * FUN_100627f0 at 100627f0
 * undefined FUN_100627f0(void)
 * Address ranges: 100627f0-10062833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100627f0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar1 = FUN_10064fa0(param_1 + 4,param_2,param_3,auStack_10,param_4);
  }
  return uVar1;
}

