/*
 * FUN_140013efc at 140013efc
 * undefined8 __fastcall FUN_140013efc(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 140013efc-140013fb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140013efc(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  LPCSTR lpMultiByteStr;
  undefined4 extraout_var;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if ((int)uVar2 != 0) {
    do {
      pbVar3 = (byte *)(**(code **)(*(longlong *)*param_1 + 0x40))
                                 ((longlong *)*param_1,param_2,uVar4);
      iVar1 = FUN_140024ce8(pbVar3,(byte *)"datafolderredirection");
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_2,uVar4),
         iVar1 == 1)) {
        lpMultiByteStr =
             (LPCSTR)(**(code **)(*(longlong *)*param_1 + 0x50))
                               ((longlong *)*param_1,param_2,uVar4,0);
        if ((lpMultiByteStr != (LPCSTR)0x0) && (*lpMultiByteStr != '\0')) {
          iVar1 = MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)param_1[1],*(int *)(param_1 + 2)
                                     );
          lpMultiByteStr = (LPCSTR)CONCAT44(extraout_var,iVar1);
        }
        return CONCAT71((int7)((ulonglong)lpMultiByteStr >> 8),1);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_2);
    } while (uVar4 < (uint)uVar2);
  }
  return uVar2 & 0xffffffffffffff00;
}

