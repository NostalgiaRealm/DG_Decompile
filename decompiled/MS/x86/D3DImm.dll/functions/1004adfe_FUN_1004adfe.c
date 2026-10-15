/*
 * FUN_1004adfe at 1004adfe
 * undefined4 * __thiscall FUN_1004adfe(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1004adfe-1004ae81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004adfe(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  FUN_1005c9cc((int *)((int)this + 8),0,0x70);
  puVar1 = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x7c) = param_2;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xd4) = 1;
  FUN_1005c9cc((int *)((int)this + 0x80),0,0x50);
  FUN_10042807(this,&DAT_1005d2a0,0);
  FUN_10042807(this,&DAT_1005d1f0,(int)puVar1);
  FUN_10042807(this,&DAT_1005d200,(int)puVar1);
  FUN_10042807(this,&DAT_1005d210,(int)puVar1);
  return this;
}

