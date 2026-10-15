/*
 * FUN_100110d5 at 100110d5
 * undefined4 * __thiscall FUN_100110d5(void * this, int param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined1 param_7, undefined1 param_8)
 * Address ranges: 100110d5-1001115e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100110d5(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  FUN_1002548b(this,-(uint)(*(int *)(param_1 + 0xacc) != 0) & *(int *)(param_1 + 0xacc) + 4U,param_8
              );
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_100b184c;
  *(undefined4 *)((int)this + 0x60) = param_2;
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined ***)this = &PTR_LAB_100b1850;
  *(undefined4 *)((int)this + 100) = 0;
  puVar2 = (undefined4 *)((int)this + 0x68);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x88) = param_4;
  *(undefined4 *)((int)this + 0x8c) = param_5;
  *(undefined1 *)((int)this + 0x90) = param_7;
  *(undefined1 *)((int)this + 0x91) = param_6;
  *(undefined1 *)((int)this + 0x92) = 0;
  return this;
}

