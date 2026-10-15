/*
 * FUN_18010c078 at 18010c078
 * undefined FUN_18010c078(void)
 * Address ranges: 18010c078-18010c153
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18010c078(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  
  bVar4 = 1;
  uVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar3 = *(byte *)(param_2 + 0x214 + uVar5);
      uVar6 = (ulonglong)bVar3;
      if (bVar3 < 0x11) {
        cVar8 = (&DAT_18022c628)[uVar6];
      }
      else {
        cVar8 = -1;
      }
      lVar2 = param_2 + uVar6 * 8;
      bVar4 = bVar3 == 0 | bVar4;
      if (cVar8 == *(char *)(lVar2 + 0x19)) {
        uVar9 = (ulonglong)*(char *)(lVar2 + 0x14);
        lVar7 = uVar6 * 0x10;
        *(ulonglong *)(param_3 + lVar7) =
             (ulonglong)*(byte *)(lVar2 + 0x17) * 4 +
             (ulonglong)*(uint *)(param_1 + 0x6788 + (uVar9 & 0xffffffff) * 4) +
             *(longlong *)(*(longlong *)(param_1 + 0x66c8 + (uVar9 & 0xffffffff) * 8) + 8);
        *(undefined1 *)(param_3 + 0xc + lVar7) = *(undefined1 *)(lVar2 + 0x18);
        *(undefined1 *)(param_3 + 0xd + lVar7) = *(undefined1 *)(lVar2 + 0x15);
        *(undefined4 *)(param_3 + 8 + lVar7) =
             *(undefined4 *)(param_1 + 0x6748 + (uVar9 & 0xffffffff) * 4);
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return bVar4;
}

