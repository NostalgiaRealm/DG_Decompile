/*
 * FUN_1003cee8 at 1003cee8
 * undefined4 * __fastcall FUN_1003cee8(undefined4 param_1, void * param_2)
 * Address ranges: 1003cee8-1003cf7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1003cee8(undefined4 param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *this;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_28 [4];
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 local_8;
  
  local_8 = DAT_1005fa00;
  piVar1 = (int *)FUN_1003cc18(param_2,local_28);
  local_18 = *piVar1;
  iStack_14 = piVar1[1];
  iStack_10 = piVar1[2];
  iStack_c = piVar1[3];
  uVar2 = FUN_1004f21a(*(int *)((int)param_2 + 0xd2));
  this = (undefined4 *)FUN_1005566f(0x3bc);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1004f33c(this,local_8,uVar2);
    *this = &PTR_FUN_1005a6e0;
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

