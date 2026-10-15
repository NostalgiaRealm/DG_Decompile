/*
 * FUN_180222b90 at 180222b90
 * undefined FUN_180222b90(void)
 * Address ranges: 180222b90-180222bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180222b90(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    FUN_180222a90();
    FUN_180222ac8(&DAT_180246010,&DAT_180246018);
  }
  uVar1 = FUN_1801bdac0(param_1,param_2,param_3);
  if (param_2 == 0) {
    FUN_180222a50();
  }
  return uVar1;
}

