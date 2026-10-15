/*
 * FUN_18000a4c8 at 18000a4c8
 * undefined __fastcall FUN_18000a4c8(longlong param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 18000a4c8-18000a622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a4c8(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x32c0) = *(uint *)(param_1 + 0x32c0) & 0xffffbfff;
  *(uint *)(param_1 + 0x32c0) = *(uint *)(param_1 + 0x32c0) | 0x8000;
  uVar2 = *(uint *)(param_1 + 0x32c0);
  if (param_4 < 0) {
    uVar2 = uVar2 ^ 0x4000;
    param_2 = param_2 + param_4;
    *(uint *)(param_1 + 0x32c0) = uVar2;
    param_4 = -param_4;
  }
  iVar5 = param_3 + param_5;
  if (param_5 < 0) {
    uVar2 = uVar2 ^ 0x8000;
    *(uint *)(param_1 + 0x32c0) = uVar2;
    iVar5 = param_3;
    param_3 = param_3 + param_5;
  }
  iVar4 = param_3;
  if (*(int *)(param_1 + 0x2a14) != 0) {
    *(uint *)(param_1 + 0x32c0) = uVar2 ^ 0x8000;
    iVar4 = *(int *)(param_1 + 0xac) - iVar5;
    iVar5 = *(int *)(param_1 + 0xac) - param_3;
  }
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  uVar2 = FUN_180014854(*(longlong **)(param_1 + 0x3300),*(int *)(param_1 + 0x29fc));
  if (uVar2 != 0xffffffff) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                      (*(longlong **)(param_1 + 0x3300),uVar2);
    *(float *)(param_1 + 0x2bb8) =
         (float)(param_2 * *(int *)(lVar3 + 0x28)) / (float)*(uint *)(lVar3 + 0x20);
    *(float *)(param_1 + 0x2bbc) =
         (float)(iVar4 * *(int *)(lVar3 + 0x2c)) / (float)*(uint *)(lVar3 + 0x24);
    *(float *)(param_1 + 0x2bc0) =
         (float)(uint)(param_4 * *(int *)(lVar3 + 0x28)) / (float)*(uint *)(lVar3 + 0x20);
    iVar1 = *(int *)(lVar3 + 0x2c);
    uVar2 = *(uint *)(lVar3 + 0x24);
    *(undefined1 *)(param_1 + 0x2c7c) = 1;
    *(float *)(param_1 + 0x2bc4) = (float)(uint)((iVar5 - iVar4) * iVar1) / (float)uVar2;
  }
  return;
}

