/*
 * FUN_100025f2 at 100025f2
 * undefined4 __thiscall FUN_100025f2(void * this, int param_1)
 * Address ranges: 100025f2-1000263a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100025f2(void *this,int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(int *)(&DAT_100b72c8 + *(int *)((int)this + 8) * 0x134) == 1) {
    uVar2 = 1;
    iVar1 = 0;
    if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 2)) goto LAB_10002635;
  }
  else {
    iVar1 = *(int *)(&DAT_100b72c8 + *(int *)((int)this + 8) * 0x134) + -3;
    if (iVar1 != 0) goto LAB_10002635;
    if ((param_1 == 3) || (param_1 == 2)) {
      uVar2 = 1;
      goto LAB_10002635;
    }
  }
  uVar2 = 0;
LAB_10002635:
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}

