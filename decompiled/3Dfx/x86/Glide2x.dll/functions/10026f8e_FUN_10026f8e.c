/*
 * FUN_10026f8e at 10026f8e
 * undefined4 __thiscall FUN_10026f8e(void * this, byte param_1, byte param_2)
 * Address ranges: 10026f8e-10027001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10026f8e(void *this,byte param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_24 [2];
  int local_1c;
  int local_14 [2];
  int local_c;
  
  uVar1 = FUN_10038c4e((void *)(*(int *)((int)this + 0x54) + 0x38),local_24,param_1 + 1,0,0,0);
  if (local_1c != 0) {
    FUN_10038c4e((void *)(*(int *)((int)this + 0x58) + 0x38),local_14,param_2 + 1,0,0,0);
    if (local_c != 0) {
      uVar2 = FUN_1002c6f1(this,local_1c,local_c,param_1,param_2);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_10038c98(*(int *)((int)this + 0x54) + 0x38);
  }
  return uVar1 & 0xffffff00;
}

