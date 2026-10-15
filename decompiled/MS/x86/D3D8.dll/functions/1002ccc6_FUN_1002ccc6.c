/*
 * FUN_1002ccc6 at 1002ccc6
 * undefined __thiscall FUN_1002ccc6(void * this, int param_1, char param_2)
 * Address ranges: 1002ccc6-1002cd24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ccc6(void *this,int param_1,char param_2)

{
  undefined4 uVar1;
  
  FUN_1002a5f0(this,0,0,0);
  if (*(int *)((int)this + 0xdbd4) == *(int *)((int)this + 0xdbcc)) {
    *(undefined4 *)((int)this + 0xdbcc) = 0;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)((int)this + 0xdbd4) = uVar1;
  uVar1 = 0x39;
  if (param_2 != '\0') {
    uVar1 = 0x2a;
  }
  *(int *)((int)this + 0xdbdc) = param_1;
  *(undefined4 *)((int)this + 0xdbd8) = uVar1;
  *(undefined1 *)((int)this + 0xd980) = 1;
  return;
}

