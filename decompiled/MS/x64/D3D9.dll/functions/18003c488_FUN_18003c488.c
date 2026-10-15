/*
 * FUN_18003c488 at 18003c488
 * undefined __fastcall FUN_18003c488(longlong param_1, int * param_2)
 * Address ranges: 18003c488-18003c5c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c488(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  
  if ((((*param_2 != *(int *)(param_1 + 0xe60)) || (param_2[1] != *(int *)(param_1 + 0xe64))) ||
      (param_2[2] != *(int *)(param_1 + 0xe68))) || (param_2[3] != *(int *)(param_1 + 0xe6c))) {
    FUN_180038960(param_1,0,0,0);
    plVar9 = *(longlong **)(param_1 + 0xf9b0);
    if ((plVar9 == (longlong *)0x0) &&
       (plVar9 = *(longlong **)(param_1 + 0xf9d0), plVar9 == (longlong *)0x0)) {
      fVar11 = 1.0;
      fVar10 = 1.0;
    }
    else {
      uVar8 = *(uint *)((longlong)plVar9 + 0x24);
      uVar7 = (**(code **)(*plVar9 + 0x40))(plVar9,0);
      uVar1 = *(uint *)(plVar9 + 5);
      fVar11 = (float)uVar7 / (float)uVar8;
      uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9,0);
      fVar10 = (float)uVar8 / (float)uVar1;
    }
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xe60) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xe68) = uVar6;
    *(int *)(param_1 + 0xe70) = (int)((float)iVar2 * fVar11);
    *(int *)(param_1 + 0xe74) = (int)((float)iVar3 * fVar10);
    *(int *)(param_1 + 0xe78) = (int)((float)iVar4 * fVar11);
    *(int *)(param_1 + 0xe7c) = (int)((float)iVar5 * fVar10);
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
  }
  return;
}

