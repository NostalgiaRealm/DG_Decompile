/*
 * FUN_180018b78 at 180018b78
 * byte __fastcall FUN_180018b78(longlong param_1, longlong param_2)
 * Address ranges: 180018b78-180018f0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180018b78(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong *local_res18;
  uint local_res20 [2];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  
  bVar11 = 0;
  if (((*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8)) && (*(int *)(param_1 + 0x100) == 0))
     && (*(int *)(param_2 + 0x100) == 2)) {
    uVar1 = *(ushort *)(param_2 + 0x3c);
    uVar2 = *(ushort *)(param_1 + 0x3c);
    local_94 = 0;
    local_98 = 0;
    local_res20[0] = 0;
    local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
    local_res10[0] = 0;
    iVar13 = 0;
    if (uVar2 <= uVar1) {
      iVar13 = (uint)uVar1 - (uint)uVar2;
    }
    local_res8[0] = 0;
    uVar10 = -(uint)(uVar1 < uVar2) & (uint)uVar2 - (uint)uVar1;
    FUN_180018a58(param_2,(byte)iVar13,(uint *)&local_res18,local_res10,local_res8);
    FUN_180018a58(param_1,(byte)uVar10,&local_94,&local_98,local_res20);
    if (((((uint)local_res18 != local_94) || (local_res10[0] != local_98)) ||
        (local_res8[0] != local_res20[0])) && ((iVar13 != 0 || (uVar10 != 0)))) {
      uVar10 = 0;
      iVar13 = 0;
      FUN_180018a58(param_2,0,(uint *)&local_res18,local_res10,local_res8);
      FUN_180018a58(param_1,0,&local_94,&local_98,local_res20);
    }
    local_60[3] = *(undefined4 *)(param_1 + 0xe8);
    local_50 = *(undefined4 *)(param_1 + 0xec);
    bVar11 = 1;
    local_4c = *(undefined4 *)(param_1 + 0xf0);
    local_90 = *(uint *)(param_2 + 0xc0);
    local_8c = *(uint *)(param_2 + 0xc4);
    local_88 = *(int *)(param_2 + 200);
    local_84 = *(uint *)(param_2 + 0xcc);
    local_80 = *(uint *)(param_2 + 0xd0);
    local_7c = *(int *)(param_2 + 0xd4);
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    FUN_180018580(local_60,&local_78,(int *)&local_90);
    uVar7 = (uint)uVar1;
    if (uVar2 <= uVar1) {
      uVar7 = (uint)uVar2;
    }
    uVar12 = 0;
    bVar4 = false;
    if (uVar7 != 0) {
      local_res20[0] = (1 << ((byte)iVar13 & 0x1f)) - 1;
      local_res10[0] = local_64 & local_res20[0];
      local_res8[0] = local_68 & local_res20[0];
      local_res20[0] = local_6c & local_res20[0];
      bVar4 = false;
      do {
        if (bVar11 == 0) break;
        bVar5 = (byte)(uVar12 + iVar13);
        local_88 = local_70 >> (bVar5 & 0x1f);
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,local_88);
        local_90 = local_78 >> (bVar5 & 0x1f);
        local_8c = local_74 >> (bVar5 & 0x1f);
        local_84 = ((int)local_6c >> (bVar5 & 0x1f)) + (uint)(local_res20[0] != 0);
        local_80 = ((int)local_68 >> (bVar5 & 0x1f)) + (uint)(local_res8[0] != 0);
        local_7c = ((int)local_64 >> (bVar5 & 0x1f)) + (uint)(local_res10[0] != 0);
        if ((((int)local_90 < (int)local_84) && ((int)local_8c < (int)local_80)) &&
           (local_88 < local_7c)) {
          plVar3 = *(longlong **)(param_2 + 0x40 + (ulonglong)(uVar12 + iVar13) * 8);
          local_res18 = *(longlong **)(param_1 + 0x40 + (ulonglong)(uVar12 + uVar10) * 8);
          if (plVar3 != (longlong *)0x0) {
            FUN_180031d4c(plVar3,(char)plVar3[0xc]);
          }
          if (*(longlong *)(local_res18[0x11] + 0xe0) != 0) {
            FUN_180031d4c(local_res18,(char)local_res18[0xc]);
          }
          uVar8 = local_8c;
          uVar9 = local_90;
          uVar6 = FUN_180002928(*(int *)(param_1 + 0xf8));
          if ((char)uVar6 != '\0') {
            uVar9 = uVar9 & 0xfffffffc;
            local_84 = local_84 + 3 & 0xfffffffc;
            uVar8 = uVar8 & 0xfffffffc;
            local_80 = local_80 + 3 & 0xfffffffc;
            local_90 = uVar9;
            local_8c = uVar8;
          }
          bVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x128))
                            (*(longlong **)(param_1 + 0xd8),uVar12 + uVar10,uVar12 + iVar13,
                             *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0xe0),
                             &local_90,uVar9,uVar8,local_88);
          bVar11 = bVar11 & bVar5;
          bVar4 = true;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar7);
    }
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
    if (bVar4) {
      FUN_180008018(-(ulonglong)(*(longlong *)(param_1 + 0x18) != 0) &
                    *(longlong *)(param_1 + 0x18) - 0x6838U,param_1);
    }
  }
  return bVar11;
}

