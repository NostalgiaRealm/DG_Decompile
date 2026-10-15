/*
 * FUN_180168510 at 180168510
 * undefined FUN_180168510(void)
 * Address ranges: 180168510-1801685bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180168510(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  code *extraout_x11;
  
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,0);
  iVar2 = (int)param_2 >> 3;
  *(uint *)(param_1 + (ulonglong)param_2 * 0x70 + 0x7014) = param_3 & 0xff;
  *(undefined1 *)(param_1 + 0xf691) = 1;
  lVar1 = param_1 + (ulonglong)*(byte *)(param_1 + (ulonglong)param_2 + 0xfd8) * 4 + 0xfc8;
  if ((param_3 & 1) == 0) {
    bVar4 = *(byte *)(lVar1 + iVar2) & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  else {
    bVar4 = *(byte *)(lVar1 + iVar2) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(byte *)(lVar1 + iVar2) = bVar4;
  *(undefined1 *)(param_1 + 0xf6c5) = 1;
  return;
}

