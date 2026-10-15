/*
 * FUN_10035628 at 10035628
 * undefined4 __thiscall FUN_10035628(void * this, int * param_1, int param_2)
 * Address ranges: 10035628-10035661
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10035628(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_80 [31];
  
  uVar2 = 0x80070057;
  if (param_1 != (int *)0x0) {
    uVar1 = FUN_10031855(param_1,local_80);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_1002b0f9(*(void **)this,(int)local_80,param_2);
    }
  }
  return uVar2;
}

