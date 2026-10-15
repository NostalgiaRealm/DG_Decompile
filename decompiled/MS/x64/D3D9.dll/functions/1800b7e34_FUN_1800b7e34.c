/*
 * FUN_1800b7e34 at 1800b7e34
 * undefined8 __fastcall FUN_1800b7e34(longlong param_1, float param_2)
 * Address ranges: 1800b7e34-1800b7efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b7e34(longlong param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    FUN_1800b5f2c(param_1 + -0x6838,param_2);
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(float *)(lVar1 + 0x4fe8) = param_2;
    *(undefined1 *)(lVar1 + 0xacfd) = 1;
  }
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

