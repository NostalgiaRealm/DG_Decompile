/*
 * FUN_180090c00 at 180090c00
 * undefined __fastcall FUN_180090c00(longlong param_1)
 * Address ranges: 180090c00-180090c2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180090c00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180090bcc(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  return;
}

