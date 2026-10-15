/*
 * FUN_1003cb30 at 1003cb30
 * undefined __thiscall FUN_1003cb30(void * this, int param_1, undefined4 * param_2, uint param_3, uint param_4, uint param_5, char param_6)
 * Address ranges: 1003cb30-1003cb8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003cb30(void *this,int param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,
            char param_6)

{
  uint uVar1;
  uint uVar2;
  
  FUN_10044eb6(this,param_1,(void *)*param_2,*(int *)((int)this + 0xf6d4),
               *(int *)((int)this + 0xf6d0),*(int *)((int)this + 0x5c),param_3,param_4,param_5,
               '\x01',param_6);
  uVar1 = param_2[1];
  uVar2 = *(uint *)((int)this + 0xfd90);
  *(uint *)((int)this + 0xfd90) = uVar1;
  *(byte *)((int)this + 0xf66f) = *(byte *)((int)this + 0xf66f) | (uVar2 & uVar1) != uVar1;
  *(bool *)((int)this + 0xfd94) = param_5 != 0;
  return;
}

