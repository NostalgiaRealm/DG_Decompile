/*
 * FUN_100236c7 at 100236c7
 * undefined __thiscall FUN_100236c7(void * this, int * param_1)
 * Address ranges: 100236c7-10023795
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100236c7(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_10060d45(param_1,0,0x13c);
  FUN_100235a9(this,param_1);
  *param_1 = 0x13c;
  param_1[0x2b] = *(int *)((int)this + 0x98);
  param_1[0x2c] = *(int *)((int)this + 0x9c);
  param_1[0x2d] = *(int *)((int)this + 0xa0);
  piVar2 = (int *)((int)this + 0xa4);
  piVar3 = param_1 + 0x2e;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  param_1[0x36] = *(int *)((int)this + 0xc4);
  param_1[0x37] = *(int *)((int)this + 200);
  param_1[0x38] = *(int *)((int)this + 0xcc);
  piVar2 = (int *)((int)this + 0xd0);
  piVar3 = param_1 + 0x39;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  param_1[0x41] = *(int *)((int)this + 0xf0);
  param_1[0x42] = *(int *)((int)this + 0xf4);
  param_1[0x43] = *(int *)((int)this + 0xf8);
  piVar2 = (int *)((int)this + 0xfc);
  piVar3 = param_1 + 0x44;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

