/*
 * FUN_1003d12e at 1003d12e
 * undefined __thiscall FUN_1003d12e(void * this, uint param_1, uint param_2, undefined4 param_3, uint param_4)
 * Address ranges: 1003d12e-1003d1a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d12e(void *this,uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)this + 0x8e0) != 0) && (param_1 != 0)) {
    uVar1 = FUN_100397a0(*(void **)((int)this + 0x8e4),param_1,param_2,param_3,
                         *(int *)((int)this + 0x8e0),(int)this,param_4,*(int *)((int)this + 0x938),
                         *(int *)((int)this + 0x93c));
    if (*(int *)(*(int *)((int)this + 0x8e0) + 0x20) != 3) {
      uVar2 = FUN_10039467(uVar1,param_4,(byte)param_3);
      if ((char)uVar2 != '\0') {
        FUN_1003c973(this,param_1,param_2,uVar1,param_4);
      }
    }
  }
  return;
}

