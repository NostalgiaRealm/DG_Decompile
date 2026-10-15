/*
 * FUN_100cf978 at 100cf978
 * undefined FUN_100cf978(void)
 * Address ranges: 100cf978-100cf9f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100cf978(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_101321c0(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = puVar1;
    *puVar1 = &PTR_FUN_1015fb94;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
  }
  return puVar1;
}

