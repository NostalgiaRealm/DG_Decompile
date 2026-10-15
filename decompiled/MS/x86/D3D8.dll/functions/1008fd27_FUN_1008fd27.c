/*
 * FUN_1008fd27 at 1008fd27
 * undefined4 * __fastcall FUN_1008fd27(undefined4 param_1, void * param_2)
 * Address ranges: 1008fd27-1008fdbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1008fd27(undefined4 param_1,void *param_2)

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
  
  local_8 = DAT_100ba2dc;
  piVar1 = (int *)FUN_1008fa22(param_2,local_28);
  local_18 = *piVar1;
  iStack_14 = piVar1[1];
  iStack_10 = piVar1[2];
  iStack_c = piVar1[3];
  uVar2 = FUN_10090755(*(int *)((int)param_2 + 0xd2));
  this = (undefined4 *)FUN_100ad475(0x3bc);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_10090877(this,local_8,uVar2);
    *this = &PTR_FUN_100b487c;
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

