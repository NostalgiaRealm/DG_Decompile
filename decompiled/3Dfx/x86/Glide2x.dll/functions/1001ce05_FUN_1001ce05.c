/*
 * FUN_1001ce05 at 1001ce05
 * undefined1 __thiscall FUN_1001ce05(void * this, uint param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 1001ce05-1001ce6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1001ce05(void *this,uint param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
            LONG param_6,LONG param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    iVar2 = 2;
  }
  (**(code **)(*(int *)this + 0x15c))();
  uVar1 = FUN_1001c88f(this,param_1 & 1,iVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(*(int *)this + 0x160))();
  return (char)uVar1;
}

