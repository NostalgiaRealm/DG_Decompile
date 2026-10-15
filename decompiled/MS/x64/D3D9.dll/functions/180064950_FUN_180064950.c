/*
 * FUN_180064950 at 180064950
 * undefined8 __fastcall FUN_180064950(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180064950-1800649e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180064950(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  
  local_38 = 0x43425844;
  local_24 = 1;
  local_1c = 3;
  local_14 = 0;
  local_34 = 0;
  uStack_2c = 0;
  FUN_1800edd90(param_2,(undefined8 *)&local_38,0x2c);
  lVar1 = *param_2;
  *(int *)(lVar1 + 0x20) = (int)param_2[1] - (int)lVar1;
  uVar2 = FUN_18006444c(lVar1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    uVar3 = (int)param_2[1] - (int)*param_2;
    *(uint *)(*param_2 + 0x24) = uVar3;
    uVar2 = FUN_1800647ac((ulonglong)uVar3,param_2,param_3);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_2 + 0x28) = (int)param_2[1] - (int)*param_2;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

