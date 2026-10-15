/*
 * FUN_1001a56c at 1001a56c
 * undefined __fastcall FUN_1001a56c(int param_1)
 * Address ranges: 1001a56c-1001a5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a56c(int param_1)

{
  undefined4 *puVar1;
  
  FUN_1001a754(param_1);
  FUN_1001b92c(param_1 + 0x214);
  puVar1 = *(undefined4 **)(param_1 + 0x20c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  FUN_1001a523(param_1);
  FUN_1001a681(param_1);
  return;
}

