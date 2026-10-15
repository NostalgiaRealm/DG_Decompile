/*
 * FUN_180057770 at 180057770
 * undefined FUN_180057770(void)
 * Address ranges: 180057770-1800577c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057770(longlong *param_1,byte param_2)

{
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  *(uint *)((longlong)param_1 + 0x646c) = param_2 ^ 1;
  *(uint *)((longlong)param_1 + 0x69a4) = param_2 ^ 1;
  *(undefined1 *)((longlong)param_1 + 0xf6c3) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  return;
}

