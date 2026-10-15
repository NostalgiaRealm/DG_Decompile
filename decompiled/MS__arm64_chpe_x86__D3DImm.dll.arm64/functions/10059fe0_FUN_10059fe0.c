/*
 * FUN_10059fe0 at 10059fe0
 * undefined FUN_10059fe0(void)
 * Address ranges: 10059fe0-1005a03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10059fe0(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == 0) || (*(char *)(param_2 + 9) == '\0')) &&
     ((param_3 == 0 || (*(char *)(param_3 + 9) == '\0')))) {
    if (((param_2 == 0) || (*(char *)(param_2 + 8) == '\0')) &&
       ((param_3 == 0 || (*(char *)(param_3 + 8) == '\0')))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x887601c2;
    }
  }
  else {
    uVar1 = 0x887601ae;
  }
  return uVar1;
}

