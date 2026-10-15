/*
 * FUN_1001357d at 1001357d
 * undefined __thiscall FUN_1001357d(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 1001357d-10013603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001357d(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(**(int **)((int)this + 0xc) + 0xdc))(param_1);
      puVar2 = param_1;
      puVar3 = (undefined4 *)(*(int *)((int)this + 0xc) + 0xe0);
      for (iVar1 = 0x4d; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      iVar1 = 0;
      if (0 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
        do {
          FUN_10014b7d(this,iVar1,'\x01');
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797));
      }
      FUN_10013481((int)this);
      if (param_2 == '\0') {
        (**(code **)(**(int **)((int)this + 0xc) + 0xe4))((int)param_1 + 0x135);
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

