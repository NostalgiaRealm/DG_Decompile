/*
 * FUN_1002ebed at 1002ebed
 * undefined4 * __thiscall FUN_1002ebed(void * this, int param_1)
 * Address ranges: 1002ebed-1002ec42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002ebed(void *this,int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *this_00;
  
  this_00 = (undefined4 *)FUN_100cfd55(0x14);
  if (this_00 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 0x148);
    this_00[2] = *(undefined4 *)((int)this + 0x14c);
    *this_00 = &PTR_FUN_100d5510;
    this_00[1] = uVar1;
    bVar2 = FUN_10036b8c(this_00,param_1);
    if (bVar2 != 0) {
      return this_00;
    }
    FUN_10036b5e(this_00);
    FUN_100cfd6c(this_00);
  }
  return (undefined4 *)0x0;
}

