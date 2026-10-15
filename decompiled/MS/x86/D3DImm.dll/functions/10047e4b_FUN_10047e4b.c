/*
 * FUN_10047e4b at 10047e4b
 * undefined4 * __thiscall FUN_10047e4b(void * this, undefined4 param_1)
 * Address ranges: 10047e4b-10047ecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10047e4b(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *this_00 = 0;
  FUN_1005c9cc((int *)((int)this + 0xc),0,0x38);
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined ***)this = &PTR_FUN_1005f4bc;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  FUN_1005c9cc((int *)((int)this + 0x5c),0,0x30);
  FUN_10048199(this_00,&DAT_1005d2a0);
  FUN_10048199(this_00,&DAT_1005d220);
  return this;
}

