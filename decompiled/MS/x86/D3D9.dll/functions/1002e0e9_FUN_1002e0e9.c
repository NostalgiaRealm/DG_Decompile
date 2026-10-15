/*
 * FUN_1002e0e9 at 1002e0e9
 * bool __fastcall FUN_1002e0e9(int param_1)
 * Address ranges: 1002e0e9-1002e17e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002e0e9(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 extraout_ECX;
  byte bVar5;
  
  FUN_1002e018(param_1);
  iVar1 = *(int *)(param_1 + 0x90);
  bVar3 = FUN_1002d5ae((void *)(param_1 + 0x4c),*(HANDLE *)(param_1 + 0xb4),
                       *(int *)(param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,extraout_ECX,
                       *(char *)(param_1 + 0xaf));
  *(undefined1 *)(param_1 + 0xaf) = 0;
  bVar5 = 1;
  if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x34) >> 5 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((iVar1 == 0) && (bVar3)) && (bVar2)) {
    cVar4 = (**(code **)(**(int **)(param_1 + 0x50) + 0x14))
                      (*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
    if (cVar4 == '\0') goto LAB_1002e16f;
  }
  bVar5 = 0;
LAB_1002e16f:
  *(byte *)(param_1 + 0xae) = *(byte *)(param_1 + 0xae) | bVar5;
  return bVar3;
}

