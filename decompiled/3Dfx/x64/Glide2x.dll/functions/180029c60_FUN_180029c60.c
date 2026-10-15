/*
 * FUN_180029c60 at 180029c60
 * undefined __fastcall FUN_180029c60(undefined8 * param_1)
 * Address ranges: 180029c60-180029cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029c60(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar2 = (longlong *)*param_1;
  FUN_18001f9d0(plVar2,*(uint *)(param_1 + 1),*(float **)((longlong)param_1 + 0xc),
                *(byte *)((longlong)param_1 + 0x14));
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar2[0x638] + 0x17f0);
    uVar4 = *(ulonglong *)((longlong)param_1 + 0x24);
    EnterCriticalSection(lpCriticalSection);
    FUN_18005327c((longlong)lpCriticalSection,iVar1,(int)lVar3,uVar4);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

