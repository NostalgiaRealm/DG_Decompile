/*
 * FUN_180087fe4 at 180087fe4
 * undefined __fastcall FUN_180087fe4(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180087fe4-1800880c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087fe4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  uVar3 = 0;
  uVar4 = 0xff;
  do {
    bVar6 = *(byte *)(uVar3 + 0x10 + *(longlong *)(param_3 + 0x10));
    if (((bVar6 != 0) && (*(char *)(uVar3 + *(longlong *)(param_3 + 0x10)) != -1)) &&
       (*(char *)(param_3 + 0xde + uVar3) != -1)) {
      bVar1 = 1;
      if (1 < (byte)(*(char *)(param_3 + 0xee + uVar3) - 5U)) {
        bVar1 = bVar6;
      }
      FUN_1800eddec(param_2,3,0x300005f,(ulonglong)((uint)bVar1 << 4 | 0x101002));
    }
    uVar5 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar5;
  } while (uVar5 < 0x10);
  if (*(char *)(param_3 + 0x2c8) != '\0') {
    uVar5 = 0;
    bVar6 = 0;
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(int *)(param_3 + 0x100 + uVar3 * 4) != 0) {
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        bVar6 = bVar6 | *(byte *)(uVar3 + 0x10 + *(longlong *)(param_3 + 0x10));
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < 0x10);
    FUN_1800eddec(param_2,4,0x400005b,(ulonglong)((uint)bVar6 << 4 | 0x101002));
  }
  return;
}

