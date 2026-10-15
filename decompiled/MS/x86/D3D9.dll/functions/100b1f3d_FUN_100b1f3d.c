/*
 * FUN_100b1f3d at 100b1f3d
 * undefined4 * __fastcall FUN_100b1f3d(undefined4 param_1, void * param_2)
 * Address ranges: 100b1f3d-100b1fd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100b1f3d(undefined4 param_1,void *param_2)

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
  
  local_8 = DAT_100dea9c;
  piVar1 = (int *)FUN_100b1c38(param_2,local_28);
  local_18 = *piVar1;
  iStack_14 = piVar1[1];
  iStack_10 = piVar1[2];
  iStack_c = piVar1[3];
  uVar2 = FUN_100b2954(*(int *)((int)param_2 + 0xd2));
  this = (undefined4 *)FUN_100cfd55(0x3bc);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_100b2a76(this,local_8,uVar2);
    *this = &PTR_FUN_100d82b4;
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

