/*
 * FUN_1000623b at 1000623b
 * undefined __thiscall FUN_1000623b(void * this, char param_1)
 * Address ranges: 1000623b-100062de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000623b(void *this,char param_1)

{
  if ((param_1 != '\0') && (*(int *)((int)this + 0x658c) != 0)) {
    *(undefined1 *)(*(int *)((int)this + 0x658c) + 0x48) = 0;
    (**(code **)(**(int **)((int)this + 0x658c) + 8))();
    *(undefined4 *)((int)this + 0x658c) = 0;
    *(undefined4 *)((int)this + 0x6668) = 0;
    *(undefined4 *)((int)this + 0x666c) = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0xb4))(0,0);
  }
  if (*(int *)((int)this + 26000) != 0) {
    *(undefined4 *)(*(int *)((int)this + 26000) + 0x5c) = 0xffffffff;
    (**(code **)(**(int **)((int)this + 26000) + 0xc))();
    *(uint *)((int)this + 0x6650) = *(uint *)((int)this + 0x6650) & 0xfffffffe;
    *(undefined4 *)((int)this + 26000) = 0;
    *(undefined4 *)((int)this + 0x65d0) = 0;
    *(undefined4 *)((int)this + 0x6610) = 0;
    *(uint *)((int)this + 0x6658) = *(uint *)((int)this + 0x6658) & 0xfffffffe;
    *(uint *)((int)this + 0x665c) = *(uint *)((int)this + 0x665c) & 0xfffffffe;
    *(uint *)((int)this + 0x6660) = *(uint *)((int)this + 0x6660) & 0xfffffffe;
    *(uint *)((int)this + 0x6664) = *(uint *)((int)this + 0x6664) & 0xfffffffe;
    (**(code **)(**(int **)((int)this + 0x14) + 0xb0))(0,0,0,0);
  }
  return;
}

