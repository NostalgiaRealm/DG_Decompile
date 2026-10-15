/*
 * FUN_1004ac13 at 1004ac13
 * undefined __stdcall FUN_1004ac13(int param_1, ushort * param_2, uint * param_3, uint * param_4)
 * Address ranges: 1004ac13-1004ac80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ac13(int param_1,ushort *param_2,uint *param_3,uint *param_4)

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
      iVar3 = 0xe4;
    }
    else {
      *param_4 = *param_4 | 1 << uVar5;
      iVar3 = 0x164;
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

