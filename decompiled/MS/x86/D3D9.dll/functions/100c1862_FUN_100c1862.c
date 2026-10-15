/*
 * FUN_100c1862 at 100c1862
 * undefined1 __fastcall FUN_100c1862(void * param_1)
 * Address ranges: 100c1862-100c18c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100c1862(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  uint local_8;
  
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  uVar4 = 1;
  iVar1 = FUN_100c1ae3(param_1,(uint *)&stack0x00000004);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100c1b6d((void *)(iVar1 + 4),&local_8);
    if (piVar2 != (int *)0x0) {
      uVar5 = (**(code **)(**(int **)(*piVar2 + 0xc) + 0x20))(*(int **)(*piVar2 + 0xc));
      uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((uVar3 <= (uint)piVar2[5]) &&
         ((uVar3 < (uint)piVar2[5] || ((uint)uVar5 < (uint)piVar2[4])))) {
        uVar4 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return uVar4;
}

