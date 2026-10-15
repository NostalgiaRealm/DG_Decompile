/*
 * FUN_1002b55c at 1002b55c
 * undefined __fastcall FUN_1002b55c(int param_1)
 * Address ranges: 1002b55c-1002b5f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b55c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  FUN_1002b691(param_1);
  FUN_1002b9de(param_1 + 0x60);
  piVar1 = *(int **)(param_1 + 0x58);
  iVar3 = *(int *)(*(int *)(param_1 + 0x3c) + 0x3184);
  iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 0x3180);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  iVar3 = iVar3 * 0x1510;
  if (piVar1 == *(int **)(iVar3 + 0x7c4 + iVar2)) {
    *(undefined4 *)(iVar3 + 0x7c4 + iVar2) = 0;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4a0));
  FUN_100414af(*(void **)(*(int *)(param_1 + 0x3c) + 0x3180),
               *(int *)(*(int *)(param_1 + 0x3c) + 0x3184),*(int **)(param_1 + 0x54));
  FUN_10041276(extraout_ECX,1,param_1 + 0x4c,param_1 + 0x50);
  FUN_10026f2d(param_1);
  return;
}

