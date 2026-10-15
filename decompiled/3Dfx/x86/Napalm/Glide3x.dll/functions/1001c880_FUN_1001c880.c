/*
 * FUN_1001c880 at 1001c880
 * undefined4 __thiscall FUN_1001c880(void * this, byte param_1, byte param_2)
 * Address ranges: 1001c880-1001c8fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001c880(void *this,byte param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_24 [2];
  int local_1c;
  int local_14 [2];
  int local_c;
  
  uVar1 = FUN_1003eb41((void *)(*(int *)((int)this + 0x208) + 0x38),local_24,param_1 + 1,0,0,0);
  if (local_1c != 0) {
    FUN_1003eb41((void *)(*(int *)((int)this + 0x20c) + 0x38),local_14,param_2 + 1,0,0,0);
    if (local_c != 0) {
      uVar2 = FUN_1000ffb6(this,local_1c,local_c,param_1,param_2);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_1003eb8b(*(int *)((int)this + 0x208) + 0x38);
  }
  return uVar1 & 0xffffff00;
}

