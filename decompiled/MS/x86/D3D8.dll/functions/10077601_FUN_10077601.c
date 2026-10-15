/*
 * FUN_10077601 at 10077601
 * undefined __thiscall FUN_10077601(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10077601-1007766b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077601(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_XMM0_Da;
  
  *(uint *)((int)this + 0x1cea0) = param_3;
  uVar1 = FUN_10076aaf(param_1,param_2,param_3);
  *(uint *)((int)this + 0x1cea4) = uVar1;
  FUN_10076c3e();
  iVar2 = param_1 * 0x2c;
  *(undefined4 *)((int)this + 0x1ce7c) = in_XMM0_Da;
  *(uint *)((int)this + 0x1ced0) = (uint)(byte)(&DAT_100b8a80)[iVar2];
  *(uint *)((int)this + 0x1ced4) = (uint)(byte)(&DAT_100b8a81)[iVar2];
  *(uint *)((int)this + 0x1ced8) = (uint)(byte)(&DAT_100b8a82)[iVar2];
  *(uint *)((int)this + 0x1cedc) = (uint)(byte)(&DAT_100b8a83)[iVar2];
  return;
}

