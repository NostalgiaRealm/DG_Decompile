/*
 * FUN_100ad190 at 100ad190
 * undefined FUN_100ad190(void)
 * Address ranges: 100ad190-100ad2cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ad190(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = uVar3 + param_3 * 0x102;
    *(float *)(param_2 + 0x100a8 + iVar1 * 0xc) = (float)*(ushort *)(param_4 + uVar3 * 2) / param_1;
    *(float *)(param_2 + 0x100ac + iVar1 * 0xc) = (float)*(ushort *)(param_5 + uVar3 * 2) / param_1;
    iVar1 = uVar3 * 2;
    iVar2 = param_3 * 0x102 + 0x1564 + uVar3;
    uVar3 = uVar3 + 1;
    *(float *)(param_2 + iVar2 * 0xc) = (float)*(ushort *)(param_6 + iVar1) / param_1;
  } while (uVar3 < 0x100);
  if (*(uint *)(param_2 + 0x1009c) != 0) {
    uVar3 = 0;
    iVar1 = *(int *)(param_2 + 0x10098);
    do {
      if ((param_3 == *(int *)(iVar1 + 0x14 + uVar3 * 0x28)) &&
         (iVar2 = iVar1 + uVar3 * 0x28, *(char *)(iVar2 + 0x24) != '\0')) {
        FUN_100ac718(param_2,iVar2);
        FUN_100de818(*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(*(int *)(param_2 + 0x10098) + uVar3 * 0x28),
                     param_2 + param_3 * 0xc18 + 0x100a8,param_2 + 0xc);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x1009c));
  }
  return;
}

