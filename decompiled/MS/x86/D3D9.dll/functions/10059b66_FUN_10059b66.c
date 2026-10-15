/*
 * FUN_10059b66 at 10059b66
 * undefined __stdcall FUN_10059b66(int param_1, ushort * param_2, uint * param_3, uint * param_4)
 * Address ranges: 10059b66-10059bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059b66(int param_1,ushort *param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  if (((byte)uVar1 & 0xf0) == 0xa0) {
    uVar5 = (byte)*param_2 & 7;
    if ((uVar1 & 0x100) == 0) {
      *param_3 = *param_3 | 1 << uVar5;
      iVar3 = 0xf4;
    }
    else {
      *param_4 = *param_4 | 1 << uVar5;
      iVar3 = 0x174;
    }
    uVar2 = *(ushort *)(iVar3 + uVar5 * 0x10 + param_1);
    uVar4 = uVar2 | 0x200;
    if ((uVar1 & 0x200) == 0) {
      uVar4 = uVar2;
    }
    *param_2 = uVar4;
  }
  return;
}

