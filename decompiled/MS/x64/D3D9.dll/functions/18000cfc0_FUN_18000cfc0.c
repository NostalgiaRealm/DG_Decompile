/*
 * FUN_18000cfc0 at 18000cfc0
 * uint __fastcall FUN_18000cfc0(uint * param_1, longlong * param_2, longlong param_3, ulonglong param_4, ulonglong param_5, int param_6, char param_7)
 * Address ranges: 18000cfc0-18000d1a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000cfc0(uint *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5,int param_6,char param_7)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  int iStackX_1c;
  uint local_res20;
  int iStackX_24;
  
  uVar4 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                        *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar10 = (uint)uVar4;
  if ((uVar4 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar10 & 7);
  }
  uVar5 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),*(byte *)(param_3 + 8),
                        *(char *)(param_3 + 0xb),*(byte *)(param_3 + 0xe),'\0','\0');
  local_res20 = (uint)uVar5;
  if (-1 < (int)local_res20) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)local_res20 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (local_res20 & 7);
  }
  uVar3 = local_res20;
  if ((uVar4 & 0x80000000) == 0) {
    uVar3 = uVar10;
  }
  if ((param_7 == '\0') || (*(short *)(param_3 + 0x11) != *(short *)(param_3 + 5))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iStackX_1c = (int)(uVar4 >> 0x20);
  if (((int)uVar3 < 0) ||
     (((cVar7 = *(char *)(param_3 + 0x10), cVar7 != '\0' && (cVar7 != '\x0f')) ||
      (*(char *)(param_3 + 0x13) != -0x3d)))) {
    if (bVar2) goto LAB_18000d0da;
    uVar8 = *(ushort *)(param_3 + 0x11);
LAB_18000d0e4:
    if ((*(char *)(param_3 + 0x13) == -0x3d) &&
       ((cVar7 = *(char *)(param_3 + 0x10), cVar7 == '\0' || (cVar7 == '\x0f')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar9 = 0xffff;
    if (bVar2) {
      uVar9 = uVar8;
    }
    uVar6 = FUN_18000ca0c(param_1,param_2,uVar9);
    uVar3 = (uint)uVar6;
    FUN_1800019cc(param_2,0x290200100100,uVar3,uVar10,iStackX_1c,0);
    cVar7 = *(char *)(param_3 + 0x10);
  }
  else {
    if (bVar2) {
LAB_18000d0da:
      uVar8 = 0xffff;
      goto LAB_18000d0e4;
    }
    iStackX_24 = iStackX_1c;
    if ((uVar4 & 0x80000000) != 0) goto LAB_18000d150;
  }
  iStackX_24 = (int)(uVar5 >> 0x20);
  uVar5 = uVar4;
  uVar10 = local_res20;
LAB_18000d150:
  if (cVar7 == '\x01') {
    param_4 = param_5;
  }
  FUN_1800019cc(param_2,param_4,uVar3,uVar10,iStackX_24,param_6);
  if ((uVar10 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar10 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar10 & 7));
  }
  if ((uVar5 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)(uint)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << ((uint)uVar5 & 7));
  }
  return uVar3;
}

