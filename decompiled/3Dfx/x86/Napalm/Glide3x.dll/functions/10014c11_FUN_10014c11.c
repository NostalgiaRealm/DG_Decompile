/*
 * FUN_10014c11 at 10014c11
 * undefined __thiscall FUN_10014c11(void * this, int * param_1, byte param_2, uint param_3)
 * Address ranges: 10014c11-10014f91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014c11(void *this,int *param_1,byte param_2,uint param_3)

{
  RECT *lprc;
  byte bVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_6c;
  uint local_60;
  RECT local_50;
  tagRECT local_40;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)(param_1 + 0x1f);
  lprc = (RECT *)(param_1 + 0xd);
  BVar3 = IsRectEmpty(lprc);
  if (BVar3 == 0) {
    if (*(char *)((int)param_1 + 0x81) != '\0') {
      uVar8 = param_1[0x21];
      local_60 = 0;
      local_6c = uVar8;
LAB_10014c64:
      iVar6 = 0;
      if (local_6c != 0) {
        for (; (local_6c >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      if (local_6c != 0) {
        uVar4 = -1 << ((char)iVar6 + 1U & 0x1f);
        uVar8 = ~uVar8 & uVar4;
        local_6c = local_6c & uVar4;
        while (iVar6 = iVar6 + local_60, iVar6 != -1) {
          do {
            iVar2 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
              }
            }
            if (uVar8 != 0) {
              iVar7 = local_60 + iVar2;
              uVar4 = -1 << ((char)iVar2 + 1U & 0x1f);
              local_6c = local_6c & uVar4;
              uVar8 = uVar8 & uVar4;
              if (iVar7 != -1) goto LAB_10014d19;
              break;
            }
            local_60 = local_60 + 0x20;
            uVar8 = 0;
            if (local_60 == 0x100) break;
            local_6c = param_1[(local_60 >> 5) + 0x21];
            uVar8 = ~(-(uint)(0x100 - local_60 < 0x20) | local_6c);
          } while (local_60 < 0x100);
          iVar7 = iVar6;
LAB_10014d19:
          puVar5 = FUN_100161ed(iVar6 * 0x8000,iVar7 << 0xf,&local_20,param_1[8],param_1[9],
                                param_1[0x16],*(byte *)(param_1 + 0x1f));
          local_50.left = lprc->left;
          local_30 = *puVar5;
          local_50.top = puVar5[1];
          local_28 = puVar5[2];
          local_24 = puVar5[3];
          local_50.right = param_1[0xf];
          local_50.bottom = (local_28 != 0) + local_24;
          local_2c = local_50.top;
          IntersectRect(&local_40,&local_50,lprc);
          FUN_100147be(this,param_1,iVar6 * 0x8000,iVar7 << 0xf,param_1[0x14],param_1[0x16],
                       *(byte *)(param_1 + 0x1f));
          FUN_10013b33(this,(uint)param_1,param_2,bVar1,local_40.left,local_40.top,local_40.right,
                       local_40.bottom,param_3);
          *(byte *)((int)param_1 + 0x4a) = *(byte *)((int)param_1 + 0x4a) | 2;
          while( true ) {
            if (0xff < local_60) goto LAB_10014f1e;
            iVar6 = 0;
            if (local_6c != 0) {
              for (; (local_6c >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
              }
            }
            if (local_6c != 0) break;
            local_60 = local_60 + 0x20;
            if (local_60 == 0x100) goto LAB_10014f1e;
            local_6c = param_1[(local_60 >> 5) + 0x21];
            uVar8 = ~(-(uint)(0x100 - local_60 < 0x20) | local_6c);
          }
          uVar4 = -1 << ((char)iVar6 + 1U & 0x1f);
          uVar8 = uVar8 & uVar4;
          local_6c = local_6c & uVar4;
        }
      }
      else {
        local_60 = local_60 + 0x20;
        if (local_60 != 0x100) goto code_r0x10014c78;
      }
      goto LAB_10014f1e;
    }
    if (*(char *)((int)param_1 + 0x7e) != '\0') {
      if ((char)param_1[0x20] == '\0') {
        FUN_100147be(this,param_1,0,0,0,0,bVar1);
      }
      else {
        local_10 = param_1[0x10];
        local_14 = param_1[0xf];
        local_1c = param_1[0xe];
        local_20 = lprc->left;
        param_1[0x11] = param_1[0x11] + ((uint)(local_10 - local_1c) >> 4);
        local_18 = 0;
        local_c = 1;
        FUN_10014650(this,(int)param_1,&local_20,bVar1);
      }
      FUN_10013b33(this,(uint)param_1,param_2,bVar1,param_1[0xd],param_1[0xe],param_1[0xf],
                   param_1[0x10],param_3);
      *(byte *)((int)param_1 + 0x4a) = *(byte *)((int)param_1 + 0x4a) | 2;
    }
LAB_10014f1e:
    FUN_100165b8((int)param_1);
    if (param_1 == (int *)((int)this + 0x140)) {
      (**(code **)(*(int *)this + 0x4c))(0);
    }
    if (((*(char *)((int)this + 0x124) != '\0') ||
        (**(char **)(*(int *)((int)this + 0x138) + 0x3670) != '\0')) &&
       (FUN_1001599d(this,1,0),
       *(char *)(*(int *)(*(int *)((int)this + 0x138) + 0x3670) + 3) != '\0')) {
      DebugBreak();
    }
    if (*(char *)((int)this + 0x125) != '\0') {
      FUN_1001599d(this,2,0);
    }
  }
  return;
code_r0x10014c78:
  local_6c = param_1[(local_60 >> 5) + 0x21];
  uVar8 = -(uint)(0x100 - local_60 < 0x20) | local_6c;
  if (0xff < local_60) goto LAB_10014f1e;
  goto LAB_10014c64;
}

