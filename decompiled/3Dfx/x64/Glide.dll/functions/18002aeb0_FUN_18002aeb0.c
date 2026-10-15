/*
 * FUN_18002aeb0 at 18002aeb0
 * undefined __fastcall FUN_18002aeb0(longlong * param_1)
 * Address ranges: 18002aeb0-18002af1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002aeb0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar2 = (longlong *)*param_1;
  (**(code **)(*plVar2 + 0x2f8))
            (plVar2,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),
             *(undefined8 *)((longlong)param_1 + 0x14));
  lVar3 = *(longlong *)((longlong)param_1 + 0x1c);
  if (lVar3 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar2[0x638] + 0x17f0);
    uVar4 = param_1[5];
    EnterCriticalSection(lpCriticalSection);
    FUN_180053724((longlong)lpCriticalSection,iVar1,(int)lVar3,uVar4);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

