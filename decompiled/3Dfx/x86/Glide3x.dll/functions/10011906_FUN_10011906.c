/*
 * FUN_10011906 at 10011906
 * undefined __thiscall FUN_10011906(void * this, int param_1)
 * Address ranges: 10011906-100119b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011906(void *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2c94) = param_1;
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
  *(undefined4 *)((int)this + 0x2ae0) = uVar2;
  if (bVar1) {
    *(uint *)((int)this + 0x2bcc) = *(uint *)((int)this + 0x2bcc) | 2;
  }
  else {
    *(undefined4 *)((int)this + 0x2aec) = 0;
    *(uint *)((int)this + 0x2bcc) = *(uint *)((int)this + 0x2bcc) & 0xfffffffd;
    *(undefined4 *)((int)this + 0x2ae8) =
         *(undefined4 *)(&DAT_10054814 + *(int *)((int)this + 0x2bf4) * 4);
  }
  *(undefined1 *)((int)this + 0x2c60) = 1;
  FUN_1001fe94((int)this);
  *(int *)((int)this + 0x29fc) = param_1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(undefined1 *)((int)this + 0x2c64) = 1;
  return;
}

