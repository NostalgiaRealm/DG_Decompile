/*
 * FUN_1002cb36 at 1002cb36
 * undefined __thiscall FUN_1002cb36(void * this, int param_1, uint param_2, undefined2 param_3, uint param_4, int param_5, uint param_6, uint param_7, undefined4 param_8, int param_9)
 * Address ranges: 1002cb36-1002cbae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cb36(void *this,int param_1,uint param_2,undefined2 param_3,uint param_4,int param_5,
            uint param_6,uint param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  
  *(short *)((int)this + 10) = (short)param_2;
  *(undefined2 *)((int)this + 0xc) = param_3;
  *(char *)((int)this + 0x1d) = (char)param_7;
  *(char *)((int)this + 0x1c) = (char)param_6;
  *(short *)((int)this + 8) = (short)param_1;
  *(int *)((int)this + 0x18) = param_5;
  *(char *)((int)this + 0x1e) = (char)(param_4 >> 3);
  uVar1 = FUN_1002cd50(param_1,param_4,param_6,param_5,param_9);
  *(uint *)((int)this + 0x10) = uVar1;
  if (param_5 != 0) {
    param_2 = ((param_2 - 1) + param_7 & -param_7) / param_7;
  }
  *(short *)((int)this + 0xe) = (short)param_2;
  *(uint *)((int)this + 0x14) = (param_2 & 0xffff) * uVar1;
  return;
}

