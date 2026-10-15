/*
 * FUN_18000a810 at 18000a810
 * undefined8 __cdecl FUN_18000a810(undefined8 * param_1, undefined4 param_2)
 * Address ranges: 18000a810-18000a90f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000a810(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  LPCSTR lpMultiByteStr;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if (iVar1 != 0) {
    do {
      pbVar3 = (byte *)(**(code **)(*(longlong *)*param_1 + 0x40))
                                 ((longlong *)*param_1,param_2,uVar4);
      uVar2 = FUN_180060ae0(pbVar3,(byte *)"datafolderredirection");
      if ((uVar2 == 0) &&
         (iVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_2,uVar4),
         iVar1 == 1)) {
        lpMultiByteStr =
             (LPCSTR)(**(code **)(*(longlong *)*param_1 + 0x50))
                               ((longlong *)*param_1,param_2,uVar4,0);
        if ((lpMultiByteStr != (LPCSTR)0x0) && (*lpMultiByteStr != '\0')) {
          MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)param_1[1],*(int *)(param_1 + 2));
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_2);
    } while (uVar4 < uVar2);
  }
  return 0;
}

