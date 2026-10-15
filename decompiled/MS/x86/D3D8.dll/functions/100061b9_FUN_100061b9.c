/*
 * FUN_100061b9 at 100061b9
 * undefined4 * __thiscall FUN_100061b9(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 * param_8)
 * Address ranges: 100061b9-100063fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100061b9(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_100136b0(this,DAT_100ba2b4,(undefined4 *)(-(uint)(param_1 != 0) & param_1 + 0xcU),this,this,
               param_5,param_6);
  *(undefined ***)this = &PTR_FUN_100af4e8;
  *(undefined4 *)((int)this + 0xad0) = 0;
  *(undefined4 *)((int)this + 0xad4) = 0;
  *(undefined4 *)((int)this + 0xad8) = 0;
  *(undefined4 *)((int)this + 0xadc) = 0;
  *(undefined4 *)((int)this + 0xae0) = 0;
  *(undefined4 *)((int)this + 0xae4) = 0;
  *(undefined4 *)((int)this + 0xae8) = 0;
  *(undefined4 *)((int)this + 0xaec) = 0;
  *(undefined4 *)((int)this + 0xaf0) = 0;
  *(int *)((int)this + 0xacc) = param_1;
  *(undefined4 *)((int)this + 0xb00) = param_2;
  *(undefined4 *)((int)this + 0xb04) = param_3;
  *(undefined4 *)((int)this + 0xb08) = param_4;
  *(undefined4 *)((int)this + 0xb0c) = *param_8;
  *(undefined4 *)((int)this + 0xb10) = param_8[1];
  *(undefined4 *)((int)this + 0xb14) = param_8[2];
  *(undefined4 *)((int)this + 0xb18) = param_8[3];
  *(undefined4 *)((int)this + 0xb1c) = 0;
  *(undefined4 *)((int)this + 0xb20) = 0;
  *(undefined4 *)((int)this + 0xb24) = 0;
  *(undefined4 *)((int)this + 0xb28) = 0;
  *(undefined4 *)((int)this + 0xb2c) = 0;
  *(undefined4 *)((int)this + 0xb30) = 0;
  *(undefined4 *)((int)this + 0xb34) = 0;
  *(undefined4 *)((int)this + 0xb38) = 0;
  *(undefined4 *)((int)this + 0xb3c) = 0;
  *(undefined4 *)((int)this + 0xb40) = 0;
  *(undefined4 *)((int)this + 0xb44) = 0;
  *(undefined4 *)((int)this + 0xb48) = 0;
  *(undefined4 *)((int)this + 0xb4c) = 0;
  *(undefined4 *)((int)this + 0xb50) = 0;
  *(undefined4 *)((int)this + 0xb54) = 0;
  *(undefined4 *)((int)this + 0xb58) = 0;
  *(undefined4 *)((int)this + 0xb5c) = 0;
  *(undefined4 *)((int)this + 0xb60) = 0;
  *(undefined4 *)((int)this + 0xb64) = 0;
  *(undefined4 *)((int)this + 0xb68) = 0;
  *(undefined4 *)((int)this + 0xb6c) = 0;
  *(undefined4 *)((int)this + 0xb70) = 0;
  *(undefined4 *)((int)this + 0xb74) = 0;
  *(undefined4 *)((int)this + 0xb78) = 0;
  *(undefined4 *)((int)this + 0xb7c) = 0;
  *(undefined4 *)((int)this + 0xb80) = 0;
  *(undefined4 *)((int)this + 0xb84) = 0;
  *(undefined4 *)((int)this + 0xb88) = 0;
  *(undefined4 *)((int)this + 0xb8c) = 0;
  *(undefined4 *)((int)this + 0xb90) = 0;
  *(undefined4 *)((int)this + 0x57b8) = 0;
  *(undefined4 *)((int)this + 0x587c) = 0;
  *(undefined4 *)((int)this + 0x5880) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5884) = 0;
  *(undefined4 *)((int)this + 0x5888) = 0;
  *(undefined4 *)((int)this + 0x588c) = 0;
  *(undefined4 *)((int)this + 0x5890) = 0;
  *(undefined4 *)((int)this + 0x5894) = 0;
  *(undefined4 *)((int)this + 0x5898) = 0;
  *(undefined4 *)((int)this + 0x589c) = 0;
  *(undefined4 *)((int)this + 0x58a0) = 0xffff;
  *(undefined4 *)((int)this + 0x58a4) = 0;
  *(undefined4 *)((int)this + 0x58ac) = 0xffff;
  *(undefined4 *)((int)this + 0x58b8) = 0;
  *(undefined4 *)((int)this + 0x58b4) = 0;
  *(undefined4 *)((int)this + 0x58b0) = 0;
  *(undefined1 *)((int)this + 0x58c0) = 0;
  *(undefined4 *)((int)this + 0x58a8) = 0xff;
  *(undefined4 *)((int)this + 0x58bc) = 0x10001;
  puVar2 = (undefined4 *)((int)this + 0xadc);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_100ada8e((int *)((int)this + 0x57bc),0,0x40);
  FUN_100ada8e((int *)((int)this + 0x57fc),0,0x40);
  FUN_100ada8e((int *)((int)this + 0x583c),0,0x40);
  FUN_100ada8e((int *)((int)this + 0xfc0),0,0x4370);
  FUN_100ada8e((int *)((int)this + 0x5330),0,0x80);
  puVar2 = (undefined4 *)((int)this + 0xf94);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0xb94);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return this;
}

