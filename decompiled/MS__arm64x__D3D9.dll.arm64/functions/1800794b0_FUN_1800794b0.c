/*
 * FUN_1800794b0 at 1800794b0
 * undefined FUN_1800794b0(void)
 * Address ranges: 1800794b0-1800795bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800794b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + uVar7);
    uVar5 = (uint)(byte)pcVar1[0x10];
    if (((uVar5 != 0) && (*pcVar1 != -1)) && (*(char *)(param_3 + 0xde + uVar7) != -1)) {
      if ((byte)(*(char *)(param_3 + uVar7 + 0xee) - 5U) < 2) {
        uVar5 = 1;
      }
      FUN_1800f5b00(param_2,3,0x300005f,uVar5 << 4 | 0x101002,uVar7);
    }
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar5;
  } while (uVar5 < 0x10);
  if (*(char *)(param_3 + 0x2c8) != '\0') {
    uVar3 = 0xff;
    uVar5 = 0;
    bVar6 = 0;
    uVar7 = 0;
    do {
      uVar4 = (uint)uVar7;
      if (*(int *)(param_3 + 0x100 + uVar7 * 4) != 0) {
        uVar2 = uVar4;
        if (uVar3 <= uVar4) {
          uVar2 = uVar3;
        }
        uVar3 = uVar4;
        if (uVar4 <= uVar5) {
          uVar3 = uVar5;
        }
        bVar6 = *(byte *)(*(longlong *)(param_3 + 0x10) + uVar7 + 0x10) | bVar6;
        uVar5 = uVar3;
        uVar3 = uVar2;
      }
      uVar7 = (ulonglong)(uVar4 + 1);
    } while (uVar4 + 1 < 0x10);
    FUN_1800f5b00(param_2,4,0x400005b,(uint)bVar6 << 4 | 0x101002,uVar3,(uVar5 - uVar3) + 1);
  }
  return;
}

