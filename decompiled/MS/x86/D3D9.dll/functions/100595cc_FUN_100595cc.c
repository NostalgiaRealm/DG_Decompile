/*
 * FUN_100595cc at 100595cc
 * undefined __stdcall FUN_100595cc(int param_1, undefined4 * param_2)
 * Address ranges: 100595cc-10059628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100595cc(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x12) | *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x12) = 0;
    uVar1 = *(uint *)(param_1 + 0x10) | uVar2;
    *(uint *)(param_1 + 0x14) = uVar2;
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
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

