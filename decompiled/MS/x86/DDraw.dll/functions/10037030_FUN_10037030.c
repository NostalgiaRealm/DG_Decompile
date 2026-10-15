/*
 * FUN_10037030 at 10037030
 * undefined4 __fastcall FUN_10037030(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 10037030-10037104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_10037030(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
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
    iVar2 = FUN_10061253(pbVar1,&DAT_10064e7c);
    puVar3 = param_5;
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_10061253(pbVar1,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_10061253(pbVar1,&DAT_10064e8c);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_10061253(pbVar1,&DAT_10064e90);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_10061253(pbVar1,&DAT_10064e94);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              puVar3 = (undefined4 *)FUN_10061253(pbVar1,&DAT_10064e98);
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

