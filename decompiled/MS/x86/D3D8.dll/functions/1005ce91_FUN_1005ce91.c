/*
 * FUN_1005ce91 at 1005ce91
 * undefined __stdcall FUN_1005ce91(int param_1, undefined4 * param_2)
 * Address ranges: 1005ce91-1005cede
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ce91(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x2c) | *(uint *)(param_1 + 0x28);
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = iVar3 + 1;
    }
    uVar1 = *(uint *)(param_1 + 0x3c) | *(uint *)(param_1 + 0x38) | *(uint *)(param_1 + 0x34);
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    *(int *)(param_1 + 0x30) = iVar2;
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x40) = iVar2;
    puVar4 = (undefined4 *)(param_1 + 0x20);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

