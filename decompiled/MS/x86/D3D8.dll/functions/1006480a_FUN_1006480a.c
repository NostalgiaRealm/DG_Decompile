/*
 * FUN_1006480a at 1006480a
 * undefined __thiscall FUN_1006480a(void * this, int param_1, int param_2, float param_3, float param_4, float param_5, byte param_6)
 * Address ranges: 1006480a-10064a00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006480a(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            byte param_6)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float in_XMM3_Da;
  void *local_c;
  
  local_c = *(void **)((int)this + 0xa8);
  cVar1 = *(char *)(*(int *)((int)local_c + 4) + 0x84);
  uVar4 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  uVar10 = uVar4 >> 5;
  iVar2 = (int)(uVar4 & 0x1f) >> 3;
  bVar12 = (*(byte *)((int)this + iVar2 + uVar10 * 4 + 0x160) >> (uVar4 & 7) & 1) != 0;
  iVar7 = *(int *)((int)this + 0x1c);
  if (iVar7 == 0) {
    FUN_10060ebc(local_c,1,*(int *)((int)this + 8));
    iVar7 = *(int *)((int)this + 0x1c);
    bVar12 = (bool)(bVar12 & 1U - ((*(byte *)((int)this + iVar2 + uVar10 * 4 + 0x16c) >> (uVar4 & 7)
                                   & 1) != 0));
    local_c = *(void **)((int)this + 0xa8);
  }
  bVar8 = (param_6 ^ 1) & bVar12;
  if (*(char *)((int)this + 0x150) == '\0') {
    uVar11 = *(uint *)(&DAT_100b06b8 + iVar7 * 4);
  }
  else {
    uVar11 = 1;
  }
  uVar6 = 0;
  if ((&DAT_100b04d4)[iVar7] == '\0') {
    uVar6 = 0x10;
  }
  uVar5 = 0;
  if (cVar1 != '\0') {
    uVar5 = 0x18;
  }
  if (bVar8 == 0) {
    _param_6 = 0;
  }
  else {
    _param_6 = *(undefined4 *)((int)this + 0x11c);
  }
  iVar9 = *(int *)((int)this + 0xf8);
  if (iVar9 == 0) {
    iVar9 = *(int *)((int)this + 0xf4);
  }
  FUN_1006118c(local_c,iVar7,iVar7,param_1,param_2,param_1,param_2,
               *(float *)((int)this + 0x148) * in_XMM3_Da,*(float *)((int)this + 0x14c) * param_3,
               *(float *)((int)this + 0x148) * param_4,*(float *)((int)this + 0x14c) * param_5,
               in_XMM3_Da,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x54),
               *(undefined4 *)(uVar4 * 0x1c + *(int *)((int)this + 0x60)),0,iVar9,
               *(undefined4 *)((int)this + 0xfc),_param_6,0,0,cVar1,
               ((uVar6 | bVar8 | 0xffe00000) << 6 | uVar5 | uVar11 & 7) << 4 |
               *(uint *)(&DAT_100b0560 + iVar7 * 4) & 0xf,1);
  pbVar3 = (byte *)((int)this + iVar2 + uVar10 * 4 + 0x16c);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  pbVar3 = (byte *)((int)this + iVar2 + uVar10 * 4 + 0x154);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  pbVar3 = (byte *)((int)this + iVar2 + uVar10 * 4 + 0x90);
  *pbVar3 = *pbVar3 | '\x01' << (uVar4 & 7);
  pbVar3 = (byte *)((int)this + iVar2 + uVar10 * 4 + 0x160);
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  SetRectEmpty((LPRECT)(*(int *)((int)this + 0x100) + uVar4 * 0x1c + 0xc));
  return;
}

