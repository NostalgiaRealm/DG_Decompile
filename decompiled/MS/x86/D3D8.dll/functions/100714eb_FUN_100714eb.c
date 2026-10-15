/*
 * FUN_100714eb at 100714eb
 * undefined __thiscall FUN_100714eb(void * this, uint param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 100714eb-1007151f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100714eb(void *this,uint param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  void *this_00;
  
  cVar1 = FUN_1006f16a((int)this);
  if (cVar1 == '\0') {
    FUN_1006c477(this_00,param_1,(int)param_2);
  }
  else {
    FUN_10070a6f(this_00,param_1,param_2,param_3 & 0xff);
  }
  return;
}

