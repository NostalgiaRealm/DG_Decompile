/*
 * FUN_10066d7a at 10066d7a
 * uint __fastcall FUN_10066d7a(undefined4 param_1, undefined4 param_2, int * param_3, int param_4, int param_5, uint param_6)
 * Address ranges: 10066d7a-10066e70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_10066d7a(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6
            )

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_1006b9de(param_1,param_2,param_3,param_4,param_5,param_6);
  iVar1 = *(int *)(param_4 + 0x1a4);
  if (iVar1 == 0) {
    return uVar2;
  }
  if ((param_5 == 0) || (param_5 == 3)) {
    param_6._0_1_ = 0xf;
  }
  uVar2 = FUN_100c2e34(param_4 + 0x18,(uint)(byte)(&DAT_100d24e8)[(uint)(byte)param_6 * 2],'\x01');
  if (param_5 == 0) {
    if (*(char *)(iVar1 + 0x52e) != '\0') {
      uVar2 = FUN_100661dc(param_3,iVar1,uVar2);
      goto LAB_10066e3b;
    }
  }
  else {
    if (param_5 != 3) {
      uVar2 = FUN_10066674(param_3,iVar1,uVar2);
      return uVar2;
    }
    if (*(char *)(iVar1 + 0x52f) != '\0') {
      uVar2 = FUN_1006650b(param_3,iVar1,uVar2);
      goto LAB_10066e3b;
    }
  }
  uVar2 = FUN_10066674(param_3,iVar1,uVar2);
LAB_10066e3b:
  FUN_100c3be1((int *)(iVar1 + 0x18),param_3,0x36);
  return uVar2;
}

