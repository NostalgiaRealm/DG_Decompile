/*
 * FUN_10034abd at 10034abd
 * undefined4 __thiscall FUN_10034abd(void * this, int param_1, uint param_2, int * param_3, undefined4 param_4, undefined * param_5)
 * Address ranges: 10034abd-10034b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10034abd(void *this,int param_1,uint param_2,int *param_3,undefined4 param_4,undefined *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int local_80;
  int local_7c [30];
  
  FUN_10060d45(local_7c,0,0x78);
  local_80 = 0x7c;
  if ((param_3 != (int *)0x0) && (uVar1 = FUN_10031855(param_3,&local_80), (char)uVar1 == '\0')) {
    return 0x80070057;
  }
  piVar2 = &local_80;
  if (param_3 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  uVar1 = FUN_10025efc(*(void **)this,param_1,param_2,piVar2,param_4,param_5);
  return uVar1;
}

