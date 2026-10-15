/*
 * FUN_1002cb93 at 1002cb93
 * undefined __thiscall FUN_1002cb93(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1002cb93-1002cc85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cb93(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_1001c4fb(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  uVar3 = 4;
  if ((((param_1 == 4) && (param_2 == 0)) && (param_3 == 4)) && (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((int)this + 0x2a80) = uVar1;
  *(undefined4 *)((int)this + 0x2a84) = *(undefined4 *)(&DAT_10053e68 + param_1 * 4);
  *(undefined4 *)((int)this + 0x2a88) = *(undefined4 *)(&DAT_10053e20 + param_2 * 4);
  *(undefined4 *)((int)this + 0x2a8c) = 1;
  *(undefined4 *)((int)this + 0x2a98) = 1;
  *(uint *)((int)this + 0x2a90) = (param_3 == 4) + 1;
  *(uint *)((int)this + 0x2a94) = (param_4 == 4) + 1;
  *(uint *)((int)this + 0x2b28) = (param_2 == 0xf) + 1;
  if (param_2 == 0xf) {
    uVar2 = *(uint *)((int)this + 0x2b2c) | 1;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x2b2c) & 0xfffffffe;
  }
  *(uint *)((int)this + 0x2b2c) = uVar2;
  *(undefined1 *)((int)this + 0x2bc1) = 1;
  if (param_3 == 4) {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0;
  }
  if (param_4 != 4) {
    uVar3 = 0;
  }
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(uint *)((int)this + 0x2bec) = *(uint *)((int)this + 0x2bec) & 0xffff0000 | uVar2 | uVar3;
  return;
}

