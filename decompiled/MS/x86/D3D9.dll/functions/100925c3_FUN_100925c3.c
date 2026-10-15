/*
 * FUN_100925c3 at 100925c3
 * undefined __thiscall FUN_100925c3(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 100925c3-10092631
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100925c3(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = param_1 * 0xe + param_2;
  if (param_1 < 0x100) {
    if (*(uint *)((int)this + iVar1 * 4 + 0x68e8) != param_3) {
      FUN_10092632(this,param_1,param_2,param_3);
      *(uint *)((int)this + iVar1 * 4 + 0x68e8) = param_3;
    }
  }
  else if ((*(uint *)((int)this + iVar1 * 4 + 0x3468) != param_3) &&
          ((param_3 != 3 || (((param_2 != 5 && (param_2 != 6)) && (param_2 != 7)))))) {
    FUN_10092632(this,param_1,param_2,param_3);
    *(uint *)((int)this + iVar1 * 4 + 0x3468) = param_3;
  }
  return;
}

