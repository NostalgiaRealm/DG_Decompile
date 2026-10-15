/*
 * FUN_1003ed3e at 1003ed3e
 * undefined __thiscall FUN_1003ed3e(void * this, int param_1, char param_2)
 * Address ranges: 1003ed3e-1003edc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ed3e(void *this,int param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xdd38) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0xdd38) + 0x10) = 0;
  }
  uVar1 = 0x39;
  if (param_2 != '\0') {
    uVar1 = 0x2a;
  }
  *(int *)((int)this + 0xdd38) = param_1;
  uVar3 = *(uint *)((int)this + 0xddcc) & 0x7fffffff;
  *(undefined4 *)((int)this + 0xddc0) = uVar1;
  *(undefined1 *)((int)this + 0xddd0) = 1;
  *(uint *)((int)this + 0xddcc) = uVar3;
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) * 8) + 0x34) != '\0')
    {
      uVar2 = 0x80000000;
    }
    *(uint *)((int)this + 0xddcc) = uVar2 | uVar3;
    *(uint *)(param_1 + 0x10) = -(uint)(this != (void *)0x0) & (int)this + 0xd9b0U;
  }
  return;
}

