/*
 * FUN_1002c6f1 at 1002c6f1
 * undefined __thiscall FUN_1002c6f1(void * this, int param_1, int param_2, char param_3, char param_4)
 * Address ranges: 1002c6f1-1002c759
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c6f1(void *this,int param_1,int param_2,char param_3,char param_4)

{
  *(int *)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x1c) = param_1;
  *(int *)((int)this + 0x28) = param_2;
  if (param_3 == '\0') {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0xc) * -0x3c + 0xf0000 + param_1;
  }
  else {
    *(undefined4 *)((int)this + 0xc) = 0x4000;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  *(int *)((int)this + 0x14) = param_2;
  if (param_4 == '\0') {
    param_2 = param_2 + *(int *)((int)this + 0x10) * -4 + 0x10000;
    *(int *)((int)this + 0x28) = param_2;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = 0x4000;
  }
  *(int *)((int)this + 0x18) = param_2;
  return;
}

