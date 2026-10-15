/*
 * FUN_100bcf30 at 100bcf30
 * undefined FUN_100bcf30(void)
 * Address ranges: 100bcf30-100bcf53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bcf30(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(param_1 + -0x28) + (param_2 + *(int *)(param_1 + -0x94) * param_3) * 0x20 + 8);
}

