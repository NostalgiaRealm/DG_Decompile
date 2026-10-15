/*
 * FUN_10047a98 at 10047a98
 * undefined FUN_10047a98(void)
 * Address ranges: 10047a98-10047aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047a98(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  param_1 = param_1 + param_2 * 0x180;
  puVar1 = (uint *)(param_1 + 0x2d18);
  uVar2 = *puVar1;
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *puVar1 = uVar2 & 0xfffffffd;
    if ((*(int *)(param_1 + 0x2cd4) == 0xd) || (*(int *)(param_1 + 0x2ce4) == 0xd)) {
      *puVar1 = uVar2 & 0xfffffffd | 2;
    }
  }
  return;
}

