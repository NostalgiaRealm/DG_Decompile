/*
 * FUN_18000ed80 at 18000ed80
 * undefined FUN_18000ed80(void)
 * Address ranges: 18000ed80-18000ede3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ed80(longlong param_1)

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
    FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + 8) + -8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

