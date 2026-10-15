/*
 * FUN_1000f0d2 at 1000f0d2
 * undefined __thiscall FUN_1000f0d2(void * this, byte param_1, byte param_2)
 * Address ranges: 1000f0d2-1000f150
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f0d2(void *this,byte param_1,byte param_2)

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
  if (bVar2 != *(byte *)((int)this + 0x2b3c)) {
    FUN_100102f1(*(int **)((int)this + 0x32dc));
    (**(code **)(*(int *)this + 0x170))();
    *(byte *)((int)this + 0x2b3c) = bVar2;
    *(undefined1 *)((int)this + 0x2c61) = 1;
    FUN_1001fe94((int)this);
    *(undefined1 *)((int)this + 0x32d0) = 1;
  }
  *(uint *)((int)this + 0x29f4) = (uint)param_2;
  *(uint *)((int)this + 0x29f0) = (uint)param_1;
  return;
}

