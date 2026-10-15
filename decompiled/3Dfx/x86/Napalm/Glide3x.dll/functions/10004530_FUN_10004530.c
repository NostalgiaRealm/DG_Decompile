/*
 * FUN_10004530 at 10004530
 * undefined __thiscall FUN_10004530(void * this, undefined4 * param_1)
 * Address ranges: 10004530-10004562
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004530(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x114))(param_1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  puVar3 = &DAT_1005fa10;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

