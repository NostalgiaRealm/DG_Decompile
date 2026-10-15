/*
 * FUN_10012ccf at 10012ccf
 * undefined __thiscall FUN_10012ccf(void * this, int param_1)
 * Address ranges: 10012ccf-10012e1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012ccf(void *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2de4) = param_1;
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
  *(undefined4 *)((int)this + 0x2c20) = uVar2;
  if (bVar1) {
    uVar3 = *(uint *)((int)this + 0x2d0c) | 2;
    *(undefined4 *)((int)this + 0x2d20) = *(undefined4 *)((int)this + 0x2c2c);
    *(undefined1 *)((int)this + 0x2d24) = *(undefined1 *)((int)this + 0x2c30);
    *(undefined1 *)((int)this + 0x2d25) = *(undefined1 *)((int)this + 0x2c31);
    *(undefined4 *)((int)this + 0x2d28) = *(undefined4 *)((int)this + 0x2c34);
    *(undefined4 *)((int)this + 0x2d2c) = *(undefined4 *)((int)this + 0x2c34);
    *(undefined4 *)((int)this + 0x2d30) = *(undefined4 *)((int)this + 0x2c3c);
    *(undefined4 *)((int)this + 0x2d34) = *(undefined4 *)((int)this + 0x2c40);
    *(undefined4 *)((int)this + 0x2d38) = *(undefined4 *)((int)this + 0x2c54);
  }
  else {
    uVar3 = *(uint *)((int)this + 0x2d0c) & 0xfffffffd;
    *(undefined4 *)((int)this + 0x2c28) =
         *(undefined4 *)(&DAT_10057a58 + *(int *)((int)this + 0x2d3c) * 4);
    *(undefined4 *)((int)this + 0x2c2c) = *(undefined4 *)((int)this + 0x2d20);
    *(undefined1 *)((int)this + 0x2c30) = *(undefined1 *)((int)this + 0x2d24);
    *(undefined1 *)((int)this + 0x2c31) = *(undefined1 *)((int)this + 0x2d25);
    *(undefined4 *)((int)this + 0x2c34) = *(undefined4 *)((int)this + 0x2d2c);
    *(undefined4 *)((int)this + 0x2c3c) = *(undefined4 *)((int)this + 0x2d30);
    *(undefined4 *)((int)this + 0x2c40) = *(undefined4 *)((int)this + 0x2d34);
    *(undefined4 *)((int)this + 0x2c54) = *(undefined4 *)((int)this + 0x2d38);
  }
  *(uint *)((int)this + 0x2d0c) = uVar3;
  *(undefined1 *)((int)this + 0x2da8) = 1;
  FUN_1001fab7((int)this);
  *(int *)((int)this + 0x2b38) = param_1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(undefined1 *)((int)this + 0x2dac) = 1;
  return;
}

