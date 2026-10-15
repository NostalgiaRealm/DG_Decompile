/*
 * FUN_1002079a at 1002079a
 * undefined __thiscall FUN_1002079a(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1002079a-10020814
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002079a(void *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(undefined1 *)((int)this + 0x2da8) = 1;
  uVar1 = *(undefined4 *)(&DAT_100592f4 + param_1 * 4);
  *(undefined4 *)((int)this + 0x2d28) = uVar1;
  *(undefined4 *)((int)this + 0x2c44) = uVar1;
  *(undefined4 *)((int)this + 0x2c34) = uVar1;
  uVar1 = *(undefined4 *)(&DAT_100592f4 + param_2 * 4);
  *(undefined4 *)((int)this + 0x2d2c) = uVar1;
  *(undefined4 *)((int)this + 0x2c48) = uVar1;
  *(undefined4 *)((int)this + 0x2c38) = uVar1;
  uVar1 = *(undefined4 *)(&DAT_100592f4 + param_3 * 4);
  *(undefined4 *)((int)this + 0x2d30) = uVar1;
  *(undefined4 *)((int)this + 0x2c4c) = uVar1;
  *(undefined4 *)((int)this + 0x2c3c) = uVar1;
  return;
}

