/*
 * FUN_18005d5d8 at 18005d5d8
 * undefined8 __cdecl FUN_18005d5d8(longlong param_1)
 * Address ranges: 18005d5d8-18005d713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005d5d8(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_150 [272];
  
  if ((DAT_18006cb08 & 1) == 0) {
    DAT_18006cb08 = DAT_18006cb08 | 1;
    uRam000000018006ca08 = 0x50b943729bd05598;
    _DAT_18006ca00 = 0xbc2bdf056d99cbf4;
    DAT_18006ca10 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x58) >> 1 == 9) {
    uVar9 = 0;
    do {
      uVar4 = (&DAT_180067210)[uVar9];
      uVar7 = FUN_1800615b0((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x60) + uVar9 * 2));
      if ((uint)(ushort)(&DAT_18006ca00)[uVar9] != ((int)uVar7 - (uint)uVar4 & 0xffff)) {
        return 0;
      }
      uVar3 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar3;
    } while (uVar3 < 9);
    if (uVar3 == 9) {
      lVar10 = *(longlong *)(param_1 + 0x30);
      lVar1 = lVar10 + *(int *)(lVar10 + 0x3c);
      if (*(int *)(lVar1 + 0x8c) != 0) {
        uVar9 = 0;
        lVar1 = lVar10 + (ulonglong)*(uint *)(lVar1 + 0x88);
        uVar3 = *(uint *)(lVar1 + 0x20);
        if (*(int *)(lVar1 + 0x18) != 0) {
          do {
            uVar7 = 0;
            uVar8 = 0;
            pcVar2 = (char *)(lVar10 + (ulonglong)*(uint *)(lVar10 + (ulonglong)uVar3 + uVar9 * 4));
            cVar5 = *pcVar2;
            while (cVar5 != '\0') {
              iVar6 = FUN_1800615d0((int)pcVar2[uVar7]);
              local_150[uVar7] = (char)iVar6;
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
              cVar5 = pcVar2[uVar7];
            }
            uVar7 = FUN_18005d560((longlong)local_150,uVar8);
            if ((uVar7 & 1) != 0) {
              return 1;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(lVar1 + 0x18));
        }
      }
    }
  }
  return 0;
}

