/*
 * FUN_18000a6b8 at 18000a6b8
 * undefined __cdecl FUN_18000a6b8(longlong param_1)
 * Address ranges: 18000a6b8-18000a92f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a6b8(longlong param_1)

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
  cVar1 = *(char *)(lVar5 + 0x161);
  if (*(byte *)(lVar5 + 0x156) < 0xb) {
    uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x156)];
  }
  else {
    uVar8 = 0;
  }
  bVar3 = false;
  if ((uVar8 >> 1 & 1) != 0) {
    if (*(byte *)(lVar5 + 0x157) < 0xd) {
      bVar7 = (&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x157)];
    }
    else {
      bVar7 = 0;
    }
    bVar3 = (bVar7 & 2) != 0;
    if ((bVar7 & 1) != 0) {
      bVar3 = cVar1 == '\x01' || (bVar7 & 2) != 0;
    }
  }
  if (((uVar8 & 1) != 0) && (*(char *)(lVar5 + 0x159) == '\x01')) {
    bVar3 = true;
  }
  if (!bVar3) {
    if (*(byte *)(lVar5 + 0x15e) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x15e)];
    }
    else {
      uVar8 = 0;
    }
    bVar3 = false;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x15f) < 0xd) {
        bVar7 = (&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x15f)];
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
      goto LAB_18000a7c0;
    }
  }
  uVar8 = 1;
LAB_18000a7c0:
  *(uint *)(lVar5 + 0x2a0) = uVar8;
  if (uVar8 == 1) {
    if (*(byte *)(lVar5 + 0x1a3) < 0xb) {
      uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x1a3)];
    }
    else {
      uVar8 = 0;
    }
    if (*(byte *)(lVar5 + 0x1a5) < 0xb) {
      uVar6 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x1a5)];
    }
    else {
      uVar6 = 0;
    }
    uVar4 = uVar8 | uVar6;
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x1a4) < 0xd) {
        uVar8 = (uint)(byte)(&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x1a4)];
      }
      else {
        uVar8 = 0;
      }
      uVar4 = uVar8 | uVar4;
    }
    if ((uVar6 >> 1 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x1a6) < 0xd) {
        uVar8 = (uint)(byte)(&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x1a6)];
      }
      else {
        uVar8 = 0;
      }
      uVar4 = uVar8 | uVar4;
    }
    uVar8 = (uVar4 & 1) + 1;
    *(uint *)(lVar5 + 0x2a0) = uVar8;
    if ((uVar4 & 1) != 0) {
      if (*(byte *)(lVar5 + 0x1f8) < 0xb) {
        uVar8 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x1f8)];
      }
      else {
        uVar8 = 0;
      }
      if (*(byte *)(lVar5 + 0x1fa) < 0xb) {
        uVar6 = (uint)(byte)(&DAT_180065810)[(uint)*(byte *)(lVar5 + 0x1fa)];
      }
      else {
        uVar6 = 0;
      }
      uVar4 = uVar8 | uVar6;
      if ((uVar8 >> 1 & 1) != 0) {
        if (*(byte *)(lVar5 + 0x1f9) < 0xd) {
          uVar8 = (uint)(byte)(&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x1f9)];
        }
        else {
          uVar8 = 0;
        }
        uVar4 = uVar8 | uVar4;
      }
      if ((uVar6 >> 1 & 1) != 0) {
        if (*(byte *)(lVar5 + 0x1fb) < 0xd) {
          uVar8 = (uint)(byte)(&DAT_180065800)[(uint)*(byte *)(lVar5 + 0x1fb)];
        }
        else {
          uVar8 = 0;
        }
        uVar4 = uVar8 | uVar4;
      }
      uVar8 = (uVar4 & 1) + 2;
      *(uint *)(lVar5 + 0x2a0) = uVar8;
    }
  }
  uVar6 = *(uint *)(*(longlong *)(lVar5 + 8) + 0x33);
  if (uVar6 < uVar8) {
    *(uint *)(lVar5 + 0x2a0) = uVar6;
    uVar8 = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f0))(*(longlong **)(param_1 + 0x18),uVar8);
  return;
}

