/*
 * FUN_1000be70 at 1000be70
 * undefined FUN_1000be70(void)
 * Address ranges: 1000be70-1000be9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000be70(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c + 0x14);
}

