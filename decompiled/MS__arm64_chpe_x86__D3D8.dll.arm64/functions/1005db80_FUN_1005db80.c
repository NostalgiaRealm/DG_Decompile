/*
 * FUN_1005db80 at 1005db80
 * undefined FUN_1005db80(void)
 * Address ranges: 1005db80-1005dc57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005db80(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_10129848;
  param_1[6] = &PTR_FUN_10129844;
  FUN_100fd9e8(param_1[1] + param_1[2] * 0x16c0 + 0x1880);
  FUN_1005df58(param_1[3],param_1[1],param_1[2]);
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_100fed00(*(undefined4 *)puVar1);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100fec90(puVar1,0xc0);
  }
  param_1[6] = &PTR_FUN_101296e4;
  *param_1 = &PTR_FUN_101296e8;
  param_1[0xd] = &PTR_FUN_1012992c;
  param_1[4] = &PTR_FUN_1012992c;
  return;
}

