/*
 * FUN_18001d54c at 18001d54c
 * undefined __fastcall FUN_18001d54c(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18001d54c-18001d605
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d54c(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  uint local_res8 [2];
  
  FUN_1800fa780(local_res8);
  if (*(char *)(param_1 + 0x40c) == '\0') {
    lVar1 = param_1 + (ulonglong)param_2 * 0x10;
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar1 + 0x418 + lVar3 * 4) = *(undefined4 *)(param_3 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
              (*(longlong **)(param_1 + 0x28),param_2,lVar1 + 0x418);
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar1 + (ulonglong)param_2 * 0x10 + 0x4a54 + lVar3 * 4) =
           *(undefined4 *)(param_3 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    pbVar2 = (byte *)(lVar1 + 0xace0 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
  }
  FUN_1800fa7bc();
  return;
}

