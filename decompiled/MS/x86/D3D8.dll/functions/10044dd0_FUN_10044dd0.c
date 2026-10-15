/*
 * FUN_10044dd0 at 10044dd0
 * undefined __thiscall FUN_10044dd0(void * this, uint param_1)
 * Address ranges: 10044dd0-10044e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044dd0(void *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  uVar1 = *(undefined4 *)((int)this + 0x5948);
  *(uint *)((int)this + 0x5948) = param_1;
  bVar6 = ((byte)param_1 & 4) != ((byte)uVar1 & 4);
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | bVar6;
  *(uint *)((int)this + 21000) = param_1 >> 2 & 1;
  *(undefined4 *)((int)this + 0x6a4) = *(undefined4 *)((int)this + 0x6a4);
  *(uint *)((int)this + 0x6a0) = (param_1 >> 2) << 0x1f | *(uint *)((int)this + 0x6a0) & 0x7fffffff;
  uVar4 = 2;
  if (*(int *)((int)this + 0x410) != 0) {
    uVar4 = 0;
  }
  uVar4 = uVar4 | ~(param_1 >> 1) & 1;
  uVar2 = *(uint *)((int)this + 0x520c);
  *(uint *)((int)this + 0x520c) = uVar4;
  uVar5 = ~(param_1 >> 1) & 1 ^ 1;
  uVar3 = *(uint *)((int)this + 0x524);
  *(byte *)((int)this + 0xd981) = uVar2 != uVar4 | *(byte *)((int)this + 0xd981) | bVar6;
  *(uint *)((int)this + 0x524) = uVar5;
  *(byte *)((int)this + 0xd97d) = *(byte *)((int)this + 0xd97d) | uVar3 != uVar5;
  FUN_100416c0((int)this);
  *(undefined1 *)((int)this + 0xd97e) = 1;
  return;
}

