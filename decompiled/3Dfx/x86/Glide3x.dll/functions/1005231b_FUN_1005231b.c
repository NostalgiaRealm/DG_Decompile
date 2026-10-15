/*
 * FUN_1005231b at 1005231b
 * undefined4 __cdecl FUN_1005231b(byte * param_1, byte * param_2)
 * Address ranges: 1005231b-1005234d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1005231b(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  for (; uVar2 = (uint)*param_1, uVar1 = (uint)*param_2, uVar2 == uVar1; param_1 = param_1 + 1) {
    if (*param_2 == 0) goto LAB_10052341;
    param_2 = param_2 + 1;
  }
  if ((int)(uVar2 - uVar1) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_10052341:
    uVar3 = 0;
    if (uVar2 != uVar1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

