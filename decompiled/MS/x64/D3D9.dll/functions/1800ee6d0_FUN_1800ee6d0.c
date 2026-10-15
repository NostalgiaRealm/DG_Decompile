/*
 * FUN_1800ee6d0 at 1800ee6d0
 * undefined8 __fastcall FUN_1800ee6d0(longlong param_1)
 * Address ranges: 1800ee6d0-1800ee782
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800ee6d0(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_var;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar3;
  
  uVar5 = 1;
  if ((DAT_1801176c0 & 1) == 0) {
    DAT_1801176c0 = DAT_1801176c0 | 1;
    _DAT_180117580 = 0x53eedcd5;
    _DAT_180117584 = 0x5cac678e;
    _DAT_180117588 = 0x669342e0;
    _DAT_18011758c = 0x42eccba4;
  }
  uVar3 = (ulonglong)DAT_1801176c0;
  uVar4 = (uint)(*(ushort *)(param_1 + 0x58) >> 1);
  if (7 < uVar4) {
    uVar6 = 0;
    if (uVar4 != 8) {
      do {
        uVar8 = 0;
        do {
          iVar2 = FUN_1800fccb0((uint)*(ushort *)
                                       (*(longlong *)(param_1 + 0x60) +
                                       (ulonglong)((int)uVar8 + uVar6) * 2));
          sVar1 = (short)iVar2 - (&DAT_180106fe8)[uVar8];
          uVar3 = CONCAT62((int6)(CONCAT44(extraout_var,iVar2) >> 0x10),sVar1);
          if (sVar1 != (&DAT_180117580)[uVar8]) goto LAB_1800ee76c;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < 8);
        if (uVar7 == 8) goto LAB_1800ee774;
LAB_1800ee76c:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4 - 8);
    }
  }
  uVar5 = 0;
LAB_1800ee774:
  return CONCAT71((int7)(uVar3 >> 8),uVar5);
}

