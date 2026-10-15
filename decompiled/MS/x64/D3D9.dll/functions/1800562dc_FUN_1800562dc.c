/*
 * FUN_1800562dc at 1800562dc
 * longlong * __fastcall FUN_1800562dc(longlong * param_1, longlong * param_2, uint * param_3, ulonglong param_4, uint param_5, uint param_6, undefined1 param_7)
 * Address ranges: 1800562dc-180056536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800562dc(longlong *param_1,longlong *param_2,uint *param_3,ulonglong param_4,uint param_5,
             uint param_6,undefined1 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 *local_res10 [3];
  ulonglong local_88 [4];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  *param_2 = 0;
  if ((char)param_6 != '\0') {
    return param_2;
  }
  FUN_18003d690(param_3,param_5,local_88);
  uVar8 = *(uint *)(param_1 + 5);
  if (uVar8 != 0) {
    lVar2 = param_1[4];
    uVar13 = 0;
    uVar15 = uVar8;
    do {
      uVar7 = uVar15 + uVar13 >> 1;
      lVar14 = (ulonglong)uVar7 * 0x40 + lVar2;
      uVar11 = (ulonglong)uVar7;
      uVar9 = 0;
      do {
        uVar3 = *(ulonglong *)(lVar14 + uVar9 * 8);
        if (uVar3 != local_88[uVar9]) {
          if (local_88[uVar9] < uVar3) goto LAB_18005637e;
          break;
        }
        uVar16 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar16;
      } while (uVar16 < 7);
      uVar9 = 0;
      while (uVar3 = *(ulonglong *)(lVar14 + uVar9 * 8), uVar3 == local_88[uVar9]) {
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar13;
        if (6 < uVar13) goto LAB_180056383;
      }
      if (local_88[uVar9] <= uVar3) break;
      uVar13 = uVar7 + 1;
      uVar11 = (ulonglong)uVar13;
      uVar7 = uVar15;
LAB_18005637e:
      uVar15 = uVar7;
    } while (uVar15 != uVar13);
LAB_180056383:
    if ((((((uint)uVar11 != uVar8) &&
          (uVar11 = uVar11 * 0x40, *(ulonglong *)(uVar11 + lVar2) == local_88[0])) &&
         (*(longlong *)(uVar11 + 8 + lVar2) == local_88[1])) &&
        ((*(longlong *)(uVar11 + 0x10 + lVar2) == local_88[2] &&
         (*(longlong *)(uVar11 + 0x18 + lVar2) == local_88[3])))) &&
       ((*(longlong *)(uVar11 + 0x20 + lVar2) == local_68 &&
        ((*(longlong *)(uVar11 + 0x28 + lVar2) == local_60 &&
         (*(longlong *)(uVar11 + 0x30 + lVar2) == local_58)))))) {
      puVar12 = (undefined8 *)((uVar11 | 0x38) + lVar2);
      goto LAB_1800563e3;
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_1800563e3:
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_1800fbccc(0x90);
    if (puVar12 == (undefined8 *)0x0) {
      return param_2;
    }
    uVar8 = *(uint *)(param_1 + 1);
    lVar2 = *param_1;
    puVar12[1] = 0;
    *puVar12 = &PTR_D3DPERF_GetStatus_180102338;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *(undefined4 *)(puVar12 + 8) = 0;
    puVar12[6] = lVar2;
    *(uint *)(puVar12 + 7) = uVar8;
    *(undefined1 *)(puVar12 + 9) = 0;
    puVar12[5] = lVar2 + 0x22d8 + (ulonglong)uVar8 * 0x1ac0;
    *(undefined4 *)((longlong)puVar12 + 0x44) =
         *(undefined4 *)(lVar2 + 0x38 + (ulonglong)uVar8 * 0x28);
    uVar1 = *(undefined8 *)(param_3 + 2);
    puVar12[10] = *(undefined8 *)param_3;
    puVar12[0xb] = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 6);
    puVar12[0xc] = *(undefined8 *)(param_3 + 4);
    puVar12[0xd] = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 10);
    puVar12[0xe] = *(undefined8 *)(param_3 + 8);
    puVar12[0xf] = uVar1;
    uVar1 = *(undefined8 *)(param_3 + 0xc);
    *(undefined1 *)(puVar12 + 0x11) = param_7;
    uVar11 = 0xffff000000000000;
    puVar12[0x10] = uVar1;
    *puVar12 = &PTR_FUN_180102348;
    local_res10[0] = puVar12;
    uVar8 = FUN_18006428c((longlong)(puVar12 + 10));
    param_6 = uVar8 & 0xffff;
    uVar8 = 0;
    bVar17 = param_6 == 0;
    if (!bVar17) {
      for (; (param_6 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    while (!bVar17) {
      pbVar4 = (byte *)((longlong)&param_6 + ((longlong)(int)uVar8 >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (uVar8 & 7));
      uVar9 = 7L << ((char)uVar8 * '\x03' & 0x3fU) | uVar11;
      uVar11 = (uVar11 ^ uVar9) & 0xffff000000000000 ^ uVar9;
      uVar8 = 0;
      bVar17 = param_6 == 0;
      if (!bVar17) {
        for (; (param_6 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    puVar12[1] = uVar11;
    FUN_180056698(param_1 + 3,(longlong *)local_88,local_res10);
    puVar12 = local_res10[0];
  }
  else {
    puVar12 = (undefined8 *)*puVar12;
  }
  plVar10 = FUN_180056048(puVar12,(longlong *)local_88,param_4,0);
  lVar2 = plVar10[1];
  lVar14 = plVar10[2];
  lVar5 = plVar10[3];
  *param_2 = *plVar10;
  param_2[1] = lVar2;
  lVar2 = plVar10[4];
  lVar6 = plVar10[5];
  param_2[2] = lVar14;
  param_2[3] = lVar5;
  param_2[4] = lVar2;
  param_2[5] = lVar6;
  return param_2;
}

