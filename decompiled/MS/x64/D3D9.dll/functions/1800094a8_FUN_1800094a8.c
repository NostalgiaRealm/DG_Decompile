/*
 * FUN_1800094a8 at 1800094a8
 * byte __fastcall FUN_1800094a8(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800094a8-180009545
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800094a8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  bVar5 = 1;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar2 = *(byte *)(param_2 + 0x214 + uVar7);
      uVar6 = (ulonglong)bVar2;
      if (bVar2 < 0x11) {
        cVar4 = (&DAT_180102ac8)[uVar6];
      }
      else {
        cVar4 = -1;
      }
      lVar1 = param_2 + uVar6 * 8;
      bVar5 = bVar5 | bVar2 == 0;
      if (cVar4 == *(char *)(lVar1 + 0x19)) {
        uVar3 = (uint)*(char *)(lVar1 + 0x14);
        *(ulonglong *)(param_3 + uVar6 * 0x10) =
             (ulonglong)*(uint *)(param_1 + 0x6788 + (ulonglong)uVar3 * 4) +
             (ulonglong)*(byte *)(lVar1 + 0x17) * 4 +
             *(longlong *)(*(longlong *)(&DAT_000066c8 + (ulonglong)uVar3 * 8 + param_1) + 8);
        *(undefined1 *)(param_3 + 0xc + uVar6 * 0x10) = *(undefined1 *)(lVar1 + 0x18);
        *(undefined1 *)(param_3 + 0xd + uVar6 * 0x10) = *(undefined1 *)(lVar1 + 0x15);
        *(undefined4 *)(param_3 + 8 + uVar6 * 0x10) =
             *(undefined4 *)(param_1 + 0x6748 + (ulonglong)uVar3 * 4);
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_2 + 8));
  }
  return bVar5;
}

