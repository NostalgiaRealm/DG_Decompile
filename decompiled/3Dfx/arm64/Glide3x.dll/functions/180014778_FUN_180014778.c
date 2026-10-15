/*
 * FUN_180014778 at 180014778
 * undefined __cdecl FUN_180014778(longlong * param_1, int param_2)
 * Address ranges: 180014778-180014903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014778(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)(param_1 + 0x593) = param_2;
  if (*(int *)((longlong)param_1 + 0x2a14) != param_2) {
    *(int *)((longlong)param_1 + 0x2a14) = param_2;
    iVar6 = *(int *)((longlong)param_1 + 0x2bd4);
    iVar5 = (int)param_1[0x57a];
    uVar3 = *(uint *)(param_1 + 0x658) & 0xffff0000 | *(uint *)(param_1 + 0x658) & 0x3fff | 0x8000;
    *(uint *)(param_1 + 0x658) = uVar3;
    iVar1 = iVar6 + *(int *)((longlong)param_1 + 0x2bdc);
    iVar2 = iVar5 + (int)param_1[0x57b];
    iVar7 = iVar5;
    if ((int)param_1[0x57b] < 0) {
      uVar3 = uVar3 ^ 0x4000;
      *(uint *)(param_1 + 0x658) = uVar3;
      iVar7 = iVar2;
      iVar2 = iVar5;
    }
    iVar5 = iVar6;
    if (*(int *)((longlong)param_1 + 0x2bdc) < 0) {
      uVar3 = uVar3 ^ 0x8000;
      *(uint *)(param_1 + 0x658) = uVar3;
      iVar5 = iVar1;
      iVar1 = iVar6;
    }
    iVar6 = iVar5;
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x658) = uVar3 ^ 0x8000;
      iVar6 = *(int *)((longlong)param_1 + 0xac) - iVar1;
      iVar1 = *(int *)((longlong)param_1 + 0xac) - iVar5;
    }
    *(undefined1 *)(param_1 + 0x65e) = 1;
    uVar3 = FUN_180016f80((longlong *)param_1[0x660],*(int *)((longlong)param_1 + 0x29fc));
    if (uVar3 != 0xffffffff) {
      lVar4 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))();
      *(float *)(param_1 + 0x577) =
           (float)(*(int *)(lVar4 + 0x28) * iVar7) / (float)*(uint *)(lVar4 + 0x20);
      *(float *)((longlong)param_1 + 0x2bbc) =
           (float)(*(int *)(lVar4 + 0x2c) * iVar6) / (float)*(uint *)(lVar4 + 0x24);
      *(float *)(param_1 + 0x578) =
           (float)(uint)((iVar2 - iVar7) * *(int *)(lVar4 + 0x28)) / (float)*(uint *)(lVar4 + 0x20);
      iVar2 = *(int *)(lVar4 + 0x2c);
      uVar3 = *(uint *)(lVar4 + 0x24);
      *(undefined1 *)((longlong)param_1 + 0x2c7c) = 1;
      *(float *)((longlong)param_1 + 0x2bc4) = (float)(uint)((iVar1 - iVar6) * iVar2) / (float)uVar3
      ;
    }
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

