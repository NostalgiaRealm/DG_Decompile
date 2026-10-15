/*
 * FUN_180038d18 at 180038d18
 * undefined __cdecl FUN_180038d18(longlong * param_1, uint param_2, undefined4 param_3, uint param_4, uint param_5, longlong param_6, uint param_7)
 * Address ranges: 180038d18-180038efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038d18(longlong *param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                  longlong param_6,uint param_7)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  (**(code **)(*param_1 + 0x2a0))();
  lVar7 = (longlong)(int)param_2;
  uVar2 = param_7 & 3;
  *(undefined4 *)(param_1 + lVar7 * 0x30 + 0x5a4) = param_3;
  *(uint *)(param_1 + lVar7 * 0x30 + 0x5a3) = param_5;
  *(uint *)((longlong)param_1 + lVar7 * 0x180 + 0x2d1c) = param_4;
  *(float *)(param_1 + lVar7 * 0x30 + 0x5a2) = (float)param_4;
  *(float *)((longlong)param_1 + lVar7 * 0x180 + 0x2d14) = (float)param_5;
  *(uint *)(param_1 + lVar7 * 0x30 + 0x5a7) =
       (uint)(uVar2 != 3) | (uint)(uVar2 == 2) << 1 |
       *(uint *)(param_1 + lVar7 * 0x30 + 0x5a7) & 0xfffffffc;
  if (uVar2 == 1) {
    if (param_5 != param_4) {
      *(uint *)(param_1 + lVar7 * 0x30 + 0x5a3) = param_5 & 0xfffffffe;
      *(uint *)((longlong)param_1 + lVar7 * 0x180 + 0x2d1c) = param_4 + 1 & 0xfffffffe;
    }
  }
  else if (uVar2 == 2 && param_5 != param_4) {
    bVar4 = (param_5 & 1) == 0;
    if (bVar4 && (bVar4 && param_5 != 0)) {
      *(uint *)(param_1 + lVar7 * 0x30 + 0x5a3) = param_5 - 1;
    }
    if ((param_4 & 1) == 0) {
      *(uint *)((longlong)param_1 + lVar7 * 0x180 + 0x2d1c) = param_4 + 1;
    }
  }
  lVar6 = 0;
  do {
    lVar5 = lVar6 * 0x10;
    lVar3 = lVar6 * 0x20 + lVar7 * 0x180;
    lVar1 = lVar6 + 1;
    *(undefined4 *)(param_1 + lVar7 * 0x30 + lVar6 * 4 + 0x5aa) = *(undefined4 *)(lVar5 + param_6);
    *(float *)(param_1 + lVar7 * 0x30 + lVar6 * 4 + 0x5ab) = (float)*(uint *)(param_6 + 4 + lVar5);
    *(float *)((longlong)param_1 + lVar3 + 0x2d5c) = (float)*(uint *)(param_6 + 8 + lVar5);
    *(float *)(param_1 + lVar7 * 0x30 + lVar6 * 4 + 0x5ac) = (float)*(uint *)(param_6 + 0xc + lVar5)
    ;
    lVar6 = 8;
    if (*(uint *)(param_6 + 8 + lVar5) <= *(uint *)(param_6 + 4 + lVar5)) {
      lVar6 = 4;
    }
    *(float *)((longlong)param_1 + lVar3 + 0x2d54) =
         (float)*(uint *)(lVar6 + lVar5 + param_6) * 0.00390625;
    lVar6 = lVar1;
  } while (lVar1 != 9);
  uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7);
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7) = uVar2 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x180 + 0x2cf4) == 0xd) ||
       (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x180 + 0x2d04) == 0xd)) {
      *(uint *)(param_1 + (ulonglong)param_2 * 0x30 + 0x5a7) = uVar2 & 0xfffffffd | 2;
    }
  }
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)((longlong)param_1 + lVar7 + 0x3173) = 1;
  return;
}

