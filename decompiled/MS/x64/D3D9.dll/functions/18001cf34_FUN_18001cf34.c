/*
 * FUN_18001cf34 at 18001cf34
 * undefined __fastcall FUN_18001cf34(longlong param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 18001cf34-18001d0ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001cf34(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  uint local_res8 [2];
  
  FUN_1800fa780(local_res8);
  lVar3 = (longlong)(int)param_2 * 0x40;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xe10);
    *(undefined4 *)(lVar1 + lVar3) = *param_3;
    *(undefined4 *)(lVar1 + 4 + lVar3) = param_3[4];
    *(undefined4 *)(lVar1 + 8 + lVar3) = param_3[8];
    *(undefined4 *)(lVar1 + 0xc + lVar3) = param_3[0xc];
    *(undefined4 *)(lVar1 + 0x10 + lVar3) = param_3[1];
    *(undefined4 *)(lVar1 + 0x14 + lVar3) = param_3[5];
    *(undefined4 *)(lVar1 + 0x18 + lVar3) = param_3[9];
    *(undefined4 *)(lVar1 + 0x1c + lVar3) = param_3[0xd];
    *(undefined4 *)(lVar1 + 0x20 + lVar3) = param_3[2];
    *(undefined4 *)(lVar1 + 0x24 + lVar3) = param_3[6];
    *(undefined4 *)(lVar1 + 0x28 + lVar3) = param_3[10];
    *(undefined4 *)(lVar1 + 0x2c + lVar3) = param_3[0xe];
    *(undefined4 *)(lVar1 + 0x30 + lVar3) = param_3[3];
    *(undefined4 *)(lVar1 + 0x34 + lVar3) = param_3[7];
    *(undefined4 *)(lVar1 + 0x38 + lVar3) = param_3[0xb];
    *(undefined4 *)(lVar1 + 0x3c + lVar3) = param_3[0xf];
    FUN_18001ce18(param_1,param_2);
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
    *(undefined4 *)(lVar3 + 0x778 + lVar1) = *param_3;
    *(undefined4 *)(lVar3 + 0x77c + lVar1) = param_3[4];
    *(undefined4 *)(lVar3 + 0x780 + lVar1) = param_3[8];
    *(undefined4 *)(lVar3 + 0x784 + lVar1) = param_3[0xc];
    *(undefined4 *)(lVar3 + 0x788 + lVar1) = param_3[1];
    *(undefined4 *)(lVar3 + 0x78c + lVar1) = param_3[5];
    *(undefined4 *)(lVar3 + 0x790 + lVar1) = param_3[9];
    *(undefined4 *)(lVar3 + 0x794 + lVar1) = param_3[0xd];
    *(undefined4 *)(lVar3 + 0x798 + lVar1) = param_3[2];
    *(undefined4 *)(lVar3 + 0x79c + lVar1) = param_3[6];
    *(undefined4 *)(lVar3 + 0x7a0 + lVar1) = param_3[10];
    *(undefined4 *)(lVar3 + 0x7a4 + lVar1) = param_3[0xe];
    *(undefined4 *)(lVar3 + 0x7a8 + lVar1) = param_3[3];
    *(undefined4 *)(lVar3 + 0x7ac + lVar1) = param_3[7];
    *(undefined4 *)(lVar3 + 0x7b0 + lVar1) = param_3[0xb];
    *(undefined4 *)(lVar3 + 0x7b4 + lVar1) = param_3[0xf];
    pbVar2 = (byte *)(lVar1 + 0xacb0 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
  }
  FUN_1800fa7bc();
  return;
}

