/*
 * FUN_1001d4c1 at 1001d4c1
 * undefined __thiscall FUN_1001d4c1(void * this, int param_1)
 * Address ranges: 1001d4c1-1001d573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d4c1(void *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_1001c4fb(*(int **)((int)this + 0x315c));
  (**(code **)(*(int *)this + 0x150))();
  *(int *)((int)this + 0x2bf4) = param_1;
  if ((param_1 == 3) || (param_1 == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((param_1 == 1) || (param_1 == 2)) || (bVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)((int)this + 0x2a40) = uVar2;
  if (bVar1) {
    *(uint *)((int)this + 0x2b2c) = *(uint *)((int)this + 0x2b2c) | 2;
  }
  else {
    *(undefined4 *)((int)this + 0x2a4c) = 0;
    *(uint *)((int)this + 0x2b2c) = *(uint *)((int)this + 0x2b2c) & 0xfffffffd;
    *(undefined4 *)((int)this + 0x2a48) =
         *(undefined4 *)(&DAT_10051ab0 + *(int *)((int)this + 0x2b54) * 4);
  }
  *(undefined1 *)((int)this + 0x2bc0) = 1;
  FUN_1002c52f((int)this);
  *(int *)((int)this + 0x2980) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(undefined1 *)((int)this + 0x2bc4) = 1;
  return;
}

