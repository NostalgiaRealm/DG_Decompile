/*
 * FUN_1005b6e0 at 1005b6e0
 * undefined FUN_1005b6e0(void)
 * Address ranges: 1005b6e0-1005b77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005b6e0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1 + param_2 * 4;
  if (*(int *)(iVar1 + 0xdcf8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0xdcf8) + 0x10) = 0;
  }
  *(int *)(iVar1 + 0xdcf8) = param_3;
  uVar4 = 1 << (ulonglong)(param_2 & 0x1f);
  *(undefined4 *)(iVar1 + 0xdd3c) = param_4;
  *(undefined4 *)(iVar1 + 0xdd7c) = param_5;
  *(uint *)(param_1 + 0xddbc) = *(uint *)(param_1 + 0xddbc) | uVar4;
  uVar2 = *(uint *)(param_1 + 0xddcc) & (uVar4 ^ 0xffffffff);
  *(uint *)(param_1 + 0xddcc) = uVar2;
  if (param_3 != 0) {
    if (*(char *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xdcf8) + 0x28) +
                          *(int *)(*(int *)(iVar1 + 0xdcf8) + 0x38) * 8) + 0x34) == '\0') {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0xddcc) = uVar4 | uVar2;
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = param_1 + 0xd9b0;
    }
    *(int *)(*(int *)(iVar1 + 0xdcf8) + 0x10) = iVar3;
  }
  return;
}

