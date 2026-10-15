/*
 * FUN_180015348 at 180015348
 * undefined __cdecl FUN_180015348(longlong * param_1, int * param_2)
 * Address ranges: 180015348-18001542b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015348(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  FUN_180016b90((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x2a24) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)((longlong)param_1 + 0x2a1c) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x32f1) = 1;
  uVar1 = FUN_180016f80((longlong *)param_1[0x660],*(int *)((longlong)param_1 + 0x29fc));
  if ((uVar1 == 0xffffffff) ||
     ((((lVar2 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))(), *param_2 == 0 &&
        (param_2[1] == 0)) && (param_2[2] == *(int *)(lVar2 + 0x20))) &&
      (param_2[3] == *(int *)(lVar2 + 0x24))))) {
    uVar3 = 0;
    bVar4 = true;
  }
  else {
    bVar4 = false;
    uVar3 = 1;
  }
  if (bVar4 != (*(int *)((longlong)param_1 + 0x2b94) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2b94) = uVar3;
    *(undefined1 *)((longlong)param_1 + 0x2c7a) = 1;
  }
  return;
}

