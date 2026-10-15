/*
 * FUN_1002e5e5 at 1002e5e5
 * undefined __fastcall FUN_1002e5e5(int param_1, char param_2)
 * Address ranges: 1002e5e5-1002e785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e5e5(int param_1,char param_2)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint uVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int iVar7;
  byte *pbVar8;
  byte *local_10;
  
  pbVar1 = (byte *)(param_1 + 0x121);
  iVar7 = ((param_2 != '\0') - 1 & 0xffffffc8) + 0xe8 + param_1;
  pbVar8 = pbVar1;
  if (param_2 == '\0') {
    pbVar8 = (byte *)(param_1 + 0x120);
  }
  FUN_1002e55b(param_1,0,(uint)*(ushort *)(iVar7 + 10));
  uVar2 = *(ushort *)(iVar7 + 10);
  if (((byte)uVar2 & 0xf0) == 0xf0) {
    pbVar5 = pbVar1;
    if ((uVar2 & 0x1000) == 0) {
      pbVar5 = pbVar8;
    }
    *pbVar5 = *pbVar5 | (byte)(1 << (uVar2 & 0xf));
  }
  uVar6 = 0;
  do {
    bVar3 = *pbVar8;
    if ((bVar3 & (byte)(1 << ((byte)uVar6 & 0x1f))) != 0) {
      iVar4 = uVar6 * 0xe;
      uVar2 = *(ushort *)(iVar7 + iVar4);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        local_10 = pbVar8;
        if ((uVar2 & 0x1000) != 0) {
          bVar3 = *pbVar1;
          local_10 = pbVar1;
        }
        *local_10 = bVar3 | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(iVar7 + 2 + iVar4);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        pbVar5 = pbVar8;
        if ((uVar2 & 0x1000) != 0) {
          pbVar5 = pbVar1;
        }
        *pbVar5 = *pbVar5 | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(iVar7 + 4 + iVar4);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        pbVar5 = pbVar8;
        if ((uVar2 & 0x1000) != 0) {
          pbVar5 = pbVar1;
        }
        *pbVar5 = *pbVar5 | (byte)(1 << (uVar2 & 0xf));
      }
      uVar2 = *(ushort *)(iVar7 + 6 + iVar4);
      if (((byte)uVar2 & 0xf0) == 0xf0) {
        pbVar5 = pbVar8;
        if ((uVar2 & 0x1000) != 0) {
          pbVar5 = pbVar1;
        }
        *pbVar5 = *pbVar5 | (byte)(1 << (uVar2 & 0xf));
      }
      FUN_1002e55b(param_1,uVar6,(uint)*(ushort *)(iVar7 + iVar4));
      FUN_1002e55b(extraout_ECX,extraout_EDX,(uint)*(ushort *)(iVar7 + 2 + iVar4));
      FUN_1002e55b(extraout_ECX_00,extraout_EDX_00,(uint)*(ushort *)(iVar7 + 4 + iVar4));
      FUN_1002e55b(extraout_ECX_01,extraout_EDX_01,(uint)*(ushort *)(iVar7 + 6 + iVar4));
      FUN_1002e55b(extraout_ECX_02,extraout_EDX_02,(uint)*(ushort *)(iVar7 + 10 + iVar4));
      uVar6 = extraout_EDX_03;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  return;
}

