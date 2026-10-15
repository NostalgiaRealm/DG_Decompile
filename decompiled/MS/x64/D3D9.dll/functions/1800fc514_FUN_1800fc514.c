/*
 * FUN_1800fc514 at 1800fc514
 * undefined4 __fastcall FUN_1800fc514(byte * param_1, byte * param_2)
 * Address ranges: 1800fc514-1800fc548
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800fc514(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  while( true ) {
    uVar1 = (uint)*param_2;
    uVar2 = (uint)*param_1;
    if (uVar2 != uVar1) break;
    if (*param_2 == 0) goto LAB_1800fc541;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if ((int)(uVar2 - uVar1) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_1800fc541:
    uVar3 = 0;
    if (uVar2 != uVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

