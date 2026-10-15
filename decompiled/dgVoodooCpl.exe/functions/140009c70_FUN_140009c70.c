/*
 * FUN_140009c70 at 140009c70
 * undefined4 __fastcall FUN_140009c70(ulonglong param_1, byte * param_2)
 * Address ranges: 140009c70-140009d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140009c70(ulonglong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong local_res8;
  byte local_408 [1024];
  
  local_res8 = param_1;
  FUN_14002511c(local_408,0,0x400);
  local_res8 = local_res8 & 0xffffffff00000000;
  iVar3 = FUN_1400242b4(param_2,(byte *)"%d %s",&local_res8,local_408);
  if (iVar3 == 2) {
    pbVar4 = local_408;
    bVar2 = local_408[0];
    bVar1 = local_408[0];
    while (bVar1 != 0) {
      local_408[0] = bVar2;
      iVar3 = FUN_140024604((int)(char)*pbVar4);
      *pbVar4 = (byte)iVar3;
      pbVar4 = pbVar4 + 1;
      bVar2 = local_408[0];
      bVar1 = *pbVar4;
    }
    iVar3 = FUN_140024ce8(local_408,&DAT_1400281fc);
    if (((iVar3 != 0) && (iVar3 = FUN_140024ce8(local_408,&DAT_140028200), iVar3 != 0)) &&
       ((bVar2 != 0x73 || (local_408[1] != '\0')))) {
      return 0;
    }
  }
  return (undefined4)local_res8;
}

