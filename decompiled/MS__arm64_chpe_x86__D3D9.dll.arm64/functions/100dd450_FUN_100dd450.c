/*
 * FUN_100dd450 at 100dd450
 * undefined FUN_100dd450(void)
 * Address ranges: 100dd450-100dd4bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100dd450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,uint param_11)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_11 & 0xff7fc7ff) == 0) {
    uVar1 = FUN_100dd9e0(param_1 + -0x66b4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9);
  }
  return uVar1;
}

