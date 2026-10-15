/*
 * FUN_1000621f at 1000621f
 * undefined __thiscall FUN_1000621f(void * this, undefined4 * param_1)
 * Address ranges: 1000621f-10006278
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000621f(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(*(int *)((int)this + 0xc) + 0xe4);
      puVar4 = param_1;
      for (iVar2 = 0xb9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
      puVar3 = &DAT_1005fa10;
      puVar4 = (undefined4 *)((int)param_1 + 0x2e6);
      for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(**(int **)((int)this + 0xc) + 0xe4))((int)param_1 + 0x356);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

