/*
 * FUN_10063988 at 10063988
 * undefined __thiscall FUN_10063988(void * this, char param_1)
 * Address ranges: 10063988-100639f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10063988(void *this,char param_1)

{
  int *this_00;
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)((int)this + -0x60) != 0) && (*(char *)((int)this + -0x4c) != param_1)) {
    uVar1 = 0;
    *(char *)((int)this + -0x4c) = param_1;
    if (*(int *)((int)this + -100) != 0) {
      this_00 = (int *)((int)this + -0x88);
      do {
        local_14 = 0;
        local_10 = local_14;
        local_c = FUN_100791d2(this_00,*(uint *)((int)this + -0x74),0);
        local_8 = FUN_10079207(this_00,*(uint *)((int)this + -0x70),0);
        (**(code **)(*this_00 + 0xc))(*(int *)((int)this + -0x5c) * uVar1,&local_14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + -100));
    }
  }
  return;
}

