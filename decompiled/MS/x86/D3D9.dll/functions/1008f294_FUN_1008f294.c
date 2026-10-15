/*
 * FUN_1008f294 at 1008f294
 * undefined4 * __thiscall FUN_1008f294(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, int param_7, uint param_8, uint param_9)
 * Address ranges: 1008f294-1008f363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1008f294(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(undefined ***)this = &PTR_D3DPERF_GetStatus_100d6950;
  iVar2 = 1;
  iVar1 = param_6;
  if ((param_8 & 4) != 0) {
    iVar1 = iVar2;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0x20) = iVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x1c) = param_5;
  if ((param_7 == 2) || (param_7 == 5)) {
    iVar2 = 6;
  }
  *(int *)((int)this + 0x34) = param_7;
  iVar3 = 0;
  if ((param_8 & 4) != 0) {
    iVar3 = param_6;
  }
  *(int *)((int)this + 0x28) = iVar3;
  *(uint *)((int)this + 0x30) = param_8;
  *(int *)((int)this + 0x24) = iVar2;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x3c) = (undefined1)param_9;
  *(undefined1 *)((int)this + 0x3d) = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_10077c40((int)this);
    param_5 = extraout_EDX;
    if ((char)iVar2 != '\0') goto LAB_1008f330;
  }
  iVar3 = iVar1;
LAB_1008f330:
  *(int *)((int)this + 0x2c) = iVar3;
  if (((param_5 == 0x27) || (param_5 == 0x28)) || (param_5 == 0x29)) {
    *(uint *)((int)this + 0x30) = param_8 | 8;
  }
  FUN_1008f3d7(&param_9,param_1,param_5);
  *(uint *)((int)this + 0x38) = param_9;
  return this;
}

