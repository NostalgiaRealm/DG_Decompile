/*
 * FUN_1800b43b8 at 1800b43b8
 * undefined4 __fastcall FUN_1800b43b8(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 1800b43b8-1800b44c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b43b8(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte *pbVar2;
  bool bVar3;
  BOOL BVar4;
  undefined4 uVar5;
  uint local_res10 [6];
  
  uVar5 = 0x8876086c;
  if (((param_2 != 0) && (param_2 < 0xd2)) &&
     (*(char *)(*(longlong *)(param_1 + -0x6830) + (longlong)(int)param_2 * 8) != '\0')) {
    if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      BVar4 = TryEnterCriticalSection(DAT_1801123a8);
      if (BVar4 == 0) {
        FUN_1800044dc(0);
      }
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      FUN_1800fa780(local_res10);
      FUN_1800b06c0(param_1 + -0x6838,(ulonglong)param_2,(ulonglong)param_3);
      FUN_1800fa7bc();
    }
    else {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(uint *)(lVar1 + 0x10 + (longlong)(int)param_2 * 4) = param_3;
      pbVar2 = (byte *)(lVar1 + 0xac68 + (ulonglong)(param_2 >> 6) * 8 +
                       ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
      *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
    }
    uVar5 = 0;
    if (bVar3) {
      LeaveCriticalSection(DAT_1801123a8);
      uVar5 = 0;
    }
    else {
      *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
    }
  }
  return uVar5;
}

