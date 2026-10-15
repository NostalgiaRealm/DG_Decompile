/*
 * FUN_100075e1 at 100075e1
 * undefined4 __fastcall FUN_100075e1(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, int param_6)
 * Address ranges: 100075e1-1000766b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100075e1(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,int param_6)

{
  uint in_EAX;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 1) {
    pbVar1 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    iVar2 = FUN_1004fa5b(pbVar1,&DAT_10052894);
    if (iVar2 == 0) {
      *param_5 = 1;
      param_5 = (undefined1 *)0x0;
    }
    else {
      iVar2 = FUN_1004fa5b(pbVar1,(byte *)"false");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        param_6 = 0;
        in_EAX = (**(code **)(*param_2 + 0x2c))(param_3,param_4,0,&param_6);
        if (((char)in_EAX == '\0') || ((param_6 != 0 && (in_EAX = param_6, param_6 != 1))))
        goto LAB_10007665;
        *param_5 = param_6 != 0;
      }
    }
    uVar3 = CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  else {
LAB_10007665:
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

