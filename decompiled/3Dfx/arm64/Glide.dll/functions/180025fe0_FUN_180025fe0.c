/*
 * FUN_180025fe0 at 180025fe0
 * int __cdecl FUN_180025fe0(longlong param_1)
 * Address ranges: 180025fe0-1800260ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180025fe0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *local_100;
  longlong *local_f8;
  undefined1 auStack_f0 [88];
  longlong local_98;
  undefined1 auStack_90 [88];
  longlong local_38;
  
  iVar8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x10);
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3180) + 8) + 0x2978);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  plVar6 = *(longlong **)(lVar1 + 8);
  local_f8 = (longlong *)0x0;
  (**(code **)(*plVar6 + 0x78))(plVar6,&local_f8);
  if (local_f8 != (longlong *)0x0) {
    iVar4 = (**(code **)(*local_f8 + 0x38))(local_f8,auStack_f0);
    iVar8 = 0;
    if (-1 < iVar4) {
      uVar2 = *(uint *)(lVar1 + 0x10);
      bVar3 = false;
      local_100 = (longlong *)0x0;
      iVar4 = 0;
      iVar8 = 0;
      do {
        plVar6 = *(longlong **)(lVar7 + (ulonglong)uVar2 * 0x28 + 0x18);
        iVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,iVar4,&local_100);
        if (iVar5 < 0) break;
        if (local_100 != (longlong *)0x0) {
          iVar5 = (**(code **)(*local_100 + 0x38))(local_100,auStack_90);
          if ((-1 < iVar5) && (local_38 == local_98)) {
            bVar3 = true;
            iVar8 = iVar4;
          }
          (**(code **)(*local_100 + 0x10))();
        }
        iVar4 = iVar4 + 1;
      } while (!bVar3);
    }
    (**(code **)(*local_f8 + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  return iVar8;
}

