/*
 * FUN_100514a0 at 100514a0
 * undefined FUN_100514a0(void)
 * Address ranges: 100514a0-100514cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100514a0(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 - 1U < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
    if (*param_2 == 3) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

