/*
 * FUN_1800ab350 at 1800ab350
 * undefined FUN_1800ab350(void)
 * Address ranges: 1800ab350-1800ab3ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ab350(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != (longlong *)0x0) {
    if ((*(uint *)(param_2 + 10) >> 1 & 1) == 0) {
      return 0x8876086c;
    }
    if (*(int *)((longlong)param_2 + 0x54) != 0) {
      return 0x8876086c;
    }
    if (param_2[5] != param_1) {
      return 0x8876086c;
    }
    (**(code **)(*param_2 + 0x30))(param_2);
    if ((longlong *)param_2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[6] + 8))();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[6];
    (**(code **)(*plVar1 + 0x38))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(longlong **)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0xc509) = 1;
  return 0;
}

