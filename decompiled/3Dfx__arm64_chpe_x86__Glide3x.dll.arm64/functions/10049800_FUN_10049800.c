/*
 * FUN_10049800 at 10049800
 * undefined FUN_10049800(void)
 * Address ranges: 10049800-1004982b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10049800(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x5c) + param_2 * 0x10 + 4) + param_3 * 0x1c + 0x14);
}

