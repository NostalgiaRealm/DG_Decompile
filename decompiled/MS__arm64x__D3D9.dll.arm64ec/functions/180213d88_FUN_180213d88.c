/*
 * FUN_180213d88 at 180213d88
 * undefined FUN_180213d88(void)
 * Address ranges: 180213d88-180213f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213d88(undefined4 *param_1,undefined8 param_2,uint param_3,longlong param_4,uint param_5
                  )

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint local_80 [2];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  uint local_50;
  uint local_4c [3];
  
  iVar2 = FUN_180213038(*param_1);
  if ((iVar2 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar2 - 0x40U & 0x1f) & 1) != 0)) {
    uVar3 = (param_3 & 0xaaaaaaaa) >> 1 | (param_3 & 0x55555555) << 1;
    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_50 = param_3;
    lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar3 = (uint)lVar4;
    if ((1 - (uVar3 >> 5) & 0xff) != 0) {
      *(byte *)((longlong)local_4c + (longlong)((int)uVar3 >> 3) + -4) =
           *(byte *)((longlong)local_4c + (longlong)((int)uVar3 >> 3) + -4) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      while( true ) {
        local_80[0] = (uint)lVar4;
        local_4c[0] = param_5;
        uVar1 = 0x300085a;
        if ((*(byte *)((longlong)local_4c + (longlong)((int)local_80[0] >> 3)) >>
             (ulonglong)(local_80[0] & 7) & 1) == 0) {
          uVar1 = 0x300005a;
        }
        FUN_180215058(param_2,3,uVar1,0x106000,local_80,8);
        uVar3 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
        uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
        uVar3 = (uint)lVar4;
        if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_4c + (longlong)((int)uVar3 >> 3) + -4) =
             *(byte *)((longlong)local_4c + (longlong)((int)uVar3 >> 3) + -4) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
      }
    }
  }
  else if (iVar2 == 0x51) {
    if ((param_3 & (param_5 ^ 0xffffffff)) != 0) {
      local_70 = *(undefined4 *)(param_4 + 0xc);
      local_68 = *(undefined4 *)(param_4 + 0x10);
      local_80[0] = *(uint *)(param_4 + 4);
      local_78 = *(undefined4 *)(param_4 + 8);
      FUN_180215058(param_2,6,0x600005a,0x306000,local_80,0x20);
    }
    if ((param_3 & param_5) != 0) {
      local_70 = *(undefined4 *)(param_4 + 0x24);
      local_68 = *(undefined4 *)(param_4 + 0x28);
      local_80[0] = *(uint *)(param_4 + 0x1c);
      local_78 = *(undefined4 *)(param_4 + 0x20);
      FUN_180215058(param_2,6,0x600085a,0x306000,local_80,0x20);
    }
  }
  return;
}

