/*
 * FUN_100321f0 at 100321f0
 * undefined __thiscall FUN_100321f0(void * this, int param_1, undefined4 * param_2, uint param_3, uint param_4, uint param_5, char param_6)
 * Address ranges: 100321f0-1003224f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100321f0(void *this,int param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,
            char param_6)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10039794(this,param_1,(void *)*param_2,*(int *)((int)this + 0xd9d4),
               *(int *)((int)this + 0xd9d0),*(int *)((int)this + 0x5c),param_3,param_4,param_5,
               '\x01',param_6);
  uVar1 = param_2[1];
  uVar2 = *(uint *)((int)this + 0xde50);
  *(uint *)((int)this + 0xde50) = uVar1;
  *(byte *)((int)this + 0xd97f) = *(byte *)((int)this + 0xd97f) | (uVar2 & uVar1) != uVar1;
  *(bool *)((int)this + 0xde54) = param_5 != 0;
  return;
}

