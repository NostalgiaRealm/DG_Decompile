/*
 * FUN_1800289b8 at 1800289b8
 * undefined __fastcall FUN_1800289b8(longlong * param_1, uint param_2, undefined4 param_3, uint param_4, uint param_5, longlong param_6, uint param_7)
 * Address ranges: 1800289b8-180028b52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800289b8(longlong *param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                  longlong param_6,uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(int)param_2;
  (**(code **)(*param_1 + 0x2e0))();
  uVar3 = param_7 & 3;
  *(uint *)(param_1 + lVar5 * 0x34 + 0x5bb) = *(uint *)(param_1 + lVar5 * 0x34 + 0x5bb) & 0xfffffffc
  ;
  *(float *)(param_1 + lVar5 * 0x34 + 0x5b6) = (float)param_4;
  *(uint *)(param_1 + lVar5 * 0x34 + 0x5b7) = param_5;
  uVar1 = 0;
  if (uVar3 == 2) {
    uVar1 = 2;
  }
  *(uint *)((longlong)param_1 + lVar5 * 0x1a0 + 0x2dbc) = param_4;
  *(undefined4 *)(param_1 + lVar5 * 0x34 + 0x5b8) = param_3;
  *(uint *)(param_1 + lVar5 * 0x34 + 0x5bb) =
       *(uint *)(param_1 + lVar5 * 0x34 + 0x5bb) | uVar1 | uVar3 != 3;
  *(float *)((longlong)param_1 + lVar5 * 0x1a0 + 0x2db4) = (float)param_5;
  if (uVar3 == 1) {
    if (param_5 == param_4) goto LAB_180028a98;
    *(uint *)(param_1 + lVar5 * 0x34 + 0x5b7) = param_5 & 0xfffffffe;
    uVar1 = param_4 + 1 & 0xfffffffe;
  }
  else {
    if ((uVar3 != 2) || (param_5 == param_4)) goto LAB_180028a98;
    if (((param_5 & 1) == 0) && (param_5 != 0)) {
      *(uint *)(param_1 + lVar5 * 0x34 + 0x5b7) = param_5 - 1;
    }
    if ((param_4 & 1) != 0) goto LAB_180028a98;
    uVar1 = param_4 + 1;
  }
  *(uint *)((longlong)param_1 + lVar5 * 0x1a0 + 0x2dbc) = uVar1;
LAB_180028a98:
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(lVar6 * 0x10 + param_6);
    lVar4 = lVar6 * 0x20;
    *(undefined4 *)(param_1 + lVar5 * 0x34 + lVar6 * 4 + 0x5c2) = *puVar2;
    *(float *)(param_1 + lVar5 * 0x34 + lVar6 * 4 + 0x5c3) = (float)(uint)puVar2[1];
    *(float *)((longlong)param_1 + lVar4 + lVar5 * 0x1a0 + 0x2e1c) = (float)(uint)puVar2[2];
    *(float *)(param_1 + lVar5 * 0x34 + lVar6 * 4 + 0x5c4) = (float)(uint)puVar2[3];
    lVar6 = lVar6 + 1;
    *(float *)((longlong)param_1 + lVar4 + lVar5 * 0x1a0 + 0x2e14) =
         (float)*(uint *)((ulonglong)(-(uint)((uint)puVar2[1] < (uint)puVar2[2]) & 4) + 4 +
                         (longlong)puVar2) * 0.00390625;
  } while (lVar6 != 9);
  FUN_1800284a8((longlong)param_1,(ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)(lVar5 + 0x32f3 + (longlong)param_1) = 1;
  return;
}

