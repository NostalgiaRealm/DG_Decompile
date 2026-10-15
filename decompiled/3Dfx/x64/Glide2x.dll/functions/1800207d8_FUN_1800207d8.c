/*
 * FUN_1800207d8 at 1800207d8
 * undefined __fastcall FUN_1800207d8(longlong * param_1)
 * Address ranges: 1800207d8-1800208fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800207d8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  RemoveVectoredExceptionHandler((PVOID)param_1[0x27]);
  DAT_18006c888 = 0;
  lVar1 = *(longlong *)(param_1[1] + 0x2978);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (*(uint *)(lVar1 + 0x660) != 0) {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if (*(longlong **)(*(longlong *)(lVar1 + 0x658) + uVar4 * 8) == param_1) {
        if (uVar3 != 0xffffffff) {
          uVar4 = 0;
          if (*(int *)(lVar1 + 0x650) != 0) {
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x648) + uVar4 * 8);
              if (*(longlong **)(lVar2 + 0xd70) == param_1) {
                *(undefined8 *)(lVar2 + 0xd70) = 0;
              }
              uVar5 = (int)uVar4 + 1;
              uVar4 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar1 + 0x650));
          }
          uVar5 = *(uint *)(lVar1 + 0x660);
          if (uVar3 < uVar5) {
            while( true ) {
              uVar6 = uVar3 + 1;
              if (uVar5 <= uVar6) break;
              *(undefined8 *)(*(longlong *)(lVar1 + 0x658) + (ulonglong)uVar3 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar1 + 0x658) + (ulonglong)uVar6 * 8);
              uVar5 = *(uint *)(lVar1 + 0x660);
              uVar3 = uVar6;
            }
            *(uint *)(lVar1 + 0x660) = uVar5 - 1;
          }
        }
        break;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < *(uint *)(lVar1 + 0x660));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_1800500ec(*(longlong **)(param_1[1] + 0x2978),*(longlong *)(param_1[1] + 0xa0),
                (longlong)param_1);
  param_1[2] = 0;
  return;
}

