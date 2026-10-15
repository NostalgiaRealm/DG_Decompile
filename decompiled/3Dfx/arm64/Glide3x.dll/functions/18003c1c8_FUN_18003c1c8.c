/*
 * FUN_18003c1c8 at 18003c1c8
 * undefined8 __cdecl FUN_18003c1c8(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, int param_6)
 * Address ranges: 18003c1c8-18003c2ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003c1c8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 *param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  uint local_40 [4];
  
  if (param_6 != 1) {
    return 0;
  }
  pbVar4 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
  uVar3 = FUN_1800637c8(pbVar4,&DAT_180068088);
  if (uVar3 == 0) {
    bVar1 = true;
  }
  else {
    uVar3 = FUN_1800637c8(pbVar4,(byte *)"false");
    if (uVar3 == 0) {
      *param_5 = 0;
      return 1;
    }
    local_40[0] = 0;
    cVar2 = (**(code **)(*param_2 + 0x58))(param_2,param_3,param_4,0,local_40);
    if (cVar2 == '\0') {
      return 0;
    }
    if (1 < local_40[0]) {
      return 0;
    }
    bVar1 = local_40[0] != 0;
  }
  *param_5 = bVar1;
  return 1;
}

