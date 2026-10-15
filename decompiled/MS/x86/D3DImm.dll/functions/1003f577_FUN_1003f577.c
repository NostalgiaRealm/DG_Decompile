/*
 * FUN_1003f577 at 1003f577
 * undefined __fastcall FUN_1003f577(int param_1)
 * Address ranges: 1003f577-1003f682
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f577(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  
  if (*(char *)(param_1 + 0x930) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x50);
    }
    uVar6 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14d4 + uVar6 * 4);
      if (iVar1 != 0) {
        iVar2 = uVar6 * 100;
        iVar3 = *(int *)(param_1 + 0x4f8 + iVar2) * 3;
        if ((((((&DAT_1005d300)[iVar3] != '\0') && (*(int *)(param_1 + 0x4fc + iVar2) == 2)) ||
             (((&DAT_1005d301)[iVar3] != '\0' && (*(int *)(param_1 + 0x500 + iVar2) == 2)))) ||
            ((iVar3 = *(int *)(param_1 + 0x504 + iVar2) * 3, (&DAT_1005d300)[iVar3] != '\0' &&
             (*(int *)(param_1 + 0x508 + iVar2) == 2)))) ||
           (((&DAT_1005d301)[iVar3] != '\0' && (*(int *)(param_1 + 0x50c + iVar2) == 2)))) {
          iVar1 = *(int *)(iVar1 + 4);
          if ((*(int *)(iVar1 + 0x50) == local_8) || (*(int *)(iVar1 + 0x50) == iVar5)) {
            cVar4 = '\x01';
          }
          else {
            cVar4 = '\0';
          }
          if (*(char *)(param_1 + 0x8fc + uVar6) != cVar4) {
            (**(code **)(**(int **)(param_1 + 0x14) + 0x74))
                      (uVar6,0,*(undefined4 *)(iVar1 + 0x50),0,0,0,cVar4);
            *(char *)(param_1 + 0x8fc + uVar6) = cVar4;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    *(undefined1 *)(param_1 + 0x930) = 0;
  }
  return;
}

