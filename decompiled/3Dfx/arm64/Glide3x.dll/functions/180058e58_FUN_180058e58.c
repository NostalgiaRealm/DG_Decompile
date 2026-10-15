/*
 * FUN_180058e58 at 180058e58
 * longlong * __cdecl FUN_180058e58(undefined8 param_1, SIZE_T param_2, undefined8 * param_3)
 * Address ranges: 180058e58-180058ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180058e58(undefined8 param_1,SIZE_T param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1800636c0(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_18006a4c8;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    puVar2 = (undefined8 *)thunk_FUN_1800636c0(param_2);
    plVar1[2] = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1[1] = param_2;
      thunk_FUN_1800010d8(puVar2,param_3,param_2);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
    *plVar1 = (longlong)&PTR_FUN_18006a4c8;
    thunk_FUN_180063700((LPVOID)0x0);
    FUN_180063700(plVar1);
  }
  return (longlong *)0x0;
}

