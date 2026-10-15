/*
 * FUN_180021a58 at 180021a58
 * undefined __cdecl FUN_180021a58(undefined8 * param_1)
 * Address ranges: 180021a58-180021a7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021a58(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_180017be8((longlong *)*param_1);
  *puVar1 = uVar2;
  return;
}

