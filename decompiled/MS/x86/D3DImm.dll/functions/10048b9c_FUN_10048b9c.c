/*
 * FUN_10048b9c at 10048b9c
 * int __thiscall FUN_10048b9c(void * this, int param_1, undefined4 * param_2, int param_3)
 * Address ranges: 10048b9c-10048bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10048b9c(void *this,int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2 = (undefined4 *)0x0;
    iVar2 = FUN_1004a79f((void *)((int)this + 4),param_1,puVar1,(int *)&param_2,param_3);
  }
  return iVar2;
}

