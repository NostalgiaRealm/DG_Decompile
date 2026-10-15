/*
 * FUN_100537c0 at 100537c0
 * undefined __thiscall FUN_100537c0(void * this, int * param_1)
 * Address ranges: 100537c0-1005386d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100537c0(void *this,int *param_1)

{
  (**(code **)(*(int *)this + 0xec))(0);
  *(int *)((int)this + 0x6f50) = *param_1;
  *(int *)((int)this + 0x6f54) = param_1[1];
  *(int *)((int)this + 0x6f58) = param_1[2];
  *(int *)((int)this + 0x6f5c) = param_1[3];
  *(int *)((int)this + 0x6f70) = param_1[8];
  *(int *)((int)this + 0x6f74) = param_1[9];
  *(int *)((int)this + 0x6f78) = param_1[10];
  *(int *)((int)this + 0x6f7c) = param_1[0xb];
  *(int *)((int)this + 0x6f60) = param_1[4];
  *(int *)((int)this + 0x6f64) = param_1[5];
  *(int *)((int)this + 0x6f68) = param_1[6];
  *(int *)((int)this + 0x6f6c) = param_1[7];
  *(int *)((int)this + 0x6f80) = param_1[0xc];
  *(int *)((int)this + 0x6f84) = param_1[0xd];
  *(int *)((int)this + 0x6f88) = param_1[0xe];
  *(int *)((int)this + 0x6f8c) = param_1[0x10];
  *(undefined1 *)((int)this + 0xf671) = 1;
  return;
}

