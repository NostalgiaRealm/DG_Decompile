/*
 * FUN_1002c7ef at 1002c7ef
 * undefined __thiscall FUN_1002c7ef(void * this, char param_1)
 * Address ranges: 1002c7ef-1002c864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c7ef(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  if (param_1 != '\0') {
    iVar2 = *piVar1;
    (**(code **)(**(int **)(iVar2 + 0x50) + 0x18))
              (*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x70),1);
  }
  if ((*(uint *)((int)this + 0x154) >> 0xb & 1) != 0) {
    if ((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) {
      iVar2 = *(int *)((int)this + 0x160);
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0x10);
    }
    FUN_10006423((void *)*piVar1,*(int *)((int)this + 0x174),iVar2);
  }
  if (DAT_1006c238 != (int *)0x0) {
    (**(code **)(*DAT_1006c238 + 0x24))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
  }
  return;
}

