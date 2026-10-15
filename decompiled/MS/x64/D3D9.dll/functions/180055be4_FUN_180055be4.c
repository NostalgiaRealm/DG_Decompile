/*
 * FUN_180055be4 at 180055be4
 * undefined __fastcall FUN_180055be4(undefined8 * param_1)
 * Address ranges: 180055be4-180055c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055be4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_180101c40;
    FUN_1800fbcf0(puVar1);
  }
  return;
}

