/*
 * FUN_10046fc0 at 10046fc0
 * undefined FUN_10046fc0(void)
 * Address ranges: 10046fc0-10046ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10046fc0(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((param_2 & 0x2000400) == 0) &&
     (((param_2 >> 0x11 & 1) == 0 ||
      (*(int *)(param_3 + 8) != 0x42 && *(int *)(param_3 + 8) != 0xff0062)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

