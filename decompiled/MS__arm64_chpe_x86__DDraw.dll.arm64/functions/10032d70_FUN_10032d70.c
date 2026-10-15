/*
 * FUN_10032d70 at 10032d70
 * undefined FUN_10032d70(void)
 * Address ranges: 10032d70-10032e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032d70(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    *(float *)(param_2 + (param_3 * 0x102 + 0xe + uVar3) * 0xc) =
         (float)*(ushort *)(param_4 + uVar3 * 2) / param_1;
    iVar2 = param_3 * 0x102 + uVar3;
    *(float *)(param_2 + 0xac + iVar2 * 0xc) = (float)*(ushort *)(param_5 + uVar3 * 2) / param_1;
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 1;
    *(float *)(param_2 + 0xb0 + iVar2 * 0xc) = (float)*(ushort *)(param_6 + iVar1) / param_1;
  } while (uVar3 < 0x100);
  if (*(uint *)(param_2 + 0x9c) != 0) {
    iVar1 = *(int *)(param_2 + 0x98);
    uVar3 = 0;
    do {
      if ((param_3 == *(int *)(iVar1 + 0x14 + uVar3 * 0x28)) &&
         (iVar2 = iVar1 + uVar3 * 0x28, *(char *)(iVar2 + 0x24) != '\0')) {
        FUN_10032308(param_2,iVar2);
        FUN_10070168(*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(*(int *)(param_2 + 0x98) + uVar3 * 0x28),
                     param_2 + param_3 * 0xc18 + 0xa8,param_2 + 0xc);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x9c));
  }
  return;
}

