/*
 * FUN_1004ac6a at 1004ac6a
 * int __thiscall FUN_1004ac6a(void * this, int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 1004ac6a-1004ad29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004ac6a(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_10042a6d(this,param_1);
  if (iVar2 == 0) {
    return -0x7fffbffe;
  }
  iVar5 = 0;
  FUN_1003d453(this);
  if (*(int *)(iVar2 + 0x18) != 0) goto LAB_1004acf5;
  iVar4 = (int)this + -4;
  iVar5 = -0x7fffbffe;
  if (this == (void *)0x0) {
    iVar4 = 0;
  }
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d2a0)[iVar3]) {
      iVar3 = 0;
      goto LAB_1004accd;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_1004ace6;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_1004accd:
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d1e0)[iVar3]) goto LAB_1004acf5;
  }
LAB_1004ace6:
  *(int *)(iVar2 + 0x18) = iVar4;
  iVar5 = -0x7ff8fff2;
  if (iVar4 != 0) {
    iVar5 = 0;
  }
LAB_1004acf5:
  *(undefined4 *)this = 0;
  piVar1 = *(int **)(iVar2 + 0x10);
  iVar4 = *piVar1;
  if (-1 < iVar5) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar4 = iVar4 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(iVar2 + 0x18);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return iVar5;
}

