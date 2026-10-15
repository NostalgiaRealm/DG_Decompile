/*
 * FUN_180008a20 at 180008a20
 * undefined1 __cdecl FUN_180008a20(longlong param_1, undefined4 param_2)
 * Address ranges: 180008a20-180008ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180008a20(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  uVar1 = 0;
  bVar2 = FUN_180009768(param_1);
  if ((bVar2 & 1) == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
  case 6:
    return 1;
  case 1:
    uVar4 = FUN_18000a930(param_1);
    uVar5 = (ulonglong)uVar4;
    puVar6 = &DAT_18006f27b;
    break;
  case 2:
    uVar4 = FUN_18000a930(param_1);
    uVar5 = (ulonglong)uVar4;
    puVar6 = &DAT_18006f27c;
    break;
  case 3:
    uVar4 = FUN_18000a930(param_1);
    uVar5 = (ulonglong)uVar4;
    puVar6 = &DAT_18006f279;
    break;
  case 4:
    bVar3 = FUN_180008d50(param_1);
    if (!bVar3) {
      return 0;
    }
  case 5:
    uVar4 = FUN_18000a930(param_1);
    uVar1 = uVar4 == 4;
  default:
    goto switchD_180008a58_default;
  }
  uVar1 = puVar6[uVar5 * 0x20];
switchD_180008a58_default:
  return uVar1;
}

