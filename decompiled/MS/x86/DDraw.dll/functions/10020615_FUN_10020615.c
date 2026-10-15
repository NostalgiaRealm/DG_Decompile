/*
 * FUN_10020615 at 10020615
 * undefined __thiscall FUN_10020615(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10020615-1002067f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020615(void *this,int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_XMM0_Da;
  
  *(uint *)((int)this + 0xcea0) = param_3;
  uVar1 = FUN_1001fb19(param_1,param_2,param_3);
  *(uint *)((int)this + 0xcea4) = uVar1;
  FUN_1001fca8();
  iVar2 = param_1 * 0x2c;
  *(undefined4 *)((int)this + 0xce7c) = in_XMM0_Da;
  *(uint *)((int)this + 0xced0) = (uint)(byte)(&DAT_10069418)[iVar2];
  *(uint *)((int)this + 0xced4) = (uint)(byte)(&DAT_10069419)[iVar2];
  *(uint *)((int)this + 0xced8) = (uint)(byte)(&DAT_1006941a)[iVar2];
  *(uint *)((int)this + 0xcedc) = (uint)(byte)(&DAT_1006941b)[iVar2];
  return;
}

