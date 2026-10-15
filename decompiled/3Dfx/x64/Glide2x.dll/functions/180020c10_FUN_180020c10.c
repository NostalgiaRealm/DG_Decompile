/*
 * FUN_180020c10 at 180020c10
 * int __fastcall FUN_180020c10(longlong param_1)
 * Address ranges: 180020c10-180020d06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180020c10(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined1 local_e8 [88];
  longlong local_90;
  undefined1 local_88 [88];
  longlong local_30;
  
  iVar8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2978);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x620);
  EnterCriticalSection(lpCriticalSection);
  plVar4 = *(longlong **)(lVar2 + 8);
  local_res10 = (longlong *)0x0;
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_res10);
  if (local_res10 != (longlong *)0x0) {
    iVar6 = (**(code **)(*local_res10 + 0x38))(local_res10,local_e8);
    iVar8 = 0;
    if (-1 < iVar6) {
      uVar1 = *(uint *)(lVar2 + 0x10);
      bVar5 = false;
      local_res8 = (longlong *)0x0;
      iVar6 = 0;
      iVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + 0x18 + (ulonglong)uVar1 * 0x28);
        iVar7 = (**(code **)(*plVar4 + 0x38))(plVar4,iVar6,&local_res8);
        if (iVar7 < 0) break;
        if (local_res8 != (longlong *)0x0) {
          iVar7 = (**(code **)(*local_res8 + 0x38))(local_res8,local_88);
          if ((-1 < iVar7) && (local_30 == local_90)) {
            bVar5 = true;
            iVar8 = iVar6;
          }
          (**(code **)(*local_res8 + 0x10))();
        }
        iVar6 = iVar6 + 1;
      } while (!bVar5);
    }
    (**(code **)(*local_res10 + 0x10))();
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar8;
}

