/*
 * FUN_1008758e at 1008758e
 * undefined __thiscall FUN_1008758e(void * this, uint param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 1008758e-100875c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008758e(void *this,uint param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  void *this_00;
  
  cVar1 = FUN_10085350((int)this);
  if (cVar1 == '\0') {
    FUN_10082618(this_00,param_1,(int)param_2);
  }
  else {
    FUN_10086b12(this_00,param_1,param_2,param_3 & 0xff);
  }
  return;
}

