/*
 * FUN_180018190 at 180018190
 * undefined __fastcall FUN_180018190(longlong param_1)
 * Address ranges: 180018190-1800181ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018190(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fbdd4(*(LPVOID *)(*(longlong *)(param_1 + 8) + -8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

