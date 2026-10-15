/*
 * FUN_180039dc0 at 180039dc0
 * undefined __cdecl FUN_180039dc0(longlong * param_1, int * param_2)
 * Address ranges: 180039dc0-180039e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039dc0(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  FUN_1800228b0((longlong *)param_1[0x630]);
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x29ac) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)((longlong)param_1 + 0x29a4) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x3171) = 1;
  uVar1 = FUN_180022ca0(uVar1,*(int *)((longlong)param_1 + 0x2984));
  if (((int)uVar1 == -1) ||
     ((((lVar2 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))(), *param_2 == 0 &&
        (param_2[1] == 0)) && (param_2[2] == *(int *)(lVar2 + 0x20))) &&
      (param_2[3] == *(int *)(lVar2 + 0x24))))) {
    uVar3 = 0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    uVar3 = 1;
  }
  if (bVar4 != (*(int *)((longlong)param_1 + 0x2afc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2afc) = uVar3;
    *(undefined1 *)((longlong)param_1 + 0x2be2) = 1;
  }
  return;
}

