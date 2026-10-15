/*
 * FUN_10014fef at 10014fef
 * undefined4 * __thiscall FUN_10014fef(void * this, int param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8)
 * Address ranges: 10014fef-10015078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10014fef(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  FUN_1002cafd(this,-(uint)(*(int *)(param_1 + 0xd90) != 0) & *(int *)(param_1 + 0xd90) + 4U,param_8
              );
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_100d4ce8;
  *(undefined4 *)((int)this + 0x60) = param_2;
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined ***)this = &PTR_LAB_100d4cec;
  *(undefined4 *)((int)this + 100) = 0;
  puVar2 = (undefined4 *)((int)this + 0x68);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x84) = param_4;
  *(undefined4 *)((int)this + 0x88) = param_5;
  *(undefined1 *)((int)this + 0x8c) = param_7;
  *(undefined1 *)((int)this + 0x8d) = param_6;
  *(undefined1 *)((int)this + 0x8e) = 0;
  return this;
}

