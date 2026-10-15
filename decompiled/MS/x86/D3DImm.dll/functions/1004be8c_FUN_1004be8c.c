/*
 * FUN_1004be8c at 1004be8c
 * undefined4 * __thiscall FUN_1004be8c(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1004be8c-1004bf53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1004be8c(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *this_00 = 0;
  FUN_1005c9cc((int *)((int)this + 0xc),0,0x70);
  puVar1 = (undefined4 *)((int)this + 0x7c);
  *(undefined ***)this = &PTR_FUN_1005f590;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x80) = param_2;
  *(undefined4 *)((int)this + 0xd0) = 0x1010000;
  FUN_10042807(this_00,&DAT_1005d2a0,0);
  FUN_10042807(this_00,&DAT_1005d230,(int)puVar1);
  FUN_10042807(this_00,&DAT_1005d240,(int)puVar1);
  FUN_10042807(this_00,&DAT_1005d250,(int)puVar1);
  FUN_1005c9cc((int *)((int)this + 0xa4),0,0x2c);
  *(int *)((int)this + 0xa4) = 0x2c;
  return this;
}

