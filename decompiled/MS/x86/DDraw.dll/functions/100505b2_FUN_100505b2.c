/*
 * FUN_100505b2 at 100505b2
 * undefined1 __fastcall FUN_100505b2(void * param_1)
 * Address ranges: 100505b2-10050649
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100505b2(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  uint local_10;
  LPCRITICAL_SECTION local_c;
  
  local_c = (LPCRITICAL_SECTION)((int)param_1 + 0x1c);
  EnterCriticalSection(local_c);
  uVar4 = 1;
  iVar1 = FUN_100507cd(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_10050857((void *)(iVar1 + 4),(uint *)&stack0x00000008);
    if (piVar2 == (int *)0x0) {
      local_10 = 0xffffffff;
      piVar2 = (int *)FUN_10050857((void *)(iVar1 + 4),&local_10);
      if (piVar2 == (int *)0x0) goto LAB_10050635;
    }
    if ((piVar2[3] == 0) || (*(int *)(*piVar2 + 0x20) == 3)) {
      uVar5 = (**(code **)(**(int **)(*piVar2 + 0xc) + 0x20))(*(int **)(*piVar2 + 0xc));
      uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
      if (((uint)piVar2[5] <= uVar3) &&
         (((uint)piVar2[5] < uVar3 || ((uint)piVar2[4] <= (uint)uVar5)))) goto LAB_10050635;
    }
    uVar4 = 0;
  }
LAB_10050635:
  LeaveCriticalSection(local_c);
  return uVar4;
}

