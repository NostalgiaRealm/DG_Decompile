/*
 * FUN_18002ff58 at 18002ff58
 * undefined FUN_18002ff58(void)
 * Address ranges: 18002ff58-18003009b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ff58(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((((*param_2 != *(int *)(param_1 + 0xe60)) || (param_2[1] != *(int *)(param_1 + 0xe64))) ||
      (param_2[2] != *(int *)(param_1 + 0xe68))) || (param_2[3] != *(int *)(param_1 + 0xe6c))) {
    FUN_18002a810(param_1,0,0,0);
    plVar8 = *(longlong **)(param_1 + 0xf9b0);
    if ((plVar8 == (longlong *)0x0) &&
       (plVar8 = *(longlong **)(param_1 + 0xf9d0), plVar8 == (longlong *)0x0)) {
      fVar11 = 1.0;
      fVar9 = 1.0;
    }
    else {
      uVar7 = *(uint *)((longlong)plVar8 + 0x24);
      uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8,0);
      uVar5 = *(uint *)(plVar8 + 5);
      fVar9 = (float)uVar6 / (float)uVar7;
      uVar7 = (**(code **)(*plVar8 + 0x48))(plVar8,0);
      fVar11 = (float)uVar7 / (float)uVar5;
    }
    iVar1 = *param_2;
    iVar3 = param_2[1];
    iVar2 = param_2[2];
    iVar4 = param_2[3];
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xe68) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xe60) = uVar10;
    *(int *)(param_1 + 0xe70) = (int)((float)iVar1 * fVar9);
    *(int *)(param_1 + 0xe74) = (int)((float)iVar3 * fVar11);
    *(int *)(param_1 + 0xe78) = (int)((float)iVar2 * fVar9);
    *(int *)(param_1 + 0xe7c) = (int)((float)iVar4 * fVar11);
    *(undefined1 *)(param_1 + 0xf6c1) = 1;
  }
  return;
}

