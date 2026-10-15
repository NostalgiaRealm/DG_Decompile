/*
 * FUN_1800208fc at 1800208fc
 * undefined4 __fastcall FUN_1800208fc(int param_1, char param_2)
 * Address ranges: 1800208fc-180020947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800208fc(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    uVar1 = 0;
    if (param_2 == '\0') {
      uVar1 = 0x10;
    }
  }
  else if ((param_1 == 4) || (param_1 == 5)) {
    if (param_2 == '\0') {
      uVar1 = 0x20;
    }
  }
  else {
    uVar1 = 0;
    if ((param_1 == 0xf) && (param_2 != '\0')) {
      uVar1 = 0x10;
    }
  }
  return uVar1;
}

