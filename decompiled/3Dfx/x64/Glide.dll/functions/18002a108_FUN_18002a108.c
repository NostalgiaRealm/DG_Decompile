/*
 * FUN_18002a108 at 18002a108
 * undefined __fastcall FUN_18002a108(undefined8 * param_1)
 * Address ranges: 18002a108-18002a172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a108(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  plVar2 = (longlong *)*param_1;
  FUN_18001fe78(plVar2,*(uint *)(param_1 + 1),*(float **)((longlong)param_1 + 0xc),
                *(byte *)((longlong)param_1 + 0x14));
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar2[0x638] + 0x17f0);
    uVar4 = *(ulonglong *)((longlong)param_1 + 0x24);
    EnterCriticalSection(lpCriticalSection);
    FUN_180053724((longlong)lpCriticalSection,iVar1,(int)lVar3,uVar4);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

