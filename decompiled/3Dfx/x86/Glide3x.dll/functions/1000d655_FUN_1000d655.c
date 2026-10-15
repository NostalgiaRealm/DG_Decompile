/*
 * FUN_1000d655 at 1000d655
 * undefined4 * __thiscall FUN_1000d655(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1000d655-1000d80e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1000d655(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_10055b6c;
  FUN_1000896b((undefined4 *)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0x29dc) = param_1;
  *(undefined4 *)((int)this + 0x2ad0) = 0;
  *(undefined ***)this = &PTR_FUN_100559dc;
  *(undefined ***)((int)this + 0x29d4) = &PTR_FUN_10055848;
  *(undefined4 *)((int)this + 0x29d8) = 0;
  *(undefined4 *)((int)this + 0x2ad4) = 0;
  *(undefined4 *)((int)this + 0x32dc) = param_2;
  *(undefined4 *)((int)this + 0x32e0) = param_3;
  *(undefined4 *)((int)this + 0x32e4) = param_4;
  *(undefined4 *)((int)this + 0x32e8) = param_5;
  *(undefined4 *)((int)this + 0x32ec) = param_6;
  *(undefined4 *)((int)this + 0x2c58) = 0;
  *(undefined4 *)((int)this + 0x2c5c) = 0;
  *(undefined4 *)((int)this + 0x2ad8) = 0;
  *(undefined4 *)((int)this + 0x2adc) = 0;
  *(undefined4 *)((int)this + 0x2b14) = 0;
  *(undefined4 *)((int)this + 0x2b18) = 0;
  *(undefined4 *)((int)this + 0x2b1c) = 0;
  *(undefined4 *)((int)this + 0x2bb8) = 0;
  *(undefined4 *)((int)this + 0x2bbc) = 0;
  *(undefined4 *)((int)this + 0x2bc0) = 0;
  *(undefined4 *)((int)this + 0x2bc4) = 0;
  *(undefined4 *)((int)this + 0x2bc8) = 0;
  *(undefined4 *)((int)this + 0x2bcc) = 0;
  *(undefined4 *)((int)this + 0x2c60) = 0;
  *(undefined4 *)((int)this + 0x2c64) = 0;
  *(undefined4 *)((int)this + 0x2c68) = 0;
  *(undefined4 *)((int)this + 0x32d0) = 0;
  *(undefined4 *)((int)this + 0x32f0) = 0;
  *(undefined2 *)((int)this + 0x32d4) = 0;
  *(undefined2 *)((int)this + 0x32d7) = 0;
  *(undefined1 *)((int)this + 0x32d6) = 0;
  *(undefined2 *)((int)this + 0x32da) = 0;
  *(undefined1 *)((int)this + 0x32d9) = 0;
  FUN_10052de1((int *)((int)this + 0x29e8),0,0xe4);
  *(undefined4 *)((int)this + 0x29e0) = 1;
  *(undefined4 *)((int)this + 0x29e4) = 2;
  FUN_10052de1((int *)((int)this + 0x2ae0),0,0x34);
  FUN_10052de1((int *)((int)this + 0x2b20),0,0x40);
  puVar2 = (undefined4 *)((int)this + 0x2b60);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2b88);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2ba0);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2bd0);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10052de1((int *)((int)this + 0x2bf8),0,0x30);
  FUN_10052de1((int *)((int)this + 0x2c28),0,0x30);
  FUN_10052de1((int *)((int)this + 0x2c70),0,0x660);
  return this;
}

