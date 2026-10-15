/*
 * FUN_1008033e at 1008033e
 * undefined __stdcall FUN_1008033e(int param_1)
 * Address ranges: 1008033e-1008036f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008033e(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x24));
  FUN_100ad48c(*(LPVOID *)(param_1 + 8));
  return;
}

