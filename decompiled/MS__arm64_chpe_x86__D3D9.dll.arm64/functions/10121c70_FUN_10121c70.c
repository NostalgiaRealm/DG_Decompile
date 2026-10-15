/*
 * FUN_10121c70 at 10121c70
 * undefined FUN_10121c70(void)
 * Address ranges: 10121c70-10121e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10121c70(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_50;
  uint local_4c [3];
  
  iVar3 = FUN_10122f60(*param_1);
  if (iVar3 == 0x51 || (iVar3 - 0x40U & 0xffffffee) != 0) {
    if (iVar3 == 0x51) {
      if ((param_3 & (param_5 ^ 0xffffffff)) != 0) {
        uStack_7c = 6;
        local_64 = *(undefined4 *)(param_4 + 0x10);
        local_68 = *(undefined4 *)(param_4 + 0xc);
        local_6c = *(undefined4 *)(param_4 + 8);
        local_70 = *(undefined4 *)(param_4 + 4);
        local_78 = 0x600005a;
        uStack_74 = 0x306000;
        local_80 = param_2;
        FUN_10122cd8(&local_80,0x20);
      }
      if ((param_3 & param_5) != 0) {
        uStack_7c = 6;
        local_64 = *(undefined4 *)(param_4 + 0x28);
        local_68 = *(undefined4 *)(param_4 + 0x24);
        local_6c = *(undefined4 *)(param_4 + 0x20);
        local_70 = *(undefined4 *)(param_4 + 0x1c);
        local_78 = 0x600085a;
        uStack_74 = 0x306000;
        local_80 = param_2;
        FUN_10122cd8(&local_80,0x20);
      }
    }
  }
  else {
    uVar1 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    lVar4 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
    if ((1 - ((uint)lVar4 >> 5) & 0xff) != 0) {
      bVar2 = (byte)(1 << (ulonglong)((uint)lVar4 & 7));
      lVar5 = ((lVar4 << 0x20) >> 0x23) + ZEXT48(&local_50);
      local_50 = param_3;
      while( true ) {
        local_70 = (uint)lVar4;
        uStack_7c = 3;
        *(byte *)lVar5 = *(byte *)lVar5 & (bVar2 ^ 0xff);
        local_78 = 0x300085a;
        if ((*(byte *)((int)local_4c + ((int)local_70 >> 3)) >> (ulonglong)(local_70 & 7) & 1) == 0)
        {
          local_78 = 0x300005a;
        }
        uStack_74 = 0x106000;
        local_80 = param_2;
        local_4c[0] = param_5;
        FUN_10122cd8(&local_80,0x14);
        uVar1 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        lVar4 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
        if ((1 - ((uint)lVar4 >> 5) & 0xff) == 0) break;
        bVar2 = (byte)(1 << (ulonglong)((uint)lVar4 & 7));
        lVar5 = ((lVar4 << 0x20) >> 0x23) + ZEXT48(&local_50);
      }
    }
  }
  return;
}

