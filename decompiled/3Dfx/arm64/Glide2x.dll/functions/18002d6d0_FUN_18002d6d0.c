/*
 * FUN_18002d6d0 at 18002d6d0
 * undefined __cdecl FUN_18002d6d0(undefined8 * param_1)
 * Address ranges: 18002d6d0-18002d6f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d6d0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_180023000((longlong *)*param_1);
  *puVar1 = uVar2;
  return;
}

