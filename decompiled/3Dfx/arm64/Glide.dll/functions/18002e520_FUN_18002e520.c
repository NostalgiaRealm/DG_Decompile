/*
 * FUN_18002e520 at 18002e520
 * undefined __cdecl FUN_18002e520(undefined8 * param_1)
 * Address ranges: 18002e520-18002e543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e520(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_180023e50((longlong *)*param_1);
  *puVar1 = uVar2;
  return;
}

