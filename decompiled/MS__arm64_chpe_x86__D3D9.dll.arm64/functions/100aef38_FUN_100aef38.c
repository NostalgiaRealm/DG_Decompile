/*
 * FUN_100aef38 at 100aef38
 * undefined FUN_100aef38(void)
 * Address ranges: 100aef38-100aef63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100aef38(int param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x151) == '\0') || (*(char *)(param_1 + 0x152) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

