/*
 * FUN_1002cc54 at 1002cc54
 * undefined __thiscall FUN_1002cc54(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1002cc54-1002ccc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cc54(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_1002a5f0(this,0,0,0);
  if (param_1 == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)((int)this + 0xdbd0) = uVar1;
    *(undefined4 *)((int)this + 0x72c) = param_3;
    *(undefined4 *)((int)this + 0x6e8) = param_4;
  }
  else {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0xdb8c) = uVar1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x6ec) = param_3;
    *(undefined4 *)((int)this + param_1 * 4 + 0x6a8) = param_4;
  }
  *(undefined1 *)((int)this + 0xd97f) = 1;
  return;
}

