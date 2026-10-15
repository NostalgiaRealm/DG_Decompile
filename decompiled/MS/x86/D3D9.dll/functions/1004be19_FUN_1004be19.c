/*
 * FUN_1004be19 at 1004be19
 * undefined __cdecl FUN_1004be19(int * param_1)
 * Address ranges: 1004be19-1004be80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1004be19(int *param_1)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  int *piVar4;
  void *local_c [2];
  
  iVar1 = *param_1;
  pvVar2 = (void *)param_1[1];
  local_c[0] = pvVar2;
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xf7c8));
  bVar3 = FUN_1004cdaa(iVar1 + 0xf768);
  if (!bVar3) {
    piVar4 = (int *)FUN_1004d44f((void *)(iVar1 + 0xf77c),(uint *)local_c);
    if (piVar4 != (int *)0x0) {
      FUN_1004d0b0((void *)(iVar1 + 0xf768),pvVar2,*piVar4,piVar4[1],(undefined4 *)0x1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xf7c8));
  return;
}

