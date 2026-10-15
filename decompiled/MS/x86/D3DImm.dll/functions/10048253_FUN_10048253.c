/*
 * FUN_10048253 at 10048253
 * undefined4 * __thiscall FUN_10048253(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10048253-1004836c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10048253(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *this_00;
  char cVar1;
  undefined4 *puVar2;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *this_00 = 0;
  FUN_1005c9cc((int *)((int)this + 0xc),0,0x70);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined ***)this = &PTR_FUN_1005f4c0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0x1efc) = 0;
  FUN_1004a765(this_00,&DAT_1005d2a0);
  cVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x30))();
  if (cVar1 == '\0') {
    puVar2 = &DAT_1005d120;
  }
  else {
    FUN_1004a765(this_00,&DAT_1005d0f0);
    FUN_1004a765(this_00,&DAT_1005d100);
    puVar2 = &DAT_1005d110;
  }
  FUN_1004a765(this_00,puVar2);
  return this;
}

