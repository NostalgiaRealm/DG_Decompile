/*
 * FUN_1006bdc0 at 1006bdc0
 * undefined FUN_1006bdc0(void)
 * Address ranges: 1006bdc0-1006be5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bdc0(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xfc78) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xfc78) + 0x10) = 0;
  }
  *(int *)(param_1 + 0xfc78) = param_2;
  uVar3 = 0x2a;
  if (param_3 == '\0') {
    uVar3 = 0x39;
  }
  *(undefined4 *)(param_1 + 0xfd00) = uVar3;
  *(undefined1 *)(param_1 + 0xfd10) = 1;
  uVar1 = *(uint *)(param_1 + 0xfd0c) & 0x7fffffff;
  *(uint *)(param_1 + 0xfd0c) = uVar1;
  if (param_2 != 0) {
    uVar4 = 0x80000000;
    if (*(char *)(*(int *)(*(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x38) * 8) + 0x34) == '\0')
    {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0xfd0c) = uVar4 | uVar1;
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = param_1 + 0xf6b0;
    }
    *(int *)(param_2 + 0x10) = iVar2;
  }
  return;
}

