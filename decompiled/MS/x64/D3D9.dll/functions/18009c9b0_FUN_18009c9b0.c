/*
 * FUN_18009c9b0 at 18009c9b0
 * uint __fastcall FUN_18009c9b0(longlong param_1, longlong * param_2, int param_3, int param_4)
 * Address ranges: 18009c9b0-18009ca39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18009c9b0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_48 [8];
  
  uVar4 = 0x80004005;
  iVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_48,0);
  if (-1 < iVar2) {
    if ((local_48[0] == 4) && (2 < *(int *)(param_1 + 0x44) - 3U)) {
      iVar2 = *(int *)(param_1 + 0x3c);
      uVar3 = FUN_1800fb1a0(*(longlong *)(param_1 + 0x58) + 0x12c0);
      if ((char)uVar3 != '\0') {
        uVar4 = iVar2 * param_4 + param_3;
        cVar1 = FUN_1800eacd8(*(longlong **)(*(longlong *)(param_1 + 0x50) + 0x1b500),
                              (ulonglong)param_2,uVar4);
        if (cVar1 != '\0') {
          return uVar4;
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

