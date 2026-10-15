/*
 * FUN_1001ac35 at 1001ac35
 * undefined __thiscall FUN_1001ac35(void * this, uint param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 1001ac35-1001ac69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ac35(void *this,uint param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  void *this_00;
  
  cVar1 = FUN_100188b4((int)this);
  if (cVar1 == '\0') {
    FUN_10015bc3(this_00,param_1,(int)param_2);
  }
  else {
    FUN_1001a1b9(this_00,param_1,param_2,param_3 & 0xff);
  }
  return;
}

