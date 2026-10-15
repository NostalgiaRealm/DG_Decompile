/*
 * FUN_1800e3070 at 1800e3070
 * longlong __fastcall FUN_1800e3070(longlong param_1)
 * Address ranges: 1800e3070-1800e3106
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800e3070(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_1 + 0xb40);
  local_res8 = 0;
  lVar5 = 0;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
  local_10 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
  local_18 = lVar1;
  iVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,0,&local_18,&local_res8);
  if (-1 < iVar4) {
    plVar3 = (longlong *)(lVar1 + local_res8);
    LOCK();
    lVar5 = *plVar3;
    if (lVar5 == 0) {
      *plVar3 = 0;
      lVar5 = 0;
    }
    UNLOCK();
    local_10 = 0;
    local_18 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    (**(code **)(*plVar3 + 0x48))(plVar3,0,&local_18);
  }
  return lVar5;
}

