/*
 * FUN_1800561d0 at 1800561d0
 * DWORD * __fastcall FUN_1800561d0(longlong param_1, DWORD * param_2, ulonglong param_3, undefined4 param_4)
 * Address ranges: 1800561d0-180056274
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_1800561d0(longlong param_1,DWORD *param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *local_res8;
  DWORD local_18;
  DWORD local_14;
  uint local_10;
  uint local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_res8 = (longlong *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  plVar2 = *(longlong **)(lVar1 + 0x18 + (param_3 & 0xffffffff) * 0x28);
  iVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_4,&local_res8);
  if (iVar3 < 0) {
    local_res8 = (longlong *)0x0;
  }
  uVar4 = FUN_18004f180(lVar1,local_res8,&local_18);
  if ((char)uVar4 != '\0') {
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
    param_2[3] = local_c;
    param_2[4] = local_10 / local_c;
    param_2[5] = 0x20;
  }
  return param_2;
}

