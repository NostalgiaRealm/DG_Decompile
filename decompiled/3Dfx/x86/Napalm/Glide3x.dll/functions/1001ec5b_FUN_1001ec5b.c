/*
 * FUN_1001ec5b at 1001ec5b
 * undefined __fastcall FUN_1001ec5b(int param_1)
 * Address ranges: 1001ec5b-1001ed09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001ec5b(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  FUN_1001ee3f(param_1);
  FUN_1001f210(param_1 + 0x214);
  piVar1 = *(int **)(param_1 + 0x20c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x3684);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x3680);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  iVar3 = iVar3 * 0x1510;
  if (piVar1 == *(int **)(iVar3 + 0x7c4 + iVar2)) {
    *(undefined4 *)(iVar3 + 0x7c4 + iVar2) = 0;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  FUN_100473a0(*(void **)(*(int *)(param_1 + 0x1e8) + 0x3680),
               *(int *)(*(int *)(param_1 + 0x1e8) + 0x3684),*(int **)(param_1 + 0x208));
  FUN_10047167(extraout_ECX,2,param_1 + 0x1f8,param_1 + 0x200);
  FUN_1001c82a(param_1);
  return;
}

