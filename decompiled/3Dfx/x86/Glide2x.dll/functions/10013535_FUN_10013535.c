/*
 * FUN_10013535 at 10013535
 * undefined __thiscall FUN_10013535(void * this, undefined4 * param_1)
 * Address ranges: 10013535-1001357c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013535(void *this,undefined4 *param_1)

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
      puVar3 = (undefined4 *)(*(int *)((int)this + 0xc) + 0xe0);
      puVar4 = param_1;
      for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      (**(code **)(**(int **)((int)this + 0xc) + 0xe0))((int)param_1 + 0x135);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

