/*
 * FUN_1801e5a00 at 1801e5a00
 * undefined FUN_1801e5a00(void)
 * Address ranges: 1801e5a00-1801e5c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e5a00(longlong param_1,uint param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  undefined1 extraout_w11;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(undefined1 *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0xf8);
  uVar5 = *(undefined4 *)(param_1 + 0xfc);
  lVar8 = 0;
  if (lVar9 != 0) {
    lVar8 = lVar9 + -0x6838;
  }
  puVar6 = (undefined8 *)FUN_1802229a8(0xd8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    plVar1 = (longlong *)&DAT_00000e28;
    if (lVar9 != 0) {
      plVar1 = (longlong *)(lVar9 + -0x5a10);
    }
    puVar6[0x19] = 0;
    puVar6[0x1a] = puVar6 + 0x18;
    lVar9 = 0;
    if (*plVar1 != 0) {
      lVar9 = *plVar1 + 8;
    }
    puVar6[1] = lVar9;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[9] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *(bool *)(puVar6 + 0xc) = iVar2 == 0x14;
    *puVar6 = &PTR_D3DPERF_GetStatus_native_180229ee0;
    puVar6[0x12] = 0;
    puVar6[0xd] = &PTR_D3DPERF_SetMarker_native_180229ed8;
    puVar6[0x10] = lVar8;
    puVar6[0x11] = param_1;
    uVar7 = *param_3;
    puVar6[0x14] = param_3[1];
    puVar6[0x13] = uVar7;
    puVar6[0x15] = param_3[2];
    uVar3 = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(puVar6 + 0x17) = uVar5;
    *(undefined1 *)((longlong)puVar6 + 0xbc) = param_4;
    *(undefined1 *)((longlong)puVar6 + 0xbd) = uVar4;
    *(undefined4 *)(puVar6 + 0x16) = uVar3;
    *(uint *)((longlong)puVar6 + 0xb4) = param_2;
    *puVar6 = &PTR_D3DPERF_GetStatus_native_180229ee0;
    *(undefined1 *)((longlong)puVar6 + 0xbe) = 0;
    puVar6[0xd] = &PTR_D3DPERF_SetMarker_native_180229ed8;
    puVar6[0x18] = &PTR_FUN_18022f2c0;
  }
  *(undefined8 **)(param_1 + (ulonglong)param_2 * 8 + 0x40) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_1801e5c3c:
    uVar7 = 0;
  }
  else {
    if (*(int *)((longlong)puVar6 + 0xa4) == 3) {
      FUN_18011ac30(puVar6);
      lVar8 = FUN_1802229a8((uint)*(ushort *)((longlong)puVar6 + 0x14) *
                            *(int *)((longlong)puVar6 + 0x1c));
      puVar6[0x12] = lVar8;
      if (lVar8 != 0) {
        FUN_180222c50(lVar8,0,(uint)*(ushort *)((longlong)puVar6 + 0x14) *
                              *(int *)((longlong)puVar6 + 0x1c));
      }
      if (puVar6[0x12] == 0) goto LAB_1801e5c3c;
    }
    else {
      FUN_1801071f0(*(undefined4 *)(puVar6 + 0x13));
      FUN_180107140(extraout_x10 & 0xffffffff);
      FUN_180107018(extraout_x10_00 & 0xffffffff);
      uVar5 = FUN_180106dc0(extraout_x10_01 & 0xffffffff);
      uVar7 = FUN_18012fa50(puVar6,*(undefined4 *)(puVar6 + 0x15),
                            *(undefined4 *)((longlong)puVar6 + 0xac),*(undefined4 *)(puVar6 + 0x16),
                            uVar5);
      *(undefined1 *)((longlong)puVar6 + 0x27) = extraout_w11;
      if (*(char *)((longlong)puVar6 + 0xbd) != '\0') {
        FUN_18012fb28(uVar7,0,0);
      }
      if (*(char *)(puVar6 + 0xc) != '\0') {
        *(undefined1 *)((longlong)puVar6 + 0x52) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x54) = 3;
        *(undefined2 *)(puVar6 + 10) = 0x102;
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 4;
        *(undefined2 *)(puVar6 + 0xb) = 0x102;
        *(undefined1 *)((longlong)puVar6 + 0x5a) = 0;
      }
    }
    FUN_1801042e0((longlong)puVar6 + 0xcc);
    uVar7 = 1;
  }
  return uVar7;
}

