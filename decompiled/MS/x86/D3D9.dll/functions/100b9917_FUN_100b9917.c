/*
 * FUN_100b9917 at 100b9917
 * undefined __fastcall FUN_100b9917(int param_1)
 * Address ranges: 100b9917-100b9972
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b9917(int param_1)

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
  FUN_1000fc01((undefined4 *)(param_1 + 0x4f0));
  return;
}

