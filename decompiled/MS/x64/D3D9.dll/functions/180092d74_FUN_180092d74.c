/*
 * FUN_180092d74 at 180092d74
 * char __fastcall FUN_180092d74(longlong param_1, longlong * param_2, int param_3, byte param_4)
 * Address ranges: 180092d74-180092de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180092d74(longlong param_1,longlong *param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    uVar3 = FUN_18008ec70(param_1,(int)param_2,param_3);
    cVar2 = (char)uVar3;
  }
  else {
    cVar2 = FUN_1800920b8(param_1,param_2,param_3,(uint)param_4);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x16b) = 0;
      uVar4 = param_3 * *(int *)(param_1 + 0x3c) + (int)param_2;
      uVar3 = (ulonglong)(uVar4 & 0x3f);
      pbVar1 = (byte *)(param_1 + 0x158 + (ulonglong)(uVar4 >> 6) * 8 + ((longlong)uVar3 >> 3));
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    }
  }
  return cVar2;
}

