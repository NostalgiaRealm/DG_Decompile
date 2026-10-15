/*
 * FUN_10032190 at 10032190
 * undefined __thiscall FUN_10032190(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, uint param_5, uint param_6, byte param_7)
 * Address ranges: 10032190-100321ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10032190(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
            uint param_6,byte param_7)

{
  FUN_10035840(this,param_1,param_2,*(int *)((int)this + 0xd9d4),*(int *)((int)this + 0xd9d0),
               *(int *)((int)this + 0x5c),param_4,param_5,param_6,param_7);
  *(byte *)((int)this + 0xd97f) =
       *(byte *)((int)this + 0xd97f) |
       (*(uint *)((int)this + 0xde50) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0xde50) = *(undefined4 *)(param_2 + 0x10);
  *(bool *)((int)this + 0xde54) = param_6 != 0;
  return;
}

