/*
 * FUN_1003cad0 at 1003cad0
 * undefined __thiscall FUN_1003cad0(void * this, int param_1, undefined * param_2, undefined4 param_3, uint param_4, uint param_5, uint param_6, byte param_7)
 * Address ranges: 1003cad0-1003cb2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003cad0(void *this,int param_1,undefined *param_2,undefined4 param_3,uint param_4,uint param_5,
            uint param_6,byte param_7)

{
  FUN_10040e20(this,param_1,param_2,*(int *)((int)this + 0xf6d4),*(int *)((int)this + 0xf6d0),
               *(int *)((int)this + 0x5c),param_4,param_5,param_6,param_7);
  *(byte *)((int)this + 0xf66f) =
       *(byte *)((int)this + 0xf66f) |
       (*(uint *)((int)this + 0xfd90) & *(uint *)(param_2 + 0x10)) != *(uint *)(param_2 + 0x10);
  *(undefined4 *)((int)this + 0xfd90) = *(undefined4 *)(param_2 + 0x10);
  *(bool *)((int)this + 0xfd94) = param_6 != 0;
  return;
}

