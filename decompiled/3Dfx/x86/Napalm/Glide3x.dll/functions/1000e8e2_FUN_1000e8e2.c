/*
 * FUN_1000e8e2 at 1000e8e2
 * undefined4 * __thiscall FUN_1000e8e2(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1000e8e2-1000eaa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1000e8e2(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_10058f30;
  FUN_100092d3((undefined1 *)((int)this + 0xe4));
  *(undefined4 *)((int)this + 0x2b18) = param_1;
  *(undefined4 *)((int)this + 0x2c10) = 0;
  *(undefined ***)this = &PTR_FUN_10058d68;
  *(undefined ***)((int)this + 0x2b10) = &PTR_FUN_10058bac;
  *(undefined4 *)((int)this + 0x2b14) = 0;
  *(undefined4 *)((int)this + 0x2c14) = 0;
  *(undefined4 *)((int)this + 0x365c) = param_2;
  *(undefined4 *)((int)this + 0x3660) = param_3;
  *(undefined4 *)((int)this + 0x3664) = param_4;
  *(undefined4 *)((int)this + 0x3668) = param_5;
  *(undefined4 *)((int)this + 0x366c) = param_6;
  *(undefined4 *)((int)this + 0x2da0) = 0;
  *(undefined4 *)((int)this + 0x2da4) = 0;
  *(undefined4 *)((int)this + 0x2c18) = 0;
  *(undefined4 *)((int)this + 0x2c1c) = 0;
  *(undefined4 *)((int)this + 0x2c54) = 0;
  *(undefined4 *)((int)this + 0x2c58) = 0;
  *(undefined4 *)((int)this + 0x2c5c) = 0;
  *(undefined4 *)((int)this + 0x2cf8) = 0;
  *(undefined4 *)((int)this + 0x2cfc) = 0;
  *(undefined4 *)((int)this + 0x2d00) = 0;
  *(undefined4 *)((int)this + 0x2d04) = 0;
  *(undefined4 *)((int)this + 0x2d08) = 0;
  *(undefined4 *)((int)this + 0x2d0c) = 0;
  *(undefined4 *)((int)this + 0x2da8) = 0;
  *(undefined4 *)((int)this + 0x2dac) = 0;
  *(undefined4 *)((int)this + 0x2db0) = 0;
  *(undefined4 *)((int)this + 0x3650) = 0;
  *(undefined4 *)((int)this + 0x3670) = 0;
  *(undefined2 *)((int)this + 0x3654) = 0;
  *(undefined2 *)((int)this + 0x3657) = 0;
  *(undefined1 *)((int)this + 0x3656) = 0;
  *(undefined2 *)((int)this + 0x365a) = 0;
  *(undefined1 *)((int)this + 0x3659) = 0;
  FUN_100561f1((int *)((int)this + 0x2b24),0,0xe8);
  *(undefined4 *)((int)this + 0x2b1c) = 1;
  *(undefined4 *)((int)this + 0x2b20) = 2;
  FUN_100561f1((int *)((int)this + 0x2c20),0,0x34);
  FUN_100561f1((int *)((int)this + 0x2c60),0,0x40);
  puVar2 = (undefined4 *)((int)this + 0x2ca0);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2cc8);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2ce0);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_100561f1((int *)((int)this + 0x2d10),0,0x30);
  FUN_100561f1((int *)((int)this + 0x2d40),0,0x30);
  FUN_100561f1((int *)((int)this + 0x2d70),0,0x30);
  FUN_100561f1((int *)((int)this + 0x2dc0),0,0x890);
  return this;
}

