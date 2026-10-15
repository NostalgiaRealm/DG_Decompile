/*
 * FUN_18000c960 at 18000c960
 * undefined __cdecl FUN_18000c960(longlong param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 18000c960-18000caab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c960(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3 + param_5;
  uVar2 = *(uint *)(param_1 + 0x32c0) & 0xffff0000 | *(uint *)(param_1 + 0x32c0) & 0x3fff | 0x8000;
  *(uint *)(param_1 + 0x32c0) = uVar2;
  if (param_4 < 0) {
    uVar2 = uVar2 ^ 0x4000;
    *(uint *)(param_1 + 0x32c0) = uVar2;
    param_2 = param_2 + param_4;
    param_4 = -param_4;
  }
  iVar4 = param_3;
  if (param_5 < 0) {
    uVar2 = uVar2 ^ 0x8000;
    *(uint *)(param_1 + 0x32c0) = uVar2;
    iVar4 = iVar1;
    iVar1 = param_3;
  }
  iVar5 = iVar4;
  if (*(int *)(param_1 + 0x2a14) != 0) {
    *(uint *)(param_1 + 0x32c0) = uVar2 ^ 0x8000;
    iVar5 = *(int *)(param_1 + 0xac) - iVar1;
    iVar1 = *(int *)(param_1 + 0xac) - iVar4;
  }
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  uVar2 = FUN_180016f80(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar2 != 0xffffffff) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
    *(float *)(param_1 + 0x2bb8) =
         (float)(*(int *)(lVar3 + 0x28) * param_2) / (float)*(uint *)(lVar3 + 0x20);
    *(float *)(param_1 + 0x2bbc) =
         (float)(*(int *)(lVar3 + 0x2c) * iVar5) / (float)*(uint *)(lVar3 + 0x24);
    *(float *)(param_1 + 0x2bc0) =
         (float)(uint)(param_4 * *(int *)(lVar3 + 0x28)) / (float)*(uint *)(lVar3 + 0x20);
    iVar4 = *(int *)(lVar3 + 0x2c);
    uVar2 = *(uint *)(lVar3 + 0x24);
    *(undefined1 *)(param_1 + 0x2c7c) = 1;
    *(float *)(param_1 + 0x2bc4) = (float)(uint)((iVar1 - iVar5) * iVar4) / (float)uVar2;
  }
  return;
}

