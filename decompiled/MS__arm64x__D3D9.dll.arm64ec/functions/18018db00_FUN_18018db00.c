/*
 * FUN_18018db00 at 18018db00
 * undefined FUN_18018db00(void)
 * Address ranges: 18018db00-18018dc13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018db00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint local_40 [2];
  int local_38;
  
  uVar8 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_3 + 0x10) + uVar8);
    cVar4 = pcVar1[0x10];
    if (((cVar4 != '\0') && (*pcVar1 != -1)) && (*(char *)(param_3 + 0xde + uVar8) != -1)) {
      if ((byte)(*(char *)(param_3 + uVar8 + 0xee) - 5U) < 2) {
        cVar4 = '\x01';
      }
      FUN_1802134a0(param_2,uVar8,cVar4);
    }
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar6;
  } while (uVar6 < 0x10);
  if (*(char *)(param_3 + 0x2c8) != '\0') {
    local_40[0] = 0xff;
    uVar6 = 0;
    bVar7 = 0;
    uVar8 = 0;
    do {
      uVar5 = (uint)uVar8;
      if (*(int *)(param_3 + 0x100 + uVar8 * 4) != 0) {
        uVar2 = uVar5;
        if (local_40[0] <= uVar5) {
          uVar2 = local_40[0];
        }
        uVar3 = uVar5;
        if (uVar5 <= uVar6) {
          uVar3 = uVar6;
        }
        bVar7 = *(byte *)(*(longlong *)(param_3 + 0x10) + uVar8 + 0x10) | bVar7;
        local_40[0] = uVar2;
        uVar6 = uVar3;
      }
      uVar8 = (ulonglong)(uVar5 + 1);
    } while (uVar5 + 1 < 0x10);
    local_38 = (uVar6 - local_40[0]) + 1;
    FUN_180215058(param_2,4,0x400005b,(uint)bVar7 << 4 | 0x101002,local_40,0x10);
  }
  return;
}

