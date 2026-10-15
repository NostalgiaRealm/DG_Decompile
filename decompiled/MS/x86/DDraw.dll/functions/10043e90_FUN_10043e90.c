/*
 * FUN_10043e90 at 10043e90
 * undefined4 * __fastcall FUN_10043e90(undefined4 param_1, void * param_2)
 * Address ranges: 10043e90-10043f25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10043e90(undefined4 param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *this;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_2c [5];
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 local_8;
  
  local_8 = DAT_1006c250;
  piVar1 = (int *)FUN_10043b98(param_2,local_2c);
  local_18 = *piVar1;
  iStack_14 = piVar1[1];
  iStack_10 = piVar1[2];
  iStack_c = piVar1[3];
  uVar2 = FUN_100448c5(*(int *)((int)param_2 + 0xd2));
  this = (undefined4 *)FUN_10060bca(0x3bc);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_100449e7(this,local_8,uVar2);
    *this = &PTR_FUN_10065cb4;
    this[0xea] = 0;
    this[0xeb] = local_18;
    this[0xec] = iStack_14;
    this[0xed] = iStack_10;
    this[0xee] = iStack_c;
    puVar4 = this + 0xd8;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    *(bool *)(this + 0xe9) = this[0xeb] == 5;
  }
  return this;
}

