/*
 * FUN_1800365f8 at 1800365f8
 * undefined __fastcall FUN_1800365f8(longlong * param_1, int param_2)
 * Address ranges: 1800365f8-18003662e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800365f8(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)(param_1 + 0x592) = (uint)(param_2 != 0);
  return;
}

