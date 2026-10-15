/*
 * FUN_18009b458 at 18009b458
 * undefined __fastcall FUN_18009b458(longlong * param_1)
 * Address ranges: 18009b458-18009b479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009b458(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x100);
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

