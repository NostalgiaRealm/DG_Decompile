/*
 * FUN_1003efe0 at 1003efe0
 * undefined FUN_1003efe0(void)
 * Address ranges: 1003efe0-1003f02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1003efe0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5
            )

{
  undefined1 uVar1;
  
  if ((*(uint *)(param_1 + 0x34) >> 4 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_1003f030(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

