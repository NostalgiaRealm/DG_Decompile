/*
 * FUN_1009d6ef at 1009d6ef
 * undefined __fastcall FUN_1009d6ef(undefined4 * param_1)
 * Address ranges: 1009d6ef-1009d745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d6ef(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),'\x01');
  puVar1 = param_1 + 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  FUN_10006d7f((void *)param_1[0x48],(int)puVar1);
  FUN_100136b0(param_1 + 2);
  FUN_1009d6b8((int)param_1);
  FUN_1009d5a5(param_1);
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

