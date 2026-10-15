/*
 * FUN_1000ebd3 at 1000ebd3
 * undefined __thiscall FUN_1000ebd3(void * this, int param_1, int param_2, char param_3, char param_4)
 * Address ranges: 1000ebd3-1000ec5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ebd3(void *this,int param_1,int param_2,char param_3,char param_4)

{
  *(int *)((int)this + 0x1d0) = param_1;
  *(int *)((int)this + 0x1c8) = param_1;
  *(int *)((int)this + 0x1d4) = param_2;
  if (param_3 == '\0') {
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1b8) * -0x50 + 0x140000 + param_1;
  }
  else {
    *(undefined4 *)((int)this + 0x1b8) = 0x4000;
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(int *)((int)this + 0x1c0) = param_2;
  if (param_4 == '\0') {
    param_2 = param_2 + *(int *)((int)this + 0x1bc) * -4 + 0x10000;
    *(int *)((int)this + 0x1d4) = param_2;
  }
  else {
    *(undefined4 *)((int)this + 0x1bc) = 0x4000;
  }
  *(int *)((int)this + 0x1c4) = param_2;
  return;
}

