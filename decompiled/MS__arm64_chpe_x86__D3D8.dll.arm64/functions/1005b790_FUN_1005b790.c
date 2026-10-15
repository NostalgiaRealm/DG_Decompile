/*
 * FUN_1005b790 at 1005b790
 * undefined FUN_1005b790(void)
 * Address ranges: 1005b790-1005b82f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005b790(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xdd38) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xdd38) + 0x10) = 0;
  }
  *(int *)(param_1 + 0xdd38) = param_2;
  uVar3 = 0x2a;
  if (param_3 == '\0') {
    uVar3 = 0x39;
  }
  *(undefined4 *)(param_1 + 0xddc0) = uVar3;
  *(undefined1 *)(param_1 + 0xddd0) = 1;
  uVar1 = *(uint *)(param_1 + 0xddcc) & 0x7fffffff;
  *(uint *)(param_1 + 0xddcc) = uVar1;
  if (param_2 != 0) {
    uVar4 = 0x80000000;
    if (*(char *)(*(int *)(*(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x38) * 8) + 0x34) == '\0')
    {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0xddcc) = uVar4 | uVar1;
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = param_1 + 0xd9b0;
    }
    *(int *)(param_2 + 0x10) = iVar2;
  }
  return;
}

