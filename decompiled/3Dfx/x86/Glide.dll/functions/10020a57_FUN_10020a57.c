/*
 * FUN_10020a57 at 10020a57
 * undefined __fastcall FUN_10020a57(int param_1)
 * Address ranges: 10020a57-10020aa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10020a57(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x508);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  FUN_1001ea82(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_1002816d((void *)(param_1 + 0x140 + uVar2 * 0x120));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

