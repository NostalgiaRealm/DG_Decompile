/*
 * FUN_10048966 at 10048966
 * undefined4 __thiscall FUN_10048966(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10048966-10048aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10048966(void *this,int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d2a0)[iVar3]) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
      if (cVar1 == '\0') goto LAB_100489e5;
      iVar3 = 0;
      goto LAB_100489bc;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar2 = (undefined4 *)FUN_1005c755(8);
  if (puVar2 == (undefined4 *)0x0) goto LAB_10048a90;
  *puVar2 = &PTR_FUN_1005f55c;
  goto LAB_10048a8b;
LAB_100489e5:
  cVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
  if (cVar1 == '\0') {
LAB_10048a1d:
    cVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
    if (cVar1 == '\0') {
LAB_10048a55:
      cVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
      if (cVar1 != '\0') {
        return 0x80004002;
      }
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d120)[iVar3]) {
          return 0x80004002;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      puVar2 = (undefined4 *)FUN_1005c755(8);
      if (puVar2 == (undefined4 *)0x0) goto LAB_10048a90;
      *puVar2 = &PTR_FUN_1005f4c4;
    }
    else {
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d110)[iVar3]) goto LAB_10048a55;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      puVar2 = (undefined4 *)FUN_1005c755(8);
      if (puVar2 == (undefined4 *)0x0) goto LAB_10048a90;
      *puVar2 = &PTR_FUN_1005f4e4;
    }
  }
  else {
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d100)[iVar3]) goto LAB_10048a1d;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    puVar2 = (undefined4 *)FUN_1005c755(8);
    if (puVar2 == (undefined4 *)0x0) goto LAB_10048a90;
    *puVar2 = &PTR_FUN_1005f514;
  }
  goto LAB_10048a8b;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100489bc:
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d0f0)[iVar3]) goto LAB_100489e5;
  }
  puVar2 = (undefined4 *)FUN_1005c755(8);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10048a90:
    puVar2 = (undefined4 *)0x0;
    goto LAB_10048a92;
  }
  *puVar2 = &PTR_FUN_1005f538;
LAB_10048a8b:
  puVar2[1] = this;
LAB_10048a92:
  uVar4 = 0x8007000e;
  *param_2 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = 0;
  }
  return uVar4;
}

