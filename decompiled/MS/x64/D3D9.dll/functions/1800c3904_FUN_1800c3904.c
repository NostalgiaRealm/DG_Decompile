/*
 * FUN_1800c3904 at 1800c3904
 * undefined8 __fastcall FUN_1800c3904(longlong param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4)
 * Address ranges: 1800c3904-1800c3aa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800c3904(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  undefined7 extraout_var;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  
  uVar14 = (undefined7)((ulonglong)param_4 >> 8);
  lVar4 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0xf8);
  uVar1 = *(undefined1 *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  puVar11 = param_2;
  uVar13 = (char)param_4;
  puVar8 = (undefined8 *)FUN_1800fbccc(0xd8);
  puVar12 = (undefined8 *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    puVar8[0x19] = 0;
    puVar11 = puVar8 + 0x18;
    puVar8[0x1a] = puVar11;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    plVar9 = (longlong *)(lVar4 + -0x5a10);
    if (lVar4 == 0) {
      plVar9 = (longlong *)&DAT_00000e28;
    }
    puVar8[1] = -(ulonglong)(*plVar9 != 0) & *plVar9 + 8U;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    *(bool *)(puVar8 + 0xc) = iVar2 == 0x14;
    *puVar8 = &PTR_LAB_180101108;
    puVar8[0xd] = &PTR_D3DPERF_SetMarker_180101100;
    puVar8[0x10] = -(ulonglong)(lVar4 != 0) & lVar4 - 0x6838U;
    puVar8[0x11] = param_1;
    puVar8[0x12] = 0;
    uVar5 = param_3[1];
    puVar8[0x13] = *param_3;
    puVar8[0x14] = uVar5;
    uVar5 = *(undefined8 *)((longlong)param_3 + 0xc);
    uVar6 = *(undefined8 *)((longlong)param_3 + 0x14);
    *(undefined4 *)(puVar8 + 0x17) = uVar3;
    *(undefined1 *)((longlong)puVar8 + 0xbd) = uVar1;
    *puVar8 = &PTR_LAB_180101108;
    puVar8[0xd] = &PTR_D3DPERF_SetMarker_180101100;
    ppuVar10 = &PTR_FUN_180104d20;
    *puVar11 = &PTR_FUN_180104d20;
    *(undefined8 *)((longlong)puVar8 + 0xa4) = uVar5;
    *(undefined8 *)((longlong)puVar8 + 0xac) = uVar6;
    *(int *)((longlong)puVar8 + 0xb4) = (int)param_2;
    *(char *)((longlong)puVar8 + 0xbc) = (char)param_4;
    *(undefined1 *)((longlong)puVar8 + 0xbe) = 0;
    puVar12 = puVar8;
  }
  *(undefined8 **)(param_1 + 0x40 + ((ulonglong)param_2 & 0xffffffff) * 8) = puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    bVar7 = FUN_1800c3394((longlong)puVar12,puVar11,0,CONCAT71(uVar14,uVar13));
    ppuVar10 = (undefined **)CONCAT71(extraout_var,bVar7);
    if (bVar7) {
      LOCK();
      *(int *)((longlong)puVar12 + 0xcc) = *(int *)((longlong)puVar12 + 0xcc) + 1;
      UNLOCK();
      return CONCAT71(extraout_var,1);
    }
  }
  return (ulonglong)ppuVar10 & 0xffffffffffffff00;
}

