/*
 * FUN_10023796 at 10023796
 * undefined __thiscall FUN_10023796(void * this, int * param_1)
 * Address ranges: 10023796-10023827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023796(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_10060d45(param_1,0,0x16c);
  FUN_100236c7(this,param_1);
  *param_1 = 0x16c;
  param_1[0x4c] = *(int *)((int)this + 0x11c);
  param_1[0x4d] = *(int *)((int)this + 0x120);
  param_1[0x4e] = *(int *)((int)this + 0x124);
  param_1[0x4f] = *(int *)((int)this + 0x128);
  param_1[0x50] = *(int *)((int)this + 300);
  param_1[0x51] = *(int *)((int)this + 0x130);
  param_1[0x52] = *(int *)((int)this + 0x134);
  piVar2 = (int *)((int)this + 0x138);
  piVar3 = param_1 + 0x53;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

