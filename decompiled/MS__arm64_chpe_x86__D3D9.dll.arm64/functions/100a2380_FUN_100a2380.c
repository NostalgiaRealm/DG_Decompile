/*
 * FUN_100a2380 at 100a2380
 * undefined FUN_100a2380(void)
 * Address ranges: 100a2380-100a24b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a2380(undefined8 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint local_44;
  uint uStack_40;
  int local_3c;
  
  uVar7 = 0;
  do {
    pcVar1 = (char *)(*(int *)(param_3 + 0x10) + uVar7);
    cVar4 = pcVar1[0x10];
    if (((cVar4 != '\0') && (*pcVar1 != -1)) && (*(char *)(uVar7 + param_3 + 0xca) != -1)) {
      if ((byte)(*(char *)(uVar7 + param_3 + 0xda) - 5U) < 2) {
        cVar4 = '\x01';
      }
      FUN_10123478(param_2,uVar7,cVar4);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  if (*(char *)(param_3 + 0x2b4) != '\0') {
    uStack_40 = 0xff;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    do {
      if (*(int *)(param_3 + 0xec + uVar7 * 4) != 0) {
        uVar2 = uVar7;
        if (uStack_40 <= uVar7) {
          uVar2 = uStack_40;
        }
        uVar3 = uVar7;
        if (uVar7 <= uVar5) {
          uVar3 = uVar5;
        }
        uVar6 = *(byte *)(*(int *)(param_3 + 0x10) + uVar7 + 0x10) | uVar6;
        uStack_40 = uVar2;
        uVar5 = uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
    local_3c = (uVar5 - uStack_40) + 1;
    local_44 = uVar6 << 4 | 0x101002;
    local_48 = 0x400005b;
    uStack_4c = 4;
    local_50 = param_2;
    FUN_10122cd8(&local_50,0x18);
  }
  return;
}

