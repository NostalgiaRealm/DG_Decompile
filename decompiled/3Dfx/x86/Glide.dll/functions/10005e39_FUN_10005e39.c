/*
 * FUN_10005e39 at 10005e39
 * uint __fastcall FUN_10005e39(int * param_1, undefined4 param_2)
 * Address ranges: 10005e39-10005e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10005e39(int *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pbVar4 = (byte *)0x0;
  local_8 = 0x104;
  local_10 = param_1;
  local_c = param_2;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  pbVar2 = (byte *)0x0;
  if (iVar1 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x18))(pbVar4);
      if (iVar1 == 0) {
        uVar3 = FUN_10005e84(&local_10,pbVar4);
        return uVar3;
      }
      pbVar4 = pbVar4 + 1;
      pbVar2 = (byte *)(**(code **)(*param_1 + 0x14))();
    } while (pbVar4 < pbVar2);
  }
  return (uint)pbVar2 & 0xffffff00;
}

