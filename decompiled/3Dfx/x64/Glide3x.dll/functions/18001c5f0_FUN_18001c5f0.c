/*
 * FUN_18001c5f0 at 18001c5f0
 * undefined __fastcall FUN_18001c5f0(undefined8 * param_1)
 * Address ranges: 18001c5f0-18001c675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001c5f0(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 3);
  plVar6 = (longlong *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  lVar7 = param_1[2];
  *(undefined4 *)((longlong)plVar6 + 0x43fc) = *(undefined4 *)(param_1 + 4);
  FUN_18000a43c(plVar6,uVar3,uVar4,lVar7,uVar2,cVar1);
  lVar7 = *(longlong *)((longlong)param_1 + 0x24);
  if (lVar7 != 0) {
    uVar8 = *(ulonglong *)((longlong)param_1 + 0x2c);
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar6[0x668] + 0x17f0);
    iVar5 = *(int *)((longlong)param_1 + 0x34);
    EnterCriticalSection(lpCriticalSection);
    FUN_180055888((longlong)lpCriticalSection,iVar5,(int)lVar7,uVar8);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

