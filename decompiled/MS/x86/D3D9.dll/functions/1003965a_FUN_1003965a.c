/*
 * FUN_1003965a at 1003965a
 * undefined4 * __thiscall FUN_1003965a(void * this, int param_1)
 * Address ranges: 1003965a-100396d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1003965a(void *this,int param_1)

{
  undefined4 *this_00;
  undefined4 uVar1;
  
  this_00 = (undefined4 *)FUN_100cfd55(0x40);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00[1] = *(undefined4 *)((int)this + 0xcc);
    *this_00 = &PTR_FUN_100d59a0;
    this_00[2] = 0;
    this_00[3] = 0;
    this_00[4] = 0;
    this_00[5] = 0;
    this_00[6] = 0;
    this_00[7] = 0;
    this_00[8] = 0;
    this_00[9] = 0;
    this_00[0xd] = 0;
    this_00[0xe] = 0;
    *(undefined1 *)(this_00 + 0xf) = 0;
    this_00[10] = 0;
    this_00[0xb] = 0;
    this_00[0xc] = 0;
    uVar1 = FUN_1004c0da(this_00,param_1);
    if ((char)uVar1 == '\0') {
      *this_00 = &PTR_FUN_100d5524;
      FUN_100cfd6c(this_00);
      this_00 = (undefined4 *)0x0;
    }
  }
  return this_00;
}

