/*
 * FUN_100b2c40 at 100b2c40
 * undefined1 __thiscall FUN_100b2c40(void * this, int param_1, uint param_2)
 * Address ranges: 100b2c40-100b2c8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100b2c40(void *this,int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = FUN_100086bd((void *)((int)this + 0x250),&param_1);
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + uVar3 * 4 + 0x360);
    if ((uVar1 == 0xffffffff) || (uVar1 <= param_2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)((param_2 + 0x26) * 0x10 + uVar3 + (int)this);
    }
  }
  return uVar2;
}

