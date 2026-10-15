/*
 * FUN_1003d904 at 1003d904
 * undefined4 __thiscall FUN_1003d904(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1003d904-1003da93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003d904(void *this,int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d2a0)[iVar3]) {
      cVar1 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
      if (cVar1 == '\0') goto LAB_1003d983;
      iVar3 = 0;
      goto LAB_1003d95a;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar2 = (undefined4 *)FUN_1005c755(8);
  if (puVar2 == (undefined4 *)0x0) goto LAB_1003da78;
  *puVar2 = &PTR_FUN_1005f7dc;
  goto LAB_1003da73;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_1003d95a:
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d180)[iVar3]) goto LAB_1003d983;
  }
  puVar2 = (undefined4 *)FUN_1005c755(8);
  if (puVar2 == (undefined4 *)0x0) goto LAB_1003da78;
  *puVar2 = &PTR_FUN_1005f784;
  goto LAB_1003da73;
LAB_1003d983:
  cVar1 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
  if (cVar1 != '\0') {
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d190)[iVar3]) goto LAB_1003d9f1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar3 = 0;
    do {
      if (*(int *)((int)this + iVar3 * 4 + 0xa60) != (&DAT_1005d190)[iVar3]) {
        iVar3 = 0;
        goto LAB_1003d9c4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    goto LAB_1003d9d6;
  }
LAB_1003d9f1:
  cVar1 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
  if (cVar1 == '\0') {
LAB_1003da3d:
    cVar1 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))();
    if (cVar1 != '\0') {
      return 0x80004002;
    }
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d1b0)[iVar3]) {
        return 0x80004002;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    puVar2 = (undefined4 *)FUN_1005c755(8);
    if (puVar2 == (undefined4 *)0x0) goto LAB_1003da78;
    *puVar2 = &PTR_FUN_1005f594;
  }
  else {
    iVar3 = 0;
    do {
      if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d1a0)[iVar3]) goto LAB_1003da3d;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    iVar3 = 0;
    do {
      if (*(int *)((int)this + iVar3 * 4 + 0xa60) != (&DAT_1005d1a0)[iVar3]) goto LAB_1003da3d;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    puVar2 = (undefined4 *)FUN_1005c755(8);
    if (puVar2 == (undefined4 *)0x0) goto LAB_1003da78;
    *puVar2 = &PTR_FUN_1005f658;
  }
  goto LAB_1003da73;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_1003d9c4:
    if (*(int *)((int)this + iVar3 * 4 + 0xa60) != (&DAT_1005d1a0)[iVar3]) goto LAB_1003d9f1;
  }
LAB_1003d9d6:
  puVar2 = (undefined4 *)FUN_1005c755(8);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1003da78:
    puVar2 = (undefined4 *)0x0;
    goto LAB_1003da7a;
  }
  *puVar2 = &PTR_FUN_1005f700;
LAB_1003da73:
  puVar2[1] = this;
LAB_1003da7a:
  uVar4 = 0x8007000e;
  *param_2 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = 0;
  }
  return uVar4;
}

