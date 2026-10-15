/*
 * FUN_18009c074 at 18009c074
 * int * __fastcall FUN_18009c074(longlong param_1, int * param_2, int param_3, int param_4)
 * Address ranges: 18009c074-18009c103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_18009c074(longlong param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x2c);
  *param_2 = param_4 * *(int *)(param_1 + 0x3c) + param_3;
  uVar2 = *(uint *)(&DAT_1800fea30 + uVar5 * 4);
  uVar4 = *(uint *)(&DAT_1800ff000 + uVar5 * 4);
  if (*(uint *)(&DAT_1800ff000 + uVar5 * 4) == 0x18) {
    uVar4 = 0x20;
  }
  *(bool *)(param_2 + 5) = uVar4 < 8;
  if (7 < uVar4) {
    uVar2 = uVar4 >> 3;
  }
  bVar1 = (&DAT_1800feb08)[uVar5];
  param_2[1] = uVar2;
  uVar3 = (ulonglong)(byte)(&DAT_1800fead8)[uVar5];
  uVar2 = *(uint *)(param_1 + 0x24);
  param_2[2] = (uint)(byte)(&DAT_1800fead8)[uVar5];
  param_2[3] = (uint)bVar1;
  uVar2 = FUN_1800ac71c(param_1,uVar2,(byte)param_3);
  if (uVar4 < 8) {
    uVar2 = (uint)((ulonglong)uVar2 / (uVar3 & 0xffffffff));
  }
  param_2[4] = uVar2;
  return param_2;
}

