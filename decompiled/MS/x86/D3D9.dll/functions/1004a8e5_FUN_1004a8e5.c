/*
 * FUN_1004a8e5 at 1004a8e5
 * undefined __thiscall FUN_1004a8e5(void * this, int param_1, char param_2)
 * Address ranges: 1004a8e5-1004a96a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004a8e5(void *this,int param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xfc78) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0xfc78) + 0x10) = 0;
  }
  uVar1 = 0x39;
  if (param_2 != '\0') {
    uVar1 = 0x2a;
  }
  *(int *)((int)this + 0xfc78) = param_1;
  uVar3 = *(uint *)((int)this + 0xfd0c) & 0x7fffffff;
  *(undefined4 *)((int)this + 0xfd00) = uVar1;
  *(undefined1 *)((int)this + 0xfd10) = 1;
  *(uint *)((int)this + 0xfd0c) = uVar3;
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) * 8) + 0x34) != '\0')
    {
      uVar2 = 0x80000000;
    }
    *(uint *)((int)this + 0xfd0c) = uVar2 | uVar3;
    *(uint *)(param_1 + 0x10) = -(uint)(this != (void *)0x0) & (int)this + 0xf6b0U;
  }
  return;
}

