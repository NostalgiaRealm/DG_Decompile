/*
 * FUN_1800b49b4 at 1800b49b4
 * undefined4 __fastcall FUN_1800b49b4(longlong param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1800b49b4-1800b4a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b49b4(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (((param_2 < 8) && (uVar4 = uVar3, param_3 != 0)) && (param_3 < 0x21)) {
    if (*(char *)(*(longlong *)(param_1 + -0x6828) + (longlong)(int)param_3 * 0xc) == '\0') {
      uVar4 = 0x8876086c;
    }
    else {
      if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        BVar2 = TryEnterCriticalSection(DAT_1801123a8);
        if (BVar2 == 0) {
          FUN_1800044dc(0);
        }
      }
      FUN_18001b490(param_1 + -0x6838,param_2,param_3,param_4);
      if (bVar1) {
        LeaveCriticalSection(DAT_1801123a8);
      }
      else {
        *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
      }
    }
  }
  return uVar4;
}

