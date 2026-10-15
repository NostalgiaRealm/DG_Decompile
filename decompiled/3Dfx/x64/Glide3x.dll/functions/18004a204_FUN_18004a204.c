/*
 * FUN_18004a204 at 18004a204
 * undefined __fastcall FUN_18004a204(longlong param_1, ulonglong param_2)
 * Address ranges: 18004a204-18004a2b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004a204(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_res8;
  longlong local_28;
  longlong local_20;
  
  do {
    lVar3 = *(longlong *)(param_1 + 0xb40);
    local_res8 = 0;
    uVar6 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x10);
    lVar2 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
    local_20 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
    local_28 = lVar2;
    iVar5 = (**(code **)(*plVar4 + 0x40))(plVar4,0,&local_28,&local_res8);
    if (-1 < iVar5) {
      puVar1 = (ulonglong *)(lVar2 + local_res8);
      LOCK();
      uVar6 = *puVar1;
      if (uVar6 == 0) {
        *puVar1 = 0;
        uVar6 = 0;
      }
      UNLOCK();
      local_20 = 0;
      local_28 = 0;
      plVar4 = *(longlong **)(lVar3 + 0x10);
      (**(code **)(*plVar4 + 0x48))(plVar4,0,&local_28);
    }
  } while (uVar6 < param_2);
  return;
}

