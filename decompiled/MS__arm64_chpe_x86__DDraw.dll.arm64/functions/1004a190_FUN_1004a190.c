/*
 * FUN_1004a190 at 1004a190
 * undefined FUN_1004a190(void)
 * Address ranges: 1004a190-1004a23b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004a190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [16];
  
  uVar2 = 0;
  FUN_100475d0(param_1,auStack_40,param_3,param_4);
  iVar1 = (*(code *)PTR_FUN_100ba248)(auStack_40);
  if (iVar1 == 0) {
    uVar2 = FUN_100491f0(param_1,param_2,param_3,auStack_40,param_5,param_6,0,0,1);
  }
  return uVar2;
}

