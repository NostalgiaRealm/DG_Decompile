/*
 * FUN_10087be3 at 10087be3
 * int __thiscall FUN_10087be3(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, int param_12, int param_13, int param_14)
 * Address ranges: 10087be3-10087cdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10087be3(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,int param_13,
            int param_14)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  
  if (param_12 < 4) {
    iVar1 = *(int *)(&DAT_100d2644 + param_12 * 4);
  }
  else {
    iVar1 = 0;
  }
  FUN_10087b6c(this,param_1,*(int *)(param_1 + 0x14),param_6,param_7,iVar1,0,0,0,0);
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined4 *)((int)this + 0xd0) = param_3;
  *(undefined4 *)((int)this + 0xd4) = param_4;
  *(undefined4 *)((int)this + 0xd8) = param_8;
  *(undefined4 *)((int)this + 0xdc) = param_9;
  *(undefined4 *)((int)this + 0xe0) = param_5;
  *(int *)((int)this + 0xcc) = param_1;
  *(undefined4 *)((int)this + 0xf4) = param_10;
  *(undefined4 *)((int)this + 0xc4) = 1;
  *(undefined ***)this = &PTR_D3DPERF_SetMarker_100d672c;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_100d66f0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = param_6;
  *(undefined4 *)((int)this + 0xf0) = param_7;
  *(undefined4 *)((int)this + 0xf8) = param_11;
  uVar2 = FUN_1008e318(param_12);
  *(undefined4 *)(extraout_EDX + 0xfc) = uVar2;
  *(undefined4 *)(extraout_EDX + 0xc4) = 0;
  *(uint *)(extraout_EDX + 0x100) = (uint)(param_14 == 1);
  *(uint *)(extraout_EDX + 0x104) = 3 - (uint)(param_13 != 1);
  return extraout_EDX;
}

