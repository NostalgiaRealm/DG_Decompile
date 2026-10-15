/*
 * FUN_10053690 at 10053690
 * undefined __thiscall FUN_10053690(void * this, int param_1)
 * Address ranges: 10053690-100536ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053690(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(*(int *)this + 0xec))(0);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)((int)this + 0x6bc0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)this + 0x6bc4) = uVar1;
    *(undefined4 *)((int)this + 0x6bc8) = uVar2;
    *(undefined4 *)((int)this + 0x6bcc) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)((int)this + 0x6bd0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((int)this + 0x6bd4) = uVar1;
    *(undefined4 *)((int)this + 0x6bd8) = uVar2;
    *(undefined4 *)((int)this + 0x6bdc) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 100);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)((int)this + 0x6be0) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((int)this + 0x6be4) = uVar1;
    *(undefined4 *)((int)this + 0x6be8) = uVar2;
    *(undefined4 *)((int)this + 0x6bec) = uVar3;
  }
  *(uint *)((int)this + 0xf80) =
       *(uint *)((int)this + 0xf80) & 0x7fffffff | -(uint)(param_1 != 0) & 0x80000000;
  return;
}

