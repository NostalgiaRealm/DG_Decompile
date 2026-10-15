/*
 * FUN_100d1f70 at 100d1f70
 * undefined FUN_100d1f70(void)
 * Address ranges: 100d1f70-100d1f9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d1f70(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (param_3 + param_2 * 0x10 + 0x22) * 4);
  FUN_100e8618(*puVar1);
  *puVar1 = 0;
  return;
}

