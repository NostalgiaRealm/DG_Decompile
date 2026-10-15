/*
 * FUN_1800a9de8 at 1800a9de8
 * undefined FUN_1800a9de8(void)
 * Address ranges: 1800a9de8-1800a9f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a9de8(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)0x0;
  if (param_1 != (longlong *)0x0) {
    plVar2 = param_1 + 0xd04;
  }
  uVar5 = 0;
  if ((int)param_1[0xd06] != 0) {
    do {
      plVar3 = *(longlong **)(param_1[0xd05] + uVar5 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,plVar2);
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xd06));
  }
  if (param_1[5] != 0) {
    *(undefined1 *)(param_1 + 0x5a) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    if ((int)param_1[0x1e6] != 0) {
      uVar5 = 0;
      if ((int)param_1[0x1e6] == 0) {
        puVar4 = (undefined8 *)&DAT_00000008;
        goto LAB_1800a9e90;
      }
      do {
        puVar4 = (undefined8 *)(param_1[0x1e5] + uVar5 * 0x18 + 0x10);
LAB_1800a9e90:
        FUN_180102fc0(*puVar4,0x408);
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1e6));
    }
    thunk_FUN_180102fc0(param_1[0x1e4]);
    param_1[0x1e4] = 0;
    param_1[0x1e5] = 0;
    *(undefined4 *)(param_1 + 0x1e6) = 0;
    *(undefined4 *)((longlong)param_1 + 0xf34) = 0;
    FUN_180003588(param_1,0);
    (**(code **)(*(longlong *)param_1[5] + 0x18))();
    (**(code **)(*(longlong *)param_1[5] + 8))();
    param_1[5] = 0;
    FUN_180103118(*(undefined8 *)(param_1[0x1c2] + -8));
    param_1[0x1c2] = 0;
    if (param_1[0x1d2] != 0) {
      (*__imp_USER32_dll_DestroyIcon)();
      param_1[0x1d2] = 0;
    }
  }
  return;
}

