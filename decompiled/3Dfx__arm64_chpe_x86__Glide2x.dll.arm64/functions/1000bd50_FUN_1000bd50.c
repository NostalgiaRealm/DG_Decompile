/*
 * FUN_1000bd50 at 1000bd50
 * undefined FUN_1000bd50(void)
 * Address ranges: 1000bd50-1000bd7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000bd50(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c + 8);
}

