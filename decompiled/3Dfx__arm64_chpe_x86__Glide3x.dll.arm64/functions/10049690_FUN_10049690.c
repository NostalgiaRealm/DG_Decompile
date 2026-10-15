/*
 * FUN_10049690 at 10049690
 * undefined FUN_10049690(void)
 * Address ranges: 10049690-100496c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10049690(int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c) +
         *(int *)(param_1 + 0x44);
}

