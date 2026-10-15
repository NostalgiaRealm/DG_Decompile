/*
 * FUN_10013ae0 at 10013ae0
 * undefined __fastcall FUN_10013ae0(int param_1)
 * Address ranges: 10013ae0-10013b2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10013ae0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x988);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  FUN_10011a9f(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_1001b6be((void *)(param_1 + 0x140 + uVar2 * 0x120));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return;
}

