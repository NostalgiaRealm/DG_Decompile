/*
 * FUN_100206cb at 100206cb
 * undefined __fastcall FUN_100206cb(int param_1)
 * Address ranges: 100206cb-10020718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100206cb(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x508);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038b3c(puVar1);
    FUN_1004f626(puVar1);
  }
  FUN_1001e6f6(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_10027de3((void *)(param_1 + 0x140 + uVar2 * 0x120));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

