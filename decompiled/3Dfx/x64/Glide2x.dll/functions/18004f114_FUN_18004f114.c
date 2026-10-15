/*
 * FUN_18004f114 at 18004f114
 * undefined8 __fastcall FUN_18004f114(ulonglong param_1, longlong param_2)
 * Address ranges: 18004f114-18004f170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004f114(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  longlong *local_res10 [3];
  
  plVar1 = *(longlong **)(param_2 + 8);
  uVar3 = 0;
  local_res8 = param_1 & 0xffffffff00000000;
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_2 + 0x3c) == 3) {
      uVar3 = 1;
    }
    else {
      local_res10[0] = (longlong *)0x0;
      iVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&local_res8,local_res10);
      if ((-1 < iVar2) && (local_res10[0] != (longlong *)0x0)) {
        (**(code **)(*local_res10[0] + 0x10))();
      }
      uVar3 = local_res8 & 0xffffffff;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 == 1);
}

