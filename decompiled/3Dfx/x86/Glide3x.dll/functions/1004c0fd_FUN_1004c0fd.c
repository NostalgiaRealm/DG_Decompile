/*
 * FUN_1004c0fd at 1004c0fd
 * undefined1 __thiscall FUN_1004c0fd(void * this, int param_1, uint param_2)
 * Address ranges: 1004c0fd-1004c13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1004c0fd(void *this,int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = FUN_1004b775(this,param_1);
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

