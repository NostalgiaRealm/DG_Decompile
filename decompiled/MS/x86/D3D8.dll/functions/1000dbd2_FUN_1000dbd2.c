/*
 * FUN_1000dbd2 at 1000dbd2
 * undefined __fastcall FUN_1000dbd2(int param_1)
 * Address ranges: 1000dbd2-1000dc01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000dbd2(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100ad4c5(*(LPVOID *)(*(int *)(param_1 + 4) + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

