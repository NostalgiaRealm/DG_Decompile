/*
 * FUN_1800a88d4 at 1800a88d4
 * undefined __fastcall FUN_1800a88d4(longlong * param_1, uint * param_2)
 * Address ranges: 1800a88d4-1800a8e7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a88d4(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar9 = 2;
  uVar6 = *param_2 >> 4 & 7;
  uVar10 = uVar9;
  if ((uVar6 != 0) && ((uVar6 == 1 || (uVar10 = 1, uVar6 != 2)))) {
    uVar10 = 0;
  }
  if (((*param_2 & 0xa000) == 0) &&
     ((((*param_2 & 0x70) != 0 || ((*param_2 & 0x20180) == 0x20000)) && ((*param_2 & 0x200) == 0))))
  {
    lVar4 = 0x83;
    uVar7 = -(ulonglong)(uVar10 != 2) & 2;
    if (uVar10 == 2) {
      lVar4 = 0x81;
    }
    *(byte *)(lVar4 + (longlong)param_2) =
         *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar7 * 8];
    uVar6 = (uint)(byte)(&UNK_1800fe9af)[uVar7 * 8] << 0x14 |
            (uint)(byte)(&DAT_1800fe9ae)[uVar7 * 8] | 0x10200;
  }
  else {
    uVar6 = 0;
  }
  uVar1 = *param_2;
  if (((uVar1 & 0xa000) == 0) && (((uVar1 & 0x70) != 0 || ((uVar1 & 0x20180) == 0x20000)))) {
LAB_1800a89f0:
    uVar3 = uVar1 >> 4 & 7;
    if ((uVar3 != 0) && ((uVar3 == 1 || (uVar9 = 1, uVar3 != 2)))) goto LAB_1800a89e6;
  }
  else {
    uVar3 = uVar1 & 0xf;
    if ((uVar3 == 0) || (((uVar3 == 1 || (uVar3 == 2)) || ((uVar3 == 3 || (uVar3 == 4)))))) {
LAB_1800a89e0:
      if ((uVar1 >> 0xd & 1) == 0) {
        if ((uVar1 >> 0xf & 1) == 0) goto LAB_1800a89f0;
        goto LAB_1800a8a07;
      }
    }
    else {
      if (uVar3 == 5) goto LAB_1800a89f0;
      if ((uVar3 == 6) || (uVar3 == 7)) goto LAB_1800a89e0;
    }
LAB_1800a89e6:
    uVar9 = 0;
  }
LAB_1800a8a07:
  bVar8 = (byte)(uVar1 >> 0xe);
  uVar3 = uVar1 & 0xf;
  if (((((uVar3 == 0) || (uVar3 == 1)) || (uVar3 == 2)) || ((uVar3 == 3 || (uVar3 == 4)))) ||
     ((uVar3 == 5 &&
      (((uVar1 & 0xc00) != 0 || (((byte)(uVar1 >> 7) & 1) != ((byte)(uVar1 >> 8) & 1))))))) {
    uVar7 = 0;
    uVar1 = FUN_1800a8138(param_1,param_2,uVar6,uVar9,bVar8 & 1);
  }
  else {
    uVar7 = 0;
    uVar1 = FUN_1800a85b8(param_1,param_2,uVar6,uVar9,bVar8 & 1);
  }
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    if ((*param_2 & 0x2000) != 0) {
      uVar7 = (ulonglong)uVar1;
      FUN_1800edbe0(param_2 + 4,param_1,0x38,uVar7);
    }
    if ((*param_2 & 0x70) != 0 && (*param_2 >> 0xe & 1) != 0) {
      uVar7 = (ulonglong)uVar6;
      FUN_1800edbe0(param_2 + 4,param_1,0x36,uVar7);
    }
    if ((*param_2 & 0x8000) != 0) {
      if (uVar9 != 2) {
        FUN_1800a4434(param_1,(longlong)param_2,uVar1,CONCAT71((int7)(uVar7 >> 8),0xf),uVar1,uVar9,2
                     );
        uVar9 = 2;
      }
      FUN_1800edbe0(param_2 + 4,param_1,1,uVar2);
      uVar7 = uVar2;
    }
    if ((*param_2 & 0x70) == 0 && (uVar1 & 0x3f00) == 0) {
      if ((*param_2 & 0x200) == 0) {
        uVar7 = (ulonglong)(-(uint)(uVar10 != 2) & 2);
        lVar4 = 0x83;
        if (uVar10 == 2) {
          lVar4 = 0x81;
        }
        *(byte *)(lVar4 + (longlong)param_2) =
             *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar7 * 8];
        uVar6 = (uint)(byte)(&UNK_1800fe9af)[uVar7 * 8] << 0x14 |
                (uint)(byte)(&DAT_1800fe9ae)[uVar7 * 8] | 0x10200;
      }
      else {
        uVar6 = 0;
      }
      uVar7 = (ulonglong)uVar9;
      uVar2 = FUN_1800a4e68(param_1,(longlong)param_2,uVar1,uVar7,uVar6);
      uVar9 = (uint)uVar2;
    }
    if (uVar6 == 0) {
      uVar2 = (ulonglong)(-(uint)(uVar10 != 2) & 2);
      lVar4 = 0x83;
      if (uVar10 == 2) {
        lVar4 = 0x81;
      }
      if (uVar9 == uVar10) {
        *(byte *)(lVar4 + (longlong)param_2) =
             *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar2 * 8];
        FUN_1800edbe0(param_2 + 4,param_1,0x36,
                      (ulonglong)
                      ((uint)(byte)(&UNK_1800fe9af)[uVar2 * 8] << 0x14 |
                       (uint)(byte)(&DAT_1800fe9ae)[uVar2 * 8] | 0x10200));
        if ((*param_2 & 0x200) == 0) goto LAB_1800a8e56;
        uVar9 = 3;
        if (uVar10 == 2) {
          uVar9 = 1;
        }
        uVar7 = (ulonglong)uVar9;
        lVar4 = 0x84;
        if (uVar10 == 2) {
          lVar4 = 0x82;
        }
        *(byte *)(lVar4 + (longlong)param_2) =
             *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar7 * 8];
        uVar10 = (uint)(byte)(&UNK_1800fe9af)[uVar7 * 8] << 0x14 |
                 (uint)(byte)(&DAT_1800fe9ae)[uVar7 * 8];
      }
      else {
        uVar11 = CONCAT71((int7)(uVar7 >> 8),0xf);
        if ((*param_2 & 0x200) == 0) {
          *(byte *)(lVar4 + (longlong)param_2) =
               *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar2 * 8];
          FUN_1800a4434(param_1,(longlong)param_2,
                        (uint)(byte)(&UNK_1800fe9af)[uVar2 * 8] << 0x14 |
                        (uint)(byte)(&DAT_1800fe9ae)[uVar2 * 8] | 0x10200,uVar11,uVar1,uVar9,uVar10)
          ;
          goto LAB_1800a8e56;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar1,uVar11,uVar1,uVar9,uVar10);
        *(byte *)(lVar4 + (longlong)param_2) =
             *(byte *)(lVar4 + (longlong)param_2) | (&DAT_1800fe9ac)[uVar2 * 8];
        FUN_1800edbe0(param_2 + 4,param_1,0x36,
                      (ulonglong)
                      ((uint)(byte)(&UNK_1800fe9af)[uVar2 * 8] << 0x14 |
                       (uint)(byte)(&DAT_1800fe9ae)[uVar2 * 8] | 0x10200));
        lVar4 = 3;
        if (uVar10 == 2) {
          lVar4 = 1;
        }
        lVar5 = 0x84;
        if (uVar10 == 2) {
          lVar5 = 0x82;
        }
        *(byte *)(lVar5 + (longlong)param_2) =
             *(byte *)(lVar5 + (longlong)param_2) | (&DAT_1800fe9ac)[lVar4 * 8];
        uVar10 = (uint)(byte)(&UNK_1800fe9af)[lVar4 * 8] << 0x14 |
                 (uint)(byte)(&DAT_1800fe9ae)[lVar4 * 8];
      }
      FUN_1800edbe0(param_2 + 4,param_1,0x36,(ulonglong)(uVar10 | 0x10200));
    }
  }
LAB_1800a8e56:
  if (uVar1 != uVar6) {
    FUN_1800ec960((longlong)(param_2 + 4),uVar1);
  }
  return;
}

