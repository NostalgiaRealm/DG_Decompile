/*
 * FUN_10069720 at 10069720
 * undefined FUN_10069720(void)
 * Address ranges: 10069720-10069797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069720(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -4;
  }
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x588 + uVar2 * 4) == iVar1) {
      *(uint *)(param_1 + 0x65c) = 1 << (ulonglong)(uVar2 & 0x1f) | *(uint *)(param_1 + 0x65c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (*(int *)(param_1 + 0x5c8) == iVar1) {
    *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) | 0x80000000;
  }
  return;
}

