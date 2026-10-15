/*
 * FUN_100b0b50 at 100b0b50
 * undefined FUN_100b0b50(void)
 * Address ranges: 100b0b50-100b0b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b0b50(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (param_3 + param_2 * 0x10 + 0x22) * 4);
  FUN_100be6b8(*puVar1);
  *puVar1 = 0;
  return;
}

