/*
 * FUN_10024ae1 at 10024ae1
 * undefined __thiscall FUN_10024ae1(void * this, int * param_1, int * param_2)
 * Address ranges: 10024ae1-10024b64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024ae1(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24 [8];
  
  FUN_10060d45(param_1,0,0x7c);
  *param_1 = 0x7c;
  param_1[0x1a] = 0x8200;
  iVar3 = param_2[5];
  param_1[3] = *param_2;
  param_1[2] = param_2[1];
  param_1[6] = param_2[4];
  uVar1 = FUN_10031adf(this,iVar3);
  piVar2 = FUN_10024c76(this,local_24,uVar1);
  piVar4 = param_1 + 0x12;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[4] = (uint)(param_2[5] * *param_2) >> 3;
  iVar3 = 0x100f;
  if (param_1[6] != 0) {
    iVar3 = 0x4100f;
  }
  param_1[1] = iVar3;
  return;
}

