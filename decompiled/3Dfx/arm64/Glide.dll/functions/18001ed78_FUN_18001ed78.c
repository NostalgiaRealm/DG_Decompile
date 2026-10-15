/*
 * FUN_18001ed78 at 18001ed78
 * undefined __cdecl FUN_18001ed78(longlong param_1)
 * Address ranges: 18001ed78-18001ed7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ed78(longlong param_1)

{
  FUN_18001e6a0(param_1);
  FUN_18001d3c8(param_1,1);
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_1 + 0x2b78);
  *(undefined4 *)(param_1 + 0x2bac) = *(undefined4 *)(param_1 + 0x2b7c);
  *(undefined4 *)(param_1 + 0x2bb0) = *(undefined4 *)(param_1 + 0x2b80);
  *(undefined4 *)(param_1 + 0x2bd0) = *(undefined4 *)(param_1 + 0x2ba0);
  FUN_18001d270(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

