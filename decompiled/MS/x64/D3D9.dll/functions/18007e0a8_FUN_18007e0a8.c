/*
 * FUN_18007e0a8 at 18007e0a8
 * undefined4 __fastcall FUN_18007e0a8(undefined8 param_1, longlong param_2, uint param_3, byte param_4)
 * Address ranges: 18007e0a8-18007e16c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18007e0a8(undefined8 param_1,longlong param_2,uint param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (*(int *)(param_2 + 0xec + uVar4 * 4) == 0) {
    if (*(char *)(param_2 + 0x1cb) == '\0') {
      *(uint *)(param_2 + 0xec + uVar4 * 4) = *(uint *)(param_2 + 0x158) | 0x410100;
      *(char *)((ulonglong)*(uint *)(param_2 + 0x158) + 0x146 + param_2) = (char)param_3;
      *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0x158) + 1;
    }
    else {
      *(uint *)(param_2 + 0xec + uVar4 * 4) = *(byte *)(uVar4 + 0x146 + param_2) | 0x410100;
    }
  }
  if (*(char *)(param_2 + 0x1cc) == '\0') {
    uVar2 = 1;
    if (param_3 != 0x10) {
      uVar2 = param_3;
    }
    uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x1b0) + 0x48) >> ((byte)(uVar2 << 2) & 0x3f);
    uVar2 = (uint)uVar3 & 0xf;
    if (((((uVar3 & 0xf) != 0) && (uVar2 != 1)) && (uVar2 != 2)) && ((uVar2 != 3 && (uVar2 != 4))))
    {
      if ((uVar2 == 5) || (uVar2 == 6)) {
        pbVar1 = (byte *)(uVar4 + 0x134 + param_2);
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB_18007e164;
    }
  }
  pbVar1 = (byte *)(uVar4 + 0x134 + param_2);
  *pbVar1 = *pbVar1 | param_4;
LAB_18007e164:
  return *(undefined4 *)(param_2 + 0xec + uVar4 * 4);
}

