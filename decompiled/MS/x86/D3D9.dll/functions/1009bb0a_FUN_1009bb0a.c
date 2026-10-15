/*
 * FUN_1009bb0a at 1009bb0a
 * undefined __stdcall FUN_1009bb0a(int param_1)
 * Address ranges: 1009bb0a-1009bb3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009bb0a(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 0x21c));
  FUN_100cfd6c(*(LPVOID *)(param_1 + 8));
  return;
}

