/*
 * FUN_1002e354 at 1002e354
 * undefined __fastcall FUN_1002e354(int param_1, uint param_2, int param_3, byte param_4)
 * Address ranges: 1002e354-1002e498
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e354(int param_1,uint param_2,int param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  uint local_8;
  
  iVar9 = param_2 * 0xe + param_3;
  puVar10 = (ushort *)(((param_4 != 0) - 1 & 0xffffffc8) + 0xf6 + iVar9);
  if (param_2 < 2) {
    uVar1 = *(ushort *)(((param_4 != 0) - 1 & 0xffffffc8) + 0x10e + iVar9);
  }
  else {
    uVar1 = 0;
  }
  uVar3 = (ushort)param_4 << 0xc;
  iVar9 = param_2 * 0x180 + param_1;
  if (param_4 == 0) {
    local_8 = *(uint *)(iVar9 + 0x100);
    uVar8 = *(uint *)(iVar9 + 0x104);
    iVar6 = 0x108;
  }
  else {
    local_8 = *(uint *)(iVar9 + 0x110);
    iVar6 = 0x118;
    uVar8 = *(uint *)(iVar9 + 0x114);
  }
  uVar7 = -(uint)(*(int *)(iVar6 + iVar9) != 0) & 0x100;
  uVar2 = (ushort)param_2;
  if (uVar8 < 0x10) {
    uVar5 = *(ushort *)(&DAT_10053eac + uVar8 * 2);
    if (((byte)uVar5 & 0xf0) == 0xf0) {
      uVar4 = FUN_1002e045(uVar1,uVar5 & 0xf00);
      uVar5 = uVar4 | uVar5 & 0x1000;
    }
    if (((uVar5 & 0xf0) == 0x20) || ((uVar5 & 0xf0) == 0x30)) {
      if (*(int *)(iVar9 + 0x144) == 0) {
        uVar5 = uVar5 & 0xff0f;
      }
      else {
        uVar5 = uVar5 | uVar2;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  FUN_1002e26a(local_8,uVar5 | uVar3,uVar1,uVar2 | uVar3 | 0x2010,uVar2 | 0x3010,(ushort)uVar7,uVar3
               ,uVar2 + 1,(undefined4 *)puVar10);
  FUN_1002e65d(puVar10,uVar7,uVar3);
  return;
}

