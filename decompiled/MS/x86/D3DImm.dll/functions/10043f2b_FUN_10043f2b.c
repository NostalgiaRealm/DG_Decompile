/*
 * FUN_10043f2b at 10043f2b
 * undefined __thiscall FUN_10043f2b(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10043f2b-10043f61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10043f2b(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 3) {
    uVar1 = 0x1c4;
  }
  else {
    uVar1 = 0x1e2;
    if (param_2 != 2) {
      uVar1 = 0x112;
    }
  }
  FUN_100448ba(this,param_1,uVar1,param_3,param_4,param_5);
  return;
}

