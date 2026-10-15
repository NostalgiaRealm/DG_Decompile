/*
 * FUN_10034fa8 at 10034fa8
 * undefined4 __thiscall FUN_10034fa8(void * this, int param_1, uint * param_2, int * param_3, uint param_4, uint param_5)
 * Address ranges: 10034fa8-100353d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10034fa8(void *this,int param_1,uint *param_2,int *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  byte bVar7;
  uint uVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar9;
  uint local_90 [8];
  uint local_70 [9];
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  ushort *local_1c;
  uint local_18;
  byte local_11;
  
  local_18 = 0;
  local_34 = 0xf0;
  local_2c = this;
  do {
    uVar5 = local_18;
    iVar9 = local_18 * 0x10;
    uVar1 = (ushort)param_2[local_18 * 4 + 0x39];
    local_48 = (uint)uVar1;
    local_28 = param_2 + local_18 * 4 + 0x59;
    if ((uVar1 != 0) || ((ushort)*local_28 != 0)) {
      local_4c = (uint)(ushort)*local_28;
      if ((uVar1 != ((ushort)*local_28 & 0xfeff)) ||
         (local_11 = 1,
         *(ushort *)((int)param_2 + iVar9 + 0xe6) !=
         (*(ushort *)((int)param_2 + iVar9 + 0x166) & 0xfeff))) {
        local_11 = 0;
      }
      local_30 = (ushort)param_2[local_18 * 4 + 0x5a] & 0xfffffeff;
      local_20 = (int)param_2 + 0xea;
      local_1c = (ushort *)(iVar9 + 0x16a + (int)param_2);
      if (((ushort)param_2[local_18 * 4 + 0x3a] == local_30) &&
         (*(ushort *)((int)param_2 + iVar9 + 0xea) == (*local_1c & 0xfeff))) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      uVar8 = *(uint *)(param_1 + local_18 * 4);
      local_3c = uVar8 & 0x1f;
      if ((local_3c < 0x1b) && ((&DAT_1005efcc)[local_3c] != '\0')) {
        if (((uint)(ushort)param_2[local_18 * 4 + 0x3a] == (*local_1c & 0xfffffeff)) &&
           (*(ushort *)(local_20 + iVar9) == local_30)) {
          bVar4 = 1;
        }
        else {
          bVar4 = 0;
        }
        bVar7 = bVar7 | bVar4;
      }
      bVar4 = 0;
      if (local_3c == (uVar8 >> 5 & 0x1f)) {
        bVar4 = bVar7;
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
            ((ushort)*local_28 != 0)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        local_24 = local_24 + 1;
        bVar3 = bVar2;
      } while (local_24 < 3);
      local_24 = 0;
      local_44 = iVar9;
      local_40 = local_48;
      if (bVar3) {
        local_24 = FUN_10056ee5((int)param_2,4,'\x01');
        FUN_1003269f(param_2,local_18,local_18 + 5 | 0x410100,local_24,local_24,param_3,
                     (short)param_2[uVar5 * 4 + 0x3b] != 0,
                     *(short *)((int)param_2 + iVar9 + 0xee) != 0,param_4,param_5);
      }
      local_30 = 0;
      uVar8 = *(uint *)(param_1 + local_18 * 4);
      if ((((byte)uVar8 & 0x1f) != 0x18) && (uVar8 = uVar8 & 0x3e0, uVar8 == 0x300)) {
        uVar1 = (ushort)param_2[uVar5 * 4 + 0x39];
        uVar8 = (uint)uVar1;
        if ((uVar1 == ((ushort)param_2[uVar5 * 4 + 0x5a] & (ushort)local_34)) ||
           (uVar1 == (*local_1c & (ushort)local_34))) {
          uVar8 = FUN_10056ee5((int)param_2,4,'\x01');
          local_30 = (uVar8 & 0x3f) << 10 | 0xb0;
          uVar8 = extraout_EDX;
        }
      }
      if ((short)local_48 != 0) {
        uVar6 = local_30;
        if ((short)local_30 == 0) {
          uVar6 = (uint)(ushort)param_2[uVar5 * 4 + 0x39];
        }
        FUN_10032c3c(local_2c,uVar8,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) & 0x1f,local_24,(char)local_38 << 3 | 7,uVar6
                     ,(short)param_2[uVar5 * 4 + 0x3c],
                     (uint)*(ushort *)((int)param_2 + iVar9 + 0xe6),
                     (uint)(ushort)param_2[uVar5 * 4 + 0x3a],(uint)*(ushort *)(local_20 + iVar9));
        uVar8 = extraout_EDX_00;
      }
      if (((char)local_38 == '\0') && ((short)local_4c != 0)) {
        FUN_10032c3c(local_2c,uVar8,(int *)param_2,param_3,local_18,
                     *(uint *)(param_1 + local_18 * 4) >> 5 & 0x1f,local_24,8,
                     (uint)(ushort)*local_28,(short)param_2[uVar5 * 4 + 0x5c],
                     (uint)*(ushort *)((int)param_2 + iVar9 + 0x166),
                     (uint)(ushort)param_2[uVar5 * 4 + 0x5a],(uint)*local_1c);
      }
      if ((short)local_30 != 0) {
        FUN_1003292f(local_90,(int *)param_2,param_3,(ushort)param_2[uVar5 * 4 + 0x39]);
        FUN_10032a15(local_70,(int *)param_2,param_3,extraout_ECX,0xffffffff,local_30,0);
        FUN_10057c8a((int *)param_2,param_3,0x36);
      }
      uVar5 = ~(0x1010101 << ((byte)local_18 & 0x1f)) & param_2[0x7d];
      param_2[0x7d] = uVar5;
      if (((char)uVar5 == '\0') && ((param_2[0x81] & 0x3f00) == 0)) {
        FUN_10056fd9((int)param_2,param_2[0x81]);
        param_2[0x81] = 0;
      }
      if ((param_2[0x7d] & 0xff0000) == 0) {
        FUN_10056fd9((int)param_2,param_2[0x80]);
        param_2[0x80] = 0;
      }
      if ((param_2[0x7d] & 0xff000000) == 0) {
        FUN_10056fd9((int)param_2,param_2[0x7f]);
        param_2[0x7f] = 0;
      }
      local_28 = (uint *)FUN_10056fd9((int)param_2,local_24);
    }
    local_18 = local_18 + 1;
    if (7 < local_18) {
      return CONCAT31((int3)((uint)local_28 >> 8),1);
    }
  } while( true );
}

