/*
 * FUN_100074ed at 100074ed
 * undefined4 __fastcall FUN_100074ed(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 100074ed-100075c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100074ed(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  uint in_EAX;
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar5 = 1;
  if (param_6 == 1) {
    pbVar1 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    iVar2 = FUN_1004f6cb(pbVar1,&DAT_100528d0);
    puVar3 = param_5;
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_1004f6cb(pbVar1,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_1004f6cb(pbVar1,&DAT_100528e0);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_1004f6cb(pbVar1,&DAT_100528e4);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_1004f6cb(pbVar1,&DAT_100528e8);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              puVar3 = (undefined4 *)FUN_1004f6cb(pbVar1,&DAT_100528ec);
              if (puVar3 == (undefined4 *)0x0) {
                *param_5 = 0x10;
                puVar3 = param_5;
              }
              else {
                uVar5 = 0;
              }
            }
          }
        }
      }
    }
    uVar4 = CONCAT31((int3)((uint)puVar3 >> 8),uVar5);
  }
  else {
    uVar4 = in_EAX & 0xffffff00;
  }
  return uVar4;
}

