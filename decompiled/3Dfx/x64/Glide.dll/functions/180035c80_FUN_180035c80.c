/*
 * FUN_180035c80 at 180035c80
 * undefined __fastcall FUN_180035c80(longlong * param_1, uint param_2, undefined4 param_3, uint param_4, uint param_5, longlong param_6, uint param_7)
 * Address ranges: 180035c80-180035e22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035c80(longlong *param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
                  longlong param_6,uint param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(int)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  uVar3 = param_7 & 3;
  *(uint *)(param_1 + lVar5 * 0x30 + 0x5a7) = *(uint *)(param_1 + lVar5 * 0x30 + 0x5a7) & 0xfffffffc
  ;
  *(uint *)(param_1 + lVar5 * 0x30 + 0x5a3) = param_5;
  *(uint *)((longlong)param_1 + lVar5 * 0x180 + 0x2d1c) = param_4;
  uVar1 = 0;
  if (uVar3 == 2) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + lVar5 * 0x30 + 0x5a4) = param_3;
  *(float *)(param_1 + lVar5 * 0x30 + 0x5a2) = (float)param_4;
  *(uint *)(param_1 + lVar5 * 0x30 + 0x5a7) =
       *(uint *)(param_1 + lVar5 * 0x30 + 0x5a7) | uVar1 | uVar3 != 3;
  *(float *)((longlong)param_1 + lVar5 * 0x180 + 0x2d14) = (float)param_5;
  if (uVar3 == 1) {
    if (param_5 == param_4) goto LAB_180035d68;
    *(uint *)(param_1 + lVar5 * 0x30 + 0x5a3) = param_5 & 0xfffffffe;
    uVar1 = param_4 + 1 & 0xfffffffe;
  }
  else {
    if ((uVar3 != 2) || (param_5 == param_4)) goto LAB_180035d68;
    if (((param_5 & 1) == 0) && (param_5 != 0)) {
      *(uint *)(param_1 + lVar5 * 0x30 + 0x5a3) = param_5 - 1;
    }
    if ((param_4 & 1) != 0) goto LAB_180035d68;
    uVar1 = param_4 + 1;
  }
  *(uint *)((longlong)param_1 + lVar5 * 0x180 + 0x2d1c) = uVar1;
LAB_180035d68:
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(lVar6 * 0x10 + param_6);
    lVar4 = lVar6 * 0x20;
    *(undefined4 *)(param_1 + lVar5 * 0x30 + lVar6 * 4 + 0x5aa) = *puVar2;
    *(float *)(param_1 + lVar5 * 0x30 + lVar6 * 4 + 0x5ab) = (float)(uint)puVar2[1];
    *(float *)((longlong)param_1 + lVar4 + lVar5 * 0x180 + 0x2d5c) = (float)(uint)puVar2[2];
    *(float *)(param_1 + lVar5 * 0x30 + lVar6 * 4 + 0x5ac) = (float)(uint)puVar2[3];
    lVar6 = lVar6 + 1;
    *(float *)((longlong)param_1 + lVar4 + lVar5 * 0x180 + 0x2d54) =
         (float)*(uint *)((ulonglong)(-(uint)((uint)puVar2[1] < (uint)puVar2[2]) & 4) + 4 +
                         (longlong)puVar2) * 0.00390625;
  } while (lVar6 != 9);
  FUN_180035c38((longlong)param_1,(ulonglong)param_2);
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)(lVar5 + 0x3173 + (longlong)param_1) = 1;
  return;
}

