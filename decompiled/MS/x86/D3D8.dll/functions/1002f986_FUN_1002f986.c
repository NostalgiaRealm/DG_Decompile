/*
 * FUN_1002f986 at 1002f986
 * undefined __fastcall FUN_1002f986(int param_1)
 * Address ranges: 1002f986-1002f9df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002f986(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x24) + iVar2 * 8) != 0) {
      FUN_1009ea70(*(void **)(*(int *)(param_1 + 8) + 0x172c0),
                   *(uint *)(*(int *)(param_1 + 0x24) + iVar2 * 8),(undefined *)0x0,'\0');
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + iVar2 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}

