/*
 * FUN_18006c550 at 18006c550
 * undefined __fastcall FUN_18006c550(undefined8 param_1, longlong param_2, longlong * param_3, undefined8 param_4)
 * Address ranges: 18006c550-18006c682
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006c550(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (-(uint)(*(char *)(param_2 + 0x66) != '\0') & 4) + 2;
  if (*(byte *)(param_2 + 0x44) != 0) {
    FUN_1800ee464(param_3,0,*(byte *)(param_2 + 0x44),
                  (-(uint)(*(char *)(param_2 + 0x66) != '\0') & 3) + 4);
  }
  if (*(byte *)(param_2 + 0x45) != 0) {
    FUN_1800ee42c(param_3,1,*(byte *)(param_2 + 0x45),uVar3);
  }
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + *(longlong *)(param_2 + 0x100));
    if (bVar1 != 0) {
      uVar4 = uVar3;
      if (((uint)((ulonglong)param_4 >> 0x37) & 1) != 0) {
        uVar4 = 1;
      }
      FUN_1800ee42c(param_3,(ulonglong)((int)uVar2 + 2),bVar1,uVar4);
    }
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
  } while (uVar4 < 2);
  if (*(byte *)(param_2 + 0x48) != 0) {
    FUN_1800ee42c(param_3,4,*(byte *)(param_2 + 0x48),uVar3);
  }
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(uVar2 + 0x2a + *(longlong *)(param_2 + 0x100));
    if (bVar1 != 0) {
      FUN_1800ee42c(param_3,(ulonglong)((int)uVar2 + 5),bVar1,uVar3);
    }
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
  } while (uVar4 < 6);
  FUN_1800eddec(param_3,3,0x3000065,0x1020f2);
  if (*(char *)(*(longlong *)(param_2 + 0x100) + 0x330) != '\0') {
    FUN_1800eddec(param_3,2,0x2000065,0xc001);
  }
  return;
}

