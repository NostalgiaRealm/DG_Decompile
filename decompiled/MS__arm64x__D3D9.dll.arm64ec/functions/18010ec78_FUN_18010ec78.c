/*
 * FUN_18010ec78 at 18010ec78
 * undefined FUN_18010ec78(void)
 * Address ranges: 18010ec78-18010ecc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010ec78(uint *param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  uint local_10;
  int iStack_c;
  
  iStack_c = 0;
  uVar1 = 0;
  do {
    local_10 = (uint)uVar1;
    if (param_1[uVar1 + 6] == (param_3 & 0xffff)) goto LAB_18010ecb8;
    uVar1 = (ulonglong)(local_10 + 1);
  } while (local_10 + 1 < 0x10);
  local_10 = *param_1 | 0x80000000;
  iStack_c = (param_3 & 0xffff) << 4;
LAB_18010ecb8:
  return CONCAT44(iStack_c,local_10);
}

