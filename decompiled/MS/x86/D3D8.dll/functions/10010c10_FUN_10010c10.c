/*
 * FUN_10010c10 at 10010c10
 * undefined __fastcall FUN_10010c10(int param_1)
 * Address ranges: 10010c10-10010c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010c10(int param_1)

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
    FUN_100ad4c5(*(LPVOID *)(*(int *)(param_1 + 4) + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

