/*
 * FUN_140009b58 at 140009b58
 * longlong __fastcall FUN_140009b58(ulonglong param_1, byte * param_2)
 * Address ranges: 140009b58-140009c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140009b58(ulonglong param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong local_res8;
  char local_408 [1024];
  
  local_res8 = param_1;
  FUN_14002511c(local_408,0,0x400);
  local_res8 = local_res8 & 0xffffffff00000000;
  iVar2 = FUN_1400242b4(param_2,(byte *)"%d %s",&local_res8,local_408);
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return 0;
    }
    pcVar3 = local_408;
    cVar1 = local_408[0];
    while (cVar1 != '\0') {
      iVar2 = FUN_140024604((int)*pcVar3);
      *pcVar3 = (char)iVar2;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (((local_408[0] == 'k') && (local_408[1] == '\0')) ||
       ((local_408[0] == 'k' && ((local_408[1] == 'b' && (local_408[2] == '\0')))))) {
      return (longlong)(int)local_res8 << 10;
    }
    if ((local_408[0] != 'm') ||
       ((local_408[1] != '\0' && ((local_408[1] != 'b' || (local_408[2] != '\0')))))) {
      if (local_408[0] != 'g') {
        return 0;
      }
      if (local_408[1] != '\0') {
        if (local_408[1] != 'b') {
          return 0;
        }
        if (local_408[2] != '\0') {
          return 0;
        }
      }
      return (longlong)(int)local_res8 << 0x1e;
    }
  }
  return (longlong)(int)local_res8 << 0x14;
}

