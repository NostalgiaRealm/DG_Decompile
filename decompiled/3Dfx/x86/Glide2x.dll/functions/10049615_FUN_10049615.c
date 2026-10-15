/*
 * FUN_10049615 at 10049615
 * undefined1 __thiscall FUN_10049615(void * this, int param_1, uint param_2)
 * Address ranges: 10049615-10049657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10049615(void *this,int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = FUN_10048c8d(this,param_1);
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

