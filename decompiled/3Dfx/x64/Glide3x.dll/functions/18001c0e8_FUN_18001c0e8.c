/*
 * FUN_18001c0e8 at 18001c0e8
 * undefined __fastcall FUN_18001c0e8(undefined8 * param_1)
 * Address ranges: 18001c0e8-18001c164
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c0e8(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  cVar1 = *(char *)(param_1 + 3);
  plVar5 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  plVar6 = (longlong *)param_1[2];
  *(undefined4 *)((longlong)plVar5 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_18000a3b8(plVar5,uVar2,uVar3,plVar6,cVar1);
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    uVar8 = param_1[5];
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar5[0x668] + 0x17f0);
    iVar4 = *(int *)(param_1 + 6);
    EnterCriticalSection(lpCriticalSection);
    FUN_180055888((longlong)lpCriticalSection,iVar4,(int)lVar7,uVar8);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

