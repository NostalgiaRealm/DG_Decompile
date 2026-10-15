/*
 * FUN_180053d80 at 180053d80
 * longlong * __fastcall FUN_180053d80(undefined8 param_1, ulonglong param_2, undefined8 * param_3)
 * Address ranges: 180053d80-180053e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180053d80(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_18005db9c(0x20);
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = 0;
    *plVar1 = (longlong)&PTR_FUN_180065228;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    puVar2 = (undefined8 *)thunk_FUN_18005db9c(param_2);
    plVar1[2] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1[1] = param_2;
      FUN_18005f1b0(puVar2,param_3,param_2);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_180065228;
    FUN_18005dbc0((LPVOID)0x0);
    FUN_18005dbc0(plVar1);
  }
  return (longlong *)0x0;
}

