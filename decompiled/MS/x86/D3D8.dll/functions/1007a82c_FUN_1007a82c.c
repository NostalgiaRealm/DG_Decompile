/*
 * FUN_1007a82c at 1007a82c
 * undefined4 * __thiscall FUN_1007a82c(void * this, int param_1, int param_2, int param_3, undefined2 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 1007a82c-1007a8dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1007a82c(void *this,int param_1,int param_2,int param_3,undefined2 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 0x78;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(int *)((int)this + 0x84) = iVar1;
  FUN_10001802(this,(int *)((int)this + 0x88),(int)this + 0x208,param_1,param_2,param_3,param_4,5,
               param_5,param_6,param_7,param_8,param_9,param_10);
  *(undefined ***)this = &PTR_FUN_100b3384;
  *(undefined ***)((int)this + 0x70) = &PTR_LAB_100af510;
  *(undefined ***)((int)this + 0x78) = &PTR_FUN_100b3338;
  FUN_100ada8e((int *)((int)this + 0x88),0,0x180);
  uVar2 = 0;
  do {
    SetRect((LPRECT)((int)this + uVar2 * 0x10 + 0x208),0,0,param_2,param_3);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  return this;
}

