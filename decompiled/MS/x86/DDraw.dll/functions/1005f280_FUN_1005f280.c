/*
 * FUN_1005f280 at 1005f280
 * int * __thiscall FUN_1005f280(void * this, int param_1, undefined4 param_2, short param_3)
 * Address ranges: 1005f280-1005f314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1005f280(void *this,int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  
  FUN_10060d45(this,0,0x120);
  FUN_10060d80((undefined4 *)((int)this + 0x20),(undefined4 *)PTR_LAB_10069020,DAT_10069024);
  FUN_10060d80((undefined4 *)((int)this + 0xa0),(undefined4 *)PTR_LAB_10069020,DAT_10069024);
  *(int *)((int)this + 0x10) = param_1;
  iVar1 = DAT_10069034;
  *(code **)(DAT_10069034 + 0xa0 + (int)this) = FUN_1005d5dd;
  *(code **)(iVar1 + 0x20 + (int)this) = FUN_1005d5dd;
  iVar1 = DAT_10069038;
  *(short *)(DAT_10069038 + 0xa0 + (int)this) = param_3 << 2;
  *(short *)(iVar1 + 0x20 + (int)this) = param_3 << 2;
  iVar1 = DAT_10069030;
  *(undefined4 *)(DAT_10069030 + 0xa0 + (int)this) = param_2;
  *(undefined4 *)(iVar1 + 0x20 + (int)this) = param_2;
  return this;
}

