/*
 * FUN_140016688 at 140016688
 * undefined1 __fastcall FUN_140016688(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 140016688-140016794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_140016688(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 1;
  if (param_6 == 1) {
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar2 = FUN_140024ce8(pbVar3,&DAT_140029280);
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_140024ce8(pbVar3,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_140024ce8(pbVar3,&DAT_140026604);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_140024ce8(pbVar3,&DAT_14002660c);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_140024ce8(pbVar3,&DAT_140029294);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              iVar2 = FUN_140024ce8(pbVar3,&DAT_140029298);
              if (iVar2 == 0) {
                *param_5 = 0x10;
              }
              else {
                uVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

