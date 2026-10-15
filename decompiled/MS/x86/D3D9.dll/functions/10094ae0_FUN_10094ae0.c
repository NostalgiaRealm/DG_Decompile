/*
 * FUN_10094ae0 at 10094ae0
 * undefined4 __stdcall FUN_10094ae0(int param_1, uint param_2, uint * param_3)
 * Address ranges: 10094ae0-10094bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_10094ae0(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_c;
  uint *local_8;
  
  uVar3 = param_2;
  uVar4 = 0x8876086c;
  if (((param_2 != 0) && (param_2 < 0xd2)) &&
     (*(char *)(*(int *)(param_1 + -0x66b0) + param_2 * 8) != '\0')) {
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      local_8 = &local_c;
      FUN_100922dc((void *)(param_1 + -0x66b4),uVar3,(float)param_3);
      param_3 = &local_c;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(uint **)(iVar1 + 8 + uVar3 * 4) = param_3;
      pbVar2 = (byte *)(iVar1 + 0xaba8 + (uVar3 >> 5) * 4 + ((int)(uVar3 & 0x1f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar3 & 7);
    }
    uVar4 = 0;
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return uVar4;
}

