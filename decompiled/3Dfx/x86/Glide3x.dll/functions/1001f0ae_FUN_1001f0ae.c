/*
 * FUN_1001f0ae at 1001f0ae
 * undefined __fastcall FUN_1001f0ae(int param_1)
 * Address ranges: 1001f0ae-1001f15c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001f0ae(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  FUN_1001f292(param_1);
  FUN_1001f65d(param_1 + 0x214);
  piVar1 = *(int **)(param_1 + 0x20c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x3304);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x3300);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  iVar3 = iVar3 * 0x1510;
  if (piVar1 == *(int **)(iVar3 + 0x7c4 + iVar2)) {
    *(undefined4 *)(iVar3 + 0x7c4 + iVar2) = 0;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  FUN_10043f97(*(void **)(*(int *)(param_1 + 0x1e8) + 0x3300),
               *(int *)(*(int *)(param_1 + 0x1e8) + 0x3304),*(int **)(param_1 + 0x208));
  FUN_10043d5e(extraout_ECX,2,param_1 + 0x1f8,param_1 + 0x200);
  FUN_1001a681(param_1);
  return;
}

