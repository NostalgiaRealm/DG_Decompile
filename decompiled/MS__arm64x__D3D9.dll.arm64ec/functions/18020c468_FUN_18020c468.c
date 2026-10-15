/*
 * FUN_18020c468 at 18020c468
 * undefined FUN_18020c468(void)
 * Address ranges: 18020c468-18020c673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020c468(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  code *extraout_x11;
  longlong *plVar13;
  undefined8 uVar14;
  
  *param_1 = &PTR_FUN_180238fb8;
  uVar5 = *(uint *)(param_1 + 0xe);
  uVar8 = uVar5;
  pcVar9 = (code *)__hybrid_os_arm64x_dispatch_icall;
  do {
    __hybrid_os_arm64x_dispatch_icall = pcVar9;
    if (uVar8 == 0) {
      uVar10 = 0;
      if (*(int *)(param_1 + 0xb) != 0) {
        do {
          if (*(longlong *)(param_1[10] + uVar10 * 0x10) != 0) {
            (*pcVar9)();
            (*extraout_x11)();
          }
          FUN_1802229d8(*(undefined8 *)(uVar10 * 0x10 + param_1[10] + 8),1);
          uVar5 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0xb));
      }
      FUN_1802229d8(param_1[10]);
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      thunk_FUN_180223860(param_1 + 5);
      FUN_1802229d8(param_1[0xc]);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      FUN_1802229d8(param_1[10]);
      return;
    }
    uVar7 = uVar8 - 1;
    if (uVar7 < uVar5) {
      puVar11 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar7 * 0x18 + 0x10);
    }
    else {
      puVar11 = (undefined8 *)&DAT_00000008;
    }
    plVar13 = (longlong *)*puVar11;
    for (uVar5 = *(uint *)(plVar13 + 2); uVar5 != 0xffffffff;
        uVar5 = *(uint *)(*plVar13 + (ulonglong)uVar5 * 0x18 + 0x10)) {
      puVar2 = (uint *)(*plVar13 + (ulonglong)uVar5 * 0x18);
      uVar6 = *puVar2;
      if (uVar6 == 0xffffffff) break;
      uVar4 = uVar6 & 0xffff;
      uVar1 = puVar2[1] + uVar4;
      if (uVar4 < uVar1) {
        lVar12 = *(longlong *)(param_1[10] + (ulonglong)(uVar6 >> 0x10) * 0x10 + 8);
        do {
          uVar10 = -1L << ((ulonglong)uVar4 & 0x3f);
          uVar6 = (uVar4 & 0xffffffc0) + 0x40;
          if (uVar1 < uVar6) {
            uVar10 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar10;
          }
          *(ulonglong *)(lVar12 + (ulonglong)(uVar4 >> 6) * 8) =
               *(ulonglong *)(lVar12 + (ulonglong)(uVar4 >> 6) * 8) & (uVar10 ^ 0xffffffffffffffff);
          uVar4 = uVar6;
        } while (uVar6 < uVar1);
      }
    }
    FUN_1802229d8(*plVar13);
    FUN_1802229d8(plVar13,0x18);
    while( true ) {
      uVar5 = uVar8 + 1;
      if (*(uint *)(param_1 + 0xe) <= uVar5) break;
      puVar11 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar8 * 0x18);
      puVar3 = (undefined8 *)(param_1[0xd] + (ulonglong)uVar5 * 0x18);
      uVar14 = *puVar3;
      puVar11[1] = puVar3[1];
      *puVar11 = uVar14;
      puVar11[2] = puVar3[2];
      uVar8 = uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0xe) - 1;
    *(uint *)(param_1 + 0xe) = uVar5;
    uVar8 = uVar7;
    pcVar9 = (code *)__hybrid_os_arm64x_dispatch_icall;
  } while( true );
}

