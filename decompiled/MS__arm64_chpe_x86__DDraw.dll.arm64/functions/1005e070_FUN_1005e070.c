/*
 * FUN_1005e070 at 1005e070
 * undefined FUN_1005e070(void)
 * Address ranges: 1005e070-1005e09b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005e070(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c + 0x14);
}

