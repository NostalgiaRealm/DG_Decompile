/*
 * FUN_1800f8098 at 1800f8098
 * undefined FUN_1800f8098(void)
 * Address ranges: 1800f8098-1800f8133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800f8098(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_180102f80(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_18023c438;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    lVar2 = thunk_FUN_180102f80(param_1);
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      plVar1[1] = param_1;
      thunk_FUN_180001218(lVar2,param_2,param_1);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_18023c438;
    thunk_FUN_180102fc0();
    FUN_180102fc0(plVar1,0x20);
  }
  return (longlong *)0x0;
}

