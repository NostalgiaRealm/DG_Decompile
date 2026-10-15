/*
 * FUN_100026d2 at 100026d2
 * undefined4 __thiscall FUN_100026d2(void * this, int param_1)
 * Address ranges: 100026d2-1000271a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100026d2(void *this,int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_100db300 + *(int *)((int)this + 8) * 400) == 1) {
    uVar2 = 1;
    iVar1 = 0;
    if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 2)) goto LAB_10002715;
  }
  else {
    iVar1 = *(int *)(&DAT_100db300 + *(int *)((int)this + 8) * 400) + -3;
    if (iVar1 != 0) goto LAB_10002715;
    if ((param_1 == 3) || (param_1 == 2)) {
      uVar2 = 1;
      goto LAB_10002715;
    }
  }
  uVar2 = 0;
LAB_10002715:
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}

