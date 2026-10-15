/*
 * FUN_180017780 at 180017780
 * undefined __cdecl FUN_180017780(longlong param_1)
 * Address ranges: 180017780-1800179f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017780(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(lVar5 + 0x15c);
  if (*(byte *)(lVar5 + 0x151) < 0xb) {
    uVar8 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x151)];
  }
  else {
    uVar8 = 0;
  }
  bVar3 = false;
  if ((uVar8 >> 1 & 1) != 0) {
    if (*(byte *)(lVar5 + 0x152) < 0xd) {
      bVar7 = (&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x152)];
    }
    else {
      bVar7 = 0;
    }
    bVar3 = (bVar7 & 2) != 0;
    if ((bVar7 & 1) != 0) {
      bVar3 = cVar1 == '\x01' || (bVar7 & 2) != 0;
    }
  }
  if (((uVar8 & 1) != 0) && (*(char *)(lVar5 + 0x154) == '\x01')) {
    bVar3 = true;
  }
  if (!bVar3) {
    if (*(byte *)(lVar5 + 0x159) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x159)];
    }
    else {
      uVar8 = 0;
    }
    bVar3 = false;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x15a) < 0xd) {
        bVar7 = (&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x15a)];
      }
      else {
        bVar7 = 0;
      }
      bVar3 = (bVar7 & 2) != 0;
      if ((bVar7 & 1) != 0) {
        bVar3 = cVar1 == '\x01' || (bVar7 & 2) != 0;
      }
    }
    bVar2 = bVar3;
    if (cVar1 == '\x01') {
      bVar2 = true;
    }
    if ((uVar8 & 1) != 0) {
      bVar3 = bVar2;
    }
    if (!bVar3) {
      uVar8 = 0;
      goto LAB_180017888;
    }
  }
  uVar8 = 1;
LAB_180017888:
  *(uint *)(lVar5 + 0x228) = uVar8;
  if (uVar8 == 1) {
    if (*(byte *)(lVar5 + 0x165) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x165)];
    }
    else {
      uVar8 = 0;
    }
    if (*(byte *)(lVar5 + 0x167) < 0xb) {
      uVar6 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x167)];
    }
    else {
      uVar6 = 0;
    }
    uVar4 = uVar8 | uVar6;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x166) < 0xd) {
        uVar8 = (uint)(byte)(&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x166)];
      }
      else {
        uVar8 = 0;
      }
      uVar4 = uVar8 | uVar4;
    }
    if ((uVar6 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x168) < 0xd) {
        uVar8 = (uint)(byte)(&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x168)];
      }
      else {
        uVar8 = 0;
      }
      uVar4 = uVar8 | uVar4;
    }
    uVar8 = (uVar4 & 1) + 1;
    *(uint *)(lVar5 + 0x228) = uVar8;
    if ((uVar4 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x1a6) < 0xb) {
        uVar8 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x1a6)];
      }
      else {
        uVar8 = 0;
      }
      if (*(byte *)(lVar5 + 0x1a8) < 0xb) {
        uVar6 = (uint)(byte)(&DAT_180061dc8)[(uint)*(byte *)(lVar5 + 0x1a8)];
      }
      else {
        uVar6 = 0;
      }
      uVar4 = uVar8 | uVar6;
      if ((uVar8 >> 1 & 1) != 0) {
        if (*(byte *)(lVar5 + 0x1a7) < 0xd) {
          uVar8 = (uint)(byte)(&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x1a7)];
        }
        else {
          uVar8 = 0;
        }
        uVar4 = uVar8 | uVar4;
      }
      if ((uVar6 >> 1 & 1) != 0) {
        if (*(byte *)(lVar5 + 0x1a9) < 0xd) {
          uVar8 = (uint)(byte)(&DAT_180061db8)[(uint)*(byte *)(lVar5 + 0x1a9)];
        }
        else {
          uVar8 = 0;
        }
        uVar4 = uVar8 | uVar4;
      }
      uVar8 = (uVar4 & 1) + 2;
      *(uint *)(lVar5 + 0x228) = uVar8;
    }
  }
  uVar6 = *(uint *)(*(longlong *)(lVar5 + 8) + 0x33);
  if (uVar6 < uVar8) {
    *(uint *)(lVar5 + 0x228) = uVar6;
    uVar8 = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800179f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1d0))(*(longlong **)(param_1 + 0x18),uVar8);
  return;
}

