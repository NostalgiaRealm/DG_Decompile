/*
 * FUN_1800c09f8 at 1800c09f8
 * undefined FUN_1800c09f8(void)
 * Address ranges: 1800c09f8-1800c0a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800c09f8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_2 + 0x868));
  FUN_180102fc0(*(undefined8 *)(param_2 + 0x870),0);
  FUN_180102fc0(*(undefined8 *)(param_2 + 0x10),0x4a70);
  return;
}

