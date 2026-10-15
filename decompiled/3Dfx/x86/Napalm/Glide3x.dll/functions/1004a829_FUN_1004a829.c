/*
 * FUN_1004a829 at 1004a829
 * int __thiscall FUN_1004a829(void * this, int param_1)
 * Address ranges: 1004a829-1004a8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a829(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  int iVar6;
  undefined1 local_cc [88];
  int local_74;
  undefined1 local_70 [88];
  int local_18;
  LPCRITICAL_SECTION local_14;
  void *local_10;
  int *local_c;
  int *local_8;
  
  iVar6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  local_14 = lpCriticalSection;
  local_10 = this;
  EnterCriticalSection(lpCriticalSection);
  local_c = (int *)0x0;
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),&local_c);
  if (local_c != (int *)0x0) {
    iVar3 = (**(code **)(*local_c + 0x1c))(local_c,local_cc);
    if (-1 < iVar3) {
      bVar2 = false;
      iVar5 = 0;
      local_8 = (int *)0x0;
      iVar3 = *(int *)(param_1 + 8);
      do {
        piVar1 = *(int **)((int)local_10 + iVar3 * 0x28 + 0x18);
        iVar4 = (**(code **)(*piVar1 + 0x1c))(piVar1,iVar5,&local_8);
        lpCriticalSection = local_14;
        if (iVar4 < 0) break;
        if (local_8 != (int *)0x0) {
          iVar4 = (**(code **)(*local_8 + 0x1c))(local_8,local_70);
          if ((-1 < iVar4) && (local_18 == local_74)) {
            bVar2 = true;
            iVar6 = iVar5;
          }
          (**(code **)(*local_8 + 8))(local_8);
        }
        iVar5 = iVar5 + 1;
        lpCriticalSection = local_14;
      } while (!bVar2);
    }
    (**(code **)(*local_c + 8))(local_c);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar6;
}

