/*
 * FUN_10005950 at 10005950
 * undefined __thiscall FUN_10005950(void * this, char param_1)
 * Address ranges: 10005950-100059f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005950(void *this,char param_1)

{
  if ((param_1 != '\0') && (*(int *)((int)this + 0x57b8) != 0)) {
    *(undefined1 *)(*(int *)((int)this + 0x57b8) + 0x48) = 0;
    (**(code **)(**(int **)((int)this + 0x57b8) + 8))();
    *(undefined4 *)((int)this + 0x57b8) = 0;
    *(undefined4 *)((int)this + 0x5894) = 0;
    *(undefined4 *)((int)this + 0x5898) = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0xb4))(0,0);
  }
  if (*(int *)((int)this + 0x57bc) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x57bc) + 0x5c) = 0xffffffff;
    (**(code **)(**(int **)((int)this + 0x57bc) + 0xc))();
    *(uint *)((int)this + 0x587c) = *(uint *)((int)this + 0x587c) & 0xfffffffe;
    *(undefined4 *)((int)this + 0x57bc) = 0;
    *(undefined4 *)((int)this + 0x57fc) = 0;
    *(undefined4 *)((int)this + 0x583c) = 0;
    *(uint *)((int)this + 0x5884) = *(uint *)((int)this + 0x5884) & 0xfffffffe;
    *(uint *)((int)this + 0x5888) = *(uint *)((int)this + 0x5888) & 0xfffffffe;
    *(uint *)((int)this + 0x588c) = *(uint *)((int)this + 0x588c) & 0xfffffffe;
    *(uint *)((int)this + 0x5890) = *(uint *)((int)this + 0x5890) & 0xfffffffe;
    (**(code **)(**(int **)((int)this + 0x14) + 0xb0))(0,0,0,0);
  }
  return;
}

