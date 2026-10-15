/*
 * FUN_180036160 at 180036160
 * undefined FUN_180036160(void)
 * Address ranges: 180036160-1800361af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036160(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800f1380(*(undefined8 *)(*param_1 + 0x1b500),puVar1,0,0);
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

