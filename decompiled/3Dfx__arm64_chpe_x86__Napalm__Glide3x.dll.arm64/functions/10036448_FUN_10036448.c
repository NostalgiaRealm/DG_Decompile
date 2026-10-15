/*
 * FUN_10036448 at 10036448
 * undefined FUN_10036448(void)
 * Address ranges: 10036448-100364bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036448(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  param_1 = param_1 + param_2 * 0x250;
  puVar1 = (uint *)(param_1 + 0x2f7c);
  uVar2 = *puVar1;
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *puVar1 = uVar2 & 0xfffffffd;
    if ((((*(uint *)(param_1 + 0x2ee8) >> 5 & 1) != 0) && (*(int *)(param_1 + 0x2ef8) == 2)) ||
       (((*(uint *)(param_1 + 0x2f18) >> 5 & 1) != 0 && (*(int *)(param_1 + 0x2f28) == 2)))) {
      *puVar1 = uVar2 & 0xfffffffd | 2;
    }
  }
  return;
}

