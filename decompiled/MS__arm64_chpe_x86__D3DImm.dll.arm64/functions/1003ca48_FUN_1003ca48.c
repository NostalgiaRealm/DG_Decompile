/*
 * FUN_1003ca48 at 1003ca48
 * undefined FUN_1003ca48(void)
 * Address ranges: 1003ca48-1003cac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ca48(undefined8 param_1,int param_2,ushort *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *param_3;
  if ((uVar2 & 0xf0) == 0xa0) {
    uVar1 = uVar2 & 7;
    uVar4 = 1 << (ulonglong)uVar1;
    if ((uVar2 & 0x100) == 0) {
      *param_4 = *param_4 | uVar4;
      iVar5 = 0xe4;
    }
    else {
      *param_5 = uVar4 | *param_5;
      iVar5 = 0x164;
    }
    uVar3 = *(ushort *)(param_2 + uVar1 * 0x10 + iVar5);
    if ((uVar2 & 0x200) != 0) {
      uVar3 = uVar3 | 0x200;
    }
    *param_3 = uVar3;
  }
  return;
}

