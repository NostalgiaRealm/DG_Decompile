/*
 * FUN_10006899 at 10006899
 * undefined4 __thiscall FUN_10006899(void * this, int * param_1)
 * Address ranges: 10006899-10006953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006899(void *this,int *param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int **)((int)this + 0x658c) != param_1) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      *(undefined1 *)((int)this + 0x669c) = 1;
    }
    if (*(int *)((int)this + 0x658c) != 0) {
      *(undefined1 *)(*(int *)((int)this + 0x658c) + 0x48) = 0;
      (**(code **)(**(int **)((int)this + 0x658c) + 8))();
    }
    *(int **)((int)this + 0x658c) = param_1;
    if ((param_1 == (int *)0x0) || (param_1[0x10] == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x6668) = uVar1;
    if (param_1 == (int *)0x0) {
      in_EAX = (**(code **)(**(int **)((int)this + 0x14) + 0xb4))(0,0);
      *(uint *)((int)this + 0x666c) = *(uint *)((int)this + 0x666c) & 0xfffffffe;
    }
    else {
      *(undefined2 *)(param_1 + 0x12) = 0x101;
      (**(code **)(**(int **)((int)this + 0x14) + 0xb4))(param_1[0x10],param_1[0xe] == 0x66);
      in_EAX = *(uint *)((int)this + 0x666c) & 0xfffffffe;
      uVar2 = *(uint *)((int)this + 0x666c) | 1;
      if (param_1[3] == 0) {
        uVar2 = in_EAX;
      }
      *(uint *)((int)this + 0x666c) = uVar2;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

