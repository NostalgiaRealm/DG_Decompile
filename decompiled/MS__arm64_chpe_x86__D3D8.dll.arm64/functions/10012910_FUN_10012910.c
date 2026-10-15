/*
 * FUN_10012910 at 10012910
 * undefined FUN_10012910(void)
 * Address ranges: 10012910-10012963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10012910(uint *param_1,undefined8 param_2,uint param_3)

{
  uint local_10;
  int iStack_c;
  
  iStack_c = 0;
  local_10 = 0;
  do {
    if (param_1[local_10 + 6] == (param_3 & 0xffff)) goto LAB_10012958;
    local_10 = local_10 + 1;
  } while (local_10 < 0x10);
  local_10 = *param_1 | 0x80000000;
  iStack_c = (param_3 & 0xffff) << 4;
LAB_10012958:
  return CONCAT44(iStack_c,local_10);
}

