/*
 * FUN_1800afa90 at 1800afa90
 * undefined8 * __fastcall FUN_1800afa90(undefined8 * param_1, longlong param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, char param_8, undefined8 * param_9, undefined8 * param_10)
 * Address ranges: 1800afa90-1800afed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800afa90(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,char param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 in_stack_ffffffffffffffc0;
  
  param_1[0xd08] = 0;
  *(undefined4 *)(param_1 + 0xd09) = 0;
  param_1[0xd0a] = -(ulonglong)(param_1 != (undefined8 *)0x0) & (ulonglong)(param_1 + 0xd07);
  param_1[0xd0b] = 0;
  param_1[0xd0c] = 0;
  param_1[0xd0d] = 0;
  param_1[0xd0e] = 0;
  param_1[0xd0f] = 0;
  param_1[0xd10] = 0;
  FUN_1800076f4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_ffffffffffffffc0,
                param_9);
  param_1[0xd05] = 0;
  *param_1 = &PTR_FUN_180104558;
  param_1[0xd06] = 0;
  param_1[0xd04] = &PTR_LAB_1800fd890;
  param_1[0xd07] = &PTR_LAB_180104128;
  param_1[0xd11] = param_2;
  param_1[0xd12] = *param_10;
  param_1[0xd17] = 0;
  param_1[0xd18] = 0;
  param_1[0xd19] = 0;
  param_1[0xd1a] = param_1;
  param_1[0xd1b] = 0;
  param_1[0xd1c] = 0;
  param_1[0xd1d] = 0;
  param_1[0xd1e] = 0;
  param_1[0xd1f] = 0;
  param_1[0xd20] = 0;
  *(undefined4 *)(param_1 + 0xd21) = 0x10001;
  param_1[0xd22] = 0;
  param_1[0xd23] = 0;
  param_1[0xd24] = 0;
  param_1[0xd25] = param_1;
  param_1[0xd26] = 0;
  param_1[0xd27] = 0;
  param_1[0xd28] = 0;
  uVar3 = thunk_FUN_1800fbccc(0x300);
  param_1[0xd29] = uVar3;
  param_1[0xd2a] = 0x20;
  param_1[0xd2b] = param_1;
  uVar9 = 1;
  param_1[0xd2c] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc50c) = 1;
  param_1[0xd2d] = 0;
  param_1[0xd2e] = 0;
  param_1[0xd2f] = 0;
  param_1[0xd30] = 0;
  param_1[0xd31] = 0;
  param_1[0x1890] = 0;
  param_1[0x1891] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x189c] = 0;
  param_1[0x18a0] = 3;
  *(undefined4 *)(param_1 + 0x18a1) = 0x1010100;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xd08);
  if (*(uint *)(param_1 + 0xd08) < 3) {
    param_1[uVar4 * 2 + 0xd0b] = 0;
    (param_1 + uVar4 * 2 + 0xd0b)[1] = 0x46000000000000c0;
    *(int *)(param_1 + 0xd08) = *(int *)(param_1 + 0xd08) + 1;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xd08);
    if (*(uint *)(param_1 + 0xd08) < 3) {
      param_1[uVar4 * 2 + 0xd0b] = 0x43fdbf7ad0223b96;
      (param_1 + uVar4 * 2 + 0xd0b)[1] = 0xebb9820d3ba4bd92;
      *(int *)(param_1 + 0xd08) = *(int *)(param_1 + 0xd08) + 1;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0xd08);
    }
  }
  if ((*(char *)((longlong)param_10 + 4) != '\0') && ((uint)uVar4 < 3)) {
    param_1[uVar4 * 2 + 0xd0b] = 0x405a2649b18b10ce;
    (param_1 + uVar4 * 2 + 0xd0b)[1] = 0x3a31d477f7950f87;
    *(int *)(param_1 + 0xd08) = *(int *)(param_1 + 0xd08) + 1;
  }
  LOCK();
  *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 1;
  UNLOCK();
  param_1[1] = &DAT_180111130;
  param_1[2] = &DAT_1801117c0;
  param_1[0xd14] = &DAT_180111950;
  if ((int)param_4 == 2) {
    puVar5 = &DAT_18010e150;
    puVar7 = &DAT_18010e174;
  }
  else {
    lVar8 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1b0;
    puVar5 = &DAT_18010e300 + lVar8;
    puVar7 = (uint *)(&DAT_18010e324 + lVar8);
  }
  param_1[0xd13] = puVar5;
  uVar1 = *puVar7;
  *(bool *)((longlong)param_1 + 0x40f) = (uVar1 & 0x100000) != 0;
  if ((param_8 == '\0') || ((uVar1 & 0x100000) == 0)) {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x82) = uVar9;
  if ((*(uint *)(param_1 + 0x1cf) & 0x40) == 0) {
    uVar6 = 0x2000;
  }
  else {
    uVar6 = *(undefined4 *)((longlong)param_1 + 0xe7c);
  }
  *(undefined4 *)(param_1 + 0xd15) = uVar6;
  iVar2 = (-(uint)((*(uint *)(param_1 + 0x1cf) & 0x40) != 0) & 0xfffff810) + 0x800;
  *(int *)((longlong)param_1 + 0x68ac) = iVar2;
  *(int *)(param_1 + 0xd16) = iVar2;
  SetRectEmpty((LPRECT)(param_1 + 0xded));
  FUN_1800fbea0((undefined1 *)(param_1 + 0xd32),0,0x40);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xd3a),0,0x40);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xd42),0,0x40);
  FUN_1800fbea0((undefined1 *)(param_1 + 0xd4a),0,0x40);
  param_1[0xd52] = 0;
  param_1[0xd53] = 0;
  param_1[0xd54] = 0;
  param_1[0xd55] = 0;
  param_1[0xd56] = 0;
  param_1[0xd57] = 0;
  param_1[0xd58] = 0;
  param_1[0xd59] = 0;
  param_1[0x189d] = 0;
  param_1[0x189e] = 0;
  param_1[0x189f] = 0;
  FUN_1800fbea0((undefined1 *)(param_1 + 0xdf0),0,0x45a0);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x16a4),0,0xe00);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x1864),0,0x100);
  FUN_1800fbea0((undefined1 *)(param_1 + 0x1884),0,0x40);
  param_1[0x188c] = 0;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x1894] = 0x100000001;
  param_1[0x1895] = 0x100000001;
  param_1[0x1896] = 0x100000001;
  param_1[0x1897] = 0x100000001;
  param_1[0x1898] = 0x100000001;
  param_1[0x1899] = 0x100000001;
  param_1[0x189a] = 0x100000001;
  param_1[0x189b] = 0x100000001;
  return param_1;
}

