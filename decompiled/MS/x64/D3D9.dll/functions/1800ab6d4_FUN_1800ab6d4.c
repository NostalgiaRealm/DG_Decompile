/*
 * FUN_1800ab6d4 at 1800ab6d4
 * undefined __fastcall FUN_1800ab6d4(longlong * param_1, uint param_2, longlong param_3, longlong param_4, longlong param_5, float param_6)
 * Address ranges: 1800ab6d4-1800ab7c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ab6d4(longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5
                  ,float param_6)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  do {
    *(float *)((longlong)param_1 + lVar4 * 0xc + (ulonglong)param_2 * 0xc18 + 0x100c0) =
         (float)*(ushort *)(param_3 + lVar4 * 2) / param_6;
    *(float *)((longlong)param_1 + lVar4 * 0xc + (ulonglong)param_2 * 0xc18 + 0x100c4) =
         (float)*(ushort *)(param_4 + lVar4 * 2) / param_6;
    lVar5 = lVar4 + 1;
    *(float *)((longlong)param_1 + lVar4 * 0xc + (ulonglong)param_2 * 0xc18 + 0x100c8) =
         (float)*(ushort *)(param_5 + lVar4 * 2) / param_6;
    lVar4 = lVar5;
  } while (lVar5 != 0x100);
  if (*(uint *)(param_1 + 0x2017) != 0) {
    uVar3 = 0;
    do {
      plVar1 = (longlong *)(param_1[0x2016] + uVar3 * 0x30);
      if ((param_2 == *(uint *)((longlong)plVar1 + 0x1c)) &&
         (*(char *)((longlong)plVar1 + 0x2c) != '\0')) {
        FUN_1800aaf90(param_1,plVar1);
        FUN_1800e0e08(param_1[4],*(longlong *)(param_1[0x2016] + uVar3 * 0x30),
                      (longlong)(param_1 + (ulonglong)param_2 * 0x183 + 0x2018),param_1 + 3);
        return;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x2017));
  }
  return;
}

