/*
 * FUN_1005d178 at 1005d178
 * undefined4 __thiscall FUN_1005d178(void * this, int param_1, uint * param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1005d178-1005d5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1005d178(void *this,int param_1,uint *param_2,int *param_3,undefined4 param_4,uint param_5)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar10;
  uint local_90 [8];
  uint local_70 [9];
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  void *local_38;
  uint local_34;
  undefined4 local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  ushort *local_1c;
  uint local_18;
  byte local_11;
  
  local_18 = 0;
  local_30 = 0xf0;
  local_38 = this;
  do {
    uVar6 = local_18;
    iVar10 = local_18 * 0x10;
    uVar1 = (ushort)param_2[local_18 * 4 + 0x3d];
    local_48 = (uint)uVar1;
    local_2c = param_2 + local_18 * 4 + 0x5d;
    if ((uVar1 != 0) || ((ushort)*local_2c != 0)) {
      local_4c = (uint)(ushort)*local_2c;
      if ((uVar1 != ((ushort)*local_2c & 0xfeff)) ||
         (local_11 = 1,
         *(ushort *)((int)param_2 + iVar10 + 0xf6) !=
         (*(ushort *)((int)param_2 + iVar10 + 0x176) & 0xfeff))) {
        local_11 = 0;
      }
      uVar5 = (ushort)param_2[local_18 * 4 + 0x5e] & 0xfeff;
      local_20 = (int)param_2 + 0xfa;
      local_1c = (ushort *)(iVar10 + 0x17a + (int)param_2);
      if (((ushort)param_2[local_18 * 4 + 0x3e] == uVar5) &&
         (*(ushort *)((int)param_2 + iVar10 + 0xfa) == (*local_1c & 0xfeff))) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      uVar9 = *(uint *)(param_1 + local_18 * 4);
      local_3c = uVar9 & 0x1f;
      if ((local_3c < 0x1b) && ((&DAT_100d5d44)[local_3c] != '\0')) {
        if (((ushort)param_2[local_18 * 4 + 0x3e] == (*local_1c & 0xfeff)) &&
           (*(ushort *)(local_20 + iVar10) == uVar5)) {
          bVar3 = 1;
        }
        else {
          bVar3 = 0;
        }
        bVar8 = bVar8 | bVar3;
      }
      bVar3 = 0;
      if (local_3c == (uVar9 >> 5 & 0x1f)) {
        bVar3 = bVar8;
      }
      local_34 = (uint)(bVar3 & local_11);
      bVar4 = false;
      local_24 = 0;
      do {
        bVar2 = true;
        if (bVar4) break;
        if ((((*(byte *)((int)param_2 + local_24 * 2 + local_18 * 0x10 + 0xf6) & 0xf0) == 0x70) &&
            (uVar1 != 0)) ||
           (((*(byte *)((int)param_2 + local_24 * 2 + local_18 * 0x10 + 0x176) & 0xf0) == 0x70 &&
            ((ushort)*local_2c != 0)))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        local_24 = local_24 + 1;
        bVar2 = bVar4;
      } while (local_24 < 3);
      local_24 = 0;
      local_44 = iVar10;
      local_40 = local_48;
      if (bVar2) {
        local_28 = 0;
        bVar4 = FUN_10059019(param_4,param_5,(char)local_18);
        if (bVar4) {
          local_28 = FUN_100c2e34((int)param_2,4,'\x01');
        }
        local_24 = FUN_100c2e34((int)param_2,4,'\x01');
        FUN_1005a34a(param_2,local_18,local_18 + 5 | 0x410100,local_24,local_28,param_3,
                     (short)param_2[uVar6 * 4 + 0x3f] != 0,
                     *(short *)((int)param_2 + iVar10 + 0xfe) != 0,param_4,param_5);
        FUN_100c2ed2((int)param_2,local_28);
      }
      local_28 = 0;
      uVar9 = *(uint *)(param_1 + local_18 * 4);
      if ((((byte)uVar9 & 0x1f) != 0x18) && (uVar9 = uVar9 & 0x3e0, uVar9 == 0x300)) {
        uVar1 = (ushort)param_2[uVar6 * 4 + 0x3d];
        uVar9 = (uint)uVar1;
        if ((uVar1 == ((ushort)param_2[uVar6 * 4 + 0x5e] & (ushort)local_30)) ||
           (uVar1 == (*local_1c & (ushort)local_30))) {
          uVar9 = FUN_100c2e34((int)param_2,4,'\x01');
          local_28 = (uVar9 & 0x3f) << 10 | 0xb0;
          uVar9 = extraout_EDX;
        }
      }
      if ((short)local_48 != 0) {
        uVar7 = local_28;
        if ((short)local_28 == 0) {
          uVar7 = (uint)(ushort)param_2[uVar6 * 4 + 0x3d];
        }
        FUN_1005a9b6(local_38,uVar9,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) & 0x1f,local_24,(char)local_34 << 3 | 7,uVar7
                     ,(short)param_2[uVar6 * 4 + 0x40],
                     (uint)*(ushort *)((int)param_2 + iVar10 + 0xf6),
                     (uint)(ushort)param_2[uVar6 * 4 + 0x3e],(uint)*(ushort *)(local_20 + iVar10));
        uVar9 = extraout_EDX_00;
      }
      if (((char)local_34 == '\0') && ((short)local_4c != 0)) {
        FUN_1005a9b6(local_38,uVar9,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) >> 5 & 0x1f,local_24,8,
                     (uint)(ushort)*local_2c,(short)param_2[uVar6 * 4 + 0x60],
                     (uint)*(ushort *)((int)param_2 + iVar10 + 0x176),
                     (uint)(ushort)param_2[uVar6 * 4 + 0x5e],(uint)*local_1c);
      }
      if ((short)local_28 != 0) {
        FUN_1005a633(local_90,(int *)param_2,param_3,(ushort)param_2[uVar6 * 4 + 0x3d]);
        FUN_1005a774(local_70,(int *)param_2,param_3,-1,0xffffffff,local_28,0);
        FUN_100c3be1((int *)param_2,param_3,0x36);
      }
      uVar6 = ~(0x1010101 << ((byte)local_18 & 0x1f)) & param_2[0x81];
      param_2[0x81] = uVar6;
      if (((char)uVar6 == '\0') && ((param_2[0x85] & 0x3f00) == 0)) {
        FUN_100c2ed2((int)param_2,param_2[0x85]);
        param_2[0x85] = 0;
      }
      if ((param_2[0x81] & 0xff0000) == 0) {
        FUN_100c2ed2((int)param_2,param_2[0x84]);
        param_2[0x84] = 0;
      }
      if ((param_2[0x81] & 0xff000000) == 0) {
        FUN_100c2ed2((int)param_2,param_2[0x83]);
        param_2[0x83] = 0;
      }
      local_2c = (uint *)FUN_100c2ed2((int)param_2,local_24);
    }
    local_18 = local_18 + 1;
    if (7 < local_18) {
      return CONCAT31((int3)((uint)local_2c >> 8),1);
    }
  } while( true );
}

