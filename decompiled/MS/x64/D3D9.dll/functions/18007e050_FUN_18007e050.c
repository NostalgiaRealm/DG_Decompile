/*
 * FUN_18007e050 at 18007e050
 * undefined __fastcall FUN_18007e050(undefined8 param_1, longlong param_2)
 * Address ranges: 18007e050-18007e0a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007e050(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  
  if (*(char *)(param_2 + 0x1cb) != '\0') {
    cVar4 = '\0';
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (uVar2 < 9) {
        uVar1 = uVar2;
        if (uVar2 != 8) goto LAB_18007e069;
LAB_18007e08e:
        *(char *)(param_2 + 0x146 + uVar3) = cVar4;
        cVar4 = cVar4 + '\x01';
      }
      else {
        uVar1 = uVar2 - 9;
LAB_18007e069:
        if (((((uVar1 == 0) || (uVar1 == 1)) || (uVar1 == 2)) || ((uVar1 == 3 || (uVar1 == 4)))) ||
           ((uVar1 == 5 || ((uVar1 == 6 || (uVar1 == 7)))))) goto LAB_18007e08e;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < 0x11);
  }
  return;
}

