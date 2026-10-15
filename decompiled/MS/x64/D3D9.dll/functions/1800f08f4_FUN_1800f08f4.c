/*
 * FUN_1800f08f4 at 1800f08f4
 * longlong * __fastcall FUN_1800f08f4(ulonglong param_1, undefined8 * param_2)
 * Address ranges: 1800f08f4-1800f0988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800f08f4(ulonglong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1800fbccc(0x20);
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = 0;
    *plVar1 = (longlong)&PTR_FUN_1801073f8;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    puVar2 = (undefined8 *)thunk_FUN_1800fbccc(param_1);
    plVar1[2] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1[1] = param_1;
      FUN_1800fbec0(puVar2,param_2,param_1);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_1801073f8;
    FUN_1800fbcf0((LPVOID)0x0);
    FUN_1800fbcf0(plVar1);
  }
  return (longlong *)0x0;
}

