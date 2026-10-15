/*
 * FUN_1001d188 at 1001d188
 * undefined FUN_1001d188(void)
 * Address ranges: 1001d188-1001d1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001d188(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_1001c150(param_1);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x78b);
    uVar2 = 4;
    if (uVar1 < 6) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

