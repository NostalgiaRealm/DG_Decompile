/*
 * FUN_18010c350 at 18010c350
 * undefined FUN_18010c350(void)
 * Address ranges: 18010c350-18010c48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010c350(longlong param_1,uint param_2,byte param_3)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  uint local_50 [4];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar3 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_50[0] = param_2;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) =
         *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      lVar4 = *(longlong *)(param_1 + 0x66c8 + lVar4 * 8);
      if ((*(longlong *)(lVar4 + 0x60) != 0) && ((*(uint *)(lVar4 + 0x50) >> 9 & 1) != 0)) {
        (*(code *)puVar2)();
        (*extraout_x11)();
      }
      uVar3 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  if ((param_3 & 1) != 0) {
    lVar4 = *(longlong *)(&DAT_000066c0 + param_1);
    if ((*(longlong *)(lVar4 + 0x60) != 0) && ((*(uint *)(lVar4 + 0x50) >> 9 & 1) != 0)) {
      pcVar1 = &DAT_00000020;
      if (*(longlong *)(lVar4 + 0x40) != 0) {
        pcVar1 = (char *)(*(longlong *)(lVar4 + 0x40) + -0x6818);
      }
      if (*pcVar1 != '\0') {
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)();
      }
    }
  }
  return;
}

