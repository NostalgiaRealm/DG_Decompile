/*
 * FUN_18004ce28 at 18004ce28
 * undefined __fastcall FUN_18004ce28(longlong param_1, ulonglong param_2, uint * param_3)
 * Address ranges: 18004ce28-18004d023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ce28(longlong param_1,ulonglong param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 local_res8 [4];
  
  lVar16 = (param_2 & 0xffffffff) * 0x18c0;
  plVar14 = (longlong *)(param_1 + 0xc58 + lVar16);
  uVar3 = *(uint *)(lVar16 + 0xc64 + param_1);
  if (0xff < uVar3) {
    FUN_180053f80(plVar14,(uint *)((ulonglong)(uVar3 - 1) * 0x38 + *plVar14 + 8));
  }
  uVar3 = *(uint *)(lVar16 + 0xc64 + param_1);
  uVar11 = 0;
  uVar13 = ((ulonglong)((*param_3 & 3) << 2) | -(ulonglong)(param_3[9] != 0) & 0x100 |
            (ulonglong)(-(uint)(param_3[8] != 0) & 0x80) |
            (ulonglong)(-(uint)(param_3[6] != 0) & 0x40) |
            (ulonglong)(-(uint)(param_3[7] != 0) & 0x20) |
            (ulonglong)(-(uint)(param_3[2] != 0) & 0x10) | (ulonglong)(param_3[1] & 3)) ^
           (ulonglong)param_3[5] | ((ulonglong)param_3[4] ^ (longlong)(int)param_3[3]) << 0x20;
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar15 = uVar3;
    do {
      uVar10 = uVar15 + uVar8 >> 1;
      uVar11 = (ulonglong)uVar10;
      uVar4 = *(ulonglong *)(*plVar14 + uVar11 * 0x38);
      if (uVar4 <= uVar13) {
        if (uVar13 <= uVar4) break;
        uVar8 = uVar10 + 1;
        uVar11 = (ulonglong)uVar8;
        uVar10 = uVar15;
      }
      uVar15 = uVar10;
    } while (uVar15 != uVar8);
  }
  lVar12 = uVar11 * 0x38;
  if (((uint)uVar11 == uVar3) || (lVar9 = *plVar14, *(ulonglong *)(lVar12 + lVar9) != uVar13)) {
    FUN_1800540d8(plVar14,(uint)uVar11,uVar13,(undefined8 *)param_3);
  }
  else {
    lVar7 = FUN_180053a78(lVar9,param_3,(uint *)(lVar9 + 8 + lVar12));
    if ((char)lVar7 != '\0') {
      FUN_180053ad8((longlong)plVar14,*(longlong **)(lVar12 + 0x30 + lVar9));
      local_res8[0] = 0;
      *(ulonglong *)(lVar12 + *plVar14) = uVar13;
      lVar9 = *plVar14;
      uVar6 = *(undefined8 *)(param_3 + 2);
      puVar1 = (undefined8 *)(lVar12 + 8 + lVar9);
      *puVar1 = *(undefined8 *)param_3;
      puVar1[1] = uVar6;
      uVar3 = param_3[5];
      uVar15 = param_3[6];
      uVar8 = param_3[7];
      puVar2 = (uint *)(lVar12 + 0x18 + lVar9);
      *puVar2 = param_3[4];
      puVar2[1] = uVar3;
      puVar2[2] = uVar15;
      puVar2[3] = uVar8;
      *(undefined8 *)(lVar12 + 0x28 + lVar9) = *(undefined8 *)(param_3 + 8);
      plVar5 = *(longlong **)
                ((ulonglong)*(uint *)(lVar16 + 0xc70 + param_1) * 0x18c0 + 0x6b0 +
                *(longlong *)(lVar16 + 0xc68 + param_1));
      (**(code **)(*plVar5 + 0xb0))(plVar5,param_3,local_res8);
      *(undefined8 *)(lVar12 + 0x30 + *plVar14) = local_res8[0];
    }
  }
  lVar12 = *(longlong *)(lVar12 + 0x30 + *plVar14);
  if (lVar12 != *(longlong *)(lVar16 + 0x708 + param_1)) {
    plVar14 = *(longlong **)(lVar16 + 0x6b8 + param_1);
    (**(code **)(*plVar14 + 0x158))(plVar14,lVar12);
    *(longlong *)(lVar16 + 0x708 + param_1) = lVar12;
  }
  return;
}

