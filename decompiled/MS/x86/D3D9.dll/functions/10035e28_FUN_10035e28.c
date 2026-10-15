/*
 * FUN_10035e28 at 10035e28
 * undefined __thiscall FUN_10035e28(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10035e28-10035e99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035e28(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_10032e50(this,0,0,0);
  if (param_1 == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)((int)this + 0xfa1c) = uVar1;
    *(undefined4 *)((int)this + 0x104c) = param_3;
    *(undefined4 *)((int)this + 0x1008) = param_4;
  }
  else {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0xf9d8) = uVar1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x100c) = param_3;
    *(undefined4 *)((int)this + param_1 * 4 + 0xfc8) = param_4;
  }
  *(undefined1 *)((int)this + 0xf66f) = 1;
  return;
}

