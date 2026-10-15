/*
 * FUN_18002e3c0 at 18002e3c0
 * undefined __cdecl FUN_18002e3c0(longlong * param_1, uint param_2, undefined4 param_3, uint param_4, uint param_5, longlong param_6, uint param_7)
 * Address ranges: 18002e3c0-18002e597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e3c0(longlong *param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                  longlong param_6,uint param_7)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  (**(code **)(*param_1 + 0x2e0))();
  uVar2 = param_7 & 3;
  *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b8) = param_3;
  *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b7) = param_5;
  *(uint *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2dbc) = param_4;
  *(float *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b6) = (float)param_4;
  *(float *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2db4) = (float)param_5;
  *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5bb) =
       (uint)(uVar2 != 3) | (uint)(uVar2 == 2) << 1 |
       *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5bb) & 0xfffffffc;
  if (uVar2 == 1) {
    if (param_5 != param_4) {
      *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b7) = param_5 & 0xfffffffe;
      *(uint *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2dbc) =
           param_4 + 1 & 0xfffffffe;
    }
  }
  else if (uVar2 == 2 && param_5 != param_4) {
    bVar5 = (param_5 & 1) == 0;
    if (bVar5 && (bVar5 && param_5 != 0)) {
      *(uint *)(param_1 + (longlong)(int)param_2 * 0x34 + 0x5b7) = param_5 - 1;
    }
    if ((param_4 & 1) == 0) {
      *(uint *)((longlong)param_1 + (longlong)(int)param_2 * 0x1a0 + 0x2dbc) = param_4 + 1;
    }
  }
  lVar7 = 0;
  do {
    lVar6 = lVar7 * 0x10;
    lVar4 = (longlong)(int)param_2;
    lVar3 = lVar7 * 0x20 + lVar4 * 0x1a0;
    lVar1 = lVar7 + 1;
    *(undefined4 *)(param_1 + (longlong)(int)param_2 * 0x34 + lVar7 * 4 + 0x5c2) =
         *(undefined4 *)(lVar6 + param_6);
    *(float *)(param_1 + lVar4 * 0x34 + lVar7 * 4 + 0x5c3) = (float)*(uint *)(param_6 + 4 + lVar6);
    *(float *)((longlong)param_1 + lVar3 + 0x2e1c) = (float)*(uint *)(param_6 + 8 + lVar6);
    *(float *)(param_1 + lVar4 * 0x34 + lVar7 * 4 + 0x5c4) = (float)*(uint *)(param_6 + 0xc + lVar6)
    ;
    lVar7 = 8;
    if (*(uint *)(param_6 + 8 + lVar6) <= *(uint *)(param_6 + 4 + lVar6)) {
      lVar7 = 4;
    }
    *(float *)((longlong)param_1 + lVar3 + 0x2e14) =
         (float)*(uint *)(lVar7 + lVar6 + param_6) * 0.00390625;
    lVar7 = lVar1;
  } while (lVar1 != 9);
  uVar2 = *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb);
  if (((uVar2 >> 2 & 1) != 0) && ((uVar2 & 1) == 0)) {
    *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar2 & 0xfffffffd;
    if ((*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2d94) == 0xd) ||
       (*(int *)((longlong)param_1 + (ulonglong)param_2 * 0x1a0 + 0x2da4) == 0xd)) {
      *(uint *)(param_1 + (ulonglong)param_2 * 0x34 + 0x5bb) = uVar2 & 0xfffffffd | 2;
    }
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)((longlong)param_1 + (longlong)(int)param_2 + 0x32f3) = 1;
  return;
}

