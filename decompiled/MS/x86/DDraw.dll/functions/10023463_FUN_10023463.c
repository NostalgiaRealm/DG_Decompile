/*
 * FUN_10023463 at 10023463
 * int __thiscall FUN_10023463(void * this, int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 10023463-10023518
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10023463(void *this,int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1002356c(this,param_1);
  if (iVar2 == 0) {
    return -0x7fffbffe;
  }
  iVar5 = 0;
  FUN_10022ecc(this);
  if (*(int *)(iVar2 + 0x18) != 0) goto LAB_100234e4;
  iVar4 = (int)this + -4;
  iVar5 = -0x7fffbffe;
  if (this == (void *)0x0) {
    iVar4 = 0;
  }
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_10062560)[iVar3]) {
      iVar3 = 0;
      goto LAB_100234c6;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_100234df;
  while (iVar3 = iVar3 + 1, iVar3 != 4) {
LAB_100234c6:
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_10062420)[iVar3]) goto LAB_100234e4;
  }
LAB_100234df:
  *(int *)(iVar2 + 0x18) = iVar4;
  iVar5 = 0;
LAB_100234e4:
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

