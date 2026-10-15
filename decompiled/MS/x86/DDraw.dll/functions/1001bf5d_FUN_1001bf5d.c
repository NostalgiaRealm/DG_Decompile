/*
 * FUN_1001bf5d at 1001bf5d
 * undefined4 __fastcall FUN_1001bf5d(undefined4 param_1, int param_2)
 * Address ranges: 1001bf5d-1001c095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001bf5d(void *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  int local_7c [16];
  int local_3c [6];
  undefined4 *local_24;
  int local_20;
  void *local_14;
  int local_10;
  uint local_c;
  undefined1 local_5;
  
  local_3c[2] = 0x4e475349;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 8;
  local_14 = param_1;
  local_10 = param_2;
  FUN_100069a7(&local_24,0x210);
  FUN_10057629(&local_24,local_3c + 2,0x10);
  FUN_10060d45(local_7c,0,0x40);
  local_c = 0;
  do {
    uVar4 = local_c;
    iVar3 = local_10;
    local_3c[2] = 0;
    local_5 = 0xf;
    pcVar8 = (char *)0x0;
    if (local_c == 0) {
      pcVar8 = "SV_POSITION";
      local_3c[2] = 1;
    }
    else if (local_c == 1) {
      pcVar8 = "TEXCOORD";
      local_5 = 3;
    }
    local_3c[0] = 0;
    iVar2 = local_7c[0];
    while (iVar2 != 0) {
      pbVar9 = (byte *)local_7c[local_3c[0]];
      pbVar5 = (byte *)pcVar8;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_1001c002:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_1001c007;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_1001c002;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_1001c007:
      if (uVar6 == 0) break;
      local_3c[0] = local_3c[0] + 1;
      iVar2 = local_7c[local_3c[0]];
    }
    if ((byte *)local_7c[local_3c[0]] != (byte *)0x0) {
      pcVar8 = (char *)local_7c[local_3c[0]];
    }
    local_7c[local_3c[0]] = (int)pcVar8;
    local_3c[1] = 0;
    local_3c[5] = (int)CONCAT11(*(undefined1 *)(iVar3 + 0x73 + uVar4),local_5);
    local_3c[3] = 3;
    local_3c[4] = uVar4;
    FUN_10057629(&local_24,local_3c,0x18);
    local_c = uVar4 + 1;
    if (1 < uVar4 + 1) {
      FUN_100576ff(&local_24,local_7c);
      FUN_10057629(local_14,local_24,local_20 - (int)local_24);
      uVar7 = thunk_FUN_10060be1(local_24);
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  } while( true );
}

