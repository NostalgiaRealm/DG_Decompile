/*
 * FUN_100796eb at 100796eb
 * undefined4 * __fastcall FUN_100796eb(int param_1, int * param_2, undefined4 * param_3, undefined4 param_4)
 * Address ranges: 100796eb-10079758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_100796eb(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100ad475(0xf0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = puVar1;
    FUN_1000ef89(puVar1 + 2,param_1,param_2,param_3,param_4);
    *puVar1 = &PTR_FUN_100b37e0;
    puVar1[2] = &PTR_FUN_100b3784;
    puVar1[0xc] = &PTR_FUN_100b17b8;
    puVar1[0x3b] = param_1;
  }
  return puVar1;
}

