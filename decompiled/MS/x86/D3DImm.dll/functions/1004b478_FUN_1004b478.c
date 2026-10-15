/*
 * FUN_1004b478 at 1004b478
 * int __thiscall FUN_1004b478(void * this, int param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1004b478-1004b4a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004b478(void *this,int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = -0x7ff8ffa9;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    iVar1 = FUN_1004b6db((void *)((int)this + 4),param_1,param_2,(int *)0x0,param_3);
  }
  return iVar1;
}

