/*
 * FUN_1001d09e at 1001d09e
 * undefined __thiscall FUN_1001d09e(void * this, ushort param_1)
 * Address ranges: 1001d09e-1001d0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d09e(void *this,ushort param_1)

{
  float10 fVar1;
  
  FUN_1001c16f(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2c60) = (int)(short)param_1;
  *(float *)((int)this + 0x2c68) = (float)param_1 / 65535.0;
  fVar1 = FUN_10019d20((uint)param_1);
  *(float *)((int)this + 0x2c6c) = (float)fVar1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

