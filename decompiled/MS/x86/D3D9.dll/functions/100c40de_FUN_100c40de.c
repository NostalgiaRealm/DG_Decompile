/*
 * FUN_100c40de at 100c40de
 * undefined4 __fastcall FUN_100c40de(uint param_1, uint param_2)
 * Address ranges: 100c40de-100c413c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100c40de(uint param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  undefined4 local_c;
  int iVar5;
  
  local_c = 0;
  uVar7 = param_2 & 0xff;
  iVar5 = (param_1 & 0xff) << 8;
  iVar1 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    local_c = 0;
    uVar6 = (uint)(byte)((byte)param_1 >> ((char)iVar1 * '\x02' & 0x1fU));
    do {
      bVar2 = (byte)local_c;
      bVar3 = (byte)uVar6;
      if ((uVar7 & 1 << (bVar2 & 0x1f)) != 0) {
        bVar3 = (byte)((uint)iVar5 >> 8) >> (bVar2 * '\x02' & 0x1f);
      }
      uVar4 = CONCAT11((byte)param_1,bVar3) & 0xffffff03;
      bVar3 = (char)uVar4 << (bVar2 * '\x02' & 0x1f);
      iVar5 = CONCAT31((int3)(uVar4 >> 8),bVar3);
      uVar6 = (uint)CONCAT11((byte)(uVar6 >> 8) | bVar3,(byte)uVar6);
      local_c = local_c + 1;
    } while (local_c < 4);
  }
  return CONCAT31((int3)(local_c >> 8),(char)(uVar6 >> 8));
}

