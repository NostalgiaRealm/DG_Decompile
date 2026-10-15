/*
 * FUN_10090a41 at 10090a41
 * undefined1 __thiscall FUN_10090a41(void * this, int param_1, uint param_2)
 * Address ranges: 10090a41-10090a90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10090a41(void *this,int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = FUN_10007b6a((void *)((int)this + 0x250),&param_1);
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

