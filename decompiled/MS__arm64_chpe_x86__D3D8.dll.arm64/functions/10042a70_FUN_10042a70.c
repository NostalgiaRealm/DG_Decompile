/*
 * FUN_10042a70 at 10042a70
 * undefined FUN_10042a70(void)
 * Address ranges: 10042a70-10042b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042a70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_101296dc;
  param_1[6] = &PTR_FUN_101296d8;
  puVar1 = param_1 + 2;
  puVar2 = param_1 + 1;
  FUN_100d78c8(*puVar2,*puVar1,param_1[0xb]);
  FUN_100d78c8(*puVar2,*puVar1,param_1[0xc]);
  FUN_10042e28(param_1[3],*puVar2,*puVar1);
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    FUN_100fed00(*(undefined4 *)puVar3);
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_100fec90(puVar3,0xc0);
  }
  param_1[6] = &PTR_FUN_101296e4;
  *param_1 = &PTR_FUN_101296e8;
  param_1[4] = &PTR_FUN_1012992c;
  return;
}

