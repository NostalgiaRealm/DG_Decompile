/*
 * FUN_18001dc80 at 18001dc80
 * undefined __fastcall FUN_18001dc80(undefined8 * param_1)
 * Address ranges: 18001dc80-18001dc99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001dc80(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)param_1[1];
  uVar2 = FUN_180015290((longlong *)*param_1);
  *puVar1 = uVar2;
  return;
}

