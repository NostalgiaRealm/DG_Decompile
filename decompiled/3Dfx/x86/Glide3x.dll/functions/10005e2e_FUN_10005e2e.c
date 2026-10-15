/*
 * FUN_10005e2e at 10005e2e
 * undefined __thiscall FUN_10005e2e(void * this, undefined4 * param_1)
 * Address ranges: 10005e2e-10005e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005e2e(void *this,undefined4 *param_1)

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
      for (iVar2 = 0x6b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      puVar3 = &DAT_1005b830;
      puVar4 = (undefined4 *)((int)param_1 + 0x1af);
      for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      (**(code **)(**(int **)((int)this + 0xc) + 0xf0))((int)param_1 + 0x21f);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

