/*
 * FUN_1001d79c at 1001d79c
 * undefined __thiscall FUN_1001d79c(void * this, int * param_1)
 * Address ranges: 1001d79c-1001d81d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d79c(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x315c) + 8);
  piVar2 = *(int **)(*(int *)(*(int *)((int)this + 0x315c) + 4) + 0x295c);
  lpCriticalSection = (LPCRITICAL_SECTION)(piVar2 + 0x128);
  EnterCriticalSection(lpCriticalSection);
  bVar3 = FUN_100431b3(piVar1);
  if ((*(char *)((int)piVar1 + 0xd5e) != '\0') || (bVar3 != (bool)*(char *)((int)piVar1 + 0xd5d))) {
    if (!bVar3) {
      piVar1[0xd] = 0;
    }
    FUN_10043316(piVar1,(int *)0x0,param_1);
    *(char *)((int)piVar1 + 0xd5d) = bVar3;
    *(undefined1 *)((int)piVar1 + 0xd5e) = 0;
    (**(code **)(*piVar2 + 0x38))(piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

