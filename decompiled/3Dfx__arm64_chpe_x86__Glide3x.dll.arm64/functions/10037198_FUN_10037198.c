/*
 * FUN_10037198 at 10037198
 * undefined FUN_10037198(void)
 * Address ranges: 10037198-100371ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037198(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  param_1 = param_1 + param_2 * 0x1a0;
  puVar1 = (uint *)(param_1 + 0x2db8);
  uVar2 = *puVar1;
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *puVar1 = uVar2 & 0xfffffffd;
    if ((*(int *)(param_1 + 0x2d74) == 0xd) || (*(int *)(param_1 + 0x2d84) == 0xd)) {
      *puVar1 = uVar2 & 0xfffffffd | 2;
    }
  }
  return;
}

