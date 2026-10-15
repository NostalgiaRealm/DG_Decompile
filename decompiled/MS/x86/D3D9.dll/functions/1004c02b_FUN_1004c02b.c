/*
 * FUN_1004c02b at 1004c02b
 * undefined __cdecl FUN_1004c02b(undefined4 * param_1)
 * Address ranges: 1004c02b-1004c048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004c02b(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_100d5524;
    FUN_100cfd6c(puVar1);
  }
  return;
}

