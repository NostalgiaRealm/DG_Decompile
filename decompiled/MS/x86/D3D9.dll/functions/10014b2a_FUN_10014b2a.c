/*
 * FUN_10014b2a at 10014b2a
 * undefined __fastcall FUN_10014b2a(int param_1)
 * Address ranges: 10014b2a-10014b6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014b2a(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
  }
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100cfe2d(*(LPVOID *)(*(int *)(param_1 + 4) + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

