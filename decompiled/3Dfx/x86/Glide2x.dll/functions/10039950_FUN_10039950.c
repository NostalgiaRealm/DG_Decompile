/*
 * FUN_10039950 at 10039950
 * undefined1 __fastcall FUN_10039950(void * param_1)
 * Address ranges: 10039950-100399f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10039950(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  uint local_10;
  LPCRITICAL_SECTION local_c;
  
  local_10 = 0;
  local_c = (LPCRITICAL_SECTION)((int)param_1 + 0x1c);
  EnterCriticalSection(local_c);
  uVar4 = 1;
  iVar1 = FUN_10039b06(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_10039b90((void *)(iVar1 + 4),&local_10);
    if (piVar2 == (int *)0x0) {
      local_10 = 0xffffffff;
      piVar2 = (int *)FUN_10039b90((void *)(iVar1 + 4),&local_10);
      if (piVar2 == (int *)0x0) goto LAB_100399dc;
    }
    if ((piVar2[3] == 0) || (*(int *)(*piVar2 + 0x20) == 3)) {
      uVar5 = (**(code **)(**(int **)(*piVar2 + 0xc) + 0x20))(*(int **)(*piVar2 + 0xc));
      uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
      if (((uint)piVar2[5] <= uVar3) &&
         (((uint)piVar2[5] < uVar3 || ((uint)piVar2[4] <= (uint)uVar5)))) goto LAB_100399dc;
    }
    uVar4 = 0;
  }
LAB_100399dc:
  LeaveCriticalSection(local_c);
  return uVar4;
}

