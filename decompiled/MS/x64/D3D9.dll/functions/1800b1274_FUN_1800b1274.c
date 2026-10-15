/*
 * FUN_1800b1274 at 1800b1274
 * undefined8 __fastcall FUN_1800b1274(longlong param_1, longlong * param_2)
 * Address ranges: 1800b1274-1800b12fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b1274(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != (longlong *)0x0) {
    if ((*(byte *)(param_2 + 10) & 2) == 0) {
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

