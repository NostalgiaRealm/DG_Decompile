/*
 * FUN_1002cb87 at 1002cb87
 * undefined __thiscall FUN_1002cb87(void * this, byte param_1, byte param_2)
 * Address ranges: 1002cb87-1002cc05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cb87(void *this,byte param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    bVar2 = 0;
    bVar1 = 0;
  }
  else {
    bVar2 = 2;
    bVar1 = 4;
  }
  bVar2 = (param_2 == 0) - 1U & 8 | param_1 != 0 | bVar1 | bVar2;
  if (bVar2 != *(byte *)((int)this + 0x2a9c)) {
    FUN_1001c16f(*(int **)((int)this + 0x315c));
    (**(code **)(*(int *)this + 0x150))();
    *(byte *)((int)this + 0x2a9c) = bVar2;
    *(undefined1 *)((int)this + 0x2bc1) = 1;
    FUN_1002c1a5((int)this);
    *(undefined1 *)((int)this + 0x3150) = 1;
  }
  *(uint *)((int)this + 0x2978) = (uint)param_2;
  *(uint *)((int)this + 0x2974) = (uint)param_1;
  return;
}

