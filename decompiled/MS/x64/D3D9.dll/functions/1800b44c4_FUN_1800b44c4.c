/*
 * FUN_1800b44c4 at 1800b44c4
 * undefined8 __fastcall FUN_1800b44c4(longlong param_1)
 * Address ranges: 1800b44c4-1800b45c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b44c4(longlong param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
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
  uVar4 = 0x8876086c;
  if (*(char *)(param_1 + -0x642c) == '\0') {
    puVar3 = FUN_18001bdc0(param_1 + -0x6838);
    *(int *)(param_1 + -0x6430) = (int)puVar3;
    if ((int)puVar3 == -1) {
      uVar4 = 0x8007000e;
    }
    else {
      *(undefined1 *)(param_1 + -0x642c) = 1;
      FUN_1800fbea0((undefined1 *)(param_1 + -0x658),0,0x400);
      FUN_1800fbea0((undefined1 *)(param_1 + -600),0,0xe0);
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
  }
  if (bVar1) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar4;
}

