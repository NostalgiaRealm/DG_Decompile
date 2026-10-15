/*
 * FUN_100ff5a0 at 100ff5a0
 * undefined FUN_100ff5a0(void)
 * Address ranges: 100ff5a0-100ff60b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ff5a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_100fee10();
    FUN_100fee50(&DAT_10135000,&DAT_10135004);
  }
  uVar1 = FUN_100afc50(param_1,param_2,param_3);
  if (param_2 == 0) {
    FUN_100fedc0();
  }
  return uVar1;
}

