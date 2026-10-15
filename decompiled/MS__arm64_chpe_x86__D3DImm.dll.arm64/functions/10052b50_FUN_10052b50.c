/*
 * FUN_10052b50 at 10052b50
 * undefined FUN_10052b50(void)
 * Address ranges: 10052b50-10052b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052b50(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar1 = FUN_100590a0(param_1 + 0x9dc,param_2,param_3,auStack_10,0);
  }
  return uVar1;
}

