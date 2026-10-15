/*
 * FUN_180009180 at 180009180
 * undefined __fastcall FUN_180009180(longlong param_1, longlong param_2, uint param_3, undefined4 param_4, char param_5)
 * Address ranges: 180009180-1800091fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009180(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  bVar1 = (&DAT_180063a18)[uVar5];
  *(undefined4 *)(param_1 + uVar5 * 0x18) = param_4;
  *(ulonglong *)(param_1 + 0x10 + uVar5 * 0x18) = param_2 + (ulonglong)bVar1 * 4;
  uVar2 = *(ushort *)(&DAT_1800639e8 + uVar5 * 2);
  uVar3 = *(uint *)(param_1 + 0x150);
  uVar4 = uVar3 & uVar2;
  if (param_5 == '\0') {
    if (uVar4 != 0) {
      *(int *)(param_1 + 0x158) =
           *(int *)(param_1 + 0x158) + *(int *)(param_1 + 8 + uVar5 * 0x18) * -4;
      *(uint *)(param_1 + 0x150) = ~(uint)uVar2 & uVar3;
    }
  }
  else if (uVar4 == 0) {
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + *(int *)(param_1 + 8 + uVar5 * 0x18) * 4
    ;
    *(uint *)(param_1 + 0x150) = uVar3 | uVar2;
    return;
  }
  return;
}

