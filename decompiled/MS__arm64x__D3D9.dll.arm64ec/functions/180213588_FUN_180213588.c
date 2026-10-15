/*
 * FUN_180213588 at 180213588
 * undefined FUN_180213588(void)
 * Address ranges: 180213588-1802135d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213588(undefined8 param_1,undefined4 param_2,byte param_3,uint param_4)

{
  undefined4 local_20 [2];
  undefined4 local_18;
  
  local_18 = 1;
  local_20[0] = param_2;
  FUN_180215058(param_1,4,(param_4 & 0xf) << 0xb | 0x4000064,(uint)param_3 << 4 | 0x101002,local_20,
                0x10);
  return;
}

