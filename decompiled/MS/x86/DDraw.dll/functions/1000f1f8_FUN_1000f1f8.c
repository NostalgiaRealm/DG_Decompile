/*
 * FUN_1000f1f8 at 1000f1f8
 * undefined __thiscall FUN_1000f1f8(void * this, int * param_1, int * param_2, void * param_3)
 * Address ranges: 1000f1f8-1000f25d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f1f8(void *this,int *param_1,int *param_2,void *param_3)

{
  int iVar1;
  undefined1 local_40 [32];
  int local_20;
  
  iVar1 = 1;
  FUN_1001540f(param_3,1,1);
  if (param_3 != (void *)0x0) {
    FUN_10060be1(param_3);
  }
  (**(code **)(*param_1 + 0x28))(param_1,local_40);
  if ((local_20 == 0x2d) || (local_20 == 0x2c)) {
    iVar1 = 2;
  }
  FUN_1004bcb3(*(void **)((int)this + 0x14),param_2,iVar1,(int *)0x0,0,0);
  FUN_1004b30e(*(void **)((int)this + 0xc),param_1);
  return;
}

