/*
 * FUN_10011511 at 10011511
 * undefined4 * __thiscall FUN_10011511(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 10011511-100115aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10011511(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1000fd15(this,param_1,4,param_5);
  *(undefined4 *)((int)this + 0x90) = param_10;
  *(undefined4 *)((int)this + 0x98) = param_2;
  *(undefined4 *)((int)this + 0x9c) = param_3;
  *(undefined4 *)((int)this + 0xa0) = param_4;
  *(undefined4 *)((int)this + 0xa4) = param_6;
  *(undefined4 *)((int)this + 0xa8) = param_7;
  *(undefined4 *)((int)this + 0xac) = param_9;
  *(undefined4 *)((int)this + 0xb0) = param_8;
  *(undefined4 *)((int)this + 0xb4) = param_11;
  *(undefined ***)this = &PTR_LAB_100b1884;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0xb8) = 0;
  FUN_100ada8e((int *)((int)this + 0x38),0,0x40);
  puVar2 = (undefined4 *)((int)this + 0x78);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}

