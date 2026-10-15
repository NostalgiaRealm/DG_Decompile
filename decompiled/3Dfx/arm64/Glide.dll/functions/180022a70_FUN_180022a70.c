/*
 * FUN_180022a70 at 180022a70
 * int __cdecl FUN_180022a70(longlong * param_1)
 * Address ranges: 180022a70-180022b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180022a70(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  RemoveVectoredExceptionHandler((PVOID)param_1[0x27]);
  DAT_18006c8d0 = 0;
  lVar7 = *(longlong *)(param_1[1] + 0x2978);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  if (*(uint *)(lVar7 + 0x660) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(longlong **)(*(longlong *)(lVar7 + 0x658) + uVar3 * 8) == param_1) {
        if (uVar2 != 0xffffffff) {
          uVar5 = 0;
          if (*(int *)(lVar7 + 0x650) != 0) {
            do {
              lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x648) + uVar5 * 8);
              if (*(longlong **)(lVar6 + 0xd70) == param_1) {
                *(undefined8 *)(lVar6 + 0xd70) = 0;
              }
              uVar4 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar7 + 0x650));
          }
          uVar4 = *(uint *)(lVar7 + 0x660);
          if (uVar2 < uVar4) {
            while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
              *(undefined8 *)(*(longlong *)(lVar7 + 0x658) + uVar3 * 8) =
                   *(undefined8 *)(*(longlong *)(lVar7 + 0x658) + (ulonglong)uVar2 * 8);
              uVar3 = (ulonglong)uVar2;
              uVar4 = *(uint *)(lVar7 + 0x660);
            }
            *(uint *)(lVar7 + 0x660) = uVar4 - 1;
          }
        }
        break;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(lVar7 + 0x660));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  (**(code **)(*param_1 + 0x20))(param_1);
  iVar1 = FUN_180053f28(*(longlong **)(param_1[1] + 0x2978),*(longlong *)(param_1[1] + 0xa0),
                        (longlong)param_1);
  param_1[2] = 0;
  return iVar1;
}

