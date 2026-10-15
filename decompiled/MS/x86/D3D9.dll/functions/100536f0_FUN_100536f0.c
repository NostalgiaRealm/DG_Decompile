/*
 * FUN_100536f0 at 100536f0
 * undefined __thiscall FUN_100536f0(void * this, int param_1, int * param_2)
 * Address ranges: 100536f0-100537b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100536f0(void *this,int param_1,int *param_2)

{
  (**(code **)(*(int *)this + 0xec))(0);
  *(int *)((int)this + (param_1 + 0x6d7) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x6e04) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x6e08) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x6e0c) = param_2[3];
  *(undefined1 *)((int)this + 0xf671) = 1;
  *(int *)((int)this + (param_1 + 0x63c) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x6454) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x6458) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x645c) = param_2[3];
  *(undefined1 *)((int)this + 0xf6a3) = 1;
  *(int *)((int)this + (param_1 + 0x512) * 0x10 + 0x90) = *param_2;
  *(int *)((int)this + param_1 * 0x10 + 0x51b4) = param_2[1];
  *(int *)((int)this + param_1 * 0x10 + 0x51b8) = param_2[2];
  *(int *)((int)this + param_1 * 0x10 + 0x51bc) = param_2[3];
  *(undefined1 *)((int)this + 0xf694) = 1;
  return;
}

