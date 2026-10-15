/*
 * FUN_18002b248 at 18002b248
 * undefined __fastcall FUN_18002b248(longlong * param_1)
 * Address ranges: 18002b248-18002b2b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002b248(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar2 = (longlong *)*param_1;
  (**(code **)(*plVar2 + 0x300))(plVar2,(int)param_1[1],*(undefined8 *)((longlong)param_1 + 0xc),0);
  lVar3 = *(longlong *)((longlong)param_1 + 0x14);
  if (lVar3 != 0) {
    uVar4 = *(ulonglong *)((longlong)param_1 + 0x1c);
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar2[0x638] + 0x17f0);
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    EnterCriticalSection(lpCriticalSection);
    FUN_180053724((longlong)lpCriticalSection,iVar1,(int)lVar3,uVar4);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

