/*
 * FUN_1800b4a88 at 1800b4a88
 * undefined4 __fastcall FUN_1800b4a88(longlong param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1800b4a88-1800b4bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b4a88(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte *pbVar2;
  bool bVar3;
  BOOL BVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar6 = (longlong)(int)param_3;
  uVar8 = 0x8876086c;
  if ((((0xef < param_2 - 0x10) && (param_2 < 0x104)) ||
      ((param_2 == 0x104 && ((param_3 != 0 && (param_3 < 0xe)))))) &&
     ((&DAT_180111950)[lVar6 * 8] != '\0')) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      BVar4 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar4 == 0) {
        FUN_1800044dc(0);
      }
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      FUN_1800b09d8(param_1 + -0x6838,param_2,param_3,param_4);
    }
    else {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      uVar7 = param_2 * 0xe + param_3;
      if (param_2 < 0x100) {
        *(uint *)(lVar1 + (((ulonglong)param_2 + 0x156) * 0xe + lVar6) * 4) = param_4;
        pbVar2 = (byte *)(lVar1 + 0xad00 + (ulonglong)(uVar7 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar7 & 0x3f) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(uVar7 & 0x3f) & 7);
      }
      else {
        *(uint *)(lVar1 + (((ulonglong)(param_2 - 0x100) + 0x166) * 0xe + lVar6) * 4) = param_4;
        uVar5 = (ulonglong)(uVar7 - 0xe00 & 0x3f);
        pbVar2 = (byte *)(lVar1 + 0xad20 + (ulonglong)(uVar7 - 0xe00 >> 6) * 8 +
                         ((longlong)uVar5 >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
      }
    }
    uVar8 = 0;
    if (bVar3) {
      LeaveCriticalSection(DAT_1801123a8);
      uVar8 = 0;
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar8;
}

