/*
 * FUN_100929d0 at 100929d0
 * undefined FUN_100929d0(void)
 * Address ranges: 100929d0-100929f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100929d0(undefined8 param_1,int param_2,uint param_3)

{
  if ((*(int *)(param_2 + 0x1a4) == 0) && ((param_3 & 0x3f00) != 0)) {
    return;
  }
  FUN_10121648(param_2 + 0x18,param_3);
  return;
}

