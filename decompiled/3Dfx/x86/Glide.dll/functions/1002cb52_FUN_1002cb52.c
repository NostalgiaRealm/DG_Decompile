/*
 * FUN_1002cb52 at 1002cb52
 * undefined __thiscall FUN_1002cb52(void * this, uint param_1, uint param_2)
 * Address ranges: 1002cb52-1002cb92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cb52(void *this,uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  bVar1 = *(uint *)((int)this + 0xc) < param_1;
  param_1 = (uint)(*(uint *)((int)this + 0x10) < param_2);
  if ((*(uint *)((int)this + 0xc) < uVar2) || (*(uint *)((int)this + 0x10) < param_2)) {
    (*(code *)**(undefined4 **)this)(bVar1,param_1);
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - uVar2;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_2;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + uVar2;
  return;
}

