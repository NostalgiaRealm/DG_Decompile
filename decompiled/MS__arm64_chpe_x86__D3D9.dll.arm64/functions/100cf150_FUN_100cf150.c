/*
 * FUN_100cf150 at 100cf150
 * undefined FUN_100cf150(void)
 * Address ranges: 100cf150-100cf167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100cf150(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

