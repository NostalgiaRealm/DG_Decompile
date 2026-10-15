/*
 * FUN_100989a6 at 100989a6
 * undefined __thiscall FUN_100989a6(void * this, uint param_1, uint param_2, undefined4 param_3, uint param_4)
 * Address ranges: 100989a6-10098a1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100989a6(void *this,uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)this + 0x8e0) != 0) && (param_1 != 0)) {
    uVar1 = FUN_1009ed73(*(void **)((int)this + 0x8e4),param_1,param_2,param_3,
                         *(int *)((int)this + 0x8e0),(int)this,param_4,*(int *)((int)this + 0x938),
                         *(int *)((int)this + 0x93c));
    if (*(int *)(*(int *)((int)this + 0x8e0) + 0x20) != 3) {
      uVar2 = FUN_1009ea3f(uVar1,param_4,(byte)param_3);
      if ((char)uVar2 != '\0') {
        FUN_100981d0(this,param_1,param_2,uVar1,param_4);
      }
    }
  }
  return;
}

