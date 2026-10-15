/*
 * FUN_1001d5be at 1001d5be
 * undefined4 * __thiscall FUN_1001d5be(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1001d5be-1001d777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1001d5be(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_10053b9c;
  FUN_10019e52((undefined4 *)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0x2960) = param_1;
  *(undefined4 *)((int)this + 0x2a30) = 0;
  *(undefined ***)this = &PTR_LAB_10053a00;
  *(undefined ***)((int)this + 0x2958) = &PTR_FUN_100537c4;
  *(undefined4 *)((int)this + 0x295c) = 0;
  *(undefined4 *)((int)this + 0x2a34) = 0;
  *(undefined4 *)((int)this + 0x315c) = param_2;
  *(undefined4 *)((int)this + 0x3160) = param_3;
  *(undefined4 *)((int)this + 0x3164) = param_4;
  *(undefined4 *)((int)this + 0x3168) = param_5;
  *(undefined4 *)((int)this + 0x316c) = param_6;
  *(undefined4 *)((int)this + 0x2bb8) = 0;
  *(undefined4 *)((int)this + 0x2bbc) = 0;
  *(undefined4 *)((int)this + 0x2a38) = 0;
  *(undefined4 *)((int)this + 0x2a3c) = 0;
  *(undefined4 *)((int)this + 0x2a74) = 0;
  *(undefined4 *)((int)this + 0x2a78) = 0;
  *(undefined4 *)((int)this + 0x2a7c) = 0;
  *(undefined4 *)((int)this + 0x2b18) = 0;
  *(undefined4 *)((int)this + 0x2b1c) = 0;
  *(undefined4 *)((int)this + 0x2b20) = 0;
  *(undefined4 *)((int)this + 0x2b24) = 0;
  *(undefined4 *)((int)this + 0x2b28) = 0;
  *(undefined4 *)((int)this + 0x2b2c) = 0;
  *(undefined4 *)((int)this + 0x2bc0) = 0;
  *(undefined4 *)((int)this + 0x2bc4) = 0;
  *(undefined4 *)((int)this + 0x2bc8) = 0;
  *(undefined4 *)((int)this + 0x3150) = 0;
  *(undefined4 *)((int)this + 0x3170) = 0;
  *(undefined2 *)((int)this + 0x3154) = 0;
  *(undefined2 *)((int)this + 0x3157) = 0;
  *(undefined1 *)((int)this + 0x3156) = 0;
  *(undefined2 *)((int)this + 0x315a) = 0;
  *(undefined1 *)((int)this + 0x3159) = 0;
  FUN_10050561((int *)((int)this + 0x296c),0,0xc4);
  *(undefined4 *)((int)this + 0x2964) = 1;
  *(undefined4 *)((int)this + 0x2968) = 2;
  FUN_10050561((int *)((int)this + 0x2a40),0,0x34);
  FUN_10050561((int *)((int)this + 0x2a80),0,0x40);
  puVar2 = (undefined4 *)((int)this + 0x2ac0);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2ae8);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2b00);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x2b30);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10050561((int *)((int)this + 0x2b58),0,0x30);
  FUN_10050561((int *)((int)this + 0x2b88),0,0x30);
  FUN_10050561((int *)((int)this + 0x2bd0),0,0x580);
  return this;
}

