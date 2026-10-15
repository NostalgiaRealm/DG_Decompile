/*
 * FUN_1000ed54 at 1000ed54
 * undefined __thiscall FUN_1000ed54(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000ed54-1000ee46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000ed54(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  uVar3 = 4;
  if ((((param_1 == 4) && (param_2 == 0)) && (param_3 == 4)) && (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((int)this + 0x2b20) = uVar1;
  *(undefined4 *)((int)this + 0x2b24) = *(undefined4 *)(&DAT_10055d28 + param_1 * 4);
  *(undefined4 *)((int)this + 0x2b28) = *(undefined4 *)(&DAT_10055ce0 + param_2 * 4);
  *(undefined4 *)((int)this + 0x2b2c) = 1;
  *(undefined4 *)((int)this + 0x2b38) = 1;
  *(uint *)((int)this + 0x2b30) = (param_3 == 4) + 1;
  *(uint *)((int)this + 0x2b34) = (param_4 == 4) + 1;
  *(uint *)((int)this + 0x2bc8) = (param_2 == 0xf) + 1;
  if (param_2 == 0xf) {
    uVar2 = *(uint *)((int)this + 0x2bcc) | 1;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x2bcc) & 0xfffffffe;
  }
  *(uint *)((int)this + 0x2bcc) = uVar2;
  *(undefined1 *)((int)this + 0x2c61) = 1;
  if (param_3 == 4) {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0;
  }
  if (param_4 != 4) {
    uVar3 = 0;
  }
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(uint *)((int)this + 0x2c8c) = *(uint *)((int)this + 0x2c8c) & 0xffff0000 | uVar2 | uVar3;
  return;
}

