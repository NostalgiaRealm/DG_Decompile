/*
 * FUN_1004e1ea at 1004e1ea
 * undefined4 __thiscall FUN_1004e1ea(void * this, int param_1, uint * param_2, int * param_3, uint param_4, uint param_5)
 * Address ranges: 1004e1ea-1004e648
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1004e1ea(void *this,int param_1,uint *param_2,int *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  byte bVar9;
  uint extraout_EDX;
  int iVar10;
  uint local_90 [8];
  uint local_70 [9];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  void *local_3c;
  uint local_38;
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
  local_3c = this;
  do {
    uVar8 = local_18;
    iVar10 = local_18 * 0x10;
    uVar1 = (ushort)param_2[local_18 * 4 + 0x39];
    local_48 = (uint)uVar1;
    local_2c = param_2 + local_18 * 4 + 0x59;
    if ((uVar1 != 0) || ((ushort)*local_2c != 0)) {
      local_4c = (uint)(ushort)*local_2c;
      if ((uVar1 != ((ushort)*local_2c & 0xfeff)) ||
         (local_11 = 1,
         *(ushort *)((int)param_2 + iVar10 + 0xe6) !=
         (*(ushort *)((int)param_2 + iVar10 + 0x166) & 0xfeff))) {
        local_11 = 0;
      }
      local_34 = (ushort)param_2[local_18 * 4 + 0x5a] & 0xfffffeff;
      local_20 = (int)param_2 + 0xea;
      local_1c = (ushort *)(iVar10 + 0x16a + (int)param_2);
      if (((ushort)param_2[local_18 * 4 + 0x3a] == local_34) &&
         (*(ushort *)((int)param_2 + iVar10 + 0xea) == (*local_1c & 0xfeff))) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      uVar7 = *(uint *)(param_1 + local_18 * 4);
      uVar5 = uVar7 & 0x1f;
      if ((uVar5 < 0x1b) && ((&DAT_100b26a4)[uVar5] != '\0')) {
        if (((uint)(ushort)param_2[local_18 * 4 + 0x3a] == (*local_1c & 0xfffffeff)) &&
           (*(ushort *)(local_20 + iVar10) == local_34)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        bVar9 = bVar9 | bVar4;
      }
      bVar4 = 0;
      if (uVar5 == (uVar7 >> 5 & 0x1f)) {
        bVar4 = bVar9;
      }
      local_38 = (uint)(bVar4 & local_11);
      bVar2 = false;
      local_24 = 0;
      do {
        bVar3 = true;
        if (bVar2) break;
        if ((((*(byte *)((int)param_2 + local_24 * 2 + local_18 * 0x10 + 0xe6) & 0xf0) == 0x70) &&
            (uVar1 != 0)) ||
           (((*(byte *)((int)param_2 + local_24 * 2 + local_18 * 0x10 + 0x166) & 0xf0) == 0x70 &&
            ((ushort)*local_2c != 0)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        local_24 = local_24 + 1;
        bVar3 = bVar2;
      } while (local_24 < 3);
      local_24 = 0;
      local_40 = local_48;
      if (bVar3) {
        local_28 = 0;
        local_44 = iVar10;
        uVar6 = FUN_1004a0d6(param_4,param_5,(char)local_18);
        if ((char)uVar6 != '\0') {
          local_28 = FUN_100a05ed((int)param_2,4,'\x01');
        }
        local_24 = FUN_100a05ed((int)param_2,4,'\x01');
        FUN_1004b3e0(param_2,local_18,local_18 + 5 | 0x410100,local_24,local_28,param_3,
                     (short)param_2[uVar8 * 4 + 0x3b] != 0,
                     *(short *)((int)param_2 + iVar10 + 0xee) != 0,param_4,param_5);
        FUN_100a068b((int)param_2,local_28);
      }
      local_28 = 0;
      local_44 = *(uint *)(param_1 + local_18 * 4);
      if ((((byte)local_44 & 0x1f) != 0x18) && ((local_44 & 0x3e0) == 0x300)) {
        uVar1 = (ushort)param_2[uVar8 * 4 + 0x39];
        local_34 = (uint)uVar1;
        if ((uVar1 == ((ushort)param_2[uVar8 * 4 + 0x5a] & (ushort)local_30)) ||
           (uVar1 == (*local_1c & (ushort)local_30))) {
          uVar7 = FUN_100a05ed((int)param_2,4,'\x01');
          local_28 = (uVar7 & 0x3f) << 10 | 0xb0;
        }
      }
      uVar7 = local_28;
      if ((short)local_48 != 0) {
        if ((short)local_28 == 0) {
          uVar7 = (uint)(ushort)param_2[uVar8 * 4 + 0x39];
        }
        FUN_1004ba28(local_3c,uVar7,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) & 0x1f,local_24,(char)local_38 << 3 | 7,uVar7
                     ,(short)param_2[uVar8 * 4 + 0x3c],
                     (uint)*(ushort *)((int)param_2 + iVar10 + 0xe6),
                     (uint)(ushort)param_2[uVar8 * 4 + 0x3a],(uint)*(ushort *)(local_20 + iVar10));
        uVar7 = extraout_EDX;
      }
      if (((char)local_38 == '\0') && ((short)local_4c != 0)) {
        FUN_1004ba28(local_3c,uVar7,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) >> 5 & 0x1f,local_24,8,
                     (uint)(ushort)*local_2c,(short)param_2[uVar8 * 4 + 0x5c],
                     (uint)*(ushort *)((int)param_2 + iVar10 + 0x166),
                     (uint)(ushort)param_2[uVar8 * 4 + 0x5a],(uint)*local_1c);
      }
      if ((short)local_28 != 0) {
        FUN_1004b6c1(local_90,(int *)param_2,param_3,(ushort)param_2[uVar8 * 4 + 0x39]);
        FUN_1004b802(local_70,(int *)param_2,param_3,extraout_ECX,0xffffffff,local_28,0);
        FUN_100a138c((int *)param_2,param_3,0x36);
      }
      uVar8 = ~(0x1010101 << ((byte)local_18 & 0x1f)) & param_2[0x7d];
      param_2[0x7d] = uVar8;
      if (((char)uVar8 == '\0') && ((param_2[0x81] & 0x3f00) == 0)) {
        FUN_100a068b((int)param_2,param_2[0x81]);
        param_2[0x81] = 0;
      }
      if ((param_2[0x7d] & 0xff0000) == 0) {
        FUN_100a068b((int)param_2,param_2[0x80]);
        param_2[0x80] = 0;
      }
      if ((param_2[0x7d] & 0xff000000) == 0) {
        FUN_100a068b((int)param_2,param_2[0x7f]);
        param_2[0x7f] = 0;
      }
      local_2c = (uint *)FUN_100a068b((int)param_2,local_24);
    }
    local_18 = local_18 + 1;
    if (7 < local_18) {
      return CONCAT31((int3)((uint)local_2c >> 8),1);
    }
  } while( true );
}

