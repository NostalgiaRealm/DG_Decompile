/*
 * FUN_18010b470 at 18010b470
 * undefined FUN_18010b470(void)
 * Address ranges: 18010b470-18010b663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b470(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint local_50;
  uint local_4c;
  longlong local_48;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar4 = *(longlong *)(param_2 + 0x30);
  local_48 = param_1 + 0x4000;
  if (lVar4 != 0) {
    uVar5 = *(uint *)(lVar4 + 0x38);
    *(undefined1 *)(lVar4 + 0x3e) = 1;
    uVar3 = uVar5 & 0xffff;
    if (uVar3 != 0) {
      uVar2 = (uVar5 & 0xaaaa) >> 1 | (uVar5 & 0x5555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      local_50 = uVar3;
      uVar2 = (uint)LZCOUNT((uVar2 >> 8 | (uVar2 & 0xff00ff) << 8) << 0x10);
      if ((1 - (uVar2 >> 5) & 0xff) != 0) {
        local_4c = uVar5;
        *(byte *)((longlong)&local_50 + (longlong)((int)uVar2 >> 3)) =
             *(byte *)((longlong)&local_50 + (longlong)((int)uVar2 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
        while( true ) {
          if ((*(int *)(lVar4 + 0x20) - 3U & 0xfffffffd) == 0) {
            auVar6 = (*(code *)puVar1)();
            (*extraout_x11)(auVar6._0_8_,auVar6._8_8_,0,*(undefined8 *)(lVar4 + 0x58),0,0,0,0);
          }
          uVar5 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
          uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          uVar2 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
          uVar5 = local_4c;
          if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)&local_50 + (longlong)((int)uVar2 >> 3)) =
               *(byte *)((longlong)&local_50 + (longlong)((int)uVar2 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
        }
      }
      *(uint *)(param_1 + 0xd18) = *(uint *)(param_1 + 0xd18) | uVar3;
    }
    uVar5 = uVar5 >> 0x10;
    if (uVar5 != 0) {
      uVar3 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      local_50 = uVar5;
      uVar3 = (uint)LZCOUNT((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) << 0x10);
      if ((1 - (uVar3 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)&local_50 + (longlong)((int)uVar3 >> 3)) =
             *(byte *)((longlong)&local_50 + (longlong)((int)uVar3 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        while( true ) {
          if ((*(int *)(lVar4 + 0x20) - 3U & 0xfffffffd) == 0) {
            auVar6 = (*(code *)puVar1)();
            (*extraout_x11_00)(auVar6._0_8_,auVar6._8_8_,0,*(undefined8 *)(lVar4 + 0x58),0);
          }
          uVar3 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
          uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          uVar3 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
          if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)&local_50 + (longlong)((int)uVar3 >> 3)) =
               *(byte *)((longlong)&local_50 + (longlong)((int)uVar3 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        }
      }
      *(uint *)(local_48 + 0x27fc) = *(uint *)(local_48 + 0x27fc) | uVar5;
    }
  }
  return;
}

