/*
 * FUN_18003d78c at 18003d78c
 * longlong __fastcall FUN_18003d78c(longlong * param_1, uint * param_2, ulonglong param_3, uint param_4, uint param_5, undefined1 param_6)
 * Address ranges: 18003d78c-18003da70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003d78c(longlong *param_1,uint *param_2,ulonglong param_3,uint param_4,uint param_5,
                      undefined1 param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 **ppuVar12;
  bool bVar13;
  undefined8 *local_88;
  ulonglong local_80 [4];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  if ((char)param_5 != '\0') {
    return 0;
  }
  FUN_18003d690(param_2,param_4,local_80);
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    lVar7 = param_1[3];
    ppuVar12 = (undefined8 **)0x0;
    uVar11 = uVar4;
    do {
      uVar3 = uVar11 + (int)ppuVar12 >> 1;
      lVar10 = (ulonglong)uVar3 * 0x40 + lVar7;
      uVar5 = 0;
      do {
        uVar6 = *(ulonglong *)(lVar10 + uVar5 * 8);
        if (uVar6 != local_80[uVar5]) {
          uVar9 = uVar3;
          if (local_80[uVar5] < uVar6) goto LAB_18003d825;
          break;
        }
        uVar9 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < 7);
      uVar5 = 0;
      while( true ) {
        ppuVar12 = *(undefined8 ***)(lVar10 + uVar5 * 8);
        if (ppuVar12 != (undefined8 **)local_80[uVar5]) break;
        uVar9 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar9;
        if (6 < uVar9) goto LAB_18003d82a;
      }
      if ((undefined8 **)local_80[uVar5] <= ppuVar12) break;
      uVar3 = uVar3 + 1;
      ppuVar12 = (undefined8 **)(ulonglong)uVar3;
      uVar9 = uVar11;
LAB_18003d825:
      uVar11 = uVar9;
    } while (uVar11 != (uint)ppuVar12);
LAB_18003d82a:
    if ((((((uVar3 != uVar4) &&
           (uVar5 = (ulonglong)uVar3 * 0x40, *(ulonglong *)(uVar5 + lVar7) == local_80[0])) &&
          (*(longlong *)(uVar5 + 8 + lVar7) == local_80[1])) &&
         ((*(longlong *)(uVar5 + 0x10 + lVar7) == local_80[2] &&
          (*(longlong *)(uVar5 + 0x18 + lVar7) == local_80[3])))) &&
        ((*(longlong *)(uVar5 + 0x20 + lVar7) == local_60 &&
         ((*(longlong *)(uVar5 + 0x28 + lVar7) == local_58 &&
          (*(longlong *)(uVar5 + 0x30 + lVar7) == local_50)))))) &&
       (puVar8 = (undefined8 *)(lVar7 + (uVar5 | 0x38)), puVar8 != (undefined8 *)0x0)) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_18003da4f;
    }
  }
  puVar8 = (undefined8 *)FUN_1800fbccc(0x88);
  if (puVar8 == (undefined8 *)0x0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  puVar8[1] = 0;
  uVar5 = 0xffff000000000000;
  *puVar8 = &PTR_D3DPERF_GetStatus_180101cc8;
  *(uint *)(puVar8 + 6) = uVar4;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = lVar7;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
  *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(lVar7 + 0x38 + (ulonglong)uVar4 * 0x28);
  uVar1 = *(undefined8 *)(param_2 + 2);
  puVar8[9] = *(undefined8 *)param_2;
  puVar8[10] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 6);
  puVar8[0xb] = *(undefined8 *)(param_2 + 4);
  puVar8[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  puVar8[0xd] = *(undefined8 *)(param_2 + 8);
  puVar8[0xe] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined1 *)(puVar8 + 0x10) = param_6;
  puVar8[0xf] = uVar1;
  *puVar8 = &PTR_FUN_180101cd8;
  local_88 = puVar8;
  uVar4 = FUN_18006428c((longlong)(puVar8 + 9));
  param_5 = uVar4 & 0xffff;
  uVar4 = 0;
  bVar13 = param_5 == 0;
  if (!bVar13) {
    for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (!bVar13) {
    pbVar2 = (byte *)((longlong)&param_5 + ((longlong)(int)uVar4 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
    uVar6 = 7L << ((char)uVar4 * '\x03' & 0x3fU) | uVar5;
    uVar5 = (uVar5 ^ uVar6) & 0xffff000000000000 ^ uVar6;
    uVar4 = 0;
    bVar13 = param_5 == 0;
    if (!bVar13) {
      for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  puVar8[1] = uVar5;
  uVar4 = 0;
  uVar11 = *(uint *)(param_1 + 4);
  if (uVar11 != 0) {
    lVar7 = param_1[3];
    ppuVar12 = (undefined8 **)0x0;
    uVar3 = uVar11;
    do {
      uVar4 = uVar3 + (int)ppuVar12 >> 1;
      lVar10 = (ulonglong)uVar4 * 0x40 + lVar7;
      uVar5 = 0;
      do {
        uVar6 = *(ulonglong *)(lVar10 + uVar5 * 8);
        if (uVar6 != local_80[uVar5]) {
          uVar9 = uVar4;
          if (local_80[uVar5] < uVar6) goto LAB_18003d9d8;
          break;
        }
        uVar9 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar9;
      } while (uVar9 < 7);
      uVar5 = 0;
      while( true ) {
        ppuVar12 = *(undefined8 ***)(lVar10 + uVar5 * 8);
        if (ppuVar12 != (undefined8 **)local_80[uVar5]) break;
        uVar9 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar9;
        if (6 < uVar9) goto LAB_18003d9dd;
      }
      if ((undefined8 **)local_80[uVar5] <= ppuVar12) break;
      uVar4 = uVar4 + 1;
      ppuVar12 = (undefined8 **)(ulonglong)uVar4;
      uVar9 = uVar3;
LAB_18003d9d8:
      uVar3 = uVar9;
    } while (uVar3 != (uint)ppuVar12);
LAB_18003d9dd:
    if ((((uVar4 != uVar11) &&
         (lVar10 = (ulonglong)uVar4 * 0x40, *(ulonglong *)(lVar10 + lVar7) == local_80[0])) &&
        (*(longlong *)(lVar10 + 8 + lVar7) == local_80[1])) &&
       (((*(longlong *)(lVar10 + 0x10 + lVar7) == local_80[2] &&
         (*(longlong *)(lVar10 + 0x18 + lVar7) == local_80[3])) &&
        ((*(longlong *)(lVar10 + 0x20 + lVar7) == local_60 &&
         ((*(longlong *)(lVar10 + 0x28 + lVar7) == local_58 &&
          (*(longlong *)(lVar10 + 0x30 + lVar7) == local_50)))))))) {
      *(undefined8 **)(lVar10 + 0x38 + lVar7) = puVar8;
      goto LAB_18003da4f;
    }
  }
  ppuVar12 = &local_88;
  FUN_18003dc20(param_1 + 2,uVar4,local_80,ppuVar12);
  puVar8 = local_88;
LAB_18003da4f:
  lVar7 = FUN_18003d428(puVar8,param_3,0,(longlong)ppuVar12);
  return lVar7;
}

