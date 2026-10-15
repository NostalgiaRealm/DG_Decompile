/*
 * FUN_10019e0d at 10019e0d
 * undefined __cdecl FUN_10019e0d(undefined4 * param_1)
 * Address ranges: 10019e0d-10019e22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10019e0d(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_100122f1((int *)*param_1);
  *puVar1 = uVar2;
  return;
}

