/*
 * FUN_180052dc0 at 180052dc0
 * bool __cdecl FUN_180052dc0(undefined8 param_1, longlong param_2)
 * Address ranges: 180052dc0-180052e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180052dc0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int local_10 [2];
  longlong *local_8;
  
  plVar2 = *(longlong **)(param_2 + 8);
  local_10[0] = 0;
  iVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(param_2 + 0x3c) == 3) {
      iVar3 = 1;
    }
    else {
      local_8 = (longlong *)0x0;
      iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,local_10,&local_8);
      iVar3 = local_10[0];
      if ((-1 < iVar1) && (local_8 != (longlong *)0x0)) {
        (**(code **)(*local_8 + 0x10))();
        iVar3 = local_10[0];
      }
    }
  }
  return iVar3 == 1;
}

