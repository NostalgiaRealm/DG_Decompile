/*
 * FUN_1001186f at 1001186f
 * undefined __thiscall FUN_1001186f(void * this, ushort param_1)
 * Address ranges: 1001186f-100118c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001186f(void *this,ushort param_1)

{
  float10 fVar1;
  
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2d00) = (int)(short)param_1;
  *(float *)((int)this + 0x2d08) = (float)param_1 / 65535.0;
  fVar1 = FUN_10008bca((uint)param_1);
  *(float *)((int)this + 0x2d0c) = (float)fVar1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

