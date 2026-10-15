/*
 * FUN_1002489f at 1002489f
 * undefined __cdecl FUN_1002489f(undefined4 * param_1)
 * Address ranges: 1002489f-100248b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002489f(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_1001cd6f((int *)*param_1);
  *puVar1 = uVar2;
  return;
}

