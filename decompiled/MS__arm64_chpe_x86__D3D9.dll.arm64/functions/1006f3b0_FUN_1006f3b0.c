/*
 * FUN_1006f3b0 at 1006f3b0
 * undefined FUN_1006f3b0(void)
 * Address ranges: 1006f3b0-1006f3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f3b0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1015eaf8;
    FUN_10132260(puVar1,0x40);
    return;
  }
  return;
}

