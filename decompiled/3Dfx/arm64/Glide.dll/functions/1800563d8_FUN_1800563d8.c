/*
 * FUN_1800563d8 at 1800563d8
 * longlong * __cdecl FUN_1800563d8(undefined8 param_1, SIZE_T param_2, undefined8 * param_3)
 * Address ranges: 1800563d8-180056473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800563d8(undefined8 param_1,SIZE_T param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1800609d8(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_180067238;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    puVar2 = (undefined8 *)thunk_FUN_1800609d8(param_2);
    plVar1[2] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1[1] = param_2;
      thunk_FUN_180001218(puVar2,param_3,param_2);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_180067238;
    thunk_FUN_180060a18((LPVOID)0x0);
    FUN_180060a18(plVar1);
  }
  return (longlong *)0x0;
}

