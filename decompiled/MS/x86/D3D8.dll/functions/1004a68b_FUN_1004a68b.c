/*
 * FUN_1004a68b at 1004a68b
 * undefined __stdcall FUN_1004a68b(int param_1, undefined4 * param_2)
 * Address ranges: 1004a68b-1004a6e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004a68b(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xff;
    uVar2 = (uint)*(byte *)(param_1 + 0x11) | *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x10) = uVar1;
    uVar1 = uVar1 | uVar2;
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    *(uint *)(param_1 + 0x14) = uVar2;
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = iVar4 + 1;
    }
    uVar1 = *(uint *)(param_1 + 0x24) | *(uint *)(param_1 + 0x20) | *(uint *)(param_1 + 0x1c);
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    *(int *)(param_1 + 0x18) = iVar3;
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = iVar4 + 1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    puVar5 = (undefined4 *)(param_1 + 8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}

