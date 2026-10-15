/*
 * FUN_180012e6c at 180012e6c
 * undefined __fastcall FUN_180012e6c(longlong * param_1, int * param_2)
 * Address ranges: 180012e6c-180012f1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012e6c(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  bool bVar5;
  
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)((longlong)param_1 + 0x2a1c) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x2a24) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x32f1) = 1;
  uVar2 = FUN_180014854((longlong *)param_1[0x660],*(int *)((longlong)param_1 + 0x29fc));
  if (uVar2 != 0xffffffff) {
    lVar3 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))();
    if ((((*param_2 != 0) || (param_2[1] != 0)) || (param_2[2] != *(int *)(lVar3 + 0x20))) ||
       (param_2[3] != *(int *)(lVar3 + 0x24))) {
      bVar5 = false;
      uVar4 = 1;
      goto LAB_180012ef5;
    }
  }
  uVar4 = 0;
  bVar5 = true;
LAB_180012ef5:
  if (bVar5 != (*(int *)((longlong)param_1 + 0x2b94) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2b94) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x2c7a) = 1;
  }
  return;
}

