/*
 * FUN_18000ce38 at 18000ce38
 * undefined __cdecl FUN_18000ce38(longlong * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 18000ce38-18000cfab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ce38(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)(param_1 + 0x57a) = param_2;
  *(int *)((longlong)param_1 + 0x2bd4) = param_3;
  *(int *)(param_1 + 0x57b) = param_4;
  *(int *)((longlong)param_1 + 0x2bdc) = param_5;
  uVar2 = *(uint *)(param_1 + 0x658) & 0xffff0000 | *(uint *)(param_1 + 0x658) & 0x3fff | 0x8000;
  *(uint *)(param_1 + 0x658) = uVar2;
  if (param_4 < 0) {
    uVar2 = uVar2 ^ 0x4000;
    param_2 = param_2 + param_4;
    *(uint *)(param_1 + 0x658) = uVar2;
    param_4 = -param_4;
  }
  iVar5 = param_3 + param_5;
  if (param_5 < 0) {
    uVar2 = uVar2 ^ 0x8000;
    *(uint *)(param_1 + 0x658) = uVar2;
    iVar5 = param_3;
    param_3 = param_3 + param_5;
  }
  iVar4 = param_3;
  if (*(int *)((longlong)param_1 + 0x2a14) != 0) {
    *(uint *)(param_1 + 0x658) = uVar2 ^ 0x8000;
    iVar4 = *(int *)((longlong)param_1 + 0xac) - iVar5;
    iVar5 = *(int *)((longlong)param_1 + 0xac) - param_3;
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  uVar2 = FUN_180016f80((longlong *)param_1[0x660],*(int *)((longlong)param_1 + 0x29fc));
  if (uVar2 != 0xffffffff) {
    lVar3 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))();
    *(float *)(param_1 + 0x577) =
         (float)(*(int *)(lVar3 + 0x28) * param_2) / (float)*(uint *)(lVar3 + 0x20);
    *(float *)((longlong)param_1 + 0x2bbc) =
         (float)(*(int *)(lVar3 + 0x2c) * iVar4) / (float)*(uint *)(lVar3 + 0x24);
    *(float *)(param_1 + 0x578) =
         (float)(uint)(param_4 * *(int *)(lVar3 + 0x28)) / (float)*(uint *)(lVar3 + 0x20);
    iVar1 = *(int *)(lVar3 + 0x2c);
    uVar2 = *(uint *)(lVar3 + 0x24);
    *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
    *(float *)((longlong)param_1 + 0x2bc4) = (float)(uint)((iVar5 - iVar4) * iVar1) / (float)uVar2;
  }
  return;
}

