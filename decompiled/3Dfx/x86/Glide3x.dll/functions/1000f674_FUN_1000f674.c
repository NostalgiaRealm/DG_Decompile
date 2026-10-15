/*
 * FUN_1000f674 at 1000f674
 * int __fastcall FUN_1000f674(int param_1)
 * Address ranges: 1000f674-1000f71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000f674(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_10;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  if (*(int *)(iVar2 + 0xeb) == 1) {
    if (*(int *)(iVar1 + 0x2ce4) == 1) {
      iStack_10 = 2;
    }
    else {
      if (*(int *)(iVar1 + 0x2ce4) != 2) {
        return 0;
      }
      iStack_10 = 4;
    }
  }
  else {
    if (*(int *)(iVar2 + 0xeb) != 2) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xe7) == 1) {
      iStack_10 = 2;
    }
    else {
      iStack_10 = 0;
      if (*(int *)(iVar2 + 0xe7) == 2) {
        iStack_10 = 4;
      }
    }
    if (iStack_10 == 0) {
      return 0;
    }
  }
  uVar4 = *(uint *)(iVar2 + 0xef);
  if (*(uint *)(iVar2 + 0xef) == 0) {
    uVar3 = *(uint *)(iVar1 + 0xa0) / *(uint *)(iVar1 + 0x98);
    uVar4 = *(uint *)(iVar1 + 0xa4) / *(uint *)(iVar1 + 0x9c);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
  }
  if (*(uint *)(iVar1 + 0x2d20) != uVar4) {
    *(uint *)(iVar1 + 0x2d20) = uVar4;
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x32d0) = 1;
  }
  return iStack_10;
}

