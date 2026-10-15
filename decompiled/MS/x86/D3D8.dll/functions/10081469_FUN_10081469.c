/*
 * FUN_10081469 at 10081469
 * undefined __fastcall FUN_10081469(undefined4 * param_1)
 * Address ranges: 10081469-100814bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10081469(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),'\x01');
  puVar1 = param_1 + 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  FUN_10006476((void *)param_1[0x3b],(int)puVar1);
  FUN_1000f8d0(param_1 + 2);
  FUN_10081432((int)param_1);
  FUN_100813b2(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

