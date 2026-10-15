/*
 * FUN_14001b090 at 14001b090
 * undefined1 * __cdecl FUN_14001b090(undefined8 * param_1, char * param_2)
 * Address ranges: 14001b090-14001b0df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_14001b090(undefined8 *param_1,char *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140024d20(param_2);
  thunk_FUN_140001000(param_1,(undefined8 *)param_2,uVar2 & 0xffffffff);
  puVar1 = (undefined1 *)((longlong)param_1 + (uVar2 & 0xffffffff));
  *puVar1 = 0;
  return puVar1 + 1;
}

