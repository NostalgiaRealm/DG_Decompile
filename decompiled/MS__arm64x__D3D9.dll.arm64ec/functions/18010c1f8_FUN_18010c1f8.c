/*
 * FUN_18010c1f8 at 18010c1f8
 * undefined FUN_18010c1f8(void)
 * Address ranges: 18010c1f8-18010c34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010c1f8(longlong param_1,uint param_2,byte param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  uint local_50 [4];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar4 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  local_50[0] = param_2;
  lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar5;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_50 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_50 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      lVar5 = *(longlong *)(param_1 + 0x66c8 + lVar5 * 8);
      if ((*(longlong *)(lVar5 + 0x60) != 0) && ((*(uint *)(lVar5 + 0x50) >> 9 & 1) != 0)) {
        uVar3 = (*(code *)puVar2)();
        (*extraout_x11)(uVar3,0,1,lVar5 + 0x18);
      }
      uVar4 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar5;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_50 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_50 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  if ((param_3 & 1) != 0) {
    lVar5 = *(longlong *)(&DAT_000066c0 + param_1);
    if ((*(longlong *)(lVar5 + 0x60) != 0) && ((*(uint *)(lVar5 + 0x50) >> 9 & 1) != 0)) {
      pcVar1 = &DAT_00000020;
      if (*(longlong *)(lVar5 + 0x40) != 0) {
        pcVar1 = (char *)(*(longlong *)(lVar5 + 0x40) + -0x6818);
      }
      if (*pcVar1 != '\0') {
        uVar3 = (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)(uVar3,0,1,lVar5 + 0x18);
      }
    }
  }
  return;
}

