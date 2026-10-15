/*
 * FUN_18004def4 at 18004def4
 * undefined8 __fastcall FUN_18004def4(longlong * param_1, uint * param_2)
 * Address ranges: 18004def4-18004e0e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004def4(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *local_res8 [4];
  
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 0) {
LAB_18004df69:
    plVar13 = param_1 + 1;
    local_res8[0] = (undefined8 *)FUN_1800fbccc(0x254);
    if (local_res8[0] != (undefined8 *)0x0) {
      lVar11 = 4;
      puVar3 = param_2;
      puVar6 = local_res8[0];
      do {
        puVar10 = puVar6;
        puVar7 = puVar3;
        uVar8 = *(undefined8 *)(puVar7 + 2);
        *puVar10 = *(undefined8 *)puVar7;
        puVar10[1] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 6);
        puVar10[2] = *(undefined8 *)(puVar7 + 4);
        puVar10[3] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 10);
        puVar10[4] = *(undefined8 *)(puVar7 + 8);
        puVar10[5] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 0xe);
        puVar10[6] = *(undefined8 *)(puVar7 + 0xc);
        puVar10[7] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 0x12);
        puVar10[8] = *(undefined8 *)(puVar7 + 0x10);
        puVar10[9] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 0x16);
        puVar10[10] = *(undefined8 *)(puVar7 + 0x14);
        puVar10[0xb] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 0x1a);
        puVar10[0xc] = *(undefined8 *)(puVar7 + 0x18);
        puVar10[0xd] = uVar8;
        uVar8 = *(undefined8 *)(puVar7 + 0x1e);
        puVar10[0xe] = *(undefined8 *)(puVar7 + 0x1c);
        puVar10[0xf] = uVar8;
        lVar11 = lVar11 + -1;
        puVar3 = puVar7 + 0x20;
        puVar6 = puVar10 + 0x10;
      } while (lVar11 != 0);
      uVar8 = *(undefined8 *)(puVar7 + 0x22);
      puVar10[0x10] = *(undefined8 *)(puVar7 + 0x20);
      puVar10[0x11] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x26);
      puVar10[0x12] = *(undefined8 *)(puVar7 + 0x24);
      puVar10[0x13] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x2a);
      puVar10[0x14] = *(undefined8 *)(puVar7 + 0x28);
      puVar10[0x15] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x2e);
      puVar10[0x16] = *(undefined8 *)(puVar7 + 0x2c);
      puVar10[0x17] = uVar8;
      uVar8 = *(undefined8 *)(puVar7 + 0x32);
      puVar10[0x18] = *(undefined8 *)(puVar7 + 0x30);
      puVar10[0x19] = uVar8;
      *(uint *)(puVar10 + 0x1a) = puVar7[0x34];
      uVar1 = *(uint *)(param_1 + 2);
      uVar15 = (ulonglong)*param_2;
      uVar12 = 0;
      if (uVar1 == 0) {
LAB_18004e05f:
        FUN_1800517b8(param_1,(uint)uVar12,uVar15,param_2,local_res8);
      }
      else {
        uVar9 = 0;
        uVar14 = uVar1;
        do {
          uVar5 = uVar14 + uVar9 >> 1;
          uVar12 = (ulonglong)uVar5;
          uVar2 = *(ulonglong *)(*plVar13 + (ulonglong)uVar5 * 0x18);
          if (uVar2 <= uVar15) {
            if (uVar15 <= uVar2) break;
            uVar9 = uVar5 + 1;
            uVar12 = (ulonglong)uVar9;
            uVar5 = uVar14;
          }
          uVar14 = uVar5;
        } while (uVar14 != uVar9);
        if (((uint)uVar12 == uVar1) || (*(ulonglong *)(*plVar13 + uVar12 * 0x18) != uVar15))
        goto LAB_18004e05f;
        *(undefined8 **)(*plVar13 + 0x10 + uVar12 * 0x18) = local_res8[0];
      }
      uVar1 = *(uint *)(param_1 + 2);
      if (uVar1 == 0) {
LAB_18004e0ca:
        puVar6 = (undefined8 *)0x0;
      }
      else {
        uVar12 = (ulonglong)*param_2;
        uVar14 = 0;
        lVar11 = *plVar13;
        uVar9 = uVar1;
        do {
          uVar4 = uVar9 + uVar14 >> 1;
          uVar15 = *(ulonglong *)(lVar11 + (ulonglong)uVar4 * 0x18);
          uVar5 = uVar4;
          if (uVar15 <= uVar12) {
            if (uVar12 <= uVar15) break;
            uVar14 = uVar4 + 1;
            uVar5 = uVar9;
            uVar4 = uVar14;
          }
          uVar9 = uVar5;
        } while (uVar9 != uVar14);
        if ((uVar4 == uVar1) || (*(ulonglong *)(lVar11 + (ulonglong)uVar4 * 0x18) != uVar12))
        goto LAB_18004e0ca;
        puVar6 = (undefined8 *)(lVar11 + ((ulonglong)uVar4 * 3 + 2) * 8);
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_18004e0d1;
    }
    uVar8 = 0;
  }
  else {
    uVar12 = (ulonglong)*param_2;
    uVar14 = 0;
    uVar9 = uVar1;
    do {
      uVar4 = uVar9 + uVar14 >> 1;
      uVar15 = *(ulonglong *)(param_1[1] + (ulonglong)uVar4 * 0x18);
      uVar5 = uVar4;
      if (uVar15 <= uVar12) {
        if (uVar12 <= uVar15) break;
        uVar14 = uVar4 + 1;
        uVar5 = uVar9;
        uVar4 = uVar14;
      }
      uVar9 = uVar5;
    } while (uVar9 != uVar14);
    if (uVar4 == uVar1) goto LAB_18004df69;
    if ((*(ulonglong *)(param_1[1] + (ulonglong)uVar4 * 0x18) != uVar12) ||
       (puVar6 = (undefined8 *)(param_1[1] + (ulonglong)uVar4 * 0x18 + 0x10),
       puVar6 == (undefined8 *)0x0)) goto LAB_18004df69;
LAB_18004e0d1:
    uVar8 = *puVar6;
  }
  return uVar8;
}

