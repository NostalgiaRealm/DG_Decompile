/*
 * FUN_10045110 at 10045110
 * undefined __thiscall FUN_10045110(void * this, int param_1)
 * Address ranges: 10045110-1004516f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045110(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)((int)this + 0x4f50) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)this + 0x4f54) = uVar1;
    *(undefined4 *)((int)this + 0x4f58) = uVar2;
    *(undefined4 *)((int)this + 0x4f5c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)((int)this + 0x4f60) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((int)this + 0x4f64) = uVar1;
    *(undefined4 *)((int)this + 0x4f68) = uVar2;
    *(undefined4 *)((int)this + 0x4f6c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 100);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)((int)this + 0x4f70) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((int)this + 0x4f74) = uVar1;
    *(undefined4 *)((int)this + 0x4f78) = uVar2;
    *(undefined4 *)((int)this + 0x4f7c) = uVar3;
  }
  *(uint *)((int)this + 0x664) =
       *(uint *)((int)this + 0x664) & 0x7fffffff | -(uint)(param_1 != 0) & 0x80000000;
  return;
}

