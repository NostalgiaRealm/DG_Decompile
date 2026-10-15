/*
 * FUN_1001bdc1 at 1001bdc1
 * undefined __fastcall FUN_1001bdc1(uint * param_1)
 * Address ranges: 1001bdc1-1001be68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001bdc1(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = FUN_1001f58a(*param_1);
  if ((char)param_1[1] == '\0') {
    bVar2 = bVar1 & 1;
    *(char *)((int)param_1 + 0x61) = (bVar2 != 0) + -1;
    bVar4 = 0xff;
    bVar3 = bVar4;
    if ((bVar1 & 2) != 0) {
      bVar3 = bVar2;
    }
    *(byte *)((int)param_1 + 0x62) = bVar3;
    bVar3 = bVar2 + 1;
    if ((bVar1 & 2) == 0) {
      bVar3 = bVar2;
    }
    bVar2 = bVar4;
    if ((bVar1 & 4) != 0) {
      bVar2 = bVar3;
      bVar3 = bVar3 + 1;
    }
    *(byte *)(param_1 + 0x17) = bVar2;
    bVar2 = bVar4;
    if ((bVar1 & 8) != 0) {
      bVar2 = bVar3;
    }
    *(byte *)((int)param_1 + 0x5d) = bVar2;
    bVar2 = bVar3 + 1;
    if ((bVar1 & 8) == 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar4;
    if ((bVar1 & 0x10) != 0) {
      bVar3 = bVar2;
      bVar2 = bVar2 + 1;
    }
    *(byte *)((int)param_1 + 0x5e) = bVar3;
    bVar3 = bVar4;
    if ((bVar1 & 0x20) != 0) {
      bVar3 = bVar2;
    }
    *(byte *)((int)param_1 + 0x5f) = bVar3;
    if (((char)bVar1 < '\0') && (bVar4 = bVar2 + 1, (bVar1 & 0x20) == 0)) {
      bVar4 = bVar2;
    }
  }
  else {
    *(undefined2 *)((int)param_1 + 0x61) = 0x605;
    param_1[0x17] = 0x3020100;
    bVar4 = 4;
  }
  *(byte *)(param_1 + 0x18) = bVar4;
  return;
}

