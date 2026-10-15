/*
 * FUN_1008d7b1 at 1008d7b1
 * undefined __thiscall FUN_1008d7b1(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 1008d7b1-1008d81b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008d7b1(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_XMM0_Da;
  
  *(uint *)((int)this + 0x1cea0) = param_3;
  uVar1 = FUN_1008cc6c(param_1,param_2,param_3);
  *(uint *)((int)this + 0x1cea4) = uVar1;
  FUN_1008cdf4();
  iVar2 = param_1 * 0x2c;
  *(undefined4 *)((int)this + 0x1ce7c) = in_XMM0_Da;
  *(uint *)((int)this + 0x1ced0) = (uint)(byte)(&DAT_100dcda8)[iVar2];
  *(uint *)((int)this + 0x1ced4) = (uint)(byte)(&DAT_100dcda9)[iVar2];
  *(uint *)((int)this + 0x1ced8) = (uint)(byte)(&DAT_100dcdaa)[iVar2];
  *(uint *)((int)this + 0x1cedc) = (uint)(byte)(&DAT_100dcdab)[iVar2];
  return;
}

