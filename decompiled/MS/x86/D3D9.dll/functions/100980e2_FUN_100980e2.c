/*
 * FUN_100980e2 at 100980e2
 * undefined __thiscall FUN_100980e2(void * this, uint param_1, uint param_2, uint param_3, void * param_4)
 * Address ranges: 100980e2-10098115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100980e2(void *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  if (*(uint *)this < *(uint *)((int)this + 4)) {
    FUN_10092b54(param_4,*(int *)((int)this + 8),*(uint *)this,*(undefined4 *)((int)this + 4));
  }
  *(uint *)this = param_1;
  *(uint *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return;
}

