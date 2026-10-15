/*
 * FUN_1800b3fbc at 1800b3fbc
 * ulonglong __fastcall FUN_1800b3fbc(longlong param_1, uint * param_2)
 * Address ranges: 1800b3fbc-1800b40a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800b3fbc(longlong param_1,uint *param_2)

{
  bool bVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar1 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar1 = true;
    BVar2 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar2 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    *(uint *)(param_1 + -0x67e0) = *param_2;
    *(uint *)(param_1 + -0x67dc) = param_2[1];
    *(uint *)(param_1 + -0x67d8) = param_2[2];
    *(uint *)(param_1 + -0x67d4) = param_2[3];
    *(uint *)(param_1 + -0x67d0) = param_2[4];
    *(uint *)(param_1 + -0x67cc) = param_2[5];
    *(undefined1 *)(param_1 + 0x5cd3) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180008778(param_1 + -0x6838,param_2);
    uVar3 = uVar3 & 0xffffffff;
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar3;
}

