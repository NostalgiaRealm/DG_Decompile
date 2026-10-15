/*
 * FUN_10071632 at 10071632
 * byte __fastcall FUN_10071632(void * param_1)
 * Address ranges: 10071632-10071692
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall FUN_10071632(void *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)param_1 + 0x1bd) == '\0') {
    FUN_100ac680(*(int *)((int)param_1 + 0x44) + 0x11c0);
    uVar4 = 0;
    if (*(int *)((int)param_1 + 0x24) != 0) {
      do {
        uVar5 = 0;
        if (*(int *)((int)param_1 + 0x20) != 0) {
          do {
            uVar3 = *(int *)((int)param_1 + 0x2c) * uVar4 + uVar5;
            pbVar1 = (byte *)((int)param_1 + ((int)(uVar3 & 0x1f) >> 3) + (uVar3 >> 5) * 4 + 200);
            *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)((int)param_1 + 0x20));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)param_1 + 0x24));
    }
    bVar2 = FUN_1006f6e8(param_1);
    *(byte *)((int)param_1 + 0x1bd) = bVar2;
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}

