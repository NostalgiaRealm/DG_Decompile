/*
 * FUN_140004550 at 140004550
 * undefined __cdecl FUN_140004550(longlong param_1)
 * Address ranges: 140004550-140004927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140004550(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_860 [4];
  undefined4 local_85c;
  undefined8 local_858;
  undefined4 local_850;
  ulonglong local_840 [128];
  char local_440 [1024];
  
  iVar3 = FUN_14000ffb8(param_1,0x3f6);
  if (iVar3 == -1) {
    local_840[1] = 0;
    local_840[0] = 0;
    local_840[3] = 0;
    local_840[2] = 0;
    local_840[5] = 0;
    local_840[4] = 0;
    local_840[7] = 0;
    local_840[6] = 0;
    local_840[9] = 0;
    local_840[8] = 0;
    local_840[0xb] = 0;
    local_840[10] = 0;
    local_840[0xd] = 0;
    local_840[0xc] = 0;
    local_840[0xf] = 0;
    local_840[0xe] = 0;
    local_840[0x11] = 0;
    local_840[0x10] = 0;
    local_840[0x13] = 0;
    local_840[0x12] = 0;
    local_840[0x15] = 0;
    local_840[0x14] = 0;
    local_840[0x17] = 0;
    local_840[0x16] = 0;
    local_840[0x19] = 0;
    local_840[0x18] = 0;
    local_840[0x1b] = 0;
    local_840[0x1a] = 0;
    local_840[0x1d] = 0;
    local_840[0x1c] = 0;
    local_840[0x1f] = 0;
    local_840[0x1e] = 0;
    FUN_14000fca8(param_1,0x3f6,(LPARAM)local_840,0x100);
    local_85c = 0xffffffff;
    iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" %d %c",&local_85c,auStack_860,in_x4,in_x5,
                          in_x6,in_x7);
    if ((((iVar3 == 1) ||
         (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0x%x %c",&local_85c,auStack_860,in_x4,
                                in_x5,in_x6,in_x7), iVar3 == 1)) ||
        (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0X%x %c",&local_85c,auStack_860,in_x4,
                               in_x5,in_x6,in_x7), iVar3 == 1)) || ((char)local_840[0] == '\0')) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xfb) = local_85c;
    }
  }
  local_85c = 0xffffffff;
  FUN_14000fca8(param_1,0x416,(LPARAM)local_840,0x100);
  iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0x%x %c",&local_85c,auStack_860,in_x4,in_x5,
                        in_x6,in_x7);
  if (((iVar3 == 1) ||
      (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0X%x %c",&local_85c,auStack_860,in_x4,in_x5
                             ,in_x6,in_x7), iVar3 == 1)) ||
     ((iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" %d %c",&local_85c,auStack_860,in_x4,in_x5,
                             in_x6,in_x7), iVar3 == 1 || ((char)local_840[0] == '\0')))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xff) = local_85c;
  }
  local_85c = 0xffffffff;
  FUN_14000fca8(param_1,0x417,(LPARAM)local_840,0x100);
  iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0x%x %c",&local_85c,auStack_860,in_x4,in_x5,
                        in_x6,in_x7);
  if (((iVar3 == 1) ||
      (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0X%x %c",&local_85c,auStack_860,in_x4,in_x5
                             ,in_x6,in_x7), iVar3 == 1)) ||
     ((iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" %d %c",&local_85c,auStack_860,in_x4,in_x5,
                             in_x6,in_x7), iVar3 == 1 || ((char)local_840[0] == '\0')))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x103) = local_85c;
  }
  local_85c = 0xffffffff;
  FUN_14000fca8(param_1,0x418,(LPARAM)local_840,0x100);
  iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0x%x %c",&local_85c,auStack_860,in_x4,in_x5,
                        in_x6,in_x7);
  if ((((iVar3 == 1) ||
       (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" 0X%x %c",&local_85c,auStack_860,in_x4,
                              in_x5,in_x6,in_x7), iVar3 == 1)) ||
      (iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" %d %c",&local_85c,auStack_860,in_x4,in_x5,
                             in_x6,in_x7), iVar3 == 1)) || ((char)local_840[0] == '\0')) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x107) = local_85c;
  }
  uVar6 = 0x400;
  FUN_14000fca8(param_1,0x415,(LPARAM)local_440,0x400);
  pcVar4 = local_440;
  uVar10 = 0;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    if (*pcVar4 == '\0') break;
    local_840[0] = local_840[0] & 0xffffffffffffff00;
    uVar7 = 0;
    do {
      cVar2 = *pcVar4;
      pcVar5 = pcVar4;
      if (cVar2 == ',') break;
      *(char *)((longlong)local_840 + uVar7) = cVar2;
      pcVar4 = pcVar4 + 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      cVar2 = '\0';
      pcVar5 = pcVar4;
    } while (*pcVar4 != '\0');
    *(undefined1 *)((longlong)local_840 + uVar7) = 0;
    pcVar4 = pcVar5;
    if (cVar2 == ',') {
      pcVar4 = pcVar5 + 1;
    }
    uVar7 = FUN_140002d10(pcVar5,(byte *)local_840,&local_858,uVar6,in_x4,in_x5,in_x6,in_x7);
    if ((uVar7 & 1) != 0) {
      uVar9 = (ulonglong)((int)uVar8 + 1);
      lVar1 = *(longlong *)(param_1 + 0x88) + uVar8 * 0xc;
      *(undefined8 *)(lVar1 + 0x10b) = local_858;
      *(undefined4 *)(lVar1 + 0x113) = local_850;
    }
    uVar10 = uVar10 + 1;
    uVar8 = uVar9;
  } while (uVar10 < 0x10);
  for (; (uint)uVar9 < 0x10; uVar9 = (ulonglong)((uint)uVar9 + 1)) {
    lVar1 = *(longlong *)(param_1 + 0x88) + uVar9 * 0xc;
    *(undefined8 *)(lVar1 + 0x10b) = 0;
    *(undefined4 *)(lVar1 + 0x113) = 0;
  }
  iVar3 = FUN_14000ffb8(param_1,0x41c);
  if (iVar3 == -1) {
    local_840[1] = 0;
    local_840[0] = 0;
    local_840[3] = 0;
    local_840[2] = 0;
    local_840[5] = 0;
    local_840[4] = 0;
    local_840[7] = 0;
    local_840[6] = 0;
    local_840[9] = 0;
    local_840[8] = 0;
    local_840[0xb] = 0;
    local_840[10] = 0;
    local_840[0xd] = 0;
    local_840[0xc] = 0;
    local_840[0xf] = 0;
    local_840[0xe] = 0;
    local_840[0x11] = 0;
    local_840[0x10] = 0;
    local_840[0x13] = 0;
    local_840[0x12] = 0;
    local_840[0x15] = 0;
    local_840[0x14] = 0;
    local_840[0x17] = 0;
    local_840[0x16] = 0;
    local_840[0x19] = 0;
    local_840[0x18] = 0;
    local_840[0x1b] = 0;
    local_840[0x1a] = 0;
    local_840[0x1d] = 0;
    local_840[0x1c] = 0;
    local_840[0x1f] = 0;
    local_840[0x1e] = 0;
    FUN_14000fca8(param_1,0x41c,(LPARAM)local_840,0x100);
    local_85c = 0;
    iVar3 = FUN_1400248b0((byte *)local_840,(byte *)" %d %c",&local_85c,auStack_860,in_x4,in_x5,
                          in_x6,in_x7);
    if (iVar3 == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x1d3) = local_85c;
    }
  }
  return;
}

