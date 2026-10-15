/*
 * FUN_100576ed at 100576ed
 * undefined __thiscall FUN_100576ed(void * this, float param_1, undefined1 param_2)
 * Address ranges: 100576ed-10057747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100576ed(void *this,float param_1,undefined1 param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0xec))(0);
  *(undefined1 *)((int)this + 0xe8c) = param_2;
  iVar1 = (int)param_1;
  *(float *)((int)this + 0xe88) = param_1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (8 < iVar1) {
    iVar1 = 8;
  }
  *(int *)((int)this + 0x6948) = iVar1;
  *(undefined1 *)((int)this + 0xf671) = 1;
  *(int *)((int)this + 0x5198) = iVar1;
  *(undefined1 *)((int)this + 0xf694) = 1;
  return;
}

