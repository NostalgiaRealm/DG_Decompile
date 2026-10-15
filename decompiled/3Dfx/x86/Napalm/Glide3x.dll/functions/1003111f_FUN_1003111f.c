/*
 * FUN_1003111f at 1003111f
 * undefined4 __fastcall FUN_1003111f(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, int param_6)
 * Address ranges: 1003111f-100311a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1003111f(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,int param_6)

{
  uint in_EAX;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 1) {
    pbVar1 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    iVar2 = FUN_1005572b(pbVar1,&DAT_100599b8);
    if (iVar2 == 0) {
      *param_5 = 1;
      param_5 = (undefined1 *)0x0;
    }
    else {
      iVar2 = FUN_1005572b(pbVar1,(byte *)"false");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        param_6 = 0;
        in_EAX = (**(code **)(*param_2 + 0x2c))(param_3,param_4,0,&param_6);
        if (((char)in_EAX == '\0') || ((param_6 != 0 && (in_EAX = param_6, param_6 != 1))))
        goto LAB_100311a3;
        *param_5 = param_6 != 0;
      }
    }
    uVar3 = CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  else {
LAB_100311a3:
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

