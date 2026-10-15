/*
 * FUN_180029d38 at 180029d38
 * undefined __fastcall FUN_180029d38(undefined8 * param_1)
 * Address ranges: 180029d38-180029da2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029d38(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar2 = (longlong *)*param_1;
  FUN_18001fd54(plVar2,*(uint *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14));
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

