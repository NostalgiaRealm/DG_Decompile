/*
 * FUN_18001b490 at 18001b490
 * undefined __fastcall FUN_18001b490(longlong param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 18001b490-18001b558
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b490(longlong param_1,uint param_2,int param_3,uint param_4)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  lVar5 = (ulonglong)param_2 * 0x21 + (longlong)param_3;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    if (*(uint *)(param_1 + 0x7c0 + lVar5 * 4) != param_4) {
      if (((param_3 == 3) || (param_3 < 1)) || (5 < param_3)) {
        FUN_1800fa780(local_res8);
        FUN_18001b55c(param_1,param_2,param_3,(ulonglong)param_4);
        FUN_1800fa7bc();
      }
      else {
        *(uint *)(param_1 + 0xd14) = *(uint *)(param_1 + 0xd14) | 1 << ((byte)param_2 & 0x1f);
      }
      *(uint *)(param_1 + 0x7c0 + lVar5 * 4) = param_4;
    }
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
    *(uint *)(lVar1 + 0x358 + lVar5 * 4) = param_4;
    uVar3 = param_2 * 0x21 + param_3;
    uVar4 = (ulonglong)(uVar3 & 0x3f);
    pbVar2 = (byte *)(lVar1 + 0xac88 + (ulonglong)(uVar3 >> 6) * 8 + ((longlong)uVar4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar4 & 7);
  }
  return;
}

