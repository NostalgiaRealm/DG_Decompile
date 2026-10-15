/*
 * FUN_1001cfc8 at 1001cfc8
 * undefined FUN_1001cfc8(void)
 * Address ranges: 1001cfc8-1001d013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001cfc8(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_1001bcf0(param_1);
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

