/*
 * FUN_1007d1ed at 1007d1ed
 * undefined __thiscall FUN_1007d1ed(void * this, char param_1)
 * Address ranges: 1007d1ed-1007d241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007d1ed(void *this,char param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x58b0);
  if (uVar1 < *(uint *)((int)this + 0x58b4)) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x94))
              (uVar1,*(undefined4 *)((int)this + 0x58b4),
               (void *)((uVar1 + 0x122) * 0x10 + (int)this));
    *(undefined4 *)((int)this + 0x58b8) = 0;
    *(undefined4 *)((int)this + 0x58b4) = 0;
    *(undefined4 *)((int)this + 0x58b0) = 0;
  }
  FUN_1000581f(this,param_1);
  return;
}

