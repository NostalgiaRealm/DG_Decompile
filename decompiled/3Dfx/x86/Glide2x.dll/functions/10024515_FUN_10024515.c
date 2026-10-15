/*
 * FUN_10024515 at 10024515
 * undefined __cdecl FUN_10024515(undefined4 * param_1)
 * Address ranges: 10024515-1002452a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10024515(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_1001c9e3((int *)*param_1);
  *puVar1 = uVar2;
  return;
}

