/*
 * FUN_180055ee4 at 180055ee4
 * longlong * __fastcall FUN_180055ee4(undefined8 param_1, ulonglong param_2, undefined8 * param_3)
 * Address ranges: 180055ee4-180055f78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180055ee4(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_180060a9c(0x20);
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = 0;
    *plVar1 = (longlong)&PTR_FUN_1800674b8;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    puVar2 = (undefined8 *)thunk_FUN_180060a9c(param_2);
    plVar1[2] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1[1] = param_2;
      FUN_180061330(puVar2,param_3,param_2);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_1800674b8;
    FUN_180060ac0((LPVOID)0x0);
    FUN_180060ac0(plVar1);
  }
  return (longlong *)0x0;
}

