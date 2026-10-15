/*
 * FUN_100929c0 at 100929c0
 * undefined __fastcall FUN_100929c0(int param_1)
 * Address ranges: 100929c0-10092a0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100929c0(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc2f0) != '\0') {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x6e8) != 0) {
        IsRectEmpty((RECT *)(param_1 + 0x6d80));
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0xd8))((RECT *)(param_1 + 0x6d80));
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xc2eb) = uVar1;
    *(undefined1 *)(param_1 + 0xc2f0) = 0;
  }
  return;
}

