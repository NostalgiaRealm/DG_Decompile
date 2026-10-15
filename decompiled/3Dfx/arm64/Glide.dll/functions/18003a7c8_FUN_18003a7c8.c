/*
 * FUN_18003a7c8 at 18003a7c8
 * undefined __cdecl FUN_18003a7c8(longlong * param_1, int param_2)
 * Address ranges: 18003a7c8-18003a80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a7c8(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(uint *)(param_1 + 0x592) = (uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

