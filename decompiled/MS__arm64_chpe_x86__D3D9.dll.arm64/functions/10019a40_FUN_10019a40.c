/*
 * FUN_10019a40 at 10019a40
 * undefined FUN_10019a40(void)
 * Address ranges: 10019a40-10019aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019a40(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    param_1[uVar2 + 0x16] = 0xffffffff;
    iVar1 = uVar2 + 6;
    uVar2 = uVar2 + 1;
    param_1[iVar1] = 0xffffffff;
  } while (uVar2 < 0x10);
  param_1[0x26] =
       1 << (ulonglong)(param_1[2] & 0x1f) | 1 << (ulonglong)(param_1[1] & 0x1f) |
       1 << (ulonglong)(*param_1 & 0x1f);
  param_1[0x27] = 0;
  return;
}

