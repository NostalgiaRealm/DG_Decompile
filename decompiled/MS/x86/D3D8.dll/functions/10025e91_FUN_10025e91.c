/*
 * FUN_10025e91 at 10025e91
 * undefined1 __thiscall FUN_10025e91(void * this, undefined4 param_1)
 * Address ranges: 10025e91-10025ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10025e91(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)((int)this + 4);
  if ((*(int *)(iVar1 + 0x78) == 3) || (*(int *)(iVar1 + 0x78) == 4)) {
    cVar3 = (**(code **)(**(int **)(iVar1 + 0x4c) + 0x38))(param_1,*(undefined4 *)(iVar1 + 0x50));
    iVar2 = *(int *)(iVar1 + 0x60);
    if (cVar3 == '\0') {
      if (iVar2 == -1) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(int **)(iVar1 + 0x4c) + 0x38))
                          (param_1,*(undefined4 *)(*(int *)(iVar1 + 0x54) + iVar2 * 4));
      }
    }
    else {
      uVar4 = iVar2 == -1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

