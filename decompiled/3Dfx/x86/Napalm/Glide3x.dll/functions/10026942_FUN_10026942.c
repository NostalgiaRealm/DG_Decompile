/*
 * FUN_10026942 at 10026942
 * undefined __thiscall FUN_10026942(void * this, ushort param_1, byte param_2)
 * Address ranges: 10026942-100269c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026942(void *this,ushort param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1 & 0xf0;
  if (uVar2 == 0x80) {
    uVar2 = param_1 & 0xf;
    *(undefined4 *)((int)this + 0x154) = 2;
    uVar3 = FUN_1004e0c1(*(uint *)((int)this + uVar2 * 4 + 0x90),param_2,1,this,0,0);
    *(undefined4 *)((int)this + 0x158) = uVar3;
    bVar1 = *(byte *)((int)this + uVar2 * 4 + 0x90);
  }
  else {
    if (uVar2 != 0xf0) {
      return;
    }
    *(undefined4 *)((int)this + 0x154) = 2;
    uVar3 = FUN_1004e0c1(*(uint *)((int)this + 0xa0),param_2,1,this,0,0);
    *(undefined4 *)((int)this + 0x158) = uVar3;
    bVar1 = *(byte *)((int)this + 0xa0);
  }
  *(uint *)((int)this + 0x15c) = (uint)bVar1;
  return;
}

