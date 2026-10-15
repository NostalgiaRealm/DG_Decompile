/*
 * FUN_100225c0 at 100225c0
 * undefined FUN_100225c0(void)
 * Address ranges: 100225c0-100225e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100225c0(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(param_1 + -0x28) + (param_2 + *(int *)(param_1 + -0x94) * param_3) * 0x20 + 8);
}

