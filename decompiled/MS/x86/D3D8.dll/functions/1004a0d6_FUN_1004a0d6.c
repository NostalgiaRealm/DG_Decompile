/*
 * FUN_1004a0d6 at 1004a0d6
 * undefined4 __stdcall FUN_1004a0d6(uint param_1, undefined4 param_2, char param_3)
 * Address ranges: 1004a0d6-1004a112
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004a0d6(uint param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = __aullshr(param_3 * '\x03',0);
  uVar1 = (uint)uVar3 & 7;
  if (((uVar1 == 5) || (uVar1 == 6)) && ((param_1 & 0x2000000) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

