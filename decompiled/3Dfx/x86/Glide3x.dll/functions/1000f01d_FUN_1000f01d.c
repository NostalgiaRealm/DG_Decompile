/*
 * FUN_1000f01d at 1000f01d
 * undefined __thiscall FUN_1000f01d(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, char param_6)
 * Address ranges: 1000f01d-1000f072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000f01d(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2d30) = param_1;
  *(int *)((int)this + 0x2d34) = param_2;
  *(int *)((int)this + 0x2d38) = param_3;
  *(int *)((int)this + 0x2d3c) = param_4;
  *(int *)((int)this + 0x2d40) = param_5;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(uint *)((int)this + 0x2ce0) = (param_6 == '\0') - 1;
  return;
}

