/*
 * FUN_18001df2c at 18001df2c
 * undefined __cdecl FUN_18001df2c(longlong param_1)
 * Address ranges: 18001df2c-18001df93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001df2c(longlong param_1)

{
  FUN_18001d850(param_1);
  FUN_18001c578(param_1,1);
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_1 + 0x2b78);
  *(undefined4 *)(param_1 + 0x2bac) = *(undefined4 *)(param_1 + 0x2b7c);
  *(undefined4 *)(param_1 + 0x2bb0) = *(undefined4 *)(param_1 + 0x2b80);
  *(undefined4 *)(param_1 + 0x2bd0) = *(undefined4 *)(param_1 + 0x2ba0);
  FUN_18001c420(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

