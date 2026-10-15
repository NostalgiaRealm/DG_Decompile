/*
 * FUN_10054daa at 10054daa
 * undefined4 __stdcall FUN_10054daa(void * param_1, int * param_2)
 * Address ranges: 10054daa-10054f5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054daa(void *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  uint extraout_ECX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_84 [17];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  char local_5;
  
  uVar8 = 0;
  local_38 = 0x4e475349;
  local_34 = 0;
  local_30 = 0;
  local_2c = 8;
  FUN_1002d6f1(&local_28,0x210);
  FUN_100a14c1(&local_28,&local_38,0x10);
  FUN_100ada8e(local_84,0,0x40);
  uVar10 = 0xffffffff;
  uVar6 = param_2[0x120] & 0x200;
  local_5 = uVar6 != 0;
  uVar9 = 0;
  do {
    iVar3 = param_2[4];
    cVar1 = *(char *)(uVar9 + 0x10 + iVar3);
    uVar7 = (ushort)(uVar6 >> 0x10);
    uVar6 = (uint)uVar7 << 0x10;
    if (cVar1 == '\0') {
LAB_10054ec3:
      if (*(char *)(uVar9 + iVar3) == '0') {
        uVar10 = uVar9;
      }
    }
    else {
      bVar2 = *(byte *)(uVar9 + iVar3);
      uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar2);
      if (bVar2 == 0xff) goto LAB_10054ec3;
      if (bVar2 == 0x30) {
        uVar10 = uVar9;
      }
      local_18 = bVar2 & 0xf;
      local_c = 0;
      local_10 = *param_2;
      local_14 = *(uint *)(local_10 + 8);
      if (local_14 != 0) {
        do {
          if (*(byte *)(local_10 + 0x19 + (uint)*(byte *)(local_10 + 0x9c + local_c) * 8) == bVar2)
          {
            uVar6 = CONCAT22(uVar7,CONCAT11(cVar1,bVar2)) & 0xffff0fff;
            local_30 = uVar8 & 0xff;
            local_38 = 0;
            local_34 = 3;
            local_2c = (uint)CONCAT11((char)(uVar6 >> 8),0xf);
            local_3c = local_18;
            pbVar4 = (byte *)FUN_1005d644(uVar6);
            local_40 = FUN_100a1552(local_84,pbVar4);
            uVar8 = uVar8 + 1;
            FUN_100a14c1(&local_28,&local_40,0x18);
            uVar6 = extraout_ECX;
            break;
          }
          local_c = local_c + 1;
        } while (local_c < local_14);
      }
    }
    uVar9 = uVar9 + 1;
    if (0xf < uVar9) {
      param_2[0x122] = -1;
      if ((uVar10 != 0xffffffff) && (local_5 != '\0')) {
        local_30 = uVar8 & 0xff;
        local_3c = 0;
        local_38 = 0;
        local_34 = 3;
        local_2c = 0x70f;
        param_2[0x122] = uVar8;
        local_40 = FUN_100a1552(local_84,(byte *)"NFACT");
        FUN_100a14c1(&local_28,&local_40,0x18);
        uVar8 = uVar8 + 1;
      }
      FUN_100a1690((int *)&local_28,uVar8,local_84);
      FUN_100a14c1(param_1,local_28,local_24 - (int)local_28);
      uVar5 = thunk_FUN_100ad48c(local_28);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  } while( true );
}

