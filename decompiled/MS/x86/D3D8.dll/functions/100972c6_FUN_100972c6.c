/*
 * FUN_100972c6 at 100972c6
 * undefined __fastcall FUN_100972c6(int param_1)
 * Address ranges: 100972c6-10097341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100972c6(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = uVar3 * 0x28;
    piVar1 = *(int **)(param_1 + 0x18 + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x18 + iVar2) = 0;
      *(undefined4 *)(param_1 + 0x24 + iVar2) = 0;
      *(undefined4 *)(param_1 + 0x20 + iVar2) = 0;
      *(undefined4 *)(param_1 + 0x1c + iVar2) = 0;
      *(undefined1 *)(param_1 + 0x28 + iVar2) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  piVar1 = *(int **)(param_1 + 0x4ec);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  return;
}

