/*
 * FUN_1000dbec at 1000dbec
 * undefined __thiscall FUN_1000dbec(void * this, int * param_1)
 * Address ranges: 1000dbec-1000dc6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000dbec(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x32dc) + 8);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x32dc) + 4) + 0x29d8);
  lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 0x128);
  EnterCriticalSection(lpCriticalSection);
  bVar3 = FUN_10045c9b(piVar1);
  if ((*(char *)((int)piVar1 + 0xd5e) != '\0') || (bVar3 != (bool)*(char *)((int)piVar1 + 0xd5d))) {
    if (!bVar3) {
      piVar1[0xd] = 0;
    }
    FUN_10045dfe(piVar1,(int *)0x0,param_1);
    *(char *)((int)piVar1 + 0xd5d) = bVar3;
    *(undefined1 *)((int)piVar1 + 0xd5e) = 0;
    (**(code **)(*piVar2 + 0x38))(piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

