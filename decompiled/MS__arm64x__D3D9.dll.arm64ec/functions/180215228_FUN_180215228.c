/*
 * FUN_180215228 at 180215228
 * undefined FUN_180215228(void)
 * Address ranges: 180215228-18021536b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180215228(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  undefined1 uVar7;
  short sVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_150 [272];
  
  if ((DAT_180258ce4 & 1) == 0) {
    DAT_180258ce4 = DAT_180258ce4 | 1;
    uRam0000000180258a48 = 0x50b943729bd05598;
    _DAT_180258a40 = 0xbc2bdf056d99cbf4;
    DAT_180258a50 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x58) >> 1 == 9) {
    uVar10 = 0;
    do {
      sVar5 = (&DAT_1802391a0)[uVar10];
      sVar8 = FUN_180223620(*(undefined2 *)(*(longlong *)(param_1 + 0x60) + uVar10 * 2));
      if ((&DAT_180258a40)[uVar10] != (short)(sVar8 - sVar5)) {
        return 0;
      }
      uVar3 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar3;
    } while (uVar3 < 9);
    if (uVar3 == 9) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar1 = lVar11 + *(int *)(lVar11 + 0x3c);
      if (*(int *)(lVar1 + 0x8c) != 0) {
        uVar10 = 0;
        lVar1 = lVar11 + (ulonglong)*(uint *)(lVar1 + 0x88);
        uVar3 = *(uint *)(lVar1 + 0x20);
        if (*(int *)(lVar1 + 0x18) != 0) {
          do {
            uVar9 = 0;
            pcVar2 = (char *)(lVar11 + (ulonglong)*(uint *)(lVar11 + (ulonglong)uVar3 + uVar10 * 4))
            ;
            cVar6 = *pcVar2;
            while (cVar6 != '\0') {
              uVar7 = FUN_1802235f0((longlong)pcVar2[uVar9]);
              local_150[uVar9] = uVar7;
              uVar9 = (ulonglong)((int)uVar9 + 1);
              cVar6 = pcVar2[uVar9];
            }
            uVar9 = FUN_1802151a0(local_150,uVar9);
            if ((uVar9 & 1) != 0) {
              return 1;
            }
            uVar4 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(lVar1 + 0x18));
        }
      }
    }
  }
  return 0;
}

