/*
 * FUN_10094fec at 10094fec
 * undefined4 __stdcall FUN_10094fec(int param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10094fec-100950e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10094fec(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = param_3;
  uVar5 = 0x8876086c;
  if ((((((param_2 < 0x10) || (param_2 == 0x100)) || (param_2 == 0x101)) ||
       ((param_2 == 0x102 || (param_2 == 0x103)))) ||
      ((param_2 == 0x104 && ((param_3 != 0 && (param_3 < 0xe)))))) &&
     ((&DAT_100de748)[param_3 * 8] != '\0')) {
    FUN_10003e40((void *)((int)&param_3 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      FUN_100925c3((void *)(param_1 + -0x66b4),param_2,uVar4,param_4);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      uVar4 = param_2 * 0xe + uVar4;
      if (param_2 < 0x100) {
        *(uint *)(iVar1 + 0x4abc + uVar4 * 4) = param_4;
        iVar3 = (uVar4 >> 5) + 0x2b09;
      }
      else {
        *(uint *)(iVar1 + 0x163c + uVar4 * 4) = param_4;
        uVar4 = uVar4 - 0xe00;
        iVar3 = (uVar4 >> 5) + 0x2b10;
      }
      pbVar2 = (byte *)(iVar1 + iVar3 * 4 + ((int)(uVar4 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar4 & 7);
    }
    uVar5 = 0;
    FUN_10003e89((char *)((int)&param_3 + 3));
  }
  return uVar5;
}

