/*
 * FUN_1001dbe9 at 1001dbe9
 * undefined __thiscall FUN_1001dbe9(void * this, int * param_1, byte param_2, byte param_3)
 * Address ranges: 1001dbe9-1001df2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001dbe9(void *this,int *param_1,byte param_2,byte param_3)

{
  RECT *lprc;
  byte bVar1;
  int iVar2;
  BOOL BVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_64;
  uint local_58;
  RECT local_48;
  tagRECT local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18 [5];
  
  bVar1 = *(byte *)(param_1 + 0x1f);
  lprc = (RECT *)(param_1 + 0xd);
  BVar3 = IsRectEmpty(lprc);
  if (BVar3 != 0) {
    return;
  }
  FUN_1000c6f4(*(int *)((int)this + 0x138));
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    if (*(char *)((int)param_1 + 0x7e) != '\0') {
      if ((char)param_1[0x20] == '\0') {
        FUN_1001d8ab((int)param_1,0,0,0,0,bVar1);
      }
      else {
        FUN_1001dac2(this,(int)param_1,bVar1,lprc->left,param_1[0xe],param_1[0xf],param_1[0x10]);
      }
      FUN_1001d15e(this,(uint)param_1,param_2,bVar1,lprc->left,param_1[0xe],param_1[0xf],
                   param_1[0x10],param_3);
      *(byte *)((int)param_1 + 0x4a) = *(byte *)((int)param_1 + 0x4a) | 2;
    }
  }
  else {
    local_58 = 0;
    uVar8 = param_1[0x21];
    local_64 = uVar8;
    do {
      uVar8 = ~uVar8;
      iVar6 = 0;
      if (local_64 != 0) {
        for (; (local_64 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      if (local_64 != 0) goto LAB_1001de38;
      local_58 = local_58 + 0x20;
      if (local_58 == 0x100) break;
      local_64 = param_1[(local_58 >> 5) + 0x21];
      uVar8 = -(uint)(0x100 - local_58 < 0x20) | local_64;
    } while (local_58 < 0x100);
  }
LAB_1001deb0:
  FUN_10014f27((int)param_1);
  if (param_1 == (int *)((int)this + 0x13c)) {
    (**(code **)(*(int *)this + 0x4c))(0);
  }
  if (((*(char *)((int)this + 0x124) != '\0') ||
      (**(char **)(*(int *)((int)this + 0x138) + 0x32f0) != '\0')) &&
     (FUN_1001e88e(this,1,0), *(char *)(*(int *)(*(int *)((int)this + 0x138) + 0x32f0) + 3) != '\0')
     ) {
    DebugBreak();
  }
  if (*(char *)((int)this + 0x125) != '\0') {
    FUN_1001e88e(this,2,0);
  }
  FUN_1000c7aa(*(int *)((int)this + 0x138));
  return;
LAB_1001de38:
  while( true ) {
    uVar5 = -1 << ((char)iVar6 + 1U & 0x1f);
    local_64 = local_64 & uVar5;
    uVar8 = uVar8 & uVar5;
    iVar6 = iVar6 + local_58;
    if (iVar6 == -1) break;
    do {
      iVar2 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      if (uVar8 != 0) {
        iVar7 = local_58 + iVar2;
        uVar5 = -1 << ((char)iVar2 + 1U & 0x1f);
        uVar8 = uVar8 & uVar5;
        local_64 = local_64 & uVar5;
        if (iVar7 != -1) goto LAB_1001dce9;
        break;
      }
      local_58 = local_58 + 0x20;
      uVar8 = 0;
      if (local_58 == 0x100) break;
      local_64 = param_1[(local_58 >> 5) + 0x21];
      uVar8 = ~(-(uint)(0x100 - local_58 < 0x20) | local_64);
    } while (local_58 < 0x100);
    iVar7 = iVar6;
LAB_1001dce9:
    FUN_1001d8ab((int)param_1,iVar6 * 0x8000,iVar7 << 0xf,param_1[0x14],param_1[0x16],
                 *(byte *)(param_1 + 0x1f));
    puVar4 = FUN_10014b9d(iVar6 * 0x8000,iVar7 << 0xf,local_18,param_1[8],param_1[9],param_1[0x16],
                          *(byte *)(param_1 + 0x1f));
    local_48.left = lprc->left;
    local_28 = *puVar4;
    local_48.top = puVar4[1];
    local_20 = puVar4[2];
    local_1c = puVar4[3];
    local_48.right = param_1[0xf];
    local_48.bottom = (local_20 != 0) + local_1c;
    local_24 = local_48.top;
    IntersectRect(&local_38,&local_48,lprc);
    FUN_1001d15e(this,(uint)param_1,param_2,bVar1,local_38.left,local_38.top,local_38.right,
                 local_38.bottom,param_3);
    *(byte *)((int)param_1 + 0x4a) = *(byte *)((int)param_1 + 0x4a) | 2;
    while( true ) {
      if (0xff < local_58) goto LAB_1001deb0;
      iVar6 = 0;
      if (local_64 != 0) {
        for (; (local_64 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      if (local_64 != 0) break;
      local_58 = local_58 + 0x20;
      if (local_58 == 0x100) goto LAB_1001deb0;
      local_64 = param_1[(local_58 >> 5) + 0x21];
      uVar8 = ~(-(uint)(0x100 - local_58 < 0x20) | local_64);
    }
  }
  goto LAB_1001deb0;
}

