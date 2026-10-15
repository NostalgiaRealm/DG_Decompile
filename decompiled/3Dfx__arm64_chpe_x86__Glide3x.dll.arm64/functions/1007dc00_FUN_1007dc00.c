/*
 * FUN_1007dc00 at 1007dc00
 * undefined FUN_1007dc00(void)
 * Address ranges: 1007dc00-1007dc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007dc00(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_1007e5b0();
    FUN_1007e5f0(&DAT_100a1000,&DAT_100a1004);
  }
  uVar1 = FUN_10005b90(param_1,param_2,param_3);
  if (param_2 == 0) {
    FUN_1007e560();
  }
  return uVar1;
}

