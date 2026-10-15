/*
 * FUN_100075c0 at 100075c0
 * undefined FUN_100075c0(void)
 * Address ranges: 100075c0-1000763f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100075c0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x9b0) < param_2) {
    FUN_10007650(param_1);
    uVar1 = param_2 * 2 + 1;
    iVar2 = uVar1 * 0x10;
    if (uVar1 >> 0x1c != 0) {
      iVar2 = -1;
    }
    iVar2 = FUN_10081da0(iVar2);
    *(int *)(param_1 + 0x9a8) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x9b0) = param_2;
      *(uint *)(param_1 + 0x9a4) = iVar2 + 0xfU & 0xfffffff0;
    }
  }
  return;
}

