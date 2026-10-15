/*
 * FUN_100654f0 at 100654f0
 * undefined FUN_100654f0(void)
 * Address ranges: 100654f0-10065533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100654f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar1 = FUN_10065a40(param_1 + 4,param_2,param_3,auStack_10,0);
  }
  return uVar1;
}

