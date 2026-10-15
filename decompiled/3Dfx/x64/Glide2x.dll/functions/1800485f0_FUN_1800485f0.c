/*
 * FUN_1800485f0 at 1800485f0
 * undefined __fastcall FUN_1800485f0(longlong param_1, uint param_2, longlong * param_3, int param_4, longlong * param_5)
 * Address ranges: 1800485f0-180048704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800485f0(longlong param_1,uint param_2,longlong *param_3,int param_4,longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar1 = true;
  bVar2 = false;
  if (param_4 == 0) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x4d8 + uVar4 * 8);
      if ((uint)uVar4 < param_2) {
        if (lVar6 != param_3[uVar4]) {
          *(longlong *)(param_1 + 0x4d8 + uVar4 * 8) = param_3[uVar4];
          bVar1 = bVar2;
        }
      }
      else if (lVar6 != 0) {
        *(undefined8 *)(param_1 + 0x4d8 + uVar4 * 8) = 0;
        bVar1 = bVar2;
      }
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 8);
  }
  else {
    do {
      uVar3 = (uint)uVar4;
      if (uVar3 < param_2) {
        lVar6 = (ulonglong)(uVar3 * *(int *)(param_1 + 0xb98)) + *param_3;
        if (*(longlong *)(param_1 + 0x4d8 + uVar4 * 8) != lVar6) {
          *(longlong *)(param_1 + 0x4d8 + uVar4 * 8) = lVar6;
          bVar1 = bVar2;
        }
      }
      else if (*(longlong *)(param_1 + 0x4d8 + uVar4 * 8) != 0) {
        *(undefined8 *)(param_1 + 0x4d8 + uVar4 * 8) = 0;
        bVar1 = bVar2;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < 8);
  }
  plVar5 = (longlong *)&DAT_18006c8a8;
  if (param_5 != (longlong *)0x0) {
    plVar5 = param_5;
  }
  if ((!bVar1) || (*plVar5 != *(longlong *)(param_1 + 0x518))) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x170))
              (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
    *(longlong *)(param_1 + 0x518) = *plVar5;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

