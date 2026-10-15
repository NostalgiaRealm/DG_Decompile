/*
 * FUN_1009c950 at 1009c950
 * undefined FUN_1009c950(void)
 * Address ranges: 1009c950-1009c973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009c950(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(param_1 + -0x28) + (param_2 + *(int *)(param_1 + -0x94) * param_3) * 0x20 + 8);
}

