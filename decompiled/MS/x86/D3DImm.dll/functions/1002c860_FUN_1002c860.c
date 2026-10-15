/*
 * FUN_1002c860 at 1002c860
 * undefined __thiscall FUN_1002c860(void * this, uint param_1)
 * Address ranges: 1002c860-1002c92c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c860(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  (**(code **)(*(int *)this + 0x98))(0);
  bVar5 = ((byte)param_1 & 4) != ((byte)*(undefined4 *)((int)this + 0x18f8) & 4);
  *(uint *)((int)this + 0x18f8) = param_1;
  *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | bVar5;
  *(undefined4 *)((int)this + 0x4a8) = *(undefined4 *)((int)this + 0x4a8);
  uVar3 = param_1 >> 2 & 1;
  *(uint *)((int)this + 0xf18) = uVar3;
  *(uint *)((int)this + 0x4ac) = uVar3 << 0x17 | *(uint *)((int)this + 0x4ac) & 0xff7fffff;
  uVar3 = 2;
  if (*(int *)((int)this + 0x260) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | ~(param_1 >> 1) & 1;
  uVar1 = *(uint *)((int)this + 0xf1c);
  *(uint *)((int)this + 0xf1c) = uVar3;
  uVar4 = ~(param_1 >> 1) & 1 ^ 1;
  uVar2 = *(uint *)((int)this + 0x374);
  *(byte *)((int)this + 0x1d41) = uVar1 != uVar3 | *(byte *)((int)this + 0x1d41) | bVar5;
  *(uint *)((int)this + 0x374) = uVar4;
  *(byte *)((int)this + 0x1d3d) = *(byte *)((int)this + 0x1d3d) | uVar2 != uVar4;
  FUN_10029080((int)this);
  *(undefined1 *)((int)this + 0x1d3e) = 1;
  return;
}

