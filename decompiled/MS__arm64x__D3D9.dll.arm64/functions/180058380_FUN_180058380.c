/*
 * FUN_180058380 at 180058380
 * undefined FUN_180058380(void)
 * Address ranges: 180058380-18005841b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058380(longlong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  iVar1 = (int)param_2 >> 3;
  *(uint *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x7014) = param_3 & 0xff;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  lVar2 = (ulonglong)*(byte *)((longlong)param_1 + (ulonglong)param_2 + 0xfd8) * 4 + 0xfc8;
  if ((param_3 & 1) == 0) {
    bVar3 = *(byte *)((longlong)param_1 + iVar1 + lVar2) &
            ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  else {
    bVar3 = *(byte *)((longlong)param_1 + iVar1 + lVar2) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(byte *)((longlong)param_1 + iVar1 + lVar2) = bVar3;
  *(undefined1 *)((longlong)param_1 + 0xf6c5) = 1;
  return;
}

