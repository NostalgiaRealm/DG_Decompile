/*
 * FUN_100042ed at 100042ed
 * undefined __thiscall FUN_100042ed(void * this, undefined4 * param_1)
 * Address ranges: 100042ed-1000431f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100042ed(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)((int)this + 0xc) + 0x120))(param_1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  puVar3 = &DAT_1005b830;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

