/*
 * FUN_140009210 at 140009210
 * ulonglong __cdecl FUN_140009210(undefined8 param_1, byte * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140009210-14000932f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140009210(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint local_420 [2];
  byte local_418 [1032];
  
  FUN_140025250(local_418,0,0x400);
  local_420[0] = 0;
  iVar1 = FUN_1400248b0(param_2,(byte *)"%d %s",local_420,local_418,param_5,param_6,param_7,param_8)
  ;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    pbVar3 = local_418;
    while (local_418[0] != 0) {
      iVar1 = FUN_140024c68((int)(char)*pbVar3);
      *pbVar3 = (byte)iVar1;
      pbVar3 = pbVar3 + 1;
      local_418[0] = *pbVar3;
    }
    uVar2 = FUN_140024ce0(local_418,&DAT_14002829c);
    if ((uVar2 == 0) || (uVar2 = FUN_140024ce0(local_418,&DAT_1400282a0), uVar2 == 0)) {
      return -(ulonglong)(local_420[0] >> 0x1f) & 0xfffffc0000000000 | (ulonglong)local_420[0] << 10
      ;
    }
    uVar2 = FUN_140024ce0(local_418,&DAT_1400282a4);
    if ((uVar2 != 0) && (uVar2 = FUN_140024ce0(local_418,&DAT_1400282a8), uVar2 != 0)) {
      uVar2 = FUN_140024ce0(local_418,&DAT_1400282ac);
      if ((uVar2 != 0) && (uVar2 = FUN_140024ce0(local_418,&DAT_1400282b0), uVar2 != 0)) {
        return 0;
      }
      return -(ulonglong)(local_420[0] >> 0x1f) & 0xc000000000000000 |
             (ulonglong)local_420[0] << 0x1e;
    }
  }
  return -(ulonglong)(local_420[0] >> 0x1f) & 0xfff0000000000000 | (ulonglong)local_420[0] << 0x14;
}

