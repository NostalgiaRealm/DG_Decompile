/*
 * FUN_100769b4 at 100769b4
 * undefined __thiscall FUN_100769b4(void * this, int param_1)
 * Address ranges: 100769b4-10076a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100769b4(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 6) {
LAB_10076a28:
    uVar1 = 0x1c;
    *(undefined4 *)((int)this + 0x1c) = 0x1b;
    *(undefined4 *)((int)this + 0x2c) = 0x1b;
    *(undefined4 *)((int)this + 0x20) = 0x1e;
    *(undefined4 *)((int)this + 0x30) = 0x1e;
  }
  else {
    if (param_1 != 0x15) {
      if (param_1 == 0x16) {
        *(undefined4 *)((int)this + 0x1c) = 9;
        *(undefined4 *)((int)this + 0x20) = 0xb;
        *(undefined4 *)((int)this + 0x24) = 0xb;
        *(undefined4 *)((int)this + 0x28) = 0xb;
        *(undefined4 *)((int)this + 0x2c) = 9;
        *(undefined4 *)((int)this + 0x30) = 0xb;
        *(undefined4 *)((int)this + 0x34) = 0xb;
        *(undefined4 *)((int)this + 0x38) = 0xb;
        return;
      }
      if (param_1 == 0x1c) {
        *(undefined4 *)((int)this + 0x24) = 0x1c;
        *(undefined4 *)((int)this + 0x28) = 0x1c;
        uVar1 = 0x18;
        *(undefined4 *)((int)this + 0x1c) = 0x1b;
        *(undefined4 *)((int)this + 0x20) = 0x1e;
        *(undefined4 *)((int)this + 0x2c) = 0x17;
        *(undefined4 *)((int)this + 0x30) = 0x18;
        goto LAB_10076a45;
      }
      goto LAB_10076a28;
    }
    uVar1 = 0x18;
    *(undefined4 *)((int)this + 0x1c) = 0x17;
    *(undefined4 *)((int)this + 0x20) = 0x18;
    *(undefined4 *)((int)this + 0x2c) = 0x17;
    *(undefined4 *)((int)this + 0x30) = 0x18;
  }
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
LAB_10076a45:
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  return;
}

