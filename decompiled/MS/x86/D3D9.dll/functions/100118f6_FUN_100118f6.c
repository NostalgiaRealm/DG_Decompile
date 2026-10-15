/*
 * FUN_100118f6 at 100118f6
 * undefined __fastcall FUN_100118f6(int param_1)
 * Address ranges: 100118f6-10011925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100118f6(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100cfe2d(*(LPVOID *)(*(int *)(param_1 + 4) + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

