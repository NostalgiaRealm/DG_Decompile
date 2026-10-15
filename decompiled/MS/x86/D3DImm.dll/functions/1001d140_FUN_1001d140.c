/*
 * FUN_1001d140 at 1001d140
 * undefined __thiscall FUN_1001d140(void * this, int param_1, void * param_2, undefined4 param_3, uint param_4, void * param_5, uint param_6, byte param_7)
 * Address ranges: 1001d140-1001d19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001d140(void *this,int param_1,void *param_2,undefined4 param_3,uint param_4,void *param_5,
            uint param_6,byte param_7)

{
  FUN_100209f0(this,param_1,param_2,*(int *)((int)this + 0x1d70),*(int *)((int)this + 0x1d6c),
               *(int *)((int)this + 0x5c),param_4,param_5,param_6,param_7);
  *(byte *)((int)this + 0x1d3f) =
       *(byte *)((int)this + 0x1d3f) |
       (*(uint *)((int)this + 0x21c8) & *(uint *)((int)param_2 + 0x10)) !=
       *(uint *)((int)param_2 + 0x10);
  *(undefined4 *)((int)this + 0x21c8) = *(undefined4 *)((int)param_2 + 0x10);
  *(bool *)((int)this + 0x21cc) = param_6 != 0;
  return;
}

