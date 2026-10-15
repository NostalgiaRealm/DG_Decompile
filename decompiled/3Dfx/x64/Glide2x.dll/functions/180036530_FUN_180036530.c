/*
 * FUN_180036530 at 180036530
 * undefined __fastcall FUN_180036530(longlong * param_1, int * param_2)
 * Address ranges: 180036530-1800365e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036530(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  bool bVar8;
  
  FUN_18002102c((longlong *)param_1[0x630]);
  (**(code **)(*param_1 + 0x2a0))(param_1);
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  iVar1 = *(int *)((longlong)param_1 + 0x2984);
  *(undefined1 *)((longlong)param_1 + 0x3171) = 1;
  *(int *)((longlong)param_1 + 0x29a4) = iVar2;
  *(int *)(param_1 + 0x535) = iVar3;
  *(int *)((longlong)param_1 + 0x29ac) = iVar4;
  *(int *)(param_1 + 0x536) = iVar5;
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) &&
     (((lVar6 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))(), *param_2 != 0 ||
       (param_2[1] != 0)) ||
      ((param_2[2] != *(int *)(lVar6 + 0x20) || (param_2[3] != *(int *)(lVar6 + 0x24))))))) {
    bVar8 = false;
    uVar7 = 1;
  }
  else {
    bVar8 = true;
    uVar7 = 0;
  }
  if (bVar8 != (*(int *)((longlong)param_1 + 0x2afc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2afc) = uVar7;
    *(undefined1 *)((longlong)param_1 + 0x2be2) = 1;
  }
  return;
}

