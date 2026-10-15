/*
 * FUN_10053330 at 10053330
 * undefined __thiscall FUN_10053330(void * this, uint param_1)
 * Address ranges: 10053330-100533fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053330(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  (**(code **)(*(int *)this + 0xec))(0);
  bVar5 = ((byte)param_1 & 4) != ((byte)*(undefined4 *)((int)this + 0x7634) & 4);
  *(uint *)((int)this + 0x7634) = param_1;
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | bVar5;
  *(undefined4 *)((int)this + 0xfc0) = *(undefined4 *)((int)this + 0xfc0);
  uVar3 = param_1 >> 2 & 1;
  *(uint *)((int)this + 0x6e78) = uVar3;
  *(uint *)((int)this + 0xfc4) = uVar3 << 0x18 | *(uint *)((int)this + 0xfc4) & 0xfeffffff;
  uVar3 = 2;
  if (*(int *)((int)this + 0x790) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | ~(param_1 >> 1) & 1;
  uVar1 = *(uint *)((int)this + 0x6e7c);
  *(uint *)((int)this + 0x6e7c) = uVar3;
  uVar4 = ~(param_1 >> 1) & 1 ^ 1;
  uVar2 = *(uint *)((int)this + 0xe00);
  *(byte *)((int)this + 0xf671) = uVar1 != uVar3 | *(byte *)((int)this + 0xf671) | bVar5;
  *(uint *)((int)this + 0xe00) = uVar4;
  *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | uVar2 != uVar4;
  FUN_1004f060((int)this);
  *(undefined1 *)((int)this + 0xf66e) = 1;
  return;
}

