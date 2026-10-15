/*
 * FUN_1004b87c at 1004b87c
 * undefined __fastcall FUN_1004b87c(int param_1)
 * Address ranges: 1004b87c-1004b8b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b87c(int param_1)

{
  if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 300))(1);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1005c797(*(LPVOID *)(*(int *)(param_1 + 4) + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

