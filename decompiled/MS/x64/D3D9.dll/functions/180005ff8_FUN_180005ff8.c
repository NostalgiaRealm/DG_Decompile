/*
 * FUN_180005ff8 at 180005ff8
 * undefined __fastcall FUN_180005ff8(undefined8 param_1, longlong param_2, longlong param_3, uint param_4, uint param_5, uint param_6, uint param_7, int param_8, int param_9, longlong param_10, longlong param_11)
 * Address ranges: 180005ff8-18000618a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005ff8(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7,int param_8,int param_9,longlong param_10,
                  longlong param_11)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (param_9 != 0) {
    lVar2 = 0;
    do {
      lVar5 = lVar2 * 0x10;
      uVar1 = *(uint *)(param_10 + 4 + lVar5);
      if (param_11 == 0) {
        uVar7 = *(uint *)(param_10 + lVar5);
        uVar6 = uVar1;
      }
      else {
        uVar7 = *(uint *)(param_11 + lVar2 * 8);
        uVar6 = *(uint *)(param_11 + 4 + lVar2 * 8);
      }
      uVar8 = (ulonglong)(*(int *)(param_10 + 0xc + lVar5) - uVar1) / (ulonglong)param_7;
      puVar4 = (undefined8 *)
               ((ulonglong)((*(uint *)(param_10 + lVar5) / param_6) * param_8) +
               (ulonglong)((uVar1 / param_7) * param_4) + param_2);
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar7 / param_6) * param_8) +
               param_3 + (ulonglong)((uVar6 / param_7) * param_5));
      uVar1 = ((uint)(*(int *)(param_10 + 8 + lVar5) - *(int *)(param_10 + lVar5)) / param_6) *
              param_8;
      if ((param_4 == uVar1) && (param_5 == uVar1)) {
        FUN_1800fbec0(puVar3,puVar4,(ulonglong)(uVar1 * (int)uVar8));
      }
      else if ((int)uVar8 != 0) {
        do {
          FUN_1800fbec0(puVar3,puVar4,(ulonglong)uVar1);
          puVar4 = (undefined8 *)((longlong)puVar4 + (ulonglong)param_4);
          puVar3 = (undefined8 *)((longlong)puVar3 + (ulonglong)param_5);
          uVar7 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 != 0);
      }
      lVar2 = lVar2 + 1;
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return;
}

