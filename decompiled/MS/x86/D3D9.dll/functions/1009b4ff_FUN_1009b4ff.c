/*
 * FUN_1009b4ff at 1009b4ff
 * undefined __stdcall FUN_1009b4ff(int param_1)
 * Address ranges: 1009b4ff-1009b557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009b4ff(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 0x85c));
  FUN_100cfd6c(*(LPVOID *)(param_1 + 0x860));
  FUN_100cfd6c(*(LPVOID *)(param_1 + 8));
  if (*(LPVOID *)(param_1 + 0x864) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x864),0,0x8000);
  }
  return;
}

