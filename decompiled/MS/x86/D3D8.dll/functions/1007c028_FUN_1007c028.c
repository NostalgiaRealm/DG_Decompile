/*
 * FUN_1007c028 at 1007c028
 * int __stdcall FUN_1007c028(int param_1, uint param_2)
 * Address ranges: 1007c028-1007c233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007c028(int param_1,uint param_2)

{
  void *this;
  short sVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  ushort in_FPUControlWord;
  uint local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  uVar6 = param_2;
  FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_8 = &local_c;
  local_c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_c = (uint)in_FPUControlWord;
  }
  this = (void *)(param_1 + -0x58e0);
  local_8 = (uint *)FUN_10004a2c(this,uVar6);
  if (-1 < (int)local_8) {
    local_10 = 0;
    iVar2 = *(int *)(*(int *)(param_1 + -0x56d0) + -4 + uVar6 * 4);
    local_14 = *(uint *)(iVar2 + 0x9334);
    uVar6 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_14 == 0) {
      local_10 = 0;
      do {
        local_10 = local_10 + 0x20;
        if (0xad < local_10) goto LAB_1007c22c;
        local_14 = *(uint *)(iVar2 + 0x9334 + (local_10 >> 5) * 4);
        uVar6 = 0;
        if (local_14 != 0) {
          for (; (local_14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      } while (local_14 == 0);
    }
LAB_1007c0ed:
    pbVar3 = (byte *)((int)&local_14 + ((int)uVar6 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
    iVar5 = uVar6 + local_10;
    while (uVar4 = local_10, iVar5 != -1) {
      FUN_1007b154(this,iVar5,*(float *)(iVar2 + 8 + iVar5 * 4));
      uVar6 = 0;
      bVar7 = local_14 != 0;
      if (bVar7) {
        for (; (local_14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      while( true ) {
        if (bVar7) goto LAB_1007c0ed;
        local_10 = uVar4 + 0x20;
        if (0xad < local_10) break;
        local_14 = ((uint *)(iVar2 + 0x9334))[local_10 >> 5];
        uVar6 = 0;
        bVar7 = local_14 != 0;
        uVar4 = local_10;
        if (bVar7) {
          for (; (local_14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
LAB_1007c22c:
      iVar5 = -1;
    }
    iVar5 = 0;
    sVar1 = *(short *)(iVar2 + 0x8a54);
    while (sVar1 != -1) {
      uVar6 = (uint)*(ushort *)(iVar2 + 0x8a54 + iVar5 * 4);
      FUN_1007cde1(this,uVar6,(undefined4 *)(uVar6 * 0x10 + iVar2 + 0x4a54),
                   *(ushort *)(iVar2 + 0x8a56 + iVar5 * 4) - uVar6);
      iVar5 = iVar5 + 1;
      sVar1 = *(short *)(iVar2 + 0x8a54 + iVar5 * 4);
    }
    iVar5 = 0;
    sVar1 = *(short *)(iVar2 + 0x9258);
    while (sVar1 != -1) {
      uVar6 = (uint)*(ushort *)(iVar2 + 0x9258 + iVar5 * 4);
      FUN_1007cd81(this,uVar6,(undefined4 *)(uVar6 * 0x10 + iVar2 + 0x49d4),
                   *(ushort *)(iVar2 + 0x925a + iVar5 * 4) - uVar6);
      iVar5 = iVar5 + 1;
      sVar1 = *(short *)(iVar2 + 0x9258 + iVar5 * 4);
    }
    if (*(char *)(iVar2 + 0x93a1) != '\0') {
      FUN_1007ced5(this,*(undefined4 **)(iVar2 + 0x49b0));
    }
    if (*(char *)(iVar2 + 0x93a0) != '\0') {
      FUN_1007d0ce(this,*(uint *)(iVar2 + 0x49ac));
    }
  }
  FUN_10003881((char *)((int)&param_2 + 3));
  return (int)local_8;
}

